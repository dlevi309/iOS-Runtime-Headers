/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
*/


@protocol UMUserSwitchManagement_Private <NSObject>
@required
-(void)suspendQuotasWithCompletionHandler:(/*^block*/id)arg1;
-(void)resumeQuotas;
-(void)switchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 preferences:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)registerCriticalUserSwitchStakeHolder:(id)arg1;
-(void)userInteractionIsEnabled;

@end

