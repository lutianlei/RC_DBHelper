//
//  EventMarkTable.h
//  CreditGroup
//
//  Created by lutianlei on 2018/5/4.
//  Copyright © 2018年 haodai. All rights reserved.
//

#ifndef EventMarkTable_h
#define EventMarkTable_h


#define Flag @"/&/" // value 值分割符

/**
 * 首页
 */
#define Home_sign       @"Homepage_Btn1"        // 签到
#define Home_notification       @"Homepage_Btn2"        // 通知
#define Home_banner       @"Homepage_Btn3"       // 轮播图
#define Home_msg       @"Homepage_Btn4"       // 滚动消息
#define Home_gold       @"Homepage_Btn5"       //  金牌订单按钮
#define Home_vip       @"Homepage_Btn6"        //  会员订单按钮
#define Home_tao       @"Homepage_Btn7"       // 淘订单按钮
#define Home_recommend_img       @"Homepage_Btn8"       // 推荐-图片
#define Home_recommend_text       @"Homepage_Btn9"       //  推荐-文本
//#define Home_recommend_text2       @"Homepage_Btn10"       // 推荐-文本2
#define Home_order       @"Homepage_Btn11"       //  立即抢单
#define Home_generalize       @"Homepage_Btn12"       //  推广先锋
#define Home_micro_shop       @"Homepage_Btn13"       //  微店
#define Home_peer       @"Homepage_Btn14"       //  同行圈
#define Home_calculator       @"Homepage_Btn15"       //   计算器
#define Home_business       @"Homepage_Btn16"       //  展业
#define Home_push       @"Homepage_Btn17"       //  推送订单



/**
 * 签到
 */
#define Sign_share       @"Clock_Btn1"       //  分享红包领积分
#define Sign_day_share       @"Clock_Btn2"       //  每日分享
#define Sign_new_authentication       @"Clock_Btn3"       //  新手认证
#define Sign_first_buy_card       @"Clock_Btn4"       //  首次购卡
#define Sign_open_micro_shop       @"Clock_Btn5"       //  开通微店
#define Sign_become_business       @"Clock_Btn6"       //  成为推广先锋

/**
 * 通知中心
 */
#define Notice_setting       @"Clock_Btn7"       //  设置
#define Notice_check_msg       @"Clock_Btn8"       //  查看通知


/**
 * 通知设置
 */
#define Notice_sysytem_on_off       @"NoticeSetUp_Btn1"       //  系统通知开关
#define Notice_friend_msg_on_off       @"NoticeSetUp_Btn2"       //  好友信息开关
#define Notice_receive_push_on_off       @"NoticeSetUp_Btn3"       //  接收推送订单开关
#define Notice_all_day_push_on_off       @"NoticeSetUp_Btn4"       //  全天推送开关
#define Notice_push_time_on_off       @"NoticeSetUp_Btn5"       //  接受推送时间段设置
#define Notice_push_date_on_off       @"NoticeSetUp_Btn6"       //  推送日期设置

/**
 * 微店
 */
#define Micro_generalize       @"MicroShop_Btn1"       //  如何推广
#define Micro_client       @"MicroShop_Btn2"       //  客户申请
#define Micro_product       @"MicroShop_Btn3"       //  微店产品
#define Micro_tatistics       @"MicroShop_Btn4"       //  微店统计
#define Micro_share_card       @"MicroShop_Btn5"       //  分享名片
#define Micro_number       @"MicroShop_Btn6"       //  微店排行
#define Micro_share_micro       @"MicroShop_Btn7"       //  分享微店

/**
 * 微店 ---添加产品第一步
 */
#define Products_next       @"Products_Btn1"       //  下一步
/**
 * 微店 ---添加产品第2步
 */
#define Products_submit       @"Products_Btn2"       //  提交

/**
 * 抢单列表
 */
