/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PushKit.framework/PushKit
*/


@protocol PKComplicationXPCClient
@optional
-(void)complicationRegistrationFailed;

@required
-(void)complicationPayloadReceived:(id)arg1;
-(void)complicationRegistrationSucceededWithDeviceToken:(id)arg1;

@end

