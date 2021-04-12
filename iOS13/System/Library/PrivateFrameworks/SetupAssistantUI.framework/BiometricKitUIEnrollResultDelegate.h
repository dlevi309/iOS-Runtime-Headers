/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
*/


@protocol BiometricKitUIEnrollResultDelegate <NSObject>
@optional
-(void)enrollResult:(int)arg1 identity:(id)arg2;
-(void)generateAuthToken;

@required
-(void)enrollResult:(int)arg1 bkIdentity:(id)arg2;

@end