#define Robbing_push       @"Robbing_Btn1"       //  推送抢单
#define Robbing_push_setting       @"Robbing_Btn2"       //  推送设置
#define Robbing_type_chose       @"Robbing_Btn3"       //  订单类型选择
#define Robbing_city_chose       @"Robbing_Btn4"       //  城市选择
#define Robbing_filter       @"Robbing_Btn5"       //  自定筛选
#define Robbing_check_order_detail       @"Robbing_Btn6"       //  查看订单详情
#define Robbing_get_order       @"Robbing_Btn7"       //  立即抢单
#define Robbing_get_sucess       @"Robbing_Btn8"       //  抢单成功提示
#define RobbingDetail_get_order       @"RobbingDetail_Btn1"       //  立即抢单 详情

/**
 * 抢单列表 ---推送设置
 */
#define Push_setting_on_off       @"PushSetting_Btn1"       //  推送开关
//#define Push_setting_loan_type       @"PushSetting_Btn2"       //  贷款类型
//#define Push_setting_city       @"PushSetting_Btn3"       //  城市
//#define Push_setting_loan_limit       @"PushSetting_Btn4"       //  贷款额度
//#define Push_setting_loan_time       @"PushSetting_Btn5"       //  贷款期限
//#define Push_setting_person_salary       @"PushSetting_Btn6"       //  个人-工资发放形式
//#define Push_setting_person_age       @"PushSetting_Btn7"       //  个人-年龄区间
//#define Push_setting_person_loan_style       @"PushSetting_Btn8"       //  个人-贷款方式
//#define Push_setting_person_limit       @"PushSetting_Btn9"       //  个人-社保缴纳要求
//#define Push_setting_person_fund       @"PushSetting_Btn10"       //  个人-公积金要求
//#define Push_setting_company_type       @"PushSetting_Btn11"       //  企业-企业类型
//#define Push_setting_company_private       @"PushSetting_Btn12"       //  企业-对私流水
//#define Push_setting_company_public       @"PushSetting_Btn13"       //  企业-对公流水
//#define Push_setting_company_license       @"PushSetting_Btn14"       //  企业-营业执照要求
//#define Push_setting_company_guarantee       @"PushSetting_Btn15"       //  企业-担保方式
#define Push_setting_save       @"PushSetting_Btn16"       //  保存推送
/**
 * 抢单列表 ---自动抢单
 */
#define Push_setting_auto       @"PushSetting_Btn17"       //  自动抢单开关
#define Push_setting_robbing_city       @"PushSetting_Btn18"       //  城市
#define Push_setting_robbing_amount       @"PushSetting_Btn19"       //  每日自动抢购数量
#define Push_setting_robbing_condition       @"PushSetting_Btn20"       //  匹配条件设置
#define Push_setting_check_robbing       @"PushSetting_Btn21"       //  查看我的自动抢单
/**
 * 抢单列表 ---自动抢单---自动抢单匹配条件设置
 */
//#define Auto_robbing_loan_type       @"AutoRobbing_Btn1"       //  贷款类型
//#define Auto_robbing_city       @"AutoRobbing_Btn2"       //  城市
//#define Auto_robbing_loan_limit       @"AutoRobbing_Btn3"       //  贷款额度
//#define Auto_robbing_loan_time       @"AutoRobbing_Btn4"       //  贷款期限
//#define Auto_robbing_person_salary       @"AutoRobbing_Btn5"       //  个人-工资发放形式
//#define Auto_robbing_person_age       @"AutoRobbing_Btn6"       //  个人-年龄区间
//#define Auto_robbing_person_loan_style       @"AutoRobbing_Btn7"       //  个人-贷款方式
//#define Auto_robbing_person_limit       @"AutoRobbing_Btn8"       //  个人-社保缴纳要求
//#define Auto_robbing_person_fund       @"AutoRobbing_Btn9"       //  个人-公积金要求
//#define Auto_robbing_company_type       @"AutoRobbing_Btn10"       //  企业-企业类型
//#define Auto_robbing_company_private       @"AutoRobbing_Btn11"       //  企业-对私流水
//#define Auto_robbing_company_public       @"AutoRobbing_Btn12"       //  企业-对公流水
//#define Auto_robbing_company_license      @"AutoRobbing_Btn13"       //  企业-营业执照要求
//#define Auto_robbing_company_guarantee       @"AutoRobbing_Btn14"       //  企业-担保方式
#define Auto_robbing_save       @"AutoRobbing_Btn15"       //  保存匹配条件


