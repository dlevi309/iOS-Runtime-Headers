/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
*/


@protocol CoreTelephonyClientSMSDelegate <NSObject>
@optional
-(void)postMessageProgressNotification:(id)arg1 messageID:(long long)arg2 totalBytesSent:(long long)arg3 dataLength:(long long)arg4;
-(void)smsMessageCellBroadcastReceived:(id)arg1 notificationDict:(id)arg2 additionalDict:(id)arg3;
-(void)postMmsDataActivationFailed:(id)arg1 failureNotification:(id)arg2;
-(void)mmsConfigurationChangedNotification:(id)arg1 changed:(BOOL)arg2;
-(void)smsMessageReceivedDeferred:(id)arg1 msgID:(long long)arg2;
-(void)mmsMessageReceivedDeferred:(id)arg1 msgID:(long long)arg2;
-(void)smsMessageTestMessageReceived:(id)arg1 body:(id)arg2 address:(id)arg3;
-(void)smsReadyStateChanged:(id)arg1 info:(BOOL)arg2;
-(void)postSUPLInitNotification:(id)arg1 body:(id)arg2;
-(void)postSUPLInitNotification:(id)arg1 data:(id)arg2;
-(void)postSmscAddressAvailable:(id)arg1 smsc:(id)arg2;
-(void)smsMessageReceived:(id)arg1 msgID:(long long)arg2;
-(void)smsMessageClass0Received:(id)arg1 body:(id)arg2 address:(id)arg3;
-(void)postMMSMessageSent:(id)arg1 success:(BOOL)arg2 messageID:(long long)arg3 err1:(long long)arg4 err2:(long long)arg5;
-(void)mmsMessageReceived:(id)arg1 msgID:(long long)arg2;
-(void)postSMSMessageSent:(id)arg1 success:(BOOL)arg2 messageID:(long long)arg3 err1:(long long)arg4 err2:(long long)arg5;

@end

