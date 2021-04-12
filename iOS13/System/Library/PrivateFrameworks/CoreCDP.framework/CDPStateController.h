/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
*/

#import <CoreCDP/CDPController.h>

@interface CDPStateController : CDPController
-(BOOL)isManateeAvailable:(id*)arg1 ;
-(void)startCircleApplicationApprovalServer:(/*^block*/id)arg1 ;
-(void)handleCloudDataProtectionStateWithCompletion:(/*^block*/id)arg1 ;
-(void)repairCloudDataProtectionStateWithCompletion:(/*^block*/id)arg1 ;
-(void)localSecretChangedTo:(id)arg1 secretType:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)deleteRecoveryKey:(/*^block*/id)arg1 ;
-(void)generateNewRecoveryKey:(/*^block*/id)arg1 ;
-(void)attemptToEscrowPreRecord:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleURLActionWithInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)finishOfflineLocalSecretChangeWithCompletion:(/*^block*/id)arg1 ;
-(void)recoverAndSynchronizeWithSquirrel:(/*^block*/id)arg1 ;
-(void)recoverWithSquirrel:(/*^block*/id)arg1 ;
-(void)attemptToEscrowPreRecord:(id)arg1 preRecordUUID:(id)arg2 secretType:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)shouldPerformRepair:(id*)arg1 ;
-(BOOL)deleteRecoveryKeyWithError:(id*)arg1 ;
-(id)generateRandomRecoveryKey:(id*)arg1 ;
-(void)handleURLActionWithInfo:(id)arg1 ;
@end