/**
 * 客户
 */
#define Customer_type       @"Customer_Btn1"       //  客户类型选择
#define Customer_robbing_all       @"Customer_Btn2"       //  抢单客户-全部
#define Customer_robbing_gold       @"Customer_Btn3"       //  抢单客户-金牌
#define Customer_robbing_vip       @"Customer_Btn4"       //  抢单客户-会员
#define Customer_robbing_tao       @"Customer_Btn5"       //  抢单客户-淘客户
#define Customer_robbing_file       @"Customer_Btn6"       //  抢单客户-归档
#define Customer_micro_all       @"Customer_Btn7"       //  微店客户-全部
#define Customer_micro_file       @"Customer_Btn8"       //  微店客户-归档
#define Customer_input_all       @"Customer_Btn9"       //  导入客户-全部
#define Customer_input_file       @"Customer_Btn10"       //  导入客户-归档
#define Customer_input       @"Customer_Btn11"       //  导入客户-马上导入
#define Customer_check_detail       @"Customer_Btn12"       //  查看客户详情

/**
 * 客户---订单详情页
 */
#define Customer_detail_follow       @"CustomerDetails_Btn1"       //  客户跟踪
#define Customer_detail_send_msg       @"CustomerDetails_Btn2"       //  发短信
#define Customer_detail_call       @"CustomerDetails_Btn3"       //  打电话
#define Customer_detail_back       @"CustomerDetails_Btn4"       //  申请退单
/**
 * 客户---客户跟踪
 */
#define Customer_detail_remark       @"CustomerDetails_Btn5"       //  点评客户
#define Customer_detail_add_follow       @"CustomerDetails_Btn6"       //  添加跟踪
/**
 * 客户---客户跟踪---点评客户
 */
#define Follow_question_type       @"FollowUp_Btn1"       //  客户问题类型选择
#define Follow_evaluate       @"FollowUp_Btn2"       //  对贷款人的评价
#define Follow_save       @"FollowUp_Btn3"       //  保存信息
/**
 * 客户---客户跟踪---添加跟踪
 */
#define Follow_loan_status       @"FollowUp_Btn4"       //  贷款人当前状态
#define Follow_call_remark       @"FollowUp_Btn5"       //  通话备注
#define Follow_time_setting       @"FollowUp_Btn6"       //  提醒时间设置
#define Follow_remark_content       @"FollowUp_Btn7"       //  提醒内容
#define Follow_add       @"FollowUp_Btn8"       //  保存信息
/**
 * 客户---客户跟踪---申请退单
 */
//#define Refund_reason       @"Refund_Btn1"       //  退单原因选择
//#define Refund_instruction       @"Refund_Btn2"       //  补充说明
//#define Refund_submit       @"Refund_Btn3"       //  申请退单提交

/**
 * 消息
 */
#define Msg_friend       @"Message_Btn1"       //  好友
#define Msg_peer       @"Message_Btn2"       //  找同行
#define Msg_talk_to_friend       @"Message_Btn3"       //  选择好友聊天
#define Msg_new_peer       @"Message_Btn4"       //  您的新同行
#define Msg_add_linkman       @"Message_Btn5"       //  添加手机联系人
/**
 * 消息---好友
 */
#define Friend_check_infor       @"Friends_Btn1"       //  查看好友资料
#define Friend_talk_to_friend       @"Friends_Btn2"       //  选择好友聊天
//#define Friend_peer       @"Friends_Btn3"       //  找同行
#define Friend_add_linkman       @"Friends_Btn4"       //  添加手机联系人
/**
 * 消息---找同行
 */
#define Find_peer_organization       @"FindPeers_Btn1"       //  搜索机构
#define Find_peer_city       @"FindPeers_Btn2"       //  城市选择
#define Find_peer_detail       @"FindPeers_Btn3"       //  查看同行资料
#define Find_peer_add       @"FindPeers_Btn4"       //  加同行
/**
 * 消息---您的新同行
 */
