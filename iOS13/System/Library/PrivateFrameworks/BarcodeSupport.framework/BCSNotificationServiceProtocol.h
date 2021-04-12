/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
*/


@protocol BCSNotificationServiceProtocol
@required
-(void)didReceiveNotificationResponse:(id)arg1;
-(void)notifyParsedCodeWithData:(id)arg1 codePayload:(id)arg2 shouldReplacePreviousNotifications:(BOOL)arg3 reply:(/*^block*/id)arg4;
-(void)cancelNotificationsForCodeType:(long long)arg1;

@end

