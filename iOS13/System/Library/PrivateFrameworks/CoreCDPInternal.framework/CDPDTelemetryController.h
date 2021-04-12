/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
*/


@interface CDPDTelemetryController : NSObject
+(id)sharedInstance;
-(void)pcsAlreadyMigrated;
-(void)pcsMigrationSucceeded;
-(void)pcsMigrationFailed;
-(void)pcsRollbackSucceeded;
-(void)pcsRollbackFailed;
-(void)signInSucceededWithIncorrectICSCAttemptCount:(unsigned long long)arg1 didUseRemoteApproval:(BOOL)arg2 ;
-(void)signInFailedDueIncorrectICSCAttempts;
-(void)stateMachineFailureDueToSyncFailure;
-(void)didAttemptEscrowPreRecord;
-(void)didChangeLocalSecret;
-(void)didRemoveLocalSecret;
-(void)stateMachineStartedFromClient:(unsigned long long)arg1 ;
-(void)signInWithUserElectingResetProtectedData;
-(void)signInWithUserSkippingFlow;
-(void)piggybackAttempt;
-(void)piggybackSuccess;
-(void)didLockAccount;
-(void)didUnlockAccount;
-(void)signInFailedDueToLockedAccount;
@end