#define New_peer_accept       @"NewPeers_Btn1"       //  接受好友请求
#define New_peer_setting       @"NewPeers_Btn2"       //  设置
/**
 * 消息---您的新同行--消息设置
 */
#define New_peer_accept_on_off       @"NewPeersSetUp_Btn1"       //  接受同城推广开关
#define New_peer_friend_detail_on_off       @"NewPeersSetUp_Btn2"       //  好友信息开关

/**
 * 我的
 */
#define My_setting       @"My_Btn1"       //  设置
#define My_coin       @"My_Btn2"       //  积分
#define My_ticket       @"My_Btn3"       //  礼券
#define My_glod       @"My_Btn4"       //  金牌会员卡
#define My_authentication       @"My_Btn5"       //  实名认证
#define My_vip       @"My_Btn6"       //  会员
#define My_buy       @"My_Btn7"       //  购卡
#define My_wallet       @"My_Btn8"       //  钱包
#define My_aotuGet       @"My_Btn9"       //  接受同城推广开关
#define My_push       @"My_Btn10"       //  推广先锋

/**
 * 设置
 */
#define Setting_password       @"SetUp_Btn1"       //  修改密码
#define Setting_black       @"SetUp_Btn2"       //  黑名单
#define Setting_feedback       @"SetUp_Btn3"       //  意见反馈
#define Setting_about       @"SetUp_Btn4"       //  关于信贷圈
#define Setting_about_score       @"SetUpAbout_Btn1"       // 去评分
#define Setting_about_introduce      @"SetUpAbout_Btn2"       //  功能介绍


#define Setting_business       @"SetUp_Btn5"       //  商务合作
#define Setting_exit       @"SetUp_Btn6"       //  退出当前账号

/**
 * 积分
 */
#define Integral       @"integral_Btn1"       //  关于积分

/**
 * 礼券
 */
#define Coupons_no_use       @"Coupons_Btn1"       //  未使用礼券
#define Coupons_used       @"Coupons_Btn2"       //  已使用礼券
#define Coupons_past       @"Coupons_Btn3"       //  过期礼券

/**
 * 金牌会员卡
 */
#define Card_bag_gold       @"CardBag_Btn1"       //  金牌会员卡
#define Card_bag_gold_detail       @"CardBag_Btn2"       //  金牌卡详情页
#define Card_bag_vip       @"CardBag_Btn3"       //  会员卡

/**
 * 金牌会员卡--金牌使用详情
 */
#define Card_bag_detail_grab       @"CardBagDetails_Btn1"       //  去抢单

/**
 * 购卡
 */
#define Purchase_bill       @"Purchase_Btn1"       //  账单
#define Purchase_gold_residue       @"Purchase_Btn2"       //  金牌会员剩余量
#define Purchase_vip_residue       @"Purchase_Btn3"       //  普通会员剩余量
#define Purchase_gold_to_know       @"Purchase_Btn4"       //  金牌会员了解更多
#define Purchase_gold_buy       @"Purchase_Btn5"       //  金牌会员立即购买
#define Purchase_vip_to_know       @"Purchase_Btn6"       //  普通会员了解更多
#define Purchase_vip_buy       @"Purchase_Btn7"       //  普通会员立即购买

/**
 * 购卡 ---选择充值地区
 */
#define Purchase_city       @"PurchaseCity_Btn1"       //  选择充值地区

/**
 * 购卡 ---金牌卡包选择
 */
#define Gold_buy_v1       @"GoldBuy_Btn1"       //  金牌v1购买
#define Gold_buy_v2       @"GoldBuy_Btn2"       //  金牌v2购买
#define Gold_buy_v3       @"GoldBuy_Btn3"       //  金牌v3购买
#define Gold_buy_v4       @"GoldBuy_Btn4"       //  金牌v4购买
#define Gold_buy_v5       @"GoldBuy_Btn5"       //  金牌v5购买
#define Gold_buy_pay       @"GoldBuy_Btn6"       //  立即支付

/**
 * 购卡 ---会员卡包选择
 */
