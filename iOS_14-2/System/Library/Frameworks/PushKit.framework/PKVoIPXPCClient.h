/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PushKit.framework/PushKit
*/


@protocol PKVoIPXPCClient
@optional
-(void)voipRegistrationFailed;

@required
-(void)voipPayloadReceived:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)voipPayloadReceived:(id)arg1 mustPostCall:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(void)voipRegistrationSucceededWithDeviceToken:(id)arg1;

@end

