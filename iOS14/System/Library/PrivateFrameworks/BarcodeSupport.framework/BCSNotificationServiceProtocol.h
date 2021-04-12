/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
*/


@protocol BCSNotificationServiceProtocol
@required
-(void)didReceiveNotificationResponse:(id)arg1;
-(void)notifyParsedCodeWithData:(id)arg1 codePayload:(id)arg2 shouldReplacePreviousNotifications:(BOOL)arg3 reply:(/*^block*/id)arg4;
-(void)cancelNotificationsForCodeType:(long long)arg1;
-(void)startNFCReaderWithDelegate:(id)arg1;
-(void)stopNFCReader;

@end