#define Vip_buy_month       @"GoldBuy_Btn7"       //  月卡购买
#define Vip_buy_quarter       @"GoldBuy_Btn8"       //  季卡购买
#define Vip_buy_pay       @"GoldBuy_Btn9"       //  立即支付

/**
 * 购卡 ---会员卡包选择
 */
#define Payment_balance       @"Payment_Btn1"       //  可用余额
#define Payment_pay_money       @"Payment_Btn2"       //  本次支付金额
#define Payment_pay_way       @"Payment_Btn3"       //  选择支付方式
#define Payment_click_pay       @"Payment_Btn4"       //  点击支付
#define Payment_submit       @"Payment_Btn5"       //  确认支付
#define Payment_success_go_on       @"Payment_Btn6"       //  支付成功-继续购买
#define Payment_success_grab       @"Payment_Btn7"       //  支付成功-立刻抢单


/**
 * 钱包
 */
#define Wallet_bill       @"Wallet_Btn1"       //  账单
#define Wallet_buy       @"Wallet_Btn2"       //  立即购卡
#define Wallet_get_money       @"Wallet_Btn3"       //  我要提现
#define Wallet_month_money       @"Wallet_Btn4"       //  本月总收入
#define Wallet_sum_money       @"Wallet_Btn5"       //  累计总收入
#define Wallet_push       @"wallet_Btn6"       //  推广先锋

/**
 * 钱包---账单
 */
#define Bill_all       @"AllBill_Btn1"       //  全部账单
#define Bill_income_all       @"AllBill_Btn2"       //  收入账单-全部
#define Bill_income_recharge       @"AllBill_Btn3"       //  收入账单-充值
#define Bill_income_income       @"AllBill_Btn4"       //  收入账单-收入
#define Bill_income_other       @"AllBill_Btn5"       //  收入账单-其他
#define Bill_expenditure_all       @"AllBill_Btn6"       //  支出账单-全部
#define Bill_expenditure_vip       @"AllBill_Btn7"       //  支出账单-会员卡
#define Bill_expenditure_money       @"AllBill_Btn8"       //  支出账单-提现
#define Bill_expenditure_other       @"AllBill_Btn9"       //  支出账单-其他

/**
 * 钱包---提现
 */
#define Presentation       @"Presentation_Btn1"       //  申请提现

/**
 * 钱包---推广先锋
 */
#define Vanguard_activity_rule       @"Vanguard_Btn1"       //  活动规则
#define Vanguard_register       @"Vanguard_Btn2"       //  帮他注册
#define Vanguard_share_invite       @"Vanguard_Btn3"       //  分享邀请
#define Vanguard_face_invite       @"Vanguard_Btn4"       //  面对面邀请
#define Vanguard_money       @"Vanguard_Btn5"       //  申请提现
#define Vanguard_push_detail       @"Vanguard_Btn6"       //  推广明细

/**
 * 登录
 */
#define Log_in_phone       @"Signin_Btn1"       //  手机号输入
#define Log_in_password       @"Signin_Btn2"       //  密码输入
#define Log_in       @"Signin_Btn3"       //  登录

/**
 * 忘记密码
 */
#define Forgot_password_phone       @"ForgotPassword_Btn1"       //  手机号输入
#define Forgot_password_get_code       @"ForgotPassword_Btn2"       //  获取验证码
#define Forgot_password_verification_code       @"ForgotPassword_Btn3"       //  输入验证码
#define Forgot_password_new_password       @"ForgotPassword_Btn4"       //  输入新密码
#define Forgot_password_submit_password       @"ForgotPassword_Btn5"       //  确认密码
#define Forgot_password_submit       @"ForgotPassword_Btn6"       //  确定

/**
 * 注册
 */
#define Register_city       @"Register_CityChoice"       //  选择城市
#define Register_phone       @"Register_Btn1"       //  手机号输入
#define Register_get_code       @"Register_Btn2"       //  获取验证码
#define Register_verification_code       @"Register_Btn3"       //  验证码输入
#define Register_password       @"Register_Btn4"       //  密码
#define Register_submit_password       @"Register_Btn5"       //  确认密码
#define Register_submit       @"Register_Btn6"       //  注册提交

