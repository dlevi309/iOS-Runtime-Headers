/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
*/


@protocol UMUserSwitchManagement <NSObject>
@required
-(void)switchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)directSwitchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 preferences:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)switchToLoginUserWithCompletionHandler:(/*^block*/id)arg1;
-(void)registerUserSwitchStakeHolder:(id)arg1;
-(void)loginUICheckInWithCompletionHandler:(/*^block*/id)arg1;
-(void)registerUserSyncStakeholder:(id)arg1 withMachServiceName:(id)arg2;
-(void)unregisterStakeHolder:(id)arg1 status:(unsigned long long)arg2 reason:(id)arg3;
-(void)switchToLoginUserWithError:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)terminateSyncWithCompletionHandler:(/*^block*/id)arg1;
-(void)logoutToLoginSessionWithCompletionHandler:(/*^block*/id)arg1;
-(void)resumeSync;
-(void)registerUserSwitchStakeHolder:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end

