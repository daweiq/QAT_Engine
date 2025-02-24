/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2019 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the OpenSSL license (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#ifndef HEADER_QATERR_H
# define HEADER_QATERR_H

# define QATerr(f, r) ERR_QAT_error((f), (r), OPENSSL_FILE, OPENSSL_LINE)


# ifdef  __cplusplus
extern "C" {
# endif
int ERR_load_QAT_strings(void);
void ERR_unload_QAT_strings(void);
void ERR_QAT_error(int function, int reason, char *file, int line);
# ifdef  __cplusplus
}
# endif

/*
 * QAT function codes.
 */
# define QAT_F_BIND_QAT                                   100
# define QAT_F_BUILD_DECRYPT_OP_BUF                       101
# define QAT_F_BUILD_ENCRYPT_OP_BUF                       102
# define QAT_F_CRT_COMBINE                                103
# define QAT_F_CRT_PREPARE                                104
# define QAT_F_ENGINE_FINISH_BEFORE_FORK_HANDLER          105
# define QAT_F_ENGINE_INIT_CHILD_AT_FORK_HANDLER          106
# define QAT_F_ENGINE_QAT                                 107
# define QAT_F_EVENT_POLL_FUNC                            108
# define QAT_F_POLL_INSTANCES                             109
# define QAT_F_QAT_ADJUST_THREAD_AFFINITY                 110
# define QAT_F_QAT_CRYPTO_CALLBACKFN                      111
# define QAT_F_QAT_DH_COMPUTE_KEY                         112
# define QAT_F_QAT_DH_GENERATE_KEY                        113
# define QAT_F_QAT_DSA_DO_SIGN                            114
# define QAT_F_QAT_DSA_DO_VERIFY                          115
# define QAT_F_QAT_DSA_SIGN_SETUP                         116
# define QAT_F_QAT_ECDH_COMPUTE_KEY                       117
# define QAT_F_QAT_ECDH_GENERATE_KEY                      118
# define QAT_F_QAT_ECDSA_DO_SIGN                          119
# define QAT_F_QAT_ECDSA_DO_VERIFY                        120
# define QAT_F_QAT_ECDSA_SIGN                             121
# define QAT_F_QAT_ECDSA_VERIFY                           122
# define QAT_F_QAT_ENGINE_CTRL                            123
# define QAT_F_QAT_ENGINE_FINISH_INT                      124
# define QAT_F_QAT_ENGINE_INIT                            125
# define QAT_F_QAT_FD_CLEANUP                             126
# define QAT_F_QAT_FREE_DH_METHODS                        127
# define QAT_F_QAT_FREE_DSA_METHODS                       128
# define QAT_F_QAT_FREE_EC_METHODS                        129
# define QAT_F_QAT_FREE_RSA_METHODS                       130
# define QAT_F_QAT_GET_DH_METHODS                         131
# define QAT_F_QAT_GET_DSA_METHODS                        132
# define QAT_F_QAT_GET_EC_METHODS                         133
# define QAT_F_QAT_GET_RSA_METHODS                        134
# define QAT_F_QAT_INIT_OP_DONE                           135
# define QAT_F_QAT_INIT_OP_DONE_PIPE                      136
# define QAT_F_QAT_INIT_OP_DONE_RSA_CRT                   137
# define QAT_F_QAT_MOD_EXP                                138
# define QAT_F_QAT_PRF_PMETH                              139
# define QAT_F_QAT_PRF_TLS_DERIVE                         140
# define QAT_F_QAT_RSA_DECRYPT                            141
# define QAT_F_QAT_RSA_DECRYPT_CRT                        142
# define QAT_F_QAT_RSA_ENCRYPT                            143
# define QAT_F_QAT_RSA_PRIV_DEC                           144
# define QAT_F_QAT_RSA_PRIV_ENC                           145
# define QAT_F_QAT_RSA_PUB_DEC                            146
# define QAT_F_QAT_RSA_PUB_ENC                            147
# define QAT_F_QAT_SET_AFFINE_COORDINATES                 148
# define QAT_F_QAT_SET_INSTANCE_FOR_THREAD                149
# define QAT_F_QAT_SYM_PERFORM_OP                         150

/*
 * QAT reason codes.
 */
# define QAT_R_ADD_M2_FAILURE                             100
# define QAT_R_ADJUST_DELTA_M1_M2_FAILURE                 101
# define QAT_R_ALLOC_QAT_DSA_METH_FAILURE                 102
# define QAT_R_ALLOC_QAT_RSA_METH_FAILURE                 103
# define QAT_R_BUF_CONV_FAIL                              104
# define QAT_R_CLOSE_FD_FAILURE                           105
# define QAT_R_COMPUTE_H_MULTIPLY_Q_FAILURE               106
# define QAT_R_CP_BUF_MALLOC_FAILURE                      107
# define QAT_R_CQ_BUF_MALLOC_FAILURE                      108
# define QAT_R_CTX_MALLOC_FAILURE                         109
# define QAT_R_CURVE_COORDINATE_PARAMS_CONVERT_TO_FB_FAILURE 110
# define QAT_R_C_MODULO_P_FAILURE                         111
# define QAT_R_C_MODULO_Q_FAILURE                         112
# define QAT_R_C_P_Q_CP_CQ_MALLOC_FAILURE                 113
# define QAT_R_DEC_OP_DATA_MALLOC_FAILURE                 114
# define QAT_R_DGSTLEN_INVALID                            115
# define QAT_R_DGST_BN_CONV_FAILURE                       116
# define QAT_R_DH_NULL                                    117
# define QAT_R_DLEN_INVALID                               118
# define QAT_R_DSA_DGST_NULL                              119
# define QAT_R_DSA_DGST_SIG_NULL                          120
# define QAT_R_ECDH_GET_AFFINE_COORD_FAILED               121
# define QAT_R_ECDH_GROUP_NULL                            122
# define QAT_R_ECDH_PRIV_KEY_PUB_KEY_NULL                 123
# define QAT_R_ECDH_SET_AFFINE_COORD_FAILED               124
# define QAT_R_ECDH_UNKNOWN_FIELD_TYPE                    125
# define QAT_R_ECDSA_SIG_MALLOC_FAILURE                   126
# define QAT_R_ECDSA_SIG_SET_R_S_FAILURE                  127
# define QAT_R_ECKEY_GROUP_PUBKEY_SIG_NULL                128
# define QAT_R_EC_POINT_RETRIEVE_FAILURE                  129
# define QAT_R_ENC_OP_DATA_MALLOC_FAILURE                 130
# define QAT_R_ENGINE_CTRL_CMD_FAILURE                    131
# define QAT_R_ENGINE_ID_ALREADY_DEFINED                  132
# define QAT_R_ENGINE_INIT_FAILURE                        133
# define QAT_R_ENGINE_NULL                                134
# define QAT_R_ENGINE_REGISTER_FUNC_FAILURE               135
# define QAT_R_ENGINE_SET_CIPHER_FAILURE                  136
# define QAT_R_ENGINE_SET_DH_FAILURE                      137
# define QAT_R_ENGINE_SET_DSA_FAILURE                     138
# define QAT_R_ENGINE_SET_EC_FAILURE                      139
# define QAT_R_ENGINE_SET_ID_FAILURE                      140
# define QAT_R_ENGINE_SET_NAME_FAILURE                    141
# define QAT_R_ENGINE_SET_PKEY_FAILURE                    142
# define QAT_R_ENGINE_SET_RSA_FAILURE                     143
# define QAT_R_EPOLL_CREATE_FAILURE                       144
# define QAT_R_EPOLL_CTL_FAILURE                          145
# define QAT_R_EVENTS_MALLOC_FAILURE                      146
# define QAT_R_FIELD_SIZE_INVALID                         147
# define QAT_R_FREE_DH_METH_FAILURE                       148
# define QAT_R_FREE_QAT_DSA_METH_FAILURE                  149
# define QAT_R_FREE_QAT_RSA_METH_FAILURE                  150
# define QAT_R_GET_FILE_DESCRIPTOR_FAILURE                151
# define QAT_R_GET_GROUP_FAILURE                          152
# define QAT_R_GET_INSTANCE_FAILURE                       153
# define QAT_R_GET_INSTANCE_INFO_FAILURE                  154
# define QAT_R_GET_NUM_INSTANCE_FAILURE                   155
# define QAT_R_GET_PQG_FAILURE                            156
# define QAT_R_GET_PRIV_KEY_FAILURE                       157
# define QAT_R_GROUP_PRIV_KEY_PUB_KEY_NULL                158
# define QAT_R_ICP_SAL_USERSTART_FAIL                     159
# define QAT_R_INPUT_DATA_MALLOC_FAILURE                  160
# define QAT_R_INPUT_PARAM_INVALID                        161
# define QAT_R_INSTANCE_HANDLE_MALLOC_FAILURE             162
# define QAT_R_INSTANCE_UNAVAILABLE                       163
# define QAT_R_INVALID_PUB_KEY                            164
# define QAT_R_IN_KINV_CONVERT_TO_FB_FAILURE              165
# define QAT_R_IN_R_CONVERT_TO_FB_FAILURE                 166
# define QAT_R_KEY_NULL                                   167
# define QAT_R_K_ALLOCATE_FAILURE                         168
# define QAT_R_K_CONVERT_TO_FB_FAILURE                    169
# define QAT_R_K_ORDER_CONVERT_TO_FB_FAILURE              170
# define QAT_R_K_RAND_GENERATE_FAILURE                    171
# define QAT_R_M1_DEDUCT_M2_FAILURE                       172
# define QAT_R_M1_M2_P_Q_QINV_TMP_MALLOC_FAILURE          173
# define QAT_R_MAX_RETRIES_EXCEEDED                       174
# define QAT_R_MEM_DRV_NOT_PRESENT                        175
# define QAT_R_MODULO_P_FAILURE                           176
# define QAT_R_MOD_GET_NEXT_INST_FAIL                     177
# define QAT_R_MOD_LN_MOD_EXP_FAIL                        178
# define QAT_R_MOD_SETUP_ASYNC_EVENT_FAIL                 179
# define QAT_R_MULTIPLY_QINV_FAILURE                      180
# define QAT_R_N_E_CONVERT_TO_FB_FAILURE                  181
# define QAT_R_N_E_NULL                                   182
# define QAT_R_OP1_BASE_PDATA_MALLOC_FAILURE              183
# define QAT_R_OP2_BASE_PDATA_MALLOC_FAILURE              184
# define QAT_R_OPDATA_A_PDATA_MALLOC_FAILURE              185
# define QAT_R_OPDATA_DATA_MALLOC_FAILURE                 186
# define QAT_R_OPDATA_MALLOC_FAILURE                      187
# define QAT_R_OPDATA_PDATA_MALLOC_FAILURE                188
# define QAT_R_OPDATA_ZPDATA_MALLOC_FAILURE               189
# define QAT_R_OPDCRT_NULL                                190
# define QAT_R_OPDONE_NULL                                191
# define QAT_R_OPDPIPE_NULL                               192
# define QAT_R_ORDER_MALLOC_FAILURE                       193
# define QAT_R_OUT1_PDATA_MALLOC_FAILURE                  194
# define QAT_R_OUT2_PDATA_MALLOC_FAILURE                  195
# define QAT_R_OUTPUT_BUF_MALLOC_FAILURE                  196
# define QAT_R_OUTPUT_BUF_PDATA_MALLOC_FAILURE            197
# define QAT_R_OUTX_MALLOC_FAILURE                        198
# define QAT_R_OUTX_OUTY_LEN_NULL                         199
# define QAT_R_OUTY_MALLOC_FAILURE                        200
# define QAT_R_PADDING_UNKNOWN                            201
# define QAT_R_POLLING_THREAD_CREATE_FAILURE              202
# define QAT_R_POLLING_THREAD_SIGMASK_FAILURE             203
# define QAT_R_POLL_INSTANCE_FAILURE                      204
# define QAT_R_PPV_MALLOC_FAILURE                         205
# define QAT_R_PPV_PDATA_MALLOC_FAILURE                   206
# define QAT_R_PRESULTR_MALLOC_FAILURE                    207
# define QAT_R_PRESULTR_PDATA_MALLOC_FAILURE              208
# define QAT_R_PRESULTS_MALLOC_FAILURE                    209
# define QAT_R_PRESULTS_PDATA_MALLOC_FAILURE              210
# define QAT_R_PRESULTX_MALLOC_FAILURE                    211
# define QAT_R_PRESULTX_PDATA_MALLOC_FAILURE              212
# define QAT_R_PRESULTY_LENGTH_CHECK_FAILURE              213
# define QAT_R_PRESULTY_MALLOC_FAILURE                    214
# define QAT_R_PRESULTY_PDATA_MALLOC_FAILURE              215
# define QAT_R_PRIV_KEY_DUPLICATE_FAILURE                 216
# define QAT_R_PRIV_KEY_MALLOC_FAILURE                    217
# define QAT_R_PRIV_KEY_M_XG_YG_A_B_P_CONVERT_TO_FB_FAILURE 218
# define QAT_R_PRIV_KEY_NULL                              219
# define QAT_R_PRIV_KEY_RAND_GENERATE_FAILURE             220
# define QAT_R_PRIV_KEY_XG_YG_A_B_P_CONVERT_TO_FB_FAILURE 221
# define QAT_R_PTHREAD_CREATE_FAILURE                     222
# define QAT_R_PTHREAD_GETAFFINITY_FAILURE                223
# define QAT_R_PTHREAD_JOIN_FAILURE                       224
# define QAT_R_PTHREAD_KILL_FAILURE                       225
# define QAT_R_PTHREAD_SETAFFINITY_FAILURE                226
# define QAT_R_PUB_KEY_DUPLICATE_FAILURE                  227
# define QAT_R_PUB_KEY_MALLOC_FAILURE                     228
# define QAT_R_PUB_KEY_NULL                               229
# define QAT_R_P_A_B_XG_YG_MALLOC_FAILURE                 230
# define QAT_R_P_A_B_XG_YG_M_K_R_ORDER_MALLOC_FAILURE     231
# define QAT_R_P_A_B_XG_YG_XP_YP_M_ORDER_FAILURE          232
# define QAT_R_P_G_PRIV_KEY_CONVERT_TO_FB_FAILURE         233
# define QAT_R_P_PUB_PRIV_KEY_CONVERT_TO_FB_FAILURE       234
# define QAT_R_P_Q_DMP_DMQ_CONVERT_TO_FB_FAILURE          235
# define QAT_R_P_Q_DMP_DMQ_IQMP_NULL                      236
# define QAT_R_P_Q_G_NULL                                 237
# define QAT_R_P_Q_G_X_K_CONVERT_TO_FB_FAILURE            238
# define QAT_R_P_Q_G_Y_Z_R_S_CONVERT_TO_FB_FAILURE        239
# define QAT_R_QAT_ALLOC_DH_METH_FAILURE                  240
# define QAT_R_QAT_CREATE_ENGINE_FAILURE                  241
# define QAT_R_QAT_DEV_NOT_PRESENT                        242
# define QAT_R_QAT_ECDSA_DO_SIGN_FAIL                     243
# define QAT_R_QAT_FREE_EC_METHOD_FAILURE                 244
# define QAT_R_QAT_GET_EC_METHOD_MALLOC_FAILURE           245
# define QAT_R_QAT_SET_DH_METH_FAILURE                    246
# define QAT_R_RESULT_PDATA_ALLOC_FAIL                    247
# define QAT_R_RETRIEVE_EC_POINT_FAILURE                  248
# define QAT_R_RETRIEVE_ORDER_FAILURE                     249
# define QAT_R_RSA_FROM_TO_NULL                           250
# define QAT_R_RSA_OUTPUT_BUF_PDATA_MALLOC_FAILURE        251
# define QAT_R_R_Q_COMPARE_FAILURE                        252
# define QAT_R_SECRET_KEY_MALLOC_FAILURE                  253
# define QAT_R_SECRET_KEY_PDATA_MALLOC_FAILURE            254
# define QAT_R_SETUP_ASYNC_EVENT_FAILURE                  255
# define QAT_R_SET_ADDRESS_TRANSLATION_FAILURE            256
# define QAT_R_SET_INSTANCE_FAILURE                       257
# define QAT_R_SET_POLLING_THREAD_AFFINITY_FAILURE        258
# define QAT_R_SET_PRIV_KEY_FAILURE                       259
# define QAT_R_SET_QAT_DSA_METH_FAILURE                   260
# define QAT_R_SET_QAT_RSA_METH_FAILURE                   261
# define QAT_R_SIG_GET_R_S_FAILURE                        262
# define QAT_R_SIG_MALLOC_FAILURE                         263
# define QAT_R_START_INSTANCE_FAILURE                     264
# define QAT_R_STOP_INSTANCE_FAILURE                      265
# define QAT_R_SW_GET_COMPUTE_KEY_PFUNC_NULL              266
# define QAT_R_SW_GET_KEYGEN_PFUNC_NULL                   267
# define QAT_R_SW_METHOD_NULL                             268
# define QAT_R_S_NULL                                     269
# define QAT_R_S_Q_COMPARE_FAILURE                        270
# define QAT_R_UNKNOWN_PADDING                            271
# define QAT_R_WAKE_PAUSE_JOB_FAILURE                     272
# define QAT_R_X_Y_TX_TY_BN_MALLOC_FAILURE                273
# define QAT_R_Z_ALLOCATE_FAILURE                         274

#endif