/**
 * 认证
 */
#define Certification_photo       @"Certification_Btn1"       //  免冠照片
#define Certification_name       @"Certification_Btn2"       //  姓名
#define Certification_id_code       @"Certification_Btn3"       //  身份证号
#define Certification_city       @"Certification_Btn4"       //  所在城市
#define Certification_organization_type       @"Certification_Btn5"       //  机构类型
#define Certification_organization_name       @"Certification_Btn6"       //  机构名称
#define Certification_part       @"Certification_Btn7"       //  所属营业部
#define Certification_id_card       @"Certification_Btn8"       //  身份证
#define Certification_prove       @"Certification_Btn9"       //  资质证明
#define Certification_submit      @"Certification_Btn10"       // 提交审核

/**
 * 认证---身份证提交
 */
#define Id_card_front       @"IDPhoto_Btn1"       //  上传身份证正面
#define Id_card_back       @"IDPhoto_Btn2"       //  上传身份证反面
#define Id_card_hand       @"IDPhoto_Btn3"       //  上传本人手持身份证照片
#define Id_card_submit       @"IDPhoto_Btn4"       //  提交

/**
 * 认证---身份证提交
 */
#define Aptitude_work_card       @"Qualifications_Btn1"       //  工牌
#define Aptitude_name_card       @"Qualifications_Btn2"       //  名片
#define Aptitude_contract       @"Qualifications_Btn3"       //  合同签字页
#define Aptitude_logo_photo       @"Qualifications_Btn4"       //  logo合影
#define Aptitude_business       @"Qualifications_Btn5"       //  营业执照
#define Aptitude_submit       @"Qualifications_Btn6"       //  提交

/**
 * 启动app
 */
#define Star_up       @"StartUp"       //  启动app

/**
 * 刷新
 */
#define Homepage_Refresh       @"Homepage_Refresh"       //  首页刷新
#define Robbing_Refresh       @"Robbing_Refresh"       //  实时抢单刷新
#define PushRobbing_Refresh       @"PushRobbing_Refresh"       //  推送抢单刷新

/**
 * 加载
 */
#define Robbing_Load       @"Robbing_Load"       //  实时抢单加载
#define PushRobbing_Load       @"PushRobbing_Load"       //  推送抢单加载
#define Customer_Load       @"Customer_Load"       //  客户加载

/**
 * H5页面
 */
#define Browser       @"Browser"       //  打开h5页面

/**
 * 返回
 */
#define Browser_Return       @"Browser_Return"       //  H5页返回
#define Robbing_Return       @"Robbing_Return"       //  实时抢单返回
#define PushRobbing_Return       @"PushRobbing_Return"       //  推送抢单返回
#define CustomerDetails_Return       @"CustomerDetails_Return"       //  客户详情返回
#define RobbingDetails_Return       @"RobbingDetails_Return"       //  订单详情返回
#define Certification_Return       @"Certification_Return"       //  实名认证返回
#define MyIntegral_Return       @"MyIntegral_Return"       //  我的积分返回
#define MyCoupons_Return       @"MyCoupons_Return"       //  我的礼券返回
#define MyCardBag_Return       @"MyCardBag_Return"       //  我的会员返回
#define MyNameAuth_Return       @"MyNameAuth_Return"       //  实名认证返回
#define MyPurchase_Return       @"MyPurchase_Return"       //  会员中心返回
#define PurGoldBuy_Return       @"PurGoldBuy_Return"       //  金牌卡包选择返回
#define PurMemberBuy_Return       @"PurMemberBuy_Return"       //  普通会员卡包选择返回
#define MyWallet_Return       @"MyWallet_Return"       //  钱包返回
#define WalletBill_Return       @"WalletBill_Return"       //  账单返回
#define WalletPresentation_Return       @"WalletPresentation_Return"       //  提现返回

/**
 * Home键退出
 */
#define Home_Sign_out       @"HomeSignOut"       //  Home键退出

/**
 * 分享
 */
#define Share       @"Share"       //  公共分享组件


#endif /* EventMarkTable_h */
