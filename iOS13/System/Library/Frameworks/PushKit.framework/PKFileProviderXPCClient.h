/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PushKit.framework/PushKit
*/


@protocol PKFileProviderXPCClient
@optional
-(void)fileProviderRegistrationFailed;

@required
-(void)fileProviderRegistrationSucceededWithDeviceToken:(id)arg1;
-(void)fileProviderPayloadReceived:(id)arg1;

@end

