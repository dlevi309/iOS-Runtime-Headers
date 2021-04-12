/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
*/

#import <CoreCDP/CDPController.h>

@interface CDPStateController : CDPController
-(void)recoverWithSquirrel:(/*^block*/id)arg1 ;
-(void)handleURLActionWithInfo:(id)arg1 ;
-(void)localSecretChangedTo:(id)arg1 secretType:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isManateeAvailable:(id*)arg1 ;
-(void)handleURLActionWithInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)attemptToEscrowPreRecord:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)finishOfflineLocalSecretChangeWithCompletion:(/*^block*/id)arg1 ;
-(void)generateNewRecoveryKey:(/*^block*/id)arg1 ;
-(void)recoverAndSynchronizeWithSquirrel:(/*^block*/id)arg1 ;
-(void)startCircleApplicationApprovalServer:(/*^block*/id)arg1 ;
-(void)repairCloudDataProtectionStateWithCompletion:(/*^block*/id)arg1 ;
-(void)deleteRecoveryKey:(/*^block*/id)arg1 ;
-(void)attemptToEscrowPreRecord:(id)arg1 preRecordUUID:(id)arg2 secretType:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(id)generateRandomRecoveryKey:(id*)arg1 ;
-(void)handleCloudDataProtectionStateWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)shouldPerformRepairWithOptionForceFetch:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)deleteRecoveryKeyWithError:(id*)arg1 ;
@end

