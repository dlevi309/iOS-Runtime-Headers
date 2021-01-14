/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <libobjc.A.dylib/SYSyncEngineResponder.h>
#import <libobjc.A.dylib/SYStateLoggable.h>

@protocol SYServiceDelegate, OS_dispatch_queue, OS_dispatch_source, OS_os_activity;
@class NSDictionary, PBCodable, NSString, SYSession, NSObject, _SYMultiSuspendableQueue, SYPersistentStore, SYSyncEngine, SYVectorClock, NSMutableSet, _SYQueuedStartSession, SYDevice, NSMutableArray, NSArray;

@interface SYService : NSObject <SYSyncEngineResponder, SYStateLoggable> {

	NSString* _serviceName;
	long long _defaultPriority;
	NSDictionary* _defaultOptions;
	NSDictionary* _customIDSOptions;
	SYSession* _currentSession;
	id<SYServiceDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _incomingIOQueue;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	_SYMultiSuspendableQueue* _sessionQueue;
	NSObject*<OS_dispatch_source> _processSignalSource;
	SYPersistentStore* _persistentStore;
	os_unfair_lock_s _persistentStoreLock;
	SYSyncEngine* _syncEngine;
	SYVectorClock* _vectorClock;
	NSMutableSet* _rejectingV1SyncSessions;
	NSString* _inFlightSyncRequestIdentifier;
	_SYQueuedStartSession* _queuedStartSession;
	SYDevice* _targetedDevice;
	NSMutableArray* _onSessionEnd;
	NSObject*<OS_os_activity> _serviceActivity;
	unsigned long long _stateHandle;
	os_unfair_lock_s _flagLock;
	struct {
		unsigned isMaster : 1;
		unsigned hasChanges : 1;
		unsigned needsReset : 1;
		unsigned hasPairingStore : 1;
		unsigned isRunning : 1;
		unsigned registeredForPairingNotifications : 1;
		unsigned remoteProtocolVersion : 3;
		unsigned remoteDeviceIsWatch : 1;
		unsigned isObservingRemoteDeviceProperties : 1;
		unsigned requestedEngineType : 3;
		unsigned assignedEngineType : 3;
		unsigned suspendedForQWS : 1;
	}  _flags;
	unsigned _engineType;
	NSString* _peerID;
	double _defaultMessageTimeout;
	double _sessionStalenessInterval;
	long long _sendingBufferCap;
	NSArray* _aggdKeys;
	NSString* _generationID;

}

