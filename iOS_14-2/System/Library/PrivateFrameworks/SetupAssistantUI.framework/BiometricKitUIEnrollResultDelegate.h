/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
*/


@protocol BiometricKitUIEnrollResultDelegate <NSObject>
@optional
-(void)enrollResult:(int)arg1 identity:(id)arg2;
-(void)generateAuthToken;

@required
-(void)enrollResult:(int)arg1 bkIdentity:(id)arg2;

@end

