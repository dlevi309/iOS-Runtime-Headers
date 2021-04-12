/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
*/


@protocol UMUserSwitchManagement_Private <NSObject>
@required
-(void)suspendQuotasWithCompletionHandler:(/*^block*/id)arg1;
-(void)resumeQuotas;
-(void)userInteractionIsEnabled;
-(void)registerCriticalUserSwitchStakeHolder:(id)arg1;
-(void)switchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 preferences:(id)arg4 completionHandler:(/*^block*/id)arg5;

@end