@property (nonatomic,copy) NSDictionary * customIDSOptions; 
@property (nonatomic,readonly) BOOL hasPairingStore; 
@property (nonatomic,copy,readonly) NSArray * aggdKeys;                                //@synthesize aggdKeys=_aggdKeys - In the implementation block
@property (nonatomic,readonly) SYSyncEngine * syncEngine;                              //@synthesize syncEngine=_syncEngine - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) SYPersistentStore * persistentStore; 
@property (nonatomic,readonly) _SYMultiSuspendableQueue * sessionQueue;                //@synthesize sessionQueue=_sessionQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_activity> serviceActivity;              //@synthesize serviceActivity=_serviceActivity - In the implementation block
@property (nonatomic,readonly) NSString * peerID;                                      //@synthesize peerID=_peerID - In the implementation block
@property (assign,nonatomic) unsigned engineType;                                      //@synthesize engineType=_engineType - In the implementation block
@property (nonatomic,readonly) NSString * generationID;                                //@synthesize generationID=_generationID - In the implementation block
@property (nonatomic,readonly) NSString * name;                                        //@synthesize serviceName=_serviceName - In the implementation block
@property (assign,nonatomic) long long priority;                                       //@synthesize defaultPriority=_defaultPriority - In the implementation block
@property (nonatomic,readonly) BOOL isMasterStore; 
@property (assign,nonatomic) double defaultMessageTimeout;                             //@synthesize defaultMessageTimeout=_defaultMessageTimeout - In the implementation block
@property (assign,nonatomic) double sessionStalenessInterval;                          //@synthesize sessionStalenessInterval=_sessionStalenessInterval - In the implementation block
@property (nonatomic,readonly) BOOL targetIsInProximity; 
@property (nonatomic,readonly) BOOL targetIsConnected; 
@property (readonly) SYSession * currentSession; 
@property (nonatomic,retain) NSDictionary * options;                                   //@synthesize defaultOptions=_defaultOptions - In the implementation block
@property (assign,nonatomic) long long sendingBufferCap;                               //@synthesize sendingBufferCap=_sendingBufferCap - In the implementation block
@property (nonatomic,readonly) NSDictionary * extraTransportOptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) PBCodable * stateForLogging; 
-(SYPersistentStore *)persistentStore;
-(void)setSessionStalenessInterval:(double)arg1 ;
-(double)defaultMessageTimeout;
-(BOOL)_shouldSession:(id)arg1 fromPeer:(id)arg2 supercedeSession:(id)arg3 ofAge:(double)arg4 collisionDetected:(BOOL*)arg5 ;
-(void)_peerRejectedVersion:(id)arg1 completion:(/*^block*/id)arg2 ;
-(double)sessionStalenessInterval;
-(BOOL)resume:(id*)arg1 ;
-(void)suspend;
-(void)_handleRestartSession:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleEndSession:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dataStreamWithMetadata:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_newMessageHeader;
-(BOOL)isMasterStore;
-(NSString *)generationID;
-(void)_enqueueIncomingStartSessionRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)init;
-(void)_v1_handleFullSyncRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleError:(id)arg1 ;
-(void)handleSyncRequest:(id)arg1 ofType:(unsigned short)arg2 response:(/*^block*/id)arg3 ;
-(void)_swapSessionForVersionChange;
-(void)_downgradeEngineForVersion:(int)arg1 ;
-(BOOL)_request:(id)arg1 hasValidSessionIDForSession:(id)arg2 response:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_handleEndSessionResponse:(id)arg1 error:(id*)arg2 ;
-(void)setNeedsResetSync;
-(BOOL)targetIsConnected;
-(id)_claimOwnershipOfFileAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)_initializeMessaging:(id*)arg1 ;
-(NSDictionary *)options;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(NSString *)peerID;
-(id)_makeSessionForDeltaSync:(BOOL)arg1 ;
-(unsigned)engineType;
-(void)_setupPairingNotifications;
-(BOOL)_initializeServiceDB:(id*)arg1 ;
-(void)_suspend;
-(SYSyncEngine *)syncEngine;
-(void)setOptions:(NSDictionary *)arg1 ;
-(void)enqueuedMessageWithID:(id)arg1 context:(id)arg2 ;
-(void)sendData:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setHasChangesAvailable;
-(NSArray *)aggdKeys;
-(NSString *)name;
-(void)sessionFailedToCancelMessageUUIDs:(id)arg1 ;
-(void)_handleSyncBatch:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDefaultMessageTimeout:(double)arg1 ;
-(BOOL)_handleSyncBatchResponse:(id)arg1 error:(id*)arg2 ;
-(BOOL)_v1_handleBatchEndResponse:(id)arg1 error:(id*)arg2 ;
-(void)currentDeviceConnectionChanged:(BOOL)arg1 ;
-(void)_setupPairingStoreWithDevice:(id)arg1 ;
-(void)_deviceOSInfoChanged:(id)arg1 ;
-(id)dataStreamWithMetadata:(id)arg1 options:(id)arg2 identifier:(id*)arg3 error:(id*)arg4 ;
-(void)setEngineType:(unsigned)arg1 ;
-(id)initWithService:(id)arg1 priority:(long long)arg2 qos:(unsigned)arg3 asMasterStore:(BOOL)arg4 options:(id)arg5 ;
-(NSDictionary *)customIDSOptions;
-(void)_ifDelegateImplements:(SEL)arg1 do:(/*^block*/id)arg2 then:(/*^block*/id)arg3 ;
-(void)_wrapUpCurrentSession:(id)arg1 ;
-(BOOL)willAcceptMessageWithHeader:(id)arg1 messageID:(id)arg2 ;
-(void)_signalPairingStoreAvailable;
-(BOOL)hasPairingStore;
-(BOOL)sendData:(id)arg1 options:(id)arg2 identifier:(id*)arg3 error:(id*)arg4 ;
-(void)_postVersionRejectionMessageForMessageWithID:(id)arg1 ;
-(long long)sendingBufferCap;
-(BOOL)_handleResetResponse:(id)arg1 error:(id*)arg2 ;
-(void)_upgradeEngineTo:(unsigned)arg1 ;
-(BOOL)_protocolVersion:(int)arg1 supportsEngineType:(unsigned)arg2 ;
-(id)_chooseBetweenCollidingSessions:(id)arg1 :(id)arg2 ;
-(NSObject*<OS_os_activity>)serviceActivity;
-(_SYMultiSuspendableQueue *)sessionQueue;
-(void)handleFileTransfer:(id)arg1 metadata:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_removePairingStoreDevice;
-(void)_v1_handleChangeMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithService:(id)arg1 priority:(long long)arg2 asMasterStore:(BOOL)arg3 options:(id)arg4 ;
-(BOOL)_v1_handleBatchChunkAck:(id)arg1 error:(id*)arg2 ;
-(NSDictionary *)extraTransportOptions;
-(void)_v1_handleBatchSyncChunk:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)handleSyncError:(id)arg1 forMessageWithIdentifier:(id)arg2 ;
-(void)_processPendingChanges;
-(void)_vectorClockUpdated;
-(void)currentDeviceProximityChanged:(BOOL)arg1 ;
-(void)handleOutOfBandData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(PBCodable *)stateForLogging;
-(void)_signalPairingStoreUnavailable;
-(id)_sessionFromIncomingStartRequest:(id)arg1 ;
-(void)handleSyncResponse:(id)arg1 ofType:(unsigned short)arg2 completion:(/*^block*/id)arg3 ;
-(void)sessionDidEnd:(id)arg1 withError:(id)arg2 ;
-(void)_swapEngineTo:(unsigned)arg1 ;
-(void)_setProtocolVersionForRemoteOSVersion:(id)arg1 build:(id)arg2 remoteIsWatch:(BOOL)arg3 switchingEngines:(BOOL)arg4 ;
-(SYSession *)currentSession;
-(void)_deviceTargetabilityChanged:(id)arg1 ;
-(void)_switchToNewTargetedDevice:(id)arg1 ;
-(id)_makeSyncEngineOfType:(unsigned)arg1 ;
-(void)_v1_handleBatchSyncEnd:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCustomIDSOptions:(NSDictionary *)arg1 ;
-(void)_updateMetaProtocolInfoForDevice:(id)arg1 ;
-(void)_v1_handleSyncAllObjects:(id)arg1 completion:(/*^block*/id)arg2 ;
-(long long)priority;
-(void)_deviceRemoved:(id)arg1 ;
-(void)_sendResetRequest;
-(void)serializeForIncomingSession:(/*^block*/id)arg1 ;
-(BOOL)_handleRestartSessionResponse:(id)arg1 error:(id*)arg2 ;
-(void)setSendingBufferCap:(long long)arg1 ;
-(BOOL)_v1_handleFullSyncRequestAck:(id)arg1 error:(id*)arg2 ;
-(BOOL)_handleStartSessionResponse:(id)arg1 error:(id*)arg2 ;
-(void)_copyPeerClockFromMessageHeaderIfNecessary:(id)arg1 ;
-(void)_v1_handleBatchSyncStart:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleResetRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setPriority:(long long)arg1 ;
-(void)deliveredMessageWithID:(id)arg1 context:(id)arg2 ;
-(void)sentMessageWithID:(id)arg1 context:(id)arg2 ;
-(void)dealloc;
-(BOOL)targetIsInProximity;
-(id)_pathForDataStore;
-(void)_whenSessionEnds:(/*^block*/id)arg1 ;
-(void)_handleStartSession:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_dealWithPotentiallyStallingCurrentSession;
@end

