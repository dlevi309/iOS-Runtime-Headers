/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyRPC.framework/TelephonyRPC
*/

#import <TelephonyRPC/TelephonyRPC-Structs.h>
#import <libobjc.A.dylib/SYServiceDelegate.h>
#import <libobjc.A.dylib/PSYSyncCoordinatorDelegate.h>
#import <libobjc.A.dylib/NPHVMSessionDelegate.h>

@protocol OS_dispatch_queue, OS_os_transaction, OS_dispatch_semaphore;
@class NPSDomainAccessor, NSObject, NSMutableArray, PSYSyncCoordinator, NPHVMSyncSessionManager, PSYServiceSyncSession, VMVoicemailManager, SYService, NSString;

@interface VoicemailCompanionReplication : NSObject <SYServiceDelegate, PSYSyncCoordinatorDelegate, NPHVMSessionDelegate> {

	NPSDomainAccessor* _domainAccessor;
	opaque_pthread_mutex_t _domainAccessorMutexLock;
	NSObject*<OS_dispatch_queue> _companionSyncQueue;
	NSObject*<OS_dispatch_queue> _concurrentQueue;
	NSObject*<OS_dispatch_queue> _vmSyncServiceQueue;
	NSMutableArray* _vmAfterSyncComplete;
	PSYSyncCoordinator* _coordinator;
	NPHVMSyncSessionManager* _vmSyncSessionManager;
	PSYServiceSyncSession* _vmServiceSyncSession;
	opaque_pthread_mutex_t _syncTransactionMutex;
	NSObject*<OS_os_transaction> _syncTransaction;
	VMVoicemailManager* _voicemailManager;
	BOOL _deltaSyncSuccessful;
	NSObject*<OS_dispatch_semaphore> waitForFirstSyncRestrictionSemaphore;
	BOOL _didSuspendCompanionSyncQueue;
	NSObject*<OS_dispatch_semaphore> vmdIsReadySemaphore;
	BOOL _syncRestrictionsAtStartup;
	BOOL _sigtermCalled;
	SYService* _vmSyncService;

}

@property (assign) BOOL sigtermCalled;                               //@synthesize sigtermCalled=_sigtermCalled - In the implementation block
@property (nonatomic,retain) SYService * vmSyncService;              //@synthesize vmSyncService=_vmSyncService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_registerForNotifications;
-(BOOL)service:(id)arg1 startSession:(id)arg2 error:(id*)arg3 ;
-(id)init;
-(void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2 ;
-(void)service:(id)arg1 encounteredError:(id)arg2 context:(id)arg3 ;
-(void)syncSession:(id)arg1 applyChanges:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)syncSession:(id)arg1 didEndWithError:(id)arg2 ;
-(BOOL)syncSession:(id)arg1 resetDataStoreWithError:(id*)arg2 ;
-(void)serviceDidPairDevice:(id)arg1 ;
-(void)reportProgress:(double)arg1 ;
-(void)service:(id)arg1 sessionEnded:(id)arg2 error:(id)arg3 ;
-(void)syncCoordinator:(id)arg1 didInvalidateSyncSession:(id)arg2 ;
-(void)syncCoordinatorDidChangeSyncRestriction:(id)arg1 ;
-(void)dealloc;
-(void)_handleVoicemailsChangedNotification:(id)arg1 ;
-(void)_deltaSyncIsReunion:(BOOL)arg1 ;
-(void)_performAfterFirstDeviceUnlockAndSyncRestrictionNone:(/*^block*/id)arg1 ;
-(id)vmMetaVoicemailsToSync;
-(id)voicemailChangeSetFrom:(id)arg1 ;
-(id)listOfVoicemailsToSync;
-(id)remoteVoicemails;
-(SYService *)vmSyncService;
-(void)_initializeDomainAccessor;
-(void)setRemoteVoicemails:(id)arg1 ;
-(void)_retrySyncSession:(id)arg1 ;
-(void)removeFromRemoteVoicemails:(id)arg1 ;
-(id)changeSetForRemoteVoicemails:(id)arg1 fromVMVoicemails:(id)arg2 ;
-(void)_handleVoicemailSubscriptionStateStatusChanged:(id)arg1 ;
-(void)waitForVMDToBeUpAndRunning;
-(void)_enqueueAllVoicemailsAndLockSyncTransactionMutex;
-(long long)indexOfVoicemail:(id)arg1 inArray:(id)arg2 ;
-(void)handleSIGTERM;
-(void)setVmSyncService:(SYService *)arg1 ;
-(BOOL)sigtermCalled;
-(void)setSigtermCalled:(BOOL)arg1 ;
@end

