/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
*/


@protocol UMUserSwitchManagement <NSObject>
@required
-(void)switchToLoginUserWithCompletionHandler:(/*^block*/id)arg1;
-(void)switchToLoginUserWithError:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)logoutToLoginSessionWithCompletionHandler:(/*^block*/id)arg1;
-(void)directSwitchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 preferences:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)loginUICheckInWithCompletionHandler:(/*^block*/id)arg1;
-(void)registerUserSwitchStakeHolder:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)registerUserSyncStakeholder:(id)arg1 withMachServiceName:(id)arg2;
-(void)unregisterStakeHolder:(id)arg1 status:(unsigned long long)arg2 reason:(id)arg3;
-(void)terminateSyncWithCompletionHandler:(/*^block*/id)arg1;
-(void)resumeSync;
-(void)switchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)registerUserSwitchStakeHolder:(id)arg1;

@end

