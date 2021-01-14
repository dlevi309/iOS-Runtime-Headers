/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@protocol NEExtensionAppPushProviderProtocol <NEExtensionProviderProtocol>
@required
-(void)setProviderConfiguration:(id)arg1;
-(void)reportIncomingCall:(id)arg1;
-(void)sendTimerEvent;
-(void)startConnectionWithProviderConfig:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)stopWithReason:(int)arg1 completionHandler:(/*^block*/id)arg2;
-(void)sendOutgoingCallMessage:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end

