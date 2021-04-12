/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AskPermission.framework/AskPermission
*/


@interface APRequestHandler : NSObject
+(void)addRequestWithURL:(id)arg1 account:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)localApproveRequestWithItemIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)updateRequestWithIdentifier:(id)arg1 action:(long long)arg2 completion:(/*^block*/id)arg3 ;
+(void)resetAccountWithType:(long long)arg1 ;
+(void)presentProductPageWithTitle:(id)arg1 body:(id)arg2 approve:(id)arg3 decline:(id)arg4 itemIdentifier:(id)arg5 previewURL:(id)arg6 ;
+(void)didReceiveStorePushNotificationWithPayload:(id)arg1 ;
+(void)startDaemon;
@end

