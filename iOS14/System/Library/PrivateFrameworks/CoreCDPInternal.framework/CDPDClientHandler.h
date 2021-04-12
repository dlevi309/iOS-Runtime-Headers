/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
*/

#import <libobjc.A.dylib/CDPDaemonProtocol.h>

@class NSXPCConnection;

@interface CDPDClientHandler : NSObject <CDPDaemonProtocol> {

	NSXPCConnection* _connection;
	unsigned long long _entitlements;
	unsigned long long _clientType;
	id _notificationObject;

}
-(void)_removeObserver;
-(void)setUserVisibleKeychainSyncEnabled:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)removeNonViewAwarePeersFromCircleWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)initWithConnection:(id)arg1 entitlements:(unsigned long long)arg2 clientType:(unsigned long long)arg3 ;
-(BOOL)_allowStateMachineAccess;
-(void)_startObservingConnectionStateForRepairWithStateMachine:(id)arg1 ;
-(void)startCircleApplicationApprovalServerWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)postFollowUpWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)attemptToEscrowPreRecord:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_allowFollowUps;
-(BOOL)_allowDataRecovery;
-(void)_performRecoveryWithContext:(id)arg1 uiProvider:(id)arg2 authProvider:(id)arg3 errorProviuder:(id)arg4 resultParser:(id)arg5 secureBackUpController:(id)arg6 completion:(/*^block*/id)arg7 ;
-(BOOL)_allowRecoveryKey;
-(void)handleCloudDataProtectionStateWithContext:(id)arg1 uiProvider:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)repairCloudDataProtectionStateWithContext:(id)arg1 uiProvider:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)shouldPerformRepairForContext:(id)arg1 forceFetch:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)recoverAndSynchronizeSquirrelWithContext:(id)arg1 uiProvider:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)recoverSquirrelWithContext:(id)arg1 uiProvider:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)localSecretChangedTo:(id)arg1 secretType:(unsigned long long)arg2 context:(id)arg3 uiProvider:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)finishOfflineLocalSecretChangeWithContext:(id)arg1 uiProvider:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)generateNewRecoveryKeyWithContext:(id)arg1 uiProvider:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deleteRecoveryKeyWithContext:(id)arg1 uiProvider:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)generateRandomRecoveryKeyWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)isICDPEnabledForDSID:(id)arg1 checkWithServer:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)hasLocalSecretWithCompletion:(/*^block*/id)arg1 ;
-(void)isUserVisibleKeychainSyncEnabledWithCompletion:(/*^block*/id)arg1 ;
-(void)performRecoveryWithContext:(id)arg1 uiProvider:(id)arg2 authProvider:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)clearFollowUpWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)attemptToEscrowPreRecord:(id)arg1 preRecordUUID:(id)arg2 secretType:(unsigned long long)arg3 context:(id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)_allowUtilityAccess;
@end
