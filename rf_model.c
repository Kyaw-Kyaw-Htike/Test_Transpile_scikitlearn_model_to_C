// Copyright (C) 2019 Kyaw Kyaw Htike @ Ali Abdul Ghafur. All rights reserved.
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int predict_0(float features[]) {
    int classes[3];
    
    if (features[3] <= 0.75) {
        classes[0] = 51; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[3] <= 1.75) {
            if (features[0] <= 7.050000190734863) {
                if (features[2] <= 5.050000190734863) {
                    classes[0] = 0; 
                    classes[1] = 46; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 2; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 1; 
            }
        } else {
            classes[0] = 0; 
            classes[1] = 0; 
            classes[2] = 50; 
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_1(float features[]) {
    int classes[3];
    
    if (features[3] <= 0.699999988079071) {
        classes[0] = 55; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[3] <= 1.6500000953674316) {
            if (features[2] <= 4.949999809265137) {
                classes[0] = 0; 
                classes[1] = 48; 
                classes[2] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 3; 
            }
        } else {
            if (features[2] <= 4.850000381469727) {
                if (features[3] <= 1.75) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 2; 
                } else {
                    if (features[1] <= 3.0999999046325684) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 2; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 39; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_2(float features[]) {
    int classes[3];
    
    if (features[0] <= 5.449999809265137) {
        if (features[3] <= 0.800000011920929) {
            classes[0] = 42; 
            classes[1] = 0; 
            classes[2] = 0; 
        } else {
            if (features[1] <= 2.450000047683716) {
                classes[0] = 0; 
                classes[1] = 4; 
                classes[2] = 0; 
            } else {
                if (features[3] <= 1.600000023841858) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 1; 
                }
            }
        }
    } else {
        if (features[3] <= 1.7000000476837158) {
            if (features[1] <= 3.6500000953674316) {
                if (features[0] <= 7.050000190734863) {
                    if (features[1] <= 2.25) {
                        if (features[0] <= 6.099999904632568) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 1; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                            classes[2] = 0; 
                        }
                    } else {
                        if (features[1] <= 2.8499999046325684) {
                            if (features[0] <= 6.050000190734863) {
                                classes[0] = 0; 
                                classes[1] = 11; 
                                classes[2] = 0; 
                            } else {
                                if (features[1] <= 2.549999952316284) {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[2] <= 4.899999618530273) {
                                        classes[0] = 0; 
                                        classes[1] = 4; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 2; 
                                    }
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 26; 
                            classes[2] = 0; 
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 1; 
                }
            } else {
                classes[0] = 1; 
                classes[1] = 0; 
                classes[2] = 0; 
            }
        } else {
            if (features[2] <= 4.850000381469727) {
                if (features[1] <= 3.0) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 1; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                    classes[2] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 50; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_3(float features[]) {
    int classes[3];
    
    if (features[2] <= 2.450000047683716) {
        classes[0] = 48; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[3] <= 1.5499999523162842) {
            if (features[2] <= 4.949999809265137) {
                classes[0] = 0; 
                classes[1] = 37; 
                classes[2] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 5; 
            }
        } else {
            if (features[3] <= 1.75) {
                if (features[0] <= 5.600000381469727) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 2; 
                } else {
                    if (features[3] <= 1.6500000953674316) {
                        if (features[0] <= 6.75) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 2; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                        classes[2] = 0; 
                    }
                }
            } else {
                if (features[0] <= 5.949999809265137) {
                    if (features[1] <= 3.0999999046325684) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 7; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                        classes[2] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 44; 
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_4(float features[]) {
    int classes[3];
    
    if (features[2] <= 2.3499999046325684) {
        classes[0] = 56; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[3] <= 1.6500000953674316) {
            if (features[0] <= 6.050000190734863) {
                classes[0] = 0; 
                classes[1] = 36; 
                classes[2] = 0; 
            } else {
                if (features[2] <= 5.149999618530273) {
                    classes[0] = 0; 
                    classes[1] = 14; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 2; 
                }
            }
        } else {
            if (features[0] <= 5.949999809265137) {
                if (features[1] <= 3.0) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 6; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 2; 
                    classes[2] = 0; 
                }
            } else {
                if (features[0] <= 6.599999904632568) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 17; 
                } else {
                    if (features[2] <= 5.050000190734863) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 16; 
                    }
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_5(float features[]) {
    int classes[3];
    
    if (features[2] <= 2.5999999046325684) {
        classes[0] = 55; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[3] <= 1.75) {
            if (features[0] <= 7.099999904632568) {
                if (features[2] <= 4.949999809265137) {
                    classes[0] = 0; 
                    classes[1] = 51; 
                    classes[2] = 0; 
                } else {
                    if (features[3] <= 1.5499999523162842) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 3; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 3; 
                        classes[2] = 0; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 2; 
            }
        } else {
            classes[0] = 0; 
            classes[1] = 0; 
            classes[2] = 36; 
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_6(float features[]) {
    int classes[3];
    
    if (features[3] <= 0.699999988079071) {
        classes[0] = 55; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[2] <= 4.949999809265137) {
            if (features[2] <= 4.449999809265137) {
                classes[0] = 0; 
                classes[1] = 23; 
                classes[2] = 0; 
            } else {
                if (features[1] <= 2.6500000953674316) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 2; 
                } else {
                    if (features[1] <= 2.8499999046325684) {
                        if (features[3] <= 1.5999999046325684) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 1; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 15; 
                        classes[2] = 0; 
                    }
                }
            }
        } else {
            if (features[0] <= 6.75) {
                if (features[2] <= 5.050000190734863) {
                    if (features[1] <= 2.75) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 3; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 23; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 24; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_7(float features[]) {
    int classes[3];
    
    if (features[2] <= 2.3499999046325684) {
        classes[0] = 47; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[0] <= 6.149999618530273) {
            if (features[3] <= 1.7000000476837158) {
                if (features[1] <= 2.25) {
                    if (features[2] <= 4.5) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    }
                } else {
                    if (features[2] <= 5.149999618530273) {
                        classes[0] = 0; 
                        classes[1] = 35; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 6; 
            }
        } else {
            if (features[3] <= 1.75) {
                if (features[2] <= 5.050000190734863) {
                    classes[0] = 0; 
                    classes[1] = 15; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 3; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 39; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_8(float features[]) {
    int classes[3];
    
    if (features[3] <= 0.800000011920929) {
        classes[0] = 51; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[2] <= 4.949999809265137) {
            if (features[3] <= 1.6500000953674316) {
                classes[0] = 0; 
                classes[1] = 53; 
                classes[2] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 3; 
            }
        } else {
            if (features[3] <= 1.75) {
                if (features[0] <= 6.5) {
                    if (features[1] <= 2.6500000953674316) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 4; 
                    } else {
                        if (features[0] <= 6.150000095367432) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 1; 
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                    classes[2] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 36; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_9(float features[]) {
    int classes[3];
    
    if (features[0] <= 5.449999809265137) {
        if (features[3] <= 0.75) {
            classes[0] = 52; 
            classes[1] = 0; 
            classes[2] = 0; 
        } else {
            if (features[0] <= 4.949999809265137) {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 1; 
            } else {
                classes[0] = 0; 
                classes[1] = 2; 
                classes[2] = 0; 
            }
        }
    } else {
        if (features[2] <= 5.050000190734863) {
            if (features[1] <= 3.3499999046325684) {
                if (features[0] <= 5.949999809265137) {
                    classes[0] = 0; 
                    classes[1] = 26; 
                    classes[2] = 0; 
                } else {
                    if (features[3] <= 1.75) {
                        if (features[1] <= 2.25) {
                            if (features[2] <= 4.75) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 1; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 19; 
                            classes[2] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 3; 
                    }
                }
            } else {
                classes[0] = 9; 
                classes[1] = 0; 
                classes[2] = 0; 
            }
        } else {
            if (features[0] <= 6.150000095367432) {
                if (features[3] <= 1.7000000476837158) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 3; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 31; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_10(float features[]) {
    int classes[3];
    
    if (features[3] <= 0.75) {
        classes[0] = 53; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[0] <= 6.0) {
            if (features[1] <= 2.8499999046325684) {
                if (features[0] <= 5.550000190734863) {
                    if (features[2] <= 4.449999809265137) {
                        classes[0] = 0; 
                        classes[1] = 14; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    }
                } else {
                    if (features[3] <= 1.5999999046325684) {
                        classes[0] = 0; 
                        classes[1] = 11; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 4; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 8; 
                classes[2] = 0; 
            }
        } else {
            if (features[0] <= 7.099999904632568) {
                if (features[2] <= 4.75) {
                    classes[0] = 0; 
                    classes[1] = 12; 
                    classes[2] = 0; 
                } else {
                    if (features[0] <= 6.850000381469727) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 27; 
                    } else {
                        if (features[3] <= 1.7999999523162842) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 2; 
                        }
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 15; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_11(float features[]) {
    int classes[3];
    
    if (features[3] <= 0.800000011920929) {
        classes[0] = 40; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[3] <= 1.75) {
            if (features[0] <= 7.099999904632568) {
                if (features[0] <= 4.949999809265137) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 1; 
                } else {
                    if (features[2] <= 5.300000190734863) {
                        classes[0] = 0; 
                        classes[1] = 56; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 2; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 2; 
            }
        } else {
            if (features[0] <= 6.100000381469727) {
                if (features[2] <= 4.850000381469727) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 9; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 39; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_12(float features[]) {
    int classes[3];
    
    if (features[2] <= 2.450000047683716) {
        classes[0] = 53; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[2] <= 4.850000381469727) {
            if (features[2] <= 4.75) {
                if (features[3] <= 1.6500000953674316) {
                    classes[0] = 0; 
                    classes[1] = 46; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 1; 
                }
            } else {
                if (features[1] <= 3.0) {
                    if (features[0] <= 6.5) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 2; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 5; 
                    classes[2] = 0; 
                }
            }
        } else {
            if (features[3] <= 1.75) {
                if (features[2] <= 5.050000190734863) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                    classes[2] = 0; 
                } else {
                    if (features[3] <= 1.5499999523162842) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 39; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_13(float features[]) {
    int classes[3];
    
    if (features[3] <= 0.800000011920929) {
        classes[0] = 44; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[2] <= 5.050000190734863) {
            if (features[3] <= 1.6500000953674316) {
                if (features[3] <= 1.4500000476837158) {
                    classes[0] = 0; 
                    classes[1] = 36; 
                    classes[2] = 0; 
                } else {
                    if (features[1] <= 2.3499999046325684) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 10; 
                        classes[2] = 0; 
                    }
                }
            } else {
                if (features[1] <= 2.9000000953674316) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 5; 
                } else {
                    if (features[3] <= 1.75) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                        classes[2] = 0; 
                    } else {
                        if (features[0] <= 5.949999809265137) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 1; 
                        }
                    }
                }
            }
        } else {
            classes[0] = 0; 
            classes[1] = 0; 
            classes[2] = 49; 
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_14(float features[]) {
    int classes[3];
    
    if (features[1] <= 3.3499999046325684) {
        if (features[2] <= 4.75) {
            if (features[3] <= 0.6000000238418579) {
                classes[0] = 11; 
                classes[1] = 0; 
                classes[2] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 48; 
                classes[2] = 0; 
            }
        } else {
            if (features[3] <= 1.7000000476837158) {
                if (features[1] <= 2.3499999046325684) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 2; 
                } else {
                    if (features[0] <= 6.050000190734863) {
                        classes[0] = 0; 
                        classes[1] = 4; 
                        classes[2] = 0; 
                    } else {
                        if (features[1] <= 2.549999952316284) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                            classes[2] = 0; 
                        } else {
                            if (features[1] <= 2.6999998092651367) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 1; 
                            } else {
                                if (features[2] <= 4.949999809265137) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 1; 
                                }
                            }
                        }
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 38; 
            }
        }
    } else {
        if (features[2] <= 3.6500000953674316) {
            classes[0] = 40; 
            classes[1] = 0; 
            classes[2] = 0; 
        } else {
            classes[0] = 0; 
            classes[1] = 0; 
            classes[2] = 3; 
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_15(float features[]) {
    int classes[3];
    
    if (features[3] <= 0.800000011920929) {
        classes[0] = 56; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[3] <= 1.6500000953674316) {
            if (features[1] <= 2.25) {
                if (features[3] <= 1.25) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 1; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 42; 
                classes[2] = 0; 
            }
        } else {
            if (features[1] <= 3.1500000953674316) {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 35; 
            } else {
                if (features[2] <= 4.949999809265137) {
                    classes[0] = 0; 
                    classes[1] = 3; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 11; 
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_16(float features[]) {
    int classes[3];
    
    if (features[2] <= 2.5999999046325684) {
        classes[0] = 55; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[3] <= 1.6500000953674316) {
            if (features[2] <= 4.899999618530273) {
                classes[0] = 0; 
                classes[1] = 35; 
                classes[2] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 5; 
            }
        } else {
            if (features[2] <= 5.099999904632568) {
                if (features[3] <= 1.8499999046325684) {
                    if (features[1] <= 3.0999999046325684) {
                        if (features[2] <= 4.949999809265137) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 7; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                            classes[2] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 5; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 41; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_17(float features[]) {
    int classes[3];
    
    if (features[0] <= 5.449999809265137) {
        if (features[2] <= 2.450000047683716) {
            classes[0] = 40; 
            classes[1] = 0; 
            classes[2] = 0; 
        } else {
            if (features[2] <= 4.199999809265137) {
                classes[0] = 0; 
                classes[1] = 8; 
                classes[2] = 0; 
            } else {
                if (features[0] <= 5.150000095367432) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 2; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 2; 
                    classes[2] = 0; 
                }
            }
        }
    } else {
        if (features[3] <= 1.75) {
            if (features[1] <= 3.4000000953674316) {
                if (features[2] <= 5.449999809265137) {
                    if (features[2] <= 5.050000190734863) {
                        classes[0] = 0; 
                        classes[1] = 51; 
                        classes[2] = 0; 
                    } else {
                        if (features[1] <= 2.75) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 1; 
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 1; 
                }
            } else {
                classes[0] = 5; 
                classes[1] = 0; 
                classes[2] = 0; 
            }
        } else {
            if (features[2] <= 4.850000381469727) {
                if (features[1] <= 3.0999999046325684) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 1; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                    classes[2] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 36; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_18(float features[]) {
    int classes[3];
    
    if (features[2] <= 2.450000047683716) {
        classes[0] = 49; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[3] <= 1.75) {
            if (features[2] <= 5.349999904632568) {
                if (features[2] <= 5.050000190734863) {
                    classes[0] = 0; 
                    classes[1] = 48; 
                    classes[2] = 0; 
                } else {
                    if (features[3] <= 1.5499999523162842) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 3; 
                        classes[2] = 0; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 2; 
            }
        } else {
            if (features[2] <= 4.850000381469727) {
                if (features[0] <= 5.949999809265137) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 1; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 45; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_19(float features[]) {
    int classes[3];
    
    if (features[3] <= 0.800000011920929) {
        classes[0] = 54; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[3] <= 1.6500000953674316) {
            if (features[0] <= 7.099999904632568) {
                if (features[2] <= 4.949999809265137) {
                    classes[0] = 0; 
                    classes[1] = 38; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 5; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 2; 
            }
        } else {
            classes[0] = 0; 
            classes[1] = 0; 
            classes[2] = 51; 
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_20(float features[]) {
    int classes[3];
    
    if (features[2] <= 2.450000047683716) {
        classes[0] = 44; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[0] <= 5.75) {
            if (features[3] <= 1.600000023841858) {
                classes[0] = 0; 
                classes[1] = 31; 
                classes[2] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 2; 
            }
        } else {
            if (features[2] <= 4.850000381469727) {
                if (features[3] <= 1.7000000476837158) {
                    classes[0] = 0; 
                    classes[1] = 31; 
                    classes[2] = 0; 
                } else {
                    if (features[1] <= 3.0999999046325684) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    }
                }
            } else {
                if (features[2] <= 5.25) {
                    if (features[3] <= 1.75) {
                        if (features[0] <= 6.150000095367432) {
                            if (features[3] <= 1.5499999523162842) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 1; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                                classes[2] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 2; 
                            classes[2] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 13; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 23; 
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_21(float features[]) {
    int classes[3];
    
    if (features[2] <= 2.450000047683716) {
        classes[0] = 43; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[2] <= 4.850000381469727) {
            if (features[0] <= 4.949999809265137) {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 1; 
            } else {
                if (features[2] <= 4.75) {
                    classes[0] = 0; 
                    classes[1] = 45; 
                    classes[2] = 0; 
                } else {
                    if (features[3] <= 1.5999999046325684) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                        classes[2] = 0; 
                    } else {
                        if (features[1] <= 3.0999999046325684) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 2; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                            classes[2] = 0; 
                        }
                    }
                }
            }
        } else {
            if (features[3] <= 1.75) {
                if (features[3] <= 1.4500000476837158) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 2; 
                } else {
                    if (features[3] <= 1.6500000953674316) {
                        if (features[1] <= 2.75) {
                            if (features[2] <= 4.949999809265137) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                                classes[2] = 0; 
                            } else {
                                if (features[3] <= 1.5499999523162842) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 1; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                    classes[2] = 0; 
                                }
                            }
                        } else {
                            if (features[1] <= 3.049999952316284) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 3; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                                classes[2] = 0; 
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                        classes[2] = 0; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 44; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_22(float features[]) {
    int classes[3];
    
    if (features[3] <= 0.75) {
        classes[0] = 52; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[2] <= 4.949999809265137) {
            if (features[2] <= 4.75) {
                if (features[0] <= 4.949999809265137) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 1; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 44; 
                    classes[2] = 0; 
                }
            } else {
                if (features[0] <= 6.25) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 4; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 5; 
                    classes[2] = 0; 
                }
            }
        } else {
            classes[0] = 0; 
            classes[1] = 0; 
            classes[2] = 44; 
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_23(float features[]) {
    int classes[3];
    
    if (features[3] <= 0.75) {
        classes[0] = 55; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[3] <= 1.6500000953674316) {
            if (features[1] <= 2.25) {
                if (features[2] <= 4.75) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 1; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 52; 
                classes[2] = 0; 
            }
        } else {
            classes[0] = 0; 
            classes[1] = 0; 
            classes[2] = 40; 
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_24(float features[]) {
    int classes[3];
    
    if (features[2] <= 2.450000047683716) {
        classes[0] = 49; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[3] <= 1.75) {
            if (features[2] <= 5.349999904632568) {
                if (features[3] <= 1.6500000953674316) {
                    classes[0] = 0; 
                    classes[1] = 52; 
                    classes[2] = 0; 
                } else {
                    if (features[1] <= 2.75) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 2; 
            }
        } else {
            if (features[0] <= 6.0) {
                if (features[1] <= 3.0999999046325684) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 6; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                    classes[2] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 38; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_25(float features[]) {
    int classes[3];
    
    if (features[2] <= 2.450000047683716) {
        classes[0] = 53; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[3] <= 1.75) {
            if (features[2] <= 5.050000190734863) {
                if (features[0] <= 5.0) {
                    if (features[1] <= 2.450000047683716) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 46; 
                    classes[2] = 0; 
                }
            } else {
                if (features[0] <= 6.150000095367432) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 1; 
                }
            }
        } else {
            if (features[2] <= 4.850000381469727) {
                if (features[0] <= 5.949999809265137) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 3; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 43; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_26(float features[]) {
    int classes[3];
    
    if (features[2] <= 2.3499999046325684) {
        classes[0] = 59; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[3] <= 1.6500000953674316) {
            if (features[3] <= 1.5499999523162842) {
                if (features[3] <= 1.3499999046325684) {
                    classes[0] = 0; 
                    classes[1] = 23; 
                    classes[2] = 0; 
                } else {
                    if (features[2] <= 5.0) {
                        classes[0] = 0; 
                        classes[1] = 19; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 2; 
                    }
                }
            } else {
                if (features[0] <= 6.75) {
                    classes[0] = 0; 
                    classes[1] = 5; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 2; 
                }
            }
        } else {
            if (features[3] <= 1.8499999046325684) {
                if (features[2] <= 5.300000190734863) {
                    if (features[2] <= 4.949999809265137) {
                        if (features[0] <= 5.400000095367432) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 2; 
                        } else {
                            if (features[2] <= 4.850000381469727) {
                                if (features[1] <= 3.0) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 1; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                    classes[2] = 0; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 1; 
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 4; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 30; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_27(float features[]) {
    int classes[3];
    
    if (features[2] <= 2.700000047683716) {
        classes[0] = 49; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[2] <= 4.75) {
            classes[0] = 0; 
            classes[1] = 46; 
            classes[2] = 0; 
        } else {
            if (features[2] <= 5.050000190734863) {
                if (features[0] <= 6.5) {
                    if (features[1] <= 3.0999999046325684) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 14; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                        classes[2] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 5; 
                    classes[2] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 34; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_28(float features[]) {
    int classes[3];
    
    if (features[3] <= 0.699999988079071) {
        classes[0] = 52; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[3] <= 1.75) {
            if (features[2] <= 4.949999809265137) {
                if (features[3] <= 1.6500000953674316) {
                    classes[0] = 0; 
                    classes[1] = 41; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 1; 
                }
            } else {
                if (features[3] <= 1.6500000953674316) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 6; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                    classes[2] = 0; 
                }
            }
        } else {
            if (features[2] <= 4.850000381469727) {
                if (features[0] <= 5.949999809265137) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 3; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 45; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_29(float features[]) {
    int classes[3];
    
    if (features[3] <= 0.75) {
        classes[0] = 46; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[2] <= 4.850000381469727) {
            if (features[0] <= 4.949999809265137) {
                if (features[3] <= 1.350000023841858) {
                    classes[0] = 0; 
                    classes[1] = 4; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 1; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 44; 
                classes[2] = 0; 
            }
        } else {
            if (features[0] <= 6.599999904632568) {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 28; 
            } else {
                if (features[0] <= 7.0) {
                    if (features[2] <= 5.25) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 8; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 16; 
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_30(float features[]) {
    int classes[3];
    
    if (features[3] <= 0.800000011920929) {
        classes[0] = 43; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[2] <= 4.75) {
            if (features[0] <= 4.949999809265137) {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 2; 
            } else {
                classes[0] = 0; 
                classes[1] = 54; 
                classes[2] = 0; 
            }
        } else {
            if (features[2] <= 4.949999809265137) {
                if (features[1] <= 3.049999952316284) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 7; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 3; 
                    classes[2] = 0; 
                }
            } else {
                if (features[0] <= 6.099999904632568) {
                    if (features[2] <= 5.050000190734863) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 5; 
                    } else {
                        if (features[0] <= 5.949999809265137) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 2; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 2; 
                            classes[2] = 0; 
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 32; 
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_31(float features[]) {
    int classes[3];
    
    if (features[2] <= 2.5999999046325684) {
        classes[0] = 45; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[2] <= 4.850000381469727) {
            if (features[2] <= 4.75) {
                classes[0] = 0; 
                classes[1] = 45; 
                classes[2] = 0; 
            } else {
                if (features[1] <= 3.0999999046325684) {
                    if (features[3] <= 1.5999999046325684) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 3; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 3; 
                    classes[2] = 0; 
                }
            }
        } else {
            if (features[3] <= 1.75) {
                if (features[2] <= 5.050000190734863) {
                    classes[0] = 0; 
                    classes[1] = 4; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 5; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 42; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_32(float features[]) {
    int classes[3];
    
    if (features[2] <= 2.700000047683716) {
        classes[0] = 56; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[3] <= 1.6500000953674316) {
            if (features[2] <= 4.900000095367432) {
                classes[0] = 0; 
                classes[1] = 38; 
                classes[2] = 0; 
            } else {
                if (features[1] <= 2.6500000953674316) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 3; 
                } else {
                    if (features[0] <= 6.150000095367432) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 2; 
                    }
                }
            }
        } else {
            classes[0] = 0; 
            classes[1] = 0; 
            classes[2] = 49; 
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_33(float features[]) {
    int classes[3];
    
    if (features[3] <= 0.75) {
        classes[0] = 50; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[0] <= 5.75) {
            if (features[2] <= 4.449999809265137) {
                classes[0] = 0; 
                classes[1] = 21; 
                classes[2] = 0; 
            } else {
                if (features[0] <= 5.25) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 3; 
                } else {
                    if (features[2] <= 4.699999809265137) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 2; 
                    }
                }
            }
        } else {
            if (features[3] <= 1.75) {
                if (features[2] <= 5.349999904632568) {
                    if (features[0] <= 6.050000190734863) {
                        if (features[3] <= 1.5499999523162842) {
                            if (features[2] <= 4.75) {
                                classes[0] = 0; 
                                classes[1] = 3; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 1; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 3; 
                            classes[2] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 22; 
                        classes[2] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 2; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 40; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_34(float features[]) {
    int classes[3];
    
    if (features[3] <= 0.75) {
        classes[0] = 42; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[2] <= 4.75) {
            if (features[3] <= 1.6500000953674316) {
                classes[0] = 0; 
                classes[1] = 56; 
                classes[2] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 1; 
            }
        } else {
            if (features[3] <= 1.75) {
                if (features[2] <= 5.349999904632568) {
                    classes[0] = 0; 
                    classes[1] = 3; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 4; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 44; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_35(float features[]) {
    int classes[3];
    
    if (features[2] <= 2.450000047683716) {
        classes[0] = 49; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[2] <= 4.75) {
            classes[0] = 0; 
            classes[1] = 42; 
            classes[2] = 0; 
        } else {
            if (features[3] <= 1.75) {
                if (features[1] <= 2.6500000953674316) {
                    if (features[0] <= 6.199999809265137) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 3; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                        classes[2] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 6; 
                    classes[2] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 48; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_36(float features[]) {
    int classes[3];
    
    if (features[0] <= 5.550000190734863) {
        if (features[3] <= 0.75) {
            classes[0] = 45; 
            classes[1] = 0; 
            classes[2] = 0; 
        } else {
            if (features[2] <= 4.449999809265137) {
                classes[0] = 0; 
                classes[1] = 9; 
                classes[2] = 0; 
            } else {
                if (features[1] <= 2.75) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 2; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                    classes[2] = 0; 
                }
            }
        }
    } else {
        if (features[2] <= 4.949999809265137) {
            if (features[3] <= 0.699999988079071) {
                classes[0] = 3; 
                classes[1] = 0; 
                classes[2] = 0; 
            } else {
                if (features[3] <= 1.649999976158142) {
                    classes[0] = 0; 
                    classes[1] = 29; 
                    classes[2] = 0; 
                } else {
                    if (features[2] <= 4.850000381469727) {
                        if (features[1] <= 3.0) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 1; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 3; 
                            classes[2] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 2; 
                    }
                }
            }
        } else {
            if (features[3] <= 1.7000000476837158) {
                if (features[1] <= 2.6500000953674316) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 3; 
                } else {
                    if (features[3] <= 1.5499999523162842) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 50; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_37(float features[]) {
    int classes[3];
    
    if (features[2] <= 2.450000047683716) {
        classes[0] = 48; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[2] <= 4.949999809265137) {
            if (features[3] <= 1.7000000476837158) {
                classes[0] = 0; 
                classes[1] = 57; 
                classes[2] = 0; 
            } else {
                if (features[2] <= 4.850000381469727) {
                    if (features[1] <= 3.0999999046325684) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                        classes[2] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 2; 
                }
            }
        } else {
            if (features[3] <= 1.75) {
                if (features[3] <= 1.6500000953674316) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 6; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 2; 
                    classes[2] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 32; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_38(float features[]) {
    int classes[3];
    
    if (features[3] <= 0.800000011920929) {
        classes[0] = 44; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[2] <= 4.75) {
            if (features[0] <= 5.0) {
                if (features[3] <= 1.350000023841858) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 2; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 46; 
                classes[2] = 0; 
            }
        } else {
            if (features[2] <= 5.050000190734863) {
                if (features[3] <= 1.75) {
                    classes[0] = 0; 
                    classes[1] = 5; 
                    classes[2] = 0; 
                } else {
                    if (features[1] <= 3.0999999046325684) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 10; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    }
                }
            } else {
                if (features[0] <= 6.050000190734863) {
                    if (features[3] <= 1.7000000476837158) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 5; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 35; 
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_39(float features[]) {
    int classes[3];
    
    if (features[0] <= 5.449999809265137) {
        if (features[3] <= 0.75) {
            classes[0] = 55; 
            classes[1] = 0; 
            classes[2] = 0; 
        } else {
            classes[0] = 0; 
            classes[1] = 5; 
            classes[2] = 0; 
        }
    } else {
        if (features[0] <= 6.149999618530273) {
            if (features[1] <= 3.450000047683716) {
                if (features[3] <= 1.7000000476837158) {
                    if (features[1] <= 2.6500000953674316) {
                        if (features[3] <= 1.3499999046325684) {
                            classes[0] = 0; 
                            classes[1] = 8; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 1; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 22; 
                        classes[2] = 0; 
                    }
                } else {
                    if (features[2] <= 4.850000381469727) {
                        if (features[0] <= 5.949999809265137) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 1; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 4; 
                    }
                }
            } else {
                classes[0] = 5; 
                classes[1] = 0; 
                classes[2] = 0; 
            }
        } else {
            if (features[3] <= 1.7000000476837158) {
                if (features[0] <= 6.949999809265137) {
                    classes[0] = 0; 
                    classes[1] = 9; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 1; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 37; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_40(float features[]) {
    int classes[3];
    
    if (features[3] <= 0.800000011920929) {
        classes[0] = 56; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[3] <= 1.75) {
            if (features[2] <= 5.349999904632568) {
                classes[0] = 0; 
                classes[1] = 52; 
                classes[2] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 1; 
            }
        } else {
            classes[0] = 0; 
            classes[1] = 0; 
            classes[2] = 41; 
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_41(float features[]) {
    int classes[3];
    
    if (features[2] <= 2.450000047683716) {
        classes[0] = 49; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[3] <= 1.75) {
            if (features[1] <= 2.3000001907348633) {
                if (features[2] <= 4.5) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 3; 
                }
            } else {
                if (features[0] <= 5.0) {
                    if (features[2] <= 3.9000000953674316) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 41; 
                    classes[2] = 0; 
                }
            }
        } else {
            classes[0] = 0; 
            classes[1] = 0; 
            classes[2] = 54; 
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_42(float features[]) {
    int classes[3];
    
    if (features[3] <= 0.800000011920929) {
        classes[0] = 55; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[2] <= 4.850000381469727) {
            classes[0] = 0; 
            classes[1] = 49; 
            classes[2] = 0; 
        } else {
            if (features[3] <= 1.5499999523162842) {
                if (features[1] <= 2.6500000953674316) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 2; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 2; 
                    classes[2] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 42; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_43(float features[]) {
    int classes[3];
    
    if (features[2] <= 2.450000047683716) {
        classes[0] = 49; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[0] <= 6.350000381469727) {
            if (features[3] <= 1.6500000953674316) {
                if (features[2] <= 4.949999809265137) {
                    classes[0] = 0; 
                    classes[1] = 41; 
                    classes[2] = 0; 
                } else {
                    if (features[0] <= 6.150000095367432) {
                        if (features[2] <= 5.050000190734863) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 1; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                            classes[2] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    }
                }
            } else {
                if (features[2] <= 4.850000381469727) {
                    if (features[0] <= 5.400000095367432) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 2; 
                    } else {
                        if (features[1] <= 3.0999999046325684) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 2; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                            classes[2] = 0; 
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 12; 
                }
            }
        } else {
            if (features[3] <= 1.649999976158142) {
                classes[0] = 0; 
                classes[1] = 6; 
                classes[2] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 34; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_44(float features[]) {
    int classes[3];
    
    if (features[2] <= 2.5999999046325684) {
        classes[0] = 50; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[2] <= 4.949999809265137) {
            if (features[2] <= 4.75) {
                if (features[1] <= 2.549999952316284) {
                    if (features[3] <= 1.600000023841858) {
                        classes[0] = 0; 
                        classes[1] = 9; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 2; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 27; 
                    classes[2] = 0; 
                }
            } else {
                if (features[3] <= 1.649999976158142) {
                    classes[0] = 0; 
                    classes[1] = 4; 
                    classes[2] = 0; 
                } else {
                    if (features[1] <= 3.0999999046325684) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 5; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                        classes[2] = 0; 
                    }
                }
            }
        } else {
            if (features[3] <= 1.75) {
                if (features[3] <= 1.5499999523162842) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 5; 
                } else {
                    if (features[0] <= 6.949999809265137) {
                        classes[0] = 0; 
                        classes[1] = 4; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 2; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 40; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_45(float features[]) {
    int classes[3];
    
    if (features[2] <= 2.5999999046325684) {
        classes[0] = 46; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[3] <= 1.7000000476837158) {
            if (features[2] <= 5.0) {
                classes[0] = 0; 
                classes[1] = 54; 
                classes[2] = 0; 
            } else {
                if (features[3] <= 1.5499999523162842) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 2; 
                } else {
                    if (features[0] <= 6.599999904632568) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    }
                }
            }
        } else {
            if (features[2] <= 4.850000381469727) {
                if (features[0] <= 6.050000190734863) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 1; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 44; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_46(float features[]) {
    int classes[3];
    
    if (features[3] <= 0.75) {
        classes[0] = 56; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[0] <= 6.649999618530273) {
            if (features[2] <= 4.949999809265137) {
                if (features[3] <= 1.6500000953674316) {
                    classes[0] = 0; 
                    classes[1] = 42; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 2; 
                }
            } else {
                if (features[1] <= 2.75) {
                    if (features[2] <= 5.050000190734863) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 6; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 12; 
                }
            }
        } else {
            if (features[2] <= 5.099999904632568) {
                classes[0] = 0; 
                classes[1] = 7; 
                classes[2] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 24; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_47(float features[]) {
    int classes[3];
    
    if (features[2] <= 2.450000047683716) {
        classes[0] = 48; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[3] <= 1.5499999523162842) {
            if (features[0] <= 6.050000190734863) {
                classes[0] = 0; 
                classes[1] = 41; 
                classes[2] = 0; 
            } else {
                if (features[0] <= 6.350000381469727) {
                    if (features[2] <= 5.0) {
                        classes[0] = 0; 
                        classes[1] = 5; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 2; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 11; 
                    classes[2] = 0; 
                }
            }
        } else {
            if (features[3] <= 1.75) {
                if (features[2] <= 5.449999809265137) {
                    if (features[1] <= 2.5999999046325684) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                        classes[2] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 2; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 38; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_48(float features[]) {
    int classes[3];
    
    if (features[0] <= 5.550000190734863) {
        if (features[2] <= 2.5999999046325684) {
            classes[0] = 47; 
            classes[1] = 0; 
            classes[2] = 0; 
        } else {
            if (features[1] <= 2.450000047683716) {
                classes[0] = 0; 
                classes[1] = 10; 
                classes[2] = 0; 
            } else {
                if (features[3] <= 1.600000023841858) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 1; 
                }
            }
        }
    } else {
        if (features[0] <= 6.25) {
            if (features[1] <= 3.700000047683716) {
                if (features[2] <= 4.75) {
                    classes[0] = 0; 
                    classes[1] = 29; 
                    classes[2] = 0; 
                } else {
                    if (features[2] <= 4.850000381469727) {
                        if (features[0] <= 5.949999809265137) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 1; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 6; 
                    }
                }
            } else {
                classes[0] = 6; 
                classes[1] = 0; 
                classes[2] = 0; 
            }
        } else {
            if (features[2] <= 5.050000190734863) {
                classes[0] = 0; 
                classes[1] = 13; 
                classes[2] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 34; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_49(float features[]) {
    int classes[3];
    
    if (features[2] <= 2.450000047683716) {
        classes[0] = 47; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[3] <= 1.75) {
            if (features[3] <= 1.5499999523162842) {
                if (features[2] <= 4.949999809265137) {
                    classes[0] = 0; 
                    classes[1] = 45; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 2; 
                }
            } else {
                if (features[1] <= 2.75) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 2; 
                } else {
                    if (features[3] <= 1.6500000953674316) {
                        if (features[0] <= 6.599999904632568) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 1; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                        classes[2] = 0; 
                    }
                }
            }
        } else {
            if (features[3] <= 1.8499999046325684) {
                if (features[0] <= 6.100000381469727) {
                    if (features[1] <= 3.0999999046325684) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 2; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 5; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 42; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_50(float features[]) {
    int classes[3];
    
    if (features[3] <= 0.800000011920929) {
        classes[0] = 43; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[2] <= 4.850000381469727) {
            if (features[3] <= 1.6500000953674316) {
                classes[0] = 0; 
                classes[1] = 53; 
                classes[2] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 1; 
            }
        } else {
            if (features[3] <= 1.75) {
                if (features[3] <= 1.5499999523162842) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 4; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 2; 
                    classes[2] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 47; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_51(float features[]) {
    int classes[3];
    
    if (features[3] <= 0.75) {
        classes[0] = 51; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[3] <= 1.75) {
            if (features[3] <= 1.3499999046325684) {
                classes[0] = 0; 
                classes[1] = 29; 
                classes[2] = 0; 
            } else {
                if (features[1] <= 2.6500000953674316) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 5; 
                } else {
                    if (features[2] <= 5.050000190734863) {
                        classes[0] = 0; 
                        classes[1] = 17; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 2; 
                    }
                }
            }
        } else {
            if (features[0] <= 6.0) {
                if (features[1] <= 3.0999999046325684) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 4; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                    classes[2] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 41; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_52(float features[]) {
    int classes[3];
    
    if (features[2] <= 2.450000047683716) {
        classes[0] = 48; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[2] <= 4.75) {
            classes[0] = 0; 
            classes[1] = 49; 
            classes[2] = 0; 
        } else {
            if (features[1] <= 2.950000047683716) {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 28; 
            } else {
                if (features[3] <= 1.75) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                    classes[2] = 0; 
                } else {
                    if (features[0] <= 6.0) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 23; 
                    }
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_53(float features[]) {
    int classes[3];
    
    if (features[2] <= 2.450000047683716) {
        classes[0] = 47; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[3] <= 1.75) {
            if (features[2] <= 5.349999904632568) {
                if (features[0] <= 4.949999809265137) {
                    if (features[3] <= 1.350000023841858) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    }
                } else {
                    if (features[1] <= 2.25) {
                        if (features[3] <= 1.25) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 1; 
                        }
                    } else {
                        if (features[3] <= 1.4500000476837158) {
                            classes[0] = 0; 
                            classes[1] = 37; 
                            classes[2] = 0; 
                        } else {
                            if (features[2] <= 5.050000190734863) {
                                classes[0] = 0; 
                                classes[1] = 12; 
                                classes[2] = 0; 
                            } else {
                                if (features[3] <= 1.5499999523162842) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 1; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                    classes[2] = 0; 
                                }
                            }
                        }
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 2; 
            }
        } else {
            classes[0] = 0; 
            classes[1] = 0; 
            classes[2] = 44; 
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_54(float features[]) {
    int classes[3];
    
    if (features[2] <= 2.5999999046325684) {
        classes[0] = 49; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[2] <= 4.75) {
            if (features[3] <= 1.6500000953674316) {
                classes[0] = 0; 
                classes[1] = 44; 
                classes[2] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 1; 
            }
        } else {
            if (features[3] <= 1.75) {
                if (features[2] <= 5.349999904632568) {
                    if (features[0] <= 6.5) {
                        if (features[3] <= 1.5499999523162842) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 1; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 3; 
                            classes[2] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 5; 
                        classes[2] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 1; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 46; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_55(float features[]) {
    int classes[3];
    
    if (features[0] <= 5.449999809265137) {
        if (features[1] <= 2.6500000953674316) {
            classes[0] = 0; 
            classes[1] = 5; 
            classes[2] = 0; 
        } else {
            classes[0] = 47; 
            classes[1] = 0; 
            classes[2] = 0; 
        }
    } else {
        if (features[3] <= 1.7000000476837158) {
            if (features[1] <= 3.450000047683716) {
                if (features[0] <= 7.099999904632568) {
                    if (features[2] <= 5.0) {
                        classes[0] = 0; 
                        classes[1] = 51; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 2; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 1; 
                }
            } else {
                classes[0] = 4; 
                classes[1] = 0; 
                classes[2] = 0; 
            }
        } else {
            if (features[0] <= 6.0) {
                if (features[1] <= 3.0999999046325684) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 2; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 2; 
                    classes[2] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 36; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_56(float features[]) {
    int classes[3];
    
    if (features[3] <= 0.75) {
        classes[0] = 57; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[0] <= 6.149999618530273) {
            if (features[2] <= 4.850000381469727) {
                if (features[0] <= 4.949999809265137) {
                    if (features[1] <= 2.450000047683716) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 2; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 26; 
                    classes[2] = 0; 
                }
            } else {
                if (features[1] <= 2.75) {
                    if (features[2] <= 5.050000190734863) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 3; 
                    } else {
                        if (features[0] <= 5.900000095367432) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 2; 
                        } else {
                            if (features[1] <= 2.6500000953674316) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 1; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                                classes[2] = 0; 
                            }
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 6; 
                }
            }
        } else {
            if (features[0] <= 6.550000190734863) {
                if (features[2] <= 4.949999809265137) {
                    classes[0] = 0; 
                    classes[1] = 4; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 27; 
                }
            } else {
                if (features[3] <= 1.75) {
                    classes[0] = 0; 
                    classes[1] = 11; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 9; 
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_57(float features[]) {
    int classes[3];
    
    if (features[2] <= 2.3499999046325684) {
        classes[0] = 46; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[2] <= 4.850000381469727) {
            if (features[0] <= 5.0) {
                if (features[2] <= 3.9000000953674316) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 1; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 38; 
                classes[2] = 0; 
            }
        } else {
            if (features[3] <= 1.75) {
                if (features[2] <= 5.449999809265137) {
                    if (features[0] <= 6.5) {
                        if (features[3] <= 1.5499999523162842) {
                            if (features[0] <= 6.150000095367432) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 1; 
                            } else {
                                if (features[1] <= 2.6500000953674316) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 1; 
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                            classes[2] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 4; 
                        classes[2] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 4; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 52; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_58(float features[]) {
    int classes[3];
    
    if (features[2] <= 2.5999999046325684) {
        classes[0] = 53; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[2] <= 4.850000381469727) {
            if (features[3] <= 1.7000000476837158) {
                classes[0] = 0; 
                classes[1] = 46; 
                classes[2] = 0; 
            } else {
                if (features[1] <= 3.0999999046325684) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 1; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                    classes[2] = 0; 
                }
            }
        } else {
            if (features[3] <= 1.75) {
                if (features[0] <= 6.199999809265137) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 5; 
                } else {
                    if (features[3] <= 1.5499999523162842) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    } else {
                        if (features[3] <= 1.6500000953674316) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 1; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                            classes[2] = 0; 
                        }
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 41; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_59(float features[]) {
    int classes[3];
    
    if (features[3] <= 0.800000011920929) {
        classes[0] = 57; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[2] <= 4.949999809265137) {
            if (features[0] <= 5.050000190734863) {
                if (features[1] <= 2.450000047683716) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 1; 
                }
            } else {
                if (features[2] <= 4.75) {
                    classes[0] = 0; 
                    classes[1] = 47; 
                    classes[2] = 0; 
                } else {
                    if (features[3] <= 1.649999976158142) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                        classes[2] = 0; 
                    } else {
                        if (features[1] <= 3.0) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 1; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                            classes[2] = 0; 
                        }
                    }
                }
            }
        } else {
            if (features[1] <= 2.75) {
                if (features[1] <= 2.6500000953674316) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 4; 
                } else {
                    if (features[2] <= 5.199999809265137) {
                        if (features[0] <= 5.900000095367432) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 1; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                            classes[2] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 2; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 31; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_60(float features[]) {
    int classes[3];
    
    if (features[3] <= 0.75) {
        classes[0] = 49; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[3] <= 1.6500000953674316) {
            if (features[2] <= 5.349999904632568) {
                classes[0] = 0; 
                classes[1] = 43; 
                classes[2] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 5; 
            }
        } else {
            if (features[3] <= 1.75) {
                if (features[0] <= 5.800000190734863) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 2; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                    classes[2] = 0; 
                }
            } else {
                if (features[2] <= 4.850000381469727) {
                    if (features[0] <= 5.949999809265137) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 2; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 47; 
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_61(float features[]) {
    int classes[3];
    
    if (features[2] <= 4.75) {
        if (features[3] <= 0.800000011920929) {
            classes[0] = 43; 
            classes[1] = 0; 
            classes[2] = 0; 
        } else {
            classes[0] = 0; 
            classes[1] = 57; 
            classes[2] = 0; 
        }
    } else {
        if (features[3] <= 1.75) {
            if (features[3] <= 1.6500000953674316) {
                if (features[0] <= 6.199999809265137) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 3; 
                } else {
                    if (features[0] <= 6.75) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 2; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 1; 
                classes[2] = 0; 
            }
        } else {
            classes[0] = 0; 
            classes[1] = 0; 
            classes[2] = 43; 
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_62(float features[]) {
    int classes[3];
    
    if (features[0] <= 5.449999809265137) {
        if (features[3] <= 0.800000011920929) {
            classes[0] = 40; 
            classes[1] = 0; 
            classes[2] = 0; 
        } else {
            if (features[3] <= 1.600000023841858) {
                classes[0] = 0; 
                classes[1] = 7; 
                classes[2] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 1; 
            }
        }
    } else {
        if (features[0] <= 6.25) {
            if (features[3] <= 1.7000000476837158) {
                if (features[1] <= 3.450000047683716) {
                    if (features[1] <= 2.25) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    } else {
                        if (features[3] <= 1.3499999046325684) {
                            classes[0] = 0; 
                            classes[1] = 20; 
                            classes[2] = 0; 
                        } else {
                            if (features[2] <= 5.349999904632568) {
                                classes[0] = 0; 
                                classes[1] = 8; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 1; 
                            }
                        }
                    }
                } else {
                    classes[0] = 5; 
                    classes[1] = 0; 
                    classes[2] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 10; 
            }
        } else {
            if (features[2] <= 5.050000190734863) {
                classes[0] = 0; 
                classes[1] = 15; 
                classes[2] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 42; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_63(float features[]) {
    int classes[3];
    
    if (features[3] <= 0.800000011920929) {
        classes[0] = 48; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[3] <= 1.6500000953674316) {
            if (features[3] <= 1.3499999046325684) {
                classes[0] = 0; 
                classes[1] = 31; 
                classes[2] = 0; 
            } else {
                if (features[1] <= 2.8499999046325684) {
                    if (features[2] <= 4.949999809265137) {
                        classes[0] = 0; 
                        classes[1] = 4; 
                        classes[2] = 0; 
                    } else {
                        if (features[1] <= 2.6500000953674316) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 2; 
                        } else {
                            if (features[1] <= 2.75) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 1; 
                            }
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 18; 
                    classes[2] = 0; 
                }
            }
        } else {
            if (features[3] <= 1.8499999046325684) {
                if (features[2] <= 5.050000190734863) {
                    if (features[1] <= 3.0999999046325684) {
                        if (features[2] <= 4.949999809265137) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 7; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                            classes[2] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 3; 
                        classes[2] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 5; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 29; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_64(float features[]) {
    int classes[3];
    
    if (features[2] <= 2.450000047683716) {
        classes[0] = 55; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[3] <= 1.75) {
            if (features[1] <= 2.25) {
                if (features[2] <= 4.75) {
                    classes[0] = 0; 
                    classes[1] = 3; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 4; 
                }
            } else {
                if (features[2] <= 5.300000190734863) {
                    if (features[3] <= 1.600000023841858) {
                        classes[0] = 0; 
                        classes[1] = 45; 
                        classes[2] = 0; 
                    } else {
                        if (features[0] <= 5.800000190734863) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 2; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 3; 
                            classes[2] = 0; 
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 2; 
                }
            }
        } else {
            classes[0] = 0; 
            classes[1] = 0; 
            classes[2] = 36; 
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_65(float features[]) {
    int classes[3];
    
    if (features[2] <= 2.450000047683716) {
        classes[0] = 52; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[3] <= 1.6500000953674316) {
            if (features[2] <= 4.949999809265137) {
                classes[0] = 0; 
                classes[1] = 46; 
                classes[2] = 0; 
            } else {
                if (features[0] <= 6.050000190734863) {
                    if (features[1] <= 2.450000047683716) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 5; 
                }
            }
        } else {
            classes[0] = 0; 
            classes[1] = 0; 
            classes[2] = 45; 
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_66(float features[]) {
    int classes[3];
    
    if (features[3] <= 0.75) {
        classes[0] = 54; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[3] <= 1.7000000476837158) {
            if (features[3] <= 1.3499999046325684) {
                classes[0] = 0; 
                classes[1] = 24; 
                classes[2] = 0; 
            } else {
                if (features[2] <= 5.0) {
                    classes[0] = 0; 
                    classes[1] = 16; 
                    classes[2] = 0; 
                } else {
                    if (features[1] <= 2.75) {
                        if (features[3] <= 1.5) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 1; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                            classes[2] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 3; 
                    }
                }
            }
        } else {
            if (features[3] <= 1.8499999046325684) {
                if (features[0] <= 5.949999809265137) {
                    if (features[1] <= 3.0999999046325684) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 12; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 37; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_67(float features[]) {
    int classes[3];
    
    if (features[2] <= 2.3499999046325684) {
        classes[0] = 56; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[3] <= 1.6500000953674316) {
            if (features[2] <= 4.949999809265137) {
                classes[0] = 0; 
                classes[1] = 45; 
                classes[2] = 0; 
            } else {
                if (features[3] <= 1.5499999523162842) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 2; 
                } else {
                    if (features[0] <= 6.599999904632568) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    }
                }
            }
        } else {
            classes[0] = 0; 
            classes[1] = 0; 
            classes[2] = 45; 
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_68(float features[]) {
    int classes[3];
    
    if (features[2] <= 2.5999999046325684) {
        classes[0] = 47; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[2] <= 4.850000381469727) {
            if (features[0] <= 6.149999618530273) {
                classes[0] = 0; 
                classes[1] = 37; 
                classes[2] = 0; 
            } else {
                if (features[2] <= 4.75) {
                    classes[0] = 0; 
                    classes[1] = 8; 
                    classes[2] = 0; 
                } else {
                    if (features[0] <= 6.5) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                        classes[2] = 0; 
                    }
                }
            }
        } else {
            if (features[3] <= 1.75) {
                if (features[0] <= 7.050000190734863) {
                    if (features[0] <= 6.150000095367432) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 3; 
                        classes[2] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 2; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 49; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_69(float features[]) {
    int classes[3];
    
    if (features[0] <= 5.449999809265137) {
        if (features[3] <= 0.75) {
            classes[0] = 44; 
            classes[1] = 0; 
            classes[2] = 0; 
        } else {
            if (features[0] <= 4.949999809265137) {
                if (features[3] <= 1.350000023841858) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 2; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 3; 
                classes[2] = 0; 
            }
        }
    } else {
        if (features[2] <= 4.75) {
            if (features[1] <= 3.549999952316284) {
                classes[0] = 0; 
                classes[1] = 43; 
                classes[2] = 0; 
            } else {
                classes[0] = 5; 
                classes[1] = 0; 
                classes[2] = 0; 
            }
        } else {
            if (features[2] <= 5.149999618530273) {
                if (features[1] <= 3.0999999046325684) {
                    if (features[3] <= 1.75) {
                        if (features[3] <= 1.5499999523162842) {
                            if (features[2] <= 5.0) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 1; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 2; 
                            classes[2] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 12; 
                    }
                } else {
                    if (features[3] <= 1.899999976158142) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 2; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 31; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_70(float features[]) {
    int classes[3];
    
    if (features[3] <= 0.800000011920929) {
        classes[0] = 50; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[2] <= 4.75) {
            classes[0] = 0; 
            classes[1] = 43; 
            classes[2] = 0; 
        } else {
            if (features[2] <= 4.850000381469727) {
                if (features[0] <= 6.5) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 2; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                    classes[2] = 0; 
                }
            } else {
                if (features[3] <= 1.7000000476837158) {
                    if (features[0] <= 6.050000190734863) {
                        if (features[2] <= 5.050000190734863) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 1; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                            classes[2] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 6; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 46; 
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_71(float features[]) {
    int classes[3];
    
    if (features[3] <= 0.800000011920929) {
        classes[0] = 49; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[2] <= 4.949999809265137) {
            if (features[2] <= 4.75) {
                if (features[3] <= 1.6500000953674316) {
                    classes[0] = 0; 
                    classes[1] = 45; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 1; 
                }
            } else {
                if (features[3] <= 1.649999976158142) {
                    classes[0] = 0; 
                    classes[1] = 6; 
                    classes[2] = 0; 
                } else {
                    if (features[2] <= 4.850000381469727) {
                        if (features[1] <= 3.0999999046325684) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 4; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 4; 
                            classes[2] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 3; 
                    }
                }
            }
        } else {
            classes[0] = 0; 
            classes[1] = 0; 
            classes[2] = 38; 
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_72(float features[]) {
    int classes[3];
    
    if (features[3] <= 0.800000011920929) {
        classes[0] = 48; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[0] <= 5.75) {
            if (features[3] <= 1.600000023841858) {
                classes[0] = 0; 
                classes[1] = 25; 
                classes[2] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 2; 
            }
        } else {
            if (features[3] <= 1.75) {
                if (features[1] <= 2.4000000953674316) {
                    if (features[2] <= 4.75) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 3; 
                    }
                } else {
                    if (features[2] <= 5.449999809265137) {
                        classes[0] = 0; 
                        classes[1] = 22; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 46; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_73(float features[]) {
    int classes[3];
    
    if (features[3] <= 0.75) {
        classes[0] = 48; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[0] <= 5.75) {
            if (features[3] <= 1.75) {
                classes[0] = 0; 
                classes[1] = 20; 
                classes[2] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 4; 
            }
        } else {
            if (features[3] <= 1.75) {
                if (features[0] <= 7.050000190734863) {
                    if (features[1] <= 2.8499999046325684) {
                        if (features[2] <= 4.949999809265137) {
                            classes[0] = 0; 
                            classes[1] = 11; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 4; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 14; 
                        classes[2] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 1; 
                }
            } else {
                if (features[2] <= 4.850000381469727) {
                    if (features[1] <= 3.0999999046325684) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 46; 
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_74(float features[]) {
    int classes[3];
    
    if (features[2] <= 2.450000047683716) {
        classes[0] = 49; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[3] <= 1.6500000953674316) {
            if (features[2] <= 4.900000095367432) {
                classes[0] = 0; 
                classes[1] = 45; 
                classes[2] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 6; 
            }
        } else {
            if (features[0] <= 5.949999809265137) {
                if (features[1] <= 3.0999999046325684) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 6; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 2; 
                    classes[2] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 42; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_75(float features[]) {
    int classes[3];
    
    if (features[3] <= 0.800000011920929) {
        classes[0] = 46; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[2] <= 4.850000381469727) {
            if (features[0] <= 6.149999618530273) {
                classes[0] = 0; 
                classes[1] = 33; 
                classes[2] = 0; 
            } else {
                if (features[3] <= 1.7000000476837158) {
                    classes[0] = 0; 
                    classes[1] = 16; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 1; 
                }
            }
        } else {
            if (features[3] <= 1.75) {
                if (features[1] <= 2.5999999046325684) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 1; 
                } else {
                    if (features[3] <= 1.6500000953674316) {
                        if (features[3] <= 1.5499999523162842) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 1; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                        classes[2] = 0; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 49; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_76(float features[]) {
    int classes[3];
    
    if (features[3] <= 0.75) {
        classes[0] = 52; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[2] <= 4.75) {
            classes[0] = 0; 
            classes[1] = 35; 
            classes[2] = 0; 
        } else {
            if (features[1] <= 2.75) {
                if (features[3] <= 1.7000000476837158) {
                    if (features[3] <= 1.5499999523162842) {
                        if (features[0] <= 6.199999809265137) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 2; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                            classes[2] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                        classes[2] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 10; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 48; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_77(float features[]) {
    int classes[3];
    
    if (features[3] <= 0.800000011920929) {
        classes[0] = 43; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[2] <= 4.949999809265137) {
            if (features[3] <= 1.899999976158142) {
                if (features[3] <= 1.7000000476837158) {
                    classes[0] = 0; 
                    classes[1] = 60; 
                    classes[2] = 0; 
                } else {
                    if (features[2] <= 4.850000381469727) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 1; 
            }
        } else {
            classes[0] = 0; 
            classes[1] = 0; 
            classes[2] = 42; 
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_78(float features[]) {
    int classes[3];
    
    if (features[3] <= 0.75) {
        classes[0] = 40; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[3] <= 1.7000000476837158) {
            if (features[1] <= 2.25) {
                if (features[3] <= 1.25) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                    classes[2] = 0; 
                } else {
                    if (features[2] <= 4.75) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 2; 
                    }
                }
            } else {
                if (features[2] <= 5.349999904632568) {
                    classes[0] = 0; 
                    classes[1] = 53; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 2; 
                }
            }
        } else {
            if (features[0] <= 5.949999809265137) {
                if (features[3] <= 1.8499999046325684) {
                    classes[0] = 0; 
                    classes[1] = 3; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 5; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 43; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_79(float features[]) {
    int classes[3];
    
    if (features[2] <= 2.5999999046325684) {
        classes[0] = 55; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[2] <= 4.850000381469727) {
            if (features[3] <= 1.7000000476837158) {
                classes[0] = 0; 
                classes[1] = 48; 
                classes[2] = 0; 
            } else {
                if (features[0] <= 5.949999809265137) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 1; 
                }
            }
        } else {
            if (features[1] <= 2.75) {
                if (features[1] <= 2.5999999046325684) {
                    if (features[2] <= 4.949999809265137) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 7; 
                    }
                } else {
                    if (features[2] <= 5.0) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                        classes[2] = 0; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 33; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_80(float features[]) {
    int classes[3];
    
    if (features[3] <= 0.699999988079071) {
        classes[0] = 41; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[3] <= 1.6500000953674316) {
            if (features[0] <= 6.050000190734863) {
                classes[0] = 0; 
                classes[1] = 36; 
                classes[2] = 0; 
            } else {
                if (features[3] <= 1.4500000476837158) {
                    if (features[2] <= 5.199999809265137) {
                        classes[0] = 0; 
                        classes[1] = 18; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    }
                } else {
                    if (features[0] <= 6.400000095367432) {
                        if (features[1] <= 2.6500000953674316) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 2; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                        classes[2] = 0; 
                    }
                }
            }
        } else {
            if (features[1] <= 2.950000047683716) {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 21; 
            } else {
                if (features[2] <= 5.050000190734863) {
                    if (features[3] <= 1.75) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                        classes[2] = 0; 
                    } else {
                        if (features[2] <= 4.850000381469727) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 3; 
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 22; 
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_81(float features[]) {
    int classes[3];
    
    if (features[3] <= 0.75) {
        classes[0] = 50; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[2] <= 4.75) {
            if (features[1] <= 2.549999952316284) {
                if (features[0] <= 4.949999809265137) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 2; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 8; 
                    classes[2] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 33; 
                classes[2] = 0; 
            }
        } else {
            if (features[1] <= 2.75) {
                if (features[0] <= 6.350000381469727) {
                    if (features[1] <= 2.3499999046325684) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    } else {
                        if (features[3] <= 1.7000000476837158) {
                            if (features[3] <= 1.4500000476837158) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 1; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 4; 
                                classes[2] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 4; 
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 3; 
                }
            } else {
                if (features[2] <= 5.050000190734863) {
                    if (features[0] <= 6.449999809265137) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 3; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                        classes[2] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 39; 
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_82(float features[]) {
    int classes[3];
    
    if (features[2] <= 2.3499999046325684) {
        classes[0] = 45; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[3] <= 1.6500000953674316) {
            if (features[2] <= 4.949999809265137) {
                classes[0] = 0; 
                classes[1] = 55; 
                classes[2] = 0; 
            } else {
                if (features[3] <= 1.5499999523162842) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 2; 
                } else {
                    if (features[2] <= 5.449999809265137) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    }
                }
            }
        } else {
            if (features[0] <= 6.050000190734863) {
                if (features[0] <= 5.850000381469727) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 7; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 2; 
                    classes[2] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 37; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_83(float features[]) {
    int classes[3];
    
    if (features[2] <= 2.5999999046325684) {
        classes[0] = 60; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[2] <= 4.75) {
            classes[0] = 0; 
            classes[1] = 46; 
            classes[2] = 0; 
        } else {
            if (features[2] <= 4.850000381469727) {
                if (features[3] <= 1.5999999046325684) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                    classes[2] = 0; 
                } else {
                    if (features[0] <= 6.050000190734863) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 3; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 39; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_84(float features[]) {
    int classes[3];
    
    if (features[2] <= 2.450000047683716) {
        classes[0] = 57; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[3] <= 1.75) {
            if (features[2] <= 5.349999904632568) {
                classes[0] = 0; 
                classes[1] = 48; 
                classes[2] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 3; 
            }
        } else {
            if (features[0] <= 5.949999809265137) {
                if (features[2] <= 4.850000381469727) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 4; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 36; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_85(float features[]) {
    int classes[3];
    
    if (features[3] <= 0.800000011920929) {
        classes[0] = 59; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[0] <= 6.149999618530273) {
            if (features[2] <= 4.850000381469727) {
                if (features[2] <= 4.349999904632568) {
                    classes[0] = 0; 
                    classes[1] = 24; 
                    classes[2] = 0; 
                } else {
                    if (features[0] <= 5.25) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 9; 
                        classes[2] = 0; 
                    }
                }
            } else {
                if (features[3] <= 1.7000000476837158) {
                    if (features[3] <= 1.5499999523162842) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 10; 
                }
            }
        } else {
            if (features[2] <= 5.099999904632568) {
                if (features[0] <= 6.350000381469727) {
                    if (features[3] <= 1.649999976158142) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 3; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 13; 
                    classes[2] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 26; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_86(float features[]) {
    int classes[3];
    
    if (features[2] <= 2.450000047683716) {
        classes[0] = 46; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[3] <= 1.75) {
            if (features[0] <= 7.099999904632568) {
                if (features[2] <= 4.849999904632568) {
                    if (features[1] <= 2.549999952316284) {
                        if (features[2] <= 4.25) {
                            classes[0] = 0; 
                            classes[1] = 15; 
                            classes[2] = 0; 
                        } else {
                            if (features[0] <= 5.550000190734863) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 1; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 3; 
                                classes[2] = 0; 
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 34; 
                        classes[2] = 0; 
                    }
                } else {
                    if (features[0] <= 6.5) {
                        if (features[1] <= 2.6500000953674316) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 2; 
                        } else {
                            if (features[3] <= 1.5499999523162842) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 1; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                                classes[2] = 0; 
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                        classes[2] = 0; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 1; 
            }
        } else {
            classes[0] = 0; 
            classes[1] = 0; 
            classes[2] = 44; 
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_87(float features[]) {
    int classes[3];
    
    if (features[3] <= 0.800000011920929) {
        classes[0] = 54; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[3] <= 1.6500000953674316) {
            if (features[3] <= 1.3499999046325684) {
                classes[0] = 0; 
                classes[1] = 26; 
                classes[2] = 0; 
            } else {
                if (features[3] <= 1.4500000476837158) {
                    if (features[2] <= 5.149999618530273) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 4; 
                    }
                } else {
                    if (features[0] <= 7.050000190734863) {
                        if (features[1] <= 2.8499999046325684) {
                            if (features[1] <= 2.75) {
                                if (features[0] <= 6.099999904632568) {
                                    if (features[3] <= 1.5499999523162842) {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 1; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                    classes[2] = 0; 
                                }
                            } else {
                                if (features[0] <= 6.400000095367432) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 2; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                    classes[2] = 0; 
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 8; 
                            classes[2] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    }
                }
            }
        } else {
            classes[0] = 0; 
            classes[1] = 0; 
            classes[2] = 45; 
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_88(float features[]) {
    int classes[3];
    
    if (features[3] <= 0.75) {
        classes[0] = 53; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[2] <= 4.75) {
            if (features[3] <= 1.6500000953674316) {
                classes[0] = 0; 
                classes[1] = 43; 
                classes[2] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 1; 
            }
        } else {
            if (features[3] <= 1.75) {
                if (features[3] <= 1.4500000476837158) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                    classes[2] = 0; 
                } else {
                    if (features[2] <= 4.949999809265137) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    } else {
                        if (features[3] <= 1.5499999523162842) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 3; 
                        } else {
                            if (features[0] <= 6.949999809265137) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 1; 
                            }
                        }
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 45; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_89(float features[]) {
    int classes[3];
    
    if (features[2] <= 2.450000047683716) {
        classes[0] = 60; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[3] <= 1.7000000476837158) {
            if (features[2] <= 4.949999809265137) {
                classes[0] = 0; 
                classes[1] = 40; 
                classes[2] = 0; 
            } else {
                if (features[3] <= 1.5499999523162842) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 4; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                    classes[2] = 0; 
                }
            }
        } else {
            classes[0] = 0; 
            classes[1] = 0; 
            classes[2] = 45; 
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_90(float features[]) {
    int classes[3];
    
    if (features[3] <= 1.6500000953674316) {
        if (features[1] <= 2.950000047683716) {
            if (features[2] <= 2.1500000953674316) {
                classes[0] = 1; 
                classes[1] = 0; 
                classes[2] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 41; 
                classes[2] = 0; 
            }
        } else {
            if (features[2] <= 3.049999952316284) {
                classes[0] = 31; 
                classes[1] = 0; 
                classes[2] = 0; 
            } else {
                if (features[2] <= 5.350000381469727) {
                    classes[0] = 0; 
                    classes[1] = 15; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 3; 
                }
            }
        }
    } else {
        if (features[0] <= 5.949999809265137) {
            if (features[0] <= 5.850000381469727) {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 10; 
            } else {
                if (features[1] <= 3.0999999046325684) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 2; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                    classes[2] = 0; 
                }
            }
        } else {
            classes[0] = 0; 
            classes[1] = 0; 
            classes[2] = 46; 
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_91(float features[]) {
    int classes[3];
    
    if (features[3] <= 0.75) {
        classes[0] = 52; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[2] <= 4.75) {
            classes[0] = 0; 
            classes[1] = 49; 
            classes[2] = 0; 
        } else {
            if (features[3] <= 1.75) {
                if (features[3] <= 1.5499999523162842) {
                    if (features[0] <= 6.199999809265137) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 3; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 4; 
                    classes[2] = 0; 
                }
            } else {
                if (features[2] <= 4.850000381469727) {
                    if (features[1] <= 3.0999999046325684) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 3; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 37; 
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_92(float features[]) {
    int classes[3];
    
    if (features[3] <= 0.800000011920929) {
        classes[0] = 51; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[3] <= 1.6500000953674316) {
            if (features[1] <= 2.25) {
                if (features[2] <= 4.75) {
                    classes[0] = 0; 
                    classes[1] = 4; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 2; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 44; 
                classes[2] = 0; 
            }
        } else {
            if (features[1] <= 3.1500000953674316) {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 41; 
            } else {
                if (features[0] <= 6.100000381469727) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 7; 
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_93(float features[]) {
    int classes[3];
    
    if (features[3] <= 1.6500000953674316) {
        if (features[2] <= 2.450000047683716) {
            classes[0] = 41; 
            classes[1] = 0; 
            classes[2] = 0; 
        } else {
            if (features[0] <= 7.099999904632568) {
                if (features[2] <= 4.900000095367432) {
                    classes[0] = 0; 
                    classes[1] = 41; 
                    classes[2] = 0; 
                } else {
                    if (features[1] <= 2.450000047683716) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    } else {
                        if (features[0] <= 6.150000095367432) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 1; 
                        }
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 1; 
            }
        }
    } else {
        if (features[2] <= 5.050000190734863) {
            if (features[2] <= 4.949999809265137) {
                if (features[0] <= 6.0) {
                    if (features[2] <= 4.650000095367432) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 2; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 4; 
                }
            } else {
                if (features[3] <= 1.7999999523162842) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 1; 
                }
            }
        } else {
            classes[0] = 0; 
            classes[1] = 0; 
            classes[2] = 55; 
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_94(float features[]) {
    int classes[3];
    
    if (features[0] <= 5.449999809265137) {
        if (features[3] <= 0.800000011920929) {
            classes[0] = 53; 
            classes[1] = 0; 
            classes[2] = 0; 
        } else {
            classes[0] = 0; 
            classes[1] = 1; 
            classes[2] = 0; 
        }
    } else {
        if (features[3] <= 1.7000000476837158) {
            if (features[2] <= 4.949999809265137) {
                if (features[3] <= 0.6499999761581421) {
                    classes[0] = 3; 
                    classes[1] = 0; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 41; 
                    classes[2] = 0; 
                }
            } else {
                if (features[3] <= 1.5499999523162842) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 5; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 2; 
                    classes[2] = 0; 
                }
            }
        } else {
            if (features[0] <= 5.949999809265137) {
                if (features[1] <= 3.0999999046325684) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 3; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                    classes[2] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 41; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_95(float features[]) {
    int classes[3];
    
    if (features[2] <= 2.450000047683716) {
        classes[0] = 55; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[2] <= 4.75) {
            if (features[0] <= 4.949999809265137) {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 1; 
            } else {
                classes[0] = 0; 
                classes[1] = 54; 
                classes[2] = 0; 
            }
        } else {
            if (features[3] <= 1.75) {
                if (features[3] <= 1.6500000953674316) {
                    if (features[1] <= 2.6500000953674316) {
                        if (features[2] <= 4.949999809265137) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 2; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 4; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                    classes[2] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 32; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_96(float features[]) {
    int classes[3];
    
    if (features[0] <= 5.550000190734863) {
        if (features[3] <= 0.800000011920929) {
            classes[0] = 47; 
            classes[1] = 0; 
            classes[2] = 0; 
        } else {
            if (features[0] <= 4.949999809265137) {
                if (features[2] <= 3.9000000953674316) {
                    classes[0] = 0; 
                    classes[1] = 3; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 2; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 8; 
                classes[2] = 0; 
            }
        }
    } else {
        if (features[3] <= 1.75) {
            if (features[2] <= 5.050000190734863) {
                classes[0] = 0; 
                classes[1] = 42; 
                classes[2] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 4; 
            }
        } else {
            if (features[1] <= 3.1500000953674316) {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 33; 
            } else {
                if (features[0] <= 6.100000381469727) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 10; 
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_97(float features[]) {
    int classes[3];
    
    if (features[3] <= 0.75) {
        classes[0] = 64; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[2] <= 4.850000381469727) {
            if (features[3] <= 1.600000023841858) {
                classes[0] = 0; 
                classes[1] = 39; 
                classes[2] = 0; 
            } else {
                if (features[2] <= 4.650000095367432) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 2; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                    classes[2] = 0; 
                }
            }
        } else {
            if (features[2] <= 5.149999618530273) {
                if (features[3] <= 1.75) {
                    if (features[1] <= 2.450000047683716) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 2; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 5; 
                        classes[2] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 8; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 29; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_98(float features[]) {
    int classes[3];
    
    if (features[3] <= 0.800000011920929) {
        classes[0] = 48; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[2] <= 4.75) {
            if (features[3] <= 1.6500000953674316) {
                classes[0] = 0; 
                classes[1] = 47; 
                classes[2] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 3; 
            }
        } else {
            if (features[3] <= 1.75) {
                if (features[2] <= 5.050000190734863) {
                    classes[0] = 0; 
                    classes[1] = 3; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 3; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 46; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_99(float features[]) {
    int classes[3];
    
    if (features[2] <= 2.5999999046325684) {
        classes[0] = 45; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[2] <= 4.850000381469727) {
            if (features[0] <= 4.949999809265137) {
                if (features[2] <= 3.9000000953674316) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 1; 
                }
            } else {
                if (features[2] <= 4.75) {
                    classes[0] = 0; 
                    classes[1] = 44; 
                    classes[2] = 0; 
                } else {
                    if (features[3] <= 1.5999999046325684) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    } else {
                        if (features[0] <= 6.050000190734863) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 3; 
                        }
                    }
                }
            }
        } else {
            if (features[2] <= 5.050000190734863) {
                if (features[3] <= 1.75) {
                    if (features[0] <= 6.150000095367432) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 2; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 4; 
                        classes[2] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 6; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 40; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict (float features[]) {
    int n_classes = 3;
    int classes[n_classes];
    int i;
    for (i = 0; i < n_classes; i++) {
        classes[i] = 0;
    }

    classes[predict_0(features)]++;
    classes[predict_1(features)]++;
    classes[predict_2(features)]++;
    classes[predict_3(features)]++;
    classes[predict_4(features)]++;
    classes[predict_5(features)]++;
    classes[predict_6(features)]++;
    classes[predict_7(features)]++;
    classes[predict_8(features)]++;
    classes[predict_9(features)]++;
    classes[predict_10(features)]++;
    classes[predict_11(features)]++;
    classes[predict_12(features)]++;
    classes[predict_13(features)]++;
    classes[predict_14(features)]++;
    classes[predict_15(features)]++;
    classes[predict_16(features)]++;
    classes[predict_17(features)]++;
    classes[predict_18(features)]++;
    classes[predict_19(features)]++;
    classes[predict_20(features)]++;
    classes[predict_21(features)]++;
    classes[predict_22(features)]++;
    classes[predict_23(features)]++;
    classes[predict_24(features)]++;
    classes[predict_25(features)]++;
    classes[predict_26(features)]++;
    classes[predict_27(features)]++;
    classes[predict_28(features)]++;
    classes[predict_29(features)]++;
    classes[predict_30(features)]++;
    classes[predict_31(features)]++;
    classes[predict_32(features)]++;
    classes[predict_33(features)]++;
    classes[predict_34(features)]++;
    classes[predict_35(features)]++;
    classes[predict_36(features)]++;
    classes[predict_37(features)]++;
    classes[predict_38(features)]++;
    classes[predict_39(features)]++;
    classes[predict_40(features)]++;
    classes[predict_41(features)]++;
    classes[predict_42(features)]++;
    classes[predict_43(features)]++;
    classes[predict_44(features)]++;
    classes[predict_45(features)]++;
    classes[predict_46(features)]++;
    classes[predict_47(features)]++;
    classes[predict_48(features)]++;
    classes[predict_49(features)]++;
    classes[predict_50(features)]++;
    classes[predict_51(features)]++;
    classes[predict_52(features)]++;
    classes[predict_53(features)]++;
    classes[predict_54(features)]++;
    classes[predict_55(features)]++;
    classes[predict_56(features)]++;
    classes[predict_57(features)]++;
    classes[predict_58(features)]++;
    classes[predict_59(features)]++;
    classes[predict_60(features)]++;
    classes[predict_61(features)]++;
    classes[predict_62(features)]++;
    classes[predict_63(features)]++;
    classes[predict_64(features)]++;
    classes[predict_65(features)]++;
    classes[predict_66(features)]++;
    classes[predict_67(features)]++;
    classes[predict_68(features)]++;
    classes[predict_69(features)]++;
    classes[predict_70(features)]++;
    classes[predict_71(features)]++;
    classes[predict_72(features)]++;
    classes[predict_73(features)]++;
    classes[predict_74(features)]++;
    classes[predict_75(features)]++;
    classes[predict_76(features)]++;
    classes[predict_77(features)]++;
    classes[predict_78(features)]++;
    classes[predict_79(features)]++;
    classes[predict_80(features)]++;
    classes[predict_81(features)]++;
    classes[predict_82(features)]++;
    classes[predict_83(features)]++;
    classes[predict_84(features)]++;
    classes[predict_85(features)]++;
    classes[predict_86(features)]++;
    classes[predict_87(features)]++;
    classes[predict_88(features)]++;
    classes[predict_89(features)]++;
    classes[predict_90(features)]++;
    classes[predict_91(features)]++;
    classes[predict_92(features)]++;
    classes[predict_93(features)]++;
    classes[predict_94(features)]++;
    classes[predict_95(features)]++;
    classes[predict_96(features)]++;
    classes[predict_97(features)]++;
    classes[predict_98(features)]++;
    classes[predict_99(features)]++;

    int class_idx = 0;
    int class_val = classes[0];
    for (i = 1; i < n_classes; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int main(int argc, const char * argv[]) {
    float features[argc-1];
    int i;
    for (i = 1; i < argc; i++) {
        features[i-1] = atof(argv[i]);
    }
    printf("%d", predict(features));
    return 0;
}