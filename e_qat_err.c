/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2019 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the OpenSSL license (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#include <openssl/err.h>
#include "e_qat_err.h"

#ifndef OPENSSL_NO_ERR

static ERR_STRING_DATA QAT_str_functs[] = {
    {ERR_PACK(0, QAT_F_BIND_QAT, 0), "bind_qat"},
    {ERR_PACK(0, QAT_F_BUILD_DECRYPT_OP_BUF, 0), "build_decrypt_op_buf"},
    {ERR_PACK(0, QAT_F_BUILD_ENCRYPT_OP_BUF, 0), "build_encrypt_op_buf"},
    {ERR_PACK(0, QAT_F_CRT_COMBINE, 0), "CRT_combine"},
    {ERR_PACK(0, QAT_F_CRT_PREPARE, 0), "CRT_prepare"},
    {ERR_PACK(0, QAT_F_ENGINE_FINISH_BEFORE_FORK_HANDLER, 0),
     "engine_finish_before_fork_handler"},
    {ERR_PACK(0, QAT_F_ENGINE_INIT_CHILD_AT_FORK_HANDLER, 0),
     "engine_init_child_at_fork_handler"},
    {ERR_PACK(0, QAT_F_ENGINE_QAT, 0), "engine_qat"},
    {ERR_PACK(0, QAT_F_EVENT_POLL_FUNC, 0), "event_poll_func"},
    {ERR_PACK(0, QAT_F_POLL_INSTANCES, 0), "poll_instances"},
    {ERR_PACK(0, QAT_F_QAT_ADJUST_THREAD_AFFINITY, 0),
     "qat_adjust_thread_affinity"},
    {ERR_PACK(0, QAT_F_QAT_CRYPTO_CALLBACKFN, 0), "qat_crypto_callbackFn"},
    {ERR_PACK(0, QAT_F_QAT_DH_COMPUTE_KEY, 0), "qat_dh_compute_key"},
    {ERR_PACK(0, QAT_F_QAT_DH_GENERATE_KEY, 0), "qat_dh_generate_key"},
    {ERR_PACK(0, QAT_F_QAT_DSA_DO_SIGN, 0), "qat_dsa_do_sign"},
    {ERR_PACK(0, QAT_F_QAT_DSA_DO_VERIFY, 0), "qat_dsa_do_verify"},
    {ERR_PACK(0, QAT_F_QAT_DSA_SIGN_SETUP, 0), "qat_dsa_sign_setup"},
    {ERR_PACK(0, QAT_F_QAT_ECDH_COMPUTE_KEY, 0), "qat_ecdh_compute_key"},
    {ERR_PACK(0, QAT_F_QAT_ECDH_GENERATE_KEY, 0), "qat_ecdh_generate_key"},
    {ERR_PACK(0, QAT_F_QAT_ECDSA_DO_SIGN, 0), "qat_ecdsa_do_sign"},
    {ERR_PACK(0, QAT_F_QAT_ECDSA_DO_VERIFY, 0), "qat_ecdsa_do_verify"},
    {ERR_PACK(0, QAT_F_QAT_ECDSA_SIGN, 0), "qat_ecdsa_sign"},
    {ERR_PACK(0, QAT_F_QAT_ECDSA_VERIFY, 0), "qat_ecdsa_verify"},
    {ERR_PACK(0, QAT_F_QAT_ENGINE_CTRL, 0), "qat_engine_ctrl"},
    {ERR_PACK(0, QAT_F_QAT_ENGINE_FINISH_INT, 0), "qat_engine_finish_int"},
    {ERR_PACK(0, QAT_F_QAT_ENGINE_INIT, 0), "qat_engine_init"},
    {ERR_PACK(0, QAT_F_QAT_FD_CLEANUP, 0), "qat_fd_cleanup"},
    {ERR_PACK(0, QAT_F_QAT_FREE_DH_METHODS, 0), "qat_free_DH_methods"},
    {ERR_PACK(0, QAT_F_QAT_FREE_DSA_METHODS, 0), "qat_free_DSA_methods"},
    {ERR_PACK(0, QAT_F_QAT_FREE_EC_METHODS, 0), "qat_free_EC_methods"},
    {ERR_PACK(0, QAT_F_QAT_FREE_RSA_METHODS, 0), "qat_free_RSA_methods"},
    {ERR_PACK(0, QAT_F_QAT_GET_DH_METHODS, 0), "qat_get_DH_methods"},
    {ERR_PACK(0, QAT_F_QAT_GET_DSA_METHODS, 0), "qat_get_DSA_methods"},
    {ERR_PACK(0, QAT_F_QAT_GET_EC_METHODS, 0), "qat_get_EC_methods"},
    {ERR_PACK(0, QAT_F_QAT_GET_RSA_METHODS, 0), "qat_get_RSA_methods"},
    {ERR_PACK(0, QAT_F_QAT_INIT_OP_DONE, 0), "qat_init_op_done"},
    {ERR_PACK(0, QAT_F_QAT_INIT_OP_DONE_PIPE, 0), "qat_init_op_done_pipe"},
    {ERR_PACK(0, QAT_F_QAT_INIT_OP_DONE_RSA_CRT, 0),
     "qat_init_op_done_rsa_crt"},
    {ERR_PACK(0, QAT_F_QAT_MOD_EXP, 0), "qat_mod_exp"},
    {ERR_PACK(0, QAT_F_QAT_PRF_PMETH, 0), "qat_prf_pmeth"},
    {ERR_PACK(0, QAT_F_QAT_PRF_TLS_DERIVE, 0), "qat_prf_tls_derive"},
    {ERR_PACK(0, QAT_F_QAT_RSA_DECRYPT, 0), "qat_rsa_decrypt"},
    {ERR_PACK(0, QAT_F_QAT_RSA_DECRYPT_CRT, 0), "qat_rsa_decrypt_CRT"},
    {ERR_PACK(0, QAT_F_QAT_RSA_ENCRYPT, 0), "qat_rsa_encrypt"},
    {ERR_PACK(0, QAT_F_QAT_RSA_PRIV_DEC, 0), "qat_rsa_priv_dec"},
    {ERR_PACK(0, QAT_F_QAT_RSA_PRIV_ENC, 0), "qat_rsa_priv_enc"},
    {ERR_PACK(0, QAT_F_QAT_RSA_PUB_DEC, 0), "qat_rsa_pub_dec"},
    {ERR_PACK(0, QAT_F_QAT_RSA_PUB_ENC, 0), "qat_rsa_pub_enc"},
    {ERR_PACK(0, QAT_F_QAT_SET_AFFINE_COORDINATES, 0),
     "qat_set_affine_coordinates"},
    {ERR_PACK(0, QAT_F_QAT_SET_INSTANCE_FOR_THREAD, 0),
     "qat_set_instance_for_thread"},
    {ERR_PACK(0, QAT_F_QAT_SYM_PERFORM_OP, 0), "qat_sym_perform_op"},
    {0, NULL}
};

static ERR_STRING_DATA QAT_str_reasons[] = {
    {ERR_PACK(0, 0, QAT_R_ADD_M2_FAILURE), "add m2 failure"},
    {ERR_PACK(0, 0, QAT_R_ADJUST_DELTA_M1_M2_FAILURE),
    "adjust delta m1 m2 failure"},
    {ERR_PACK(0, 0, QAT_R_ALLOC_QAT_DSA_METH_FAILURE),
    "alloc qat dsa meth failure"},
    {ERR_PACK(0, 0, QAT_R_ALLOC_QAT_RSA_METH_FAILURE),
    "alloc qat rsa meth failure"},
    {ERR_PACK(0, 0, QAT_R_BUF_CONV_FAIL), "buf conv fail"},
    {ERR_PACK(0, 0, QAT_R_CLOSE_FD_FAILURE), "close fd failure"},
    {ERR_PACK(0, 0, QAT_R_COMPUTE_H_MULTIPLY_Q_FAILURE),
    "compute h multiply q failure"},
    {ERR_PACK(0, 0, QAT_R_CP_BUF_MALLOC_FAILURE), "cp buf malloc failure"},
    {ERR_PACK(0, 0, QAT_R_CQ_BUF_MALLOC_FAILURE), "cq buf malloc failure"},
    {ERR_PACK(0, 0, QAT_R_CTX_MALLOC_FAILURE), "ctx malloc failure"},
    {ERR_PACK(0, 0, QAT_R_CURVE_COORDINATE_PARAMS_CONVERT_TO_FB_FAILURE),
    "curve coordinate params convert to fb failure"},
    {ERR_PACK(0, 0, QAT_R_C_MODULO_P_FAILURE), "c modulo p failure"},
    {ERR_PACK(0, 0, QAT_R_C_MODULO_Q_FAILURE), "c modulo q failure"},
    {ERR_PACK(0, 0, QAT_R_C_P_Q_CP_CQ_MALLOC_FAILURE),
    "c p q cp cq malloc failure"},
    {ERR_PACK(0, 0, QAT_R_DEC_OP_DATA_MALLOC_FAILURE),
    "dec op data malloc failure"},
    {ERR_PACK(0, 0, QAT_R_DGSTLEN_INVALID), "dgstlen invalid"},
    {ERR_PACK(0, 0, QAT_R_DGST_BN_CONV_FAILURE), "dgst bn conv failure"},
    {ERR_PACK(0, 0, QAT_R_DH_NULL), "dh null"},
    {ERR_PACK(0, 0, QAT_R_DLEN_INVALID), "dlen invalid"},
    {ERR_PACK(0, 0, QAT_R_DSA_DGST_NULL), "dsa dgst null"},
    {ERR_PACK(0, 0, QAT_R_DSA_DGST_SIG_NULL), "dsa dgst sig null"},
    {ERR_PACK(0, 0, QAT_R_ECDH_GET_AFFINE_COORD_FAILED),
    "ecdh get affine coord failed"},
    {ERR_PACK(0, 0, QAT_R_ECDH_GROUP_NULL), "ecdh group null"},
    {ERR_PACK(0, 0, QAT_R_ECDH_PRIV_KEY_PUB_KEY_NULL),
    "ecdh priv key pub key null"},
    {ERR_PACK(0, 0, QAT_R_ECDH_SET_AFFINE_COORD_FAILED),
    "ecdh set affine coord failed"},
    {ERR_PACK(0, 0, QAT_R_ECDH_UNKNOWN_FIELD_TYPE), "ecdh unknown field type"},
    {ERR_PACK(0, 0, QAT_R_ECDSA_SIG_MALLOC_FAILURE),
    "ecdsa sig malloc failure"},
    {ERR_PACK(0, 0, QAT_R_ECDSA_SIG_SET_R_S_FAILURE),
    "ecdsa sig set r s failure"},
    {ERR_PACK(0, 0, QAT_R_ECKEY_GROUP_PUBKEY_SIG_NULL),
    "eckey group pubkey sig null"},
    {ERR_PACK(0, 0, QAT_R_EC_POINT_RETRIEVE_FAILURE),
    "ec point retrieve failure"},
    {ERR_PACK(0, 0, QAT_R_ENC_OP_DATA_MALLOC_FAILURE),
    "enc op data malloc failure"},
    {ERR_PACK(0, 0, QAT_R_ENGINE_CTRL_CMD_FAILURE), "engine ctrl cmd failure"},
    {ERR_PACK(0, 0, QAT_R_ENGINE_ID_ALREADY_DEFINED),
    "engine id already defined"},
    {ERR_PACK(0, 0, QAT_R_ENGINE_INIT_FAILURE), "engine init failure"},
    {ERR_PACK(0, 0, QAT_R_ENGINE_NULL), "engine null"},
    {ERR_PACK(0, 0, QAT_R_ENGINE_REGISTER_FUNC_FAILURE),
    "engine register func failure"},
    {ERR_PACK(0, 0, QAT_R_ENGINE_SET_CIPHER_FAILURE),
    "engine set cipher failure"},
    {ERR_PACK(0, 0, QAT_R_ENGINE_SET_DH_FAILURE), "engine set dh failure"},
    {ERR_PACK(0, 0, QAT_R_ENGINE_SET_DSA_FAILURE), "engine set dsa failure"},
    {ERR_PACK(0, 0, QAT_R_ENGINE_SET_EC_FAILURE), "engine set ec failure"},
    {ERR_PACK(0, 0, QAT_R_ENGINE_SET_ID_FAILURE), "engine set id failure"},
    {ERR_PACK(0, 0, QAT_R_ENGINE_SET_NAME_FAILURE), "engine set name failure"},
    {ERR_PACK(0, 0, QAT_R_ENGINE_SET_PKEY_FAILURE), "engine set pkey failure"},
    {ERR_PACK(0, 0, QAT_R_ENGINE_SET_RSA_FAILURE), "engine set rsa failure"},
    {ERR_PACK(0, 0, QAT_R_EPOLL_CREATE_FAILURE), "epoll create failure"},
    {ERR_PACK(0, 0, QAT_R_EPOLL_CTL_FAILURE), "epoll ctl failure"},
    {ERR_PACK(0, 0, QAT_R_EVENTS_MALLOC_FAILURE), "events malloc failure"},
    {ERR_PACK(0, 0, QAT_R_FIELD_SIZE_INVALID), "field size invalid"},
    {ERR_PACK(0, 0, QAT_R_FREE_DH_METH_FAILURE), "free dh meth failure"},
    {ERR_PACK(0, 0, QAT_R_FREE_QAT_DSA_METH_FAILURE),
    "free qat dsa meth failure"},
    {ERR_PACK(0, 0, QAT_R_FREE_QAT_RSA_METH_FAILURE),
    "free qat rsa meth failure"},
    {ERR_PACK(0, 0, QAT_R_GET_FILE_DESCRIPTOR_FAILURE),
    "get file descriptor failure"},
    {ERR_PACK(0, 0, QAT_R_GET_GROUP_FAILURE), "get group failure"},
    {ERR_PACK(0, 0, QAT_R_GET_INSTANCE_FAILURE), "get instance failure"},
    {ERR_PACK(0, 0, QAT_R_GET_INSTANCE_INFO_FAILURE),
    "get instance info failure"},
    {ERR_PACK(0, 0, QAT_R_GET_NUM_INSTANCE_FAILURE),
    "get num instance failure"},
    {ERR_PACK(0, 0, QAT_R_GET_PQG_FAILURE), "get pqg failure"},
    {ERR_PACK(0, 0, QAT_R_GET_PRIV_KEY_FAILURE), "get priv key failure"},
    {ERR_PACK(0, 0, QAT_R_GROUP_PRIV_KEY_PUB_KEY_NULL),
    "group priv key pub key null"},
    {ERR_PACK(0, 0, QAT_R_ICP_SAL_USERSTART_FAIL), "icp sal userstart fail"},
    {ERR_PACK(0, 0, QAT_R_INPUT_DATA_MALLOC_FAILURE),
    "input data malloc failure"},
    {ERR_PACK(0, 0, QAT_R_INPUT_PARAM_INVALID), "input param invalid"},
    {ERR_PACK(0, 0, QAT_R_INSTANCE_HANDLE_MALLOC_FAILURE),
    "instance handle malloc failure"},
    {ERR_PACK(0, 0, QAT_R_INSTANCE_UNAVAILABLE), "instance unavailable"},
    {ERR_PACK(0, 0, QAT_R_INVALID_PUB_KEY), "invalid pub key"},
    {ERR_PACK(0, 0, QAT_R_IN_KINV_CONVERT_TO_FB_FAILURE),
    "in kinv convert to fb failure"},
    {ERR_PACK(0, 0, QAT_R_IN_R_CONVERT_TO_FB_FAILURE),
    "in r convert to fb failure"},
    {ERR_PACK(0, 0, QAT_R_KEY_NULL), "key null"},
    {ERR_PACK(0, 0, QAT_R_K_ALLOCATE_FAILURE), "k allocate failure"},
    {ERR_PACK(0, 0, QAT_R_K_CONVERT_TO_FB_FAILURE), "k convert to fb failure"},
    {ERR_PACK(0, 0, QAT_R_K_ORDER_CONVERT_TO_FB_FAILURE),
    "k order convert to fb failure"},
    {ERR_PACK(0, 0, QAT_R_K_RAND_GENERATE_FAILURE), "k rand generate failure"},
    {ERR_PACK(0, 0, QAT_R_M1_DEDUCT_M2_FAILURE), "m1 deduct m2 failure"},
    {ERR_PACK(0, 0, QAT_R_M1_M2_P_Q_QINV_TMP_MALLOC_FAILURE),
    "m1 m2 p q qinv tmp malloc failure"},
    {ERR_PACK(0, 0, QAT_R_MAX_RETRIES_EXCEEDED), "max retries exceeded"},
    {ERR_PACK(0, 0, QAT_R_MEM_DRV_NOT_PRESENT), "mem drv not present"},
    {ERR_PACK(0, 0, QAT_R_MODULO_P_FAILURE), "modulo p failure"},
    {ERR_PACK(0, 0, QAT_R_MOD_GET_NEXT_INST_FAIL), "mod get next inst fail"},
    {ERR_PACK(0, 0, QAT_R_MOD_LN_MOD_EXP_FAIL), "mod ln mod exp fail"},
    {ERR_PACK(0, 0, QAT_R_MOD_SETUP_ASYNC_EVENT_FAIL),
    "mod setup async event fail"},
    {ERR_PACK(0, 0, QAT_R_MULTIPLY_QINV_FAILURE), "multiply qinv failure"},
    {ERR_PACK(0, 0, QAT_R_N_E_CONVERT_TO_FB_FAILURE),
    "n e convert to fb failure"},
    {ERR_PACK(0, 0, QAT_R_N_E_NULL), "n e null"},
    {ERR_PACK(0, 0, QAT_R_OP1_BASE_PDATA_MALLOC_FAILURE),
    "op1 base pdata malloc failure"},
    {ERR_PACK(0, 0, QAT_R_OP2_BASE_PDATA_MALLOC_FAILURE),
    "op2 base pdata malloc failure"},
    {ERR_PACK(0, 0, QAT_R_OPDATA_A_PDATA_MALLOC_FAILURE),
    "opdata a pdata malloc failure"},
    {ERR_PACK(0, 0, QAT_R_OPDATA_DATA_MALLOC_FAILURE),
    "opdata data malloc failure"},
    {ERR_PACK(0, 0, QAT_R_OPDATA_MALLOC_FAILURE), "opdata malloc failure"},
    {ERR_PACK(0, 0, QAT_R_OPDATA_PDATA_MALLOC_FAILURE),
    "opdata pdata malloc failure"},
    {ERR_PACK(0, 0, QAT_R_OPDATA_ZPDATA_MALLOC_FAILURE),
    "opdata zpdata malloc failure"},
    {ERR_PACK(0, 0, QAT_R_OPDCRT_NULL), "opdcrt null"},
    {ERR_PACK(0, 0, QAT_R_OPDONE_NULL), "opdone null"},
    {ERR_PACK(0, 0, QAT_R_OPDPIPE_NULL), "opdpipe null"},
    {ERR_PACK(0, 0, QAT_R_ORDER_MALLOC_FAILURE), "order malloc failure"},
    {ERR_PACK(0, 0, QAT_R_OUT1_PDATA_MALLOC_FAILURE),
    "out1 pdata malloc failure"},
    {ERR_PACK(0, 0, QAT_R_OUT2_PDATA_MALLOC_FAILURE),
    "out2 pdata malloc failure"},
    {ERR_PACK(0, 0, QAT_R_OUTPUT_BUF_MALLOC_FAILURE),
    "output buf malloc failure"},
    {ERR_PACK(0, 0, QAT_R_OUTPUT_BUF_PDATA_MALLOC_FAILURE),
    "output buf pdata malloc failure"},
    {ERR_PACK(0, 0, QAT_R_OUTX_MALLOC_FAILURE), "outx malloc failure"},
    {ERR_PACK(0, 0, QAT_R_OUTX_OUTY_LEN_NULL), "outx outy len null"},
    {ERR_PACK(0, 0, QAT_R_OUTY_MALLOC_FAILURE), "outy malloc failure"},
    {ERR_PACK(0, 0, QAT_R_PADDING_UNKNOWN), "padding unknown"},
    {ERR_PACK(0, 0, QAT_R_POLLING_THREAD_CREATE_FAILURE),
    "polling thread create failure"},
    {ERR_PACK(0, 0, QAT_R_POLLING_THREAD_SIGMASK_FAILURE),
    "polling thread sigmask failure"},
    {ERR_PACK(0, 0, QAT_R_POLL_INSTANCE_FAILURE), "poll instance failure"},
    {ERR_PACK(0, 0, QAT_R_PPV_MALLOC_FAILURE), "ppv malloc failure"},
    {ERR_PACK(0, 0, QAT_R_PPV_PDATA_MALLOC_FAILURE),
    "ppv pdata malloc failure"},
    {ERR_PACK(0, 0, QAT_R_PRESULTR_MALLOC_FAILURE), "presultr malloc failure"},
    {ERR_PACK(0, 0, QAT_R_PRESULTR_PDATA_MALLOC_FAILURE),
    "presultr pdata malloc failure"},
    {ERR_PACK(0, 0, QAT_R_PRESULTS_MALLOC_FAILURE), "presults malloc failure"},
    {ERR_PACK(0, 0, QAT_R_PRESULTS_PDATA_MALLOC_FAILURE),
    "presults pdata malloc failure"},
    {ERR_PACK(0, 0, QAT_R_PRESULTX_MALLOC_FAILURE), "presultx malloc failure"},
    {ERR_PACK(0, 0, QAT_R_PRESULTX_PDATA_MALLOC_FAILURE),
    "presultx pdata malloc failure"},
    {ERR_PACK(0, 0, QAT_R_PRESULTY_LENGTH_CHECK_FAILURE),
    "presulty length check failure"},
    {ERR_PACK(0, 0, QAT_R_PRESULTY_MALLOC_FAILURE), "presulty malloc failure"},
    {ERR_PACK(0, 0, QAT_R_PRESULTY_PDATA_MALLOC_FAILURE),
    "presulty pdata malloc failure"},
    {ERR_PACK(0, 0, QAT_R_PRIV_KEY_DUPLICATE_FAILURE),
    "priv key duplicate failure"},
    {ERR_PACK(0, 0, QAT_R_PRIV_KEY_MALLOC_FAILURE), "priv key malloc failure"},
    {ERR_PACK(0, 0, QAT_R_PRIV_KEY_M_XG_YG_A_B_P_CONVERT_TO_FB_FAILURE),
    "priv key m xg yg a b p convert to fb failure"},
    {ERR_PACK(0, 0, QAT_R_PRIV_KEY_NULL), "priv key null"},
    {ERR_PACK(0, 0, QAT_R_PRIV_KEY_RAND_GENERATE_FAILURE),
    "priv key rand generate failure"},
    {ERR_PACK(0, 0, QAT_R_PRIV_KEY_XG_YG_A_B_P_CONVERT_TO_FB_FAILURE),
    "priv key xg yg a b p convert to fb failure"},
    {ERR_PACK(0, 0, QAT_R_PTHREAD_CREATE_FAILURE), "pthread create failure"},
    {ERR_PACK(0, 0, QAT_R_PTHREAD_GETAFFINITY_FAILURE),
    "pthread getaffinity failure"},
    {ERR_PACK(0, 0, QAT_R_PTHREAD_JOIN_FAILURE), "pthread join failure"},
    {ERR_PACK(0, 0, QAT_R_PTHREAD_KILL_FAILURE), "pthread kill failure"},
    {ERR_PACK(0, 0, QAT_R_PTHREAD_SETAFFINITY_FAILURE),
    "pthread setaffinity failure"},
    {ERR_PACK(0, 0, QAT_R_PUB_KEY_DUPLICATE_FAILURE),
    "pub key duplicate failure"},
    {ERR_PACK(0, 0, QAT_R_PUB_KEY_MALLOC_FAILURE), "pub key malloc failure"},
    {ERR_PACK(0, 0, QAT_R_PUB_KEY_NULL), "pub key null"},
    {ERR_PACK(0, 0, QAT_R_P_A_B_XG_YG_MALLOC_FAILURE),
    "p a b xg yg malloc failure"},
    {ERR_PACK(0, 0, QAT_R_P_A_B_XG_YG_M_K_R_ORDER_MALLOC_FAILURE),
    "p a b xg yg m k r order malloc failure"},
    {ERR_PACK(0, 0, QAT_R_P_A_B_XG_YG_XP_YP_M_ORDER_FAILURE),
    "p a b xg yg xp yp m order failure"},
    {ERR_PACK(0, 0, QAT_R_P_G_PRIV_KEY_CONVERT_TO_FB_FAILURE),
    "p g priv key convert to fb failure"},
    {ERR_PACK(0, 0, QAT_R_P_PUB_PRIV_KEY_CONVERT_TO_FB_FAILURE),
    "p pub priv key convert to fb failure"},
    {ERR_PACK(0, 0, QAT_R_P_Q_DMP_DMQ_CONVERT_TO_FB_FAILURE),
    "p q dmp dmq convert to fb failure"},
    {ERR_PACK(0, 0, QAT_R_P_Q_DMP_DMQ_IQMP_NULL), "p q dmp dmq iqmp null"},
    {ERR_PACK(0, 0, QAT_R_P_Q_G_NULL), "p q g null"},
    {ERR_PACK(0, 0, QAT_R_P_Q_G_X_K_CONVERT_TO_FB_FAILURE),
    "p q g x k convert to fb failure"},
    {ERR_PACK(0, 0, QAT_R_P_Q_G_Y_Z_R_S_CONVERT_TO_FB_FAILURE),
    "p q g y z r s convert to fb failure"},
    {ERR_PACK(0, 0, QAT_R_QAT_ALLOC_DH_METH_FAILURE),
    "qat alloc dh meth failure"},
    {ERR_PACK(0, 0, QAT_R_QAT_CREATE_ENGINE_FAILURE),
    "qat create engine failure"},
    {ERR_PACK(0, 0, QAT_R_QAT_DEV_NOT_PRESENT), "qat dev not present"},
    {ERR_PACK(0, 0, QAT_R_QAT_ECDSA_DO_SIGN_FAIL), "qat ecdsa do sign fail"},
    {ERR_PACK(0, 0, QAT_R_QAT_FREE_EC_METHOD_FAILURE),
    "qat free ec method failure"},
    {ERR_PACK(0, 0, QAT_R_QAT_GET_EC_METHOD_MALLOC_FAILURE),
    "qat get ec method malloc failure"},
    {ERR_PACK(0, 0, QAT_R_QAT_SET_DH_METH_FAILURE), "qat set dh meth failure"},
    {ERR_PACK(0, 0, QAT_R_RESULT_PDATA_ALLOC_FAIL), "result pdata alloc fail"},
    {ERR_PACK(0, 0, QAT_R_RETRIEVE_EC_POINT_FAILURE),
    "retrieve ec point failure"},
    {ERR_PACK(0, 0, QAT_R_RETRIEVE_ORDER_FAILURE), "retrieve order failure"},
    {ERR_PACK(0, 0, QAT_R_RSA_FROM_TO_NULL), "rsa from to null"},
    {ERR_PACK(0, 0, QAT_R_RSA_OUTPUT_BUF_PDATA_MALLOC_FAILURE),
    "rsa output buf pdata malloc failure"},
    {ERR_PACK(0, 0, QAT_R_R_Q_COMPARE_FAILURE), "r q compare failure"},
    {ERR_PACK(0, 0, QAT_R_SECRET_KEY_MALLOC_FAILURE),
    "secret key malloc failure"},
    {ERR_PACK(0, 0, QAT_R_SECRET_KEY_PDATA_MALLOC_FAILURE),
    "secret key pdata malloc failure"},
    {ERR_PACK(0, 0, QAT_R_SETUP_ASYNC_EVENT_FAILURE),
    "setup async event failure"},
    {ERR_PACK(0, 0, QAT_R_SET_ADDRESS_TRANSLATION_FAILURE),
    "set address translation failure"},
    {ERR_PACK(0, 0, QAT_R_SET_INSTANCE_FAILURE), "set instance failure"},
    {ERR_PACK(0, 0, QAT_R_SET_POLLING_THREAD_AFFINITY_FAILURE),
    "set polling thread affinity failure"},
    {ERR_PACK(0, 0, QAT_R_SET_PRIV_KEY_FAILURE), "set priv key failure"},
    {ERR_PACK(0, 0, QAT_R_SET_QAT_DSA_METH_FAILURE),
    "set qat dsa meth failure"},
    {ERR_PACK(0, 0, QAT_R_SET_QAT_RSA_METH_FAILURE),
    "set qat rsa meth failure"},
    {ERR_PACK(0, 0, QAT_R_SIG_GET_R_S_FAILURE), "sig get r s failure"},
    {ERR_PACK(0, 0, QAT_R_SIG_MALLOC_FAILURE), "sig malloc failure"},
    {ERR_PACK(0, 0, QAT_R_START_INSTANCE_FAILURE), "start instance failure"},
    {ERR_PACK(0, 0, QAT_R_STOP_INSTANCE_FAILURE), "stop instance failure"},
    {ERR_PACK(0, 0, QAT_R_SW_GET_COMPUTE_KEY_PFUNC_NULL),
    "sw get compute key pfunc null"},
    {ERR_PACK(0, 0, QAT_R_SW_GET_KEYGEN_PFUNC_NULL),
    "sw get keygen pfunc null"},
    {ERR_PACK(0, 0, QAT_R_SW_METHOD_NULL), "sw method null"},
    {ERR_PACK(0, 0, QAT_R_S_NULL), "s null"},
    {ERR_PACK(0, 0, QAT_R_S_Q_COMPARE_FAILURE), "s q compare failure"},
    {ERR_PACK(0, 0, QAT_R_UNKNOWN_PADDING), "unknown padding"},
    {ERR_PACK(0, 0, QAT_R_WAKE_PAUSE_JOB_FAILURE), "wake pause job failure"},
    {ERR_PACK(0, 0, QAT_R_X_Y_TX_TY_BN_MALLOC_FAILURE),
    "x y tx ty bn malloc failure"},
    {ERR_PACK(0, 0, QAT_R_Z_ALLOCATE_FAILURE), "z allocate failure"},
    {0, NULL}
};

#endif

static int lib_code = 0;
static int error_loaded = 0;

int ERR_load_QAT_strings(void)
{
    if (lib_code == 0)
        lib_code = ERR_get_next_error_library();

    if (!error_loaded) {
#ifndef OPENSSL_NO_ERR
        ERR_load_strings(lib_code, QAT_str_functs);
        ERR_load_strings(lib_code, QAT_str_reasons);
#endif
        error_loaded = 1;
    }
    return 1;
}

void ERR_unload_QAT_strings(void)
{
    if (error_loaded) {
#ifndef OPENSSL_NO_ERR
        ERR_unload_strings(lib_code, QAT_str_functs);
        ERR_unload_strings(lib_code, QAT_str_reasons);
#endif
        error_loaded = 0;
    }
}

void ERR_QAT_error(int function, int reason, char *file, int line)
{
    if (lib_code == 0)
        lib_code = ERR_get_next_error_library();
    ERR_PUT_error(lib_code, function, reason, file, line);
}
