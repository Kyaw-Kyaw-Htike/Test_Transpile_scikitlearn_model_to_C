# Copyright (C) 2019 Kyaw Kyaw Htike @ Ali Abdul Ghafur. All rights reserved.
import sklearn.datasets
import sklearn.neural_network
import sklearn.ensemble
import sklearn.tree
import numpy as np
import sklearn_porter
import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split
import cv2

iris = sklearn.datasets.load_iris()
X = iris.data
y = iris.target

def eval_classifier_train_data(classifier_obj, X, y):
    num_correct = 0
    for i, x_test in enumerate(X):
        y_pred = classifier_obj.predict(x_test.reshape(1, -1))
        y_gt = y[i]
        print('y_gt = {}, y_pred = {}'.format(y_gt, y_pred))
        if y_gt == y_pred:
            num_correct += 1
    print('Accuracy =', num_correct * 100 / len(X))

def port_classifier(classifier_obj, fpath, language='java', embed_data=True, method='predict'):
    porter = sklearn_porter.Porter(classifier_obj, language=language, method=method)
    output_porter = porter.export(embed_data=embed_data)
    with open(fpath, 'w') as fid:
        fid.write(output_porter)

def predict_test_case(classifier_obj, i, X, y, predict_prob=False):
    y_pred = classifier_obj.predict(X[i].reshape(1, -1))
    y_gt = y[i]
    print('Input feature vector:')
    for feature_val in X[i]:
        print(feature_val, end=', ')
    print()
    print('C code:')
    for j, feature_val in enumerate(X[i]):
        print('features[{}] = {};'.format(j, feature_val))
    print('y_gt = {}, y_pred = {}'.format(y_gt, y_pred))
    if predict_prob:
        probs_pred = classifier_obj.predict_proba(X[i].reshape(1, -1))[0]
        for i in range(len(probs_pred)):
            print('For class {}, prob = {}'.format(i, probs_pred[i]))

def predict_test_case_rfCv(classifier_obj, i, X, y):
    y_pred = classifier_obj.predict(X[i].reshape(1, -1))[0]
    y_gt = y[i]
    print('Input feature vector:')
    for feature_val in X[i]:
        print(feature_val, end=', ')
    print()
    print('C code:')
    for j, feature_val in enumerate(X[i]):
        print('{}f'.format(feature_val), end=', ')
    print()
    print('y_gt = {}, y_pred = {}'.format(y_gt, y_pred))


#########################################################
########### Using MLP classifier ######################
#########################################################
X_train, X_test, y_train, y_test = sklearn.model_selection.train_test_split(X, y, test_size=0.3)
params_mlp = {'hidden_layer_sizes': (40,4,2),
              'activation': 'logistic',
              'solver': 'lbfgs',
              'max_iter': 1000,
              'early_stopping':True,
            'validation_fraction':0.3
              }
mlpobj = sklearn.neural_network.MLPClassifier(**params_mlp).fit(X_train,y_train)
eval_classifier_train_data(mlpobj, X_test, y_test)
port_classifier(classifier_obj=mlpobj, fpath='mlp_model.java', language='java', embed_data=True)

predict_test_case(mlpobj, 4, X_test, y_test, predict_prob=True)





W_layers = mlpobj.coefs_
B_layers = mlpobj.intercepts_
W_hidden = W_layers[0]
w = W_layers[1]
B = B_layers[0]
b = B_layers[1]

x = X[0].reshape(1,-1)
x_p = np.tanh(np.matmul(x, W_hidden) + B)
x_p =  softmax(np.matmul(x_p, w) + b)
print(x_p)
# print('probs: {}, {}, {}'.format(x_p[0][0],x_p[0][1],x_p[0][2]))

mlpobj.predict_proba(x)

#########################################################
########### Using Adaboost classifier ######################
#########################################################
params_dtree = {'max_depth': 3}
params_adaboost = {'base_estimator': sklearn.tree.DecisionTreeClassifier(**params_dtree),
                    'n_estimators': 1000,
                   'algorithm': 'SAMME.R'
              }
adaboostobj = sklearn.ensemble.AdaBoostClassifier(**params_adaboost).fit(X,y)
eval_classifier_train_data(adaboostobj, X, y)
port_classifier(classifier_obj=adaboostobj, fpath='adaboost_model.c', language='c', embed_data=True, method='predict')

predict_test_case(adaboostobj, 142, X, y)


#########################################################
########### Using Random Forest classifier ##############
#########################################################
params_rf = {
                    'n_estimators': 100,
                   'verbose': 1,
                    'max_features': 'auto'
              }
rfobj = sklearn.ensemble.RandomForestClassifier(**params_rf).fit(X,y)
eval_classifier_train_data(rfobj, X, y)
port_classifier(classifier_obj=rfobj, fpath='rf_model.c', language='c', embed_data=True, method='predict')

predict_test_case(rfobj, 17, X, y)

#########################################################
########### Using Random Forest opencv classifier ##############
#########################################################

ntrees = 100
classifier = cv2.ml_RTrees.create()
classifier.setActiveVarCount(0)
classifier.setMaxDepth(100000)
classifier.setMinSampleCount(1)
classifier.setCalculateVarImportance(False)
# classifier.setTermCriteria((3, ntrees, 0.1)) # the default value, but will not grow big trees since it is also using EPS
classifier.setTermCriteria((1, ntrees, 0.1))
trainData = cv2.ml_TrainData.create(X_train.astype(np.float32), 0, y_train)
classifier.train(trainData)
classifier.save('rf-trained.xml')

predict_test_case_rfCv(classifier, 2, X_test.astype(np.float32), y_test)
