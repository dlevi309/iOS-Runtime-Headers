/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/NRDevicePropertyObserver.h>
#import <libobjc.A.dylib/HDSyncStore.h>

@protocol HDNanoSyncStoreDelegate;
@class NSString, HDNanoPairingEntity, NSMutableDictionary, NSMutableArray, NSUUID, NSDate, NSError, NSArray, HDProfile, IDSDevice, NRDevice, HDNanoSyncRestoreSession, NSSet, HKNanoSyncPairedDeviceInfo;

@interface HDNanoSyncStore : NSObject <NRDevicePropertyObserver, HDSyncStore> {

	NSString* _remoteSystemBuildVersion;
	NSString* _remoteProductType;
	HDNanoPairingEntity* _pairingEntity;
	NSMutableDictionary* _pendingRequestContexts;
	int _protocolVersion;
	BOOL _active;
	BOOL _invalidated;
	NSMutableArray* _incomingSyncObserverTimers;
	NSUUID* _lastIncompleteIncomingSyncUUID;
	NSDate* _lastIncompleteIncomingSyncDate;
	NSDate* _lastCompleteIncomingSyncDate;
	NSError* _lastCompleteIncomingSyncError;
	NSMutableDictionary* _expectedSequenceNumbers;
	NSArray* _orderedSyncEntities;
	BOOL _master;
	BOOL _needsSyncOnUnlock;
	HDProfile* _profile;
	IDSDevice* _identityServicesDevice;
	NRDevice* _nanoRegistryDevice;
	id<HDNanoSyncStoreDelegate> _delegate;
	long long _restoreState;
	HDNanoSyncRestoreSession* _restoreSession;
	NSSet* _obliteratedDatabaseUUIDs;

}

@property (assign,nonatomic,__weak) HDProfile * profile;                                   //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) IDSDevice * identityServicesDevice;                           //@synthesize identityServicesDevice=_identityServicesDevice - In the implementation block
@property (nonatomic,retain) NRDevice * nanoRegistryDevice;                                //@synthesize nanoRegistryDevice=_nanoRegistryDevice - In the implementation block
@property (assign,nonatomic,__weak) id<HDNanoSyncStoreDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) IDSDevice * device; 
@property (copy,readonly) HKNanoSyncPairedDeviceInfo * deviceInfo; 
@property (nonatomic,copy) NSUUID * persistentUUID; 
@property (nonatomic,copy) NSUUID * healthUUID; 
@property (getter=isRestoreComplete,nonatomic,readonly) BOOL restoreComplete; 
@property (nonatomic,readonly) long long restoreState;                                     //@synthesize restoreState=_restoreState - In the implementation block
@property (nonatomic,readonly) HDNanoSyncRestoreSession * restoreSession;                  //@synthesize restoreSession=_restoreSession - In the implementation block
@property (nonatomic,copy,readonly) NSSet * obliteratedDatabaseUUIDs;                      //@synthesize obliteratedDatabaseUUIDs=_obliteratedDatabaseUUIDs - In the implementation block
@property (assign,nonatomic) BOOL needsSyncOnUnlock;                                       //@synthesize needsSyncOnUnlock=_needsSyncOnUnlock - In the implementation block
@property (getter=isInvalidated,readonly) BOOL invalidated; 
@property (readonly) NSUUID * nanoRegistryUUID; 
@property (copy,readonly) NSString * remoteSystemBuildVersion; 
@property (copy,readonly) NSString * remoteProductType; 
@property (copy,readonly) NSString * sourceBundleIdentifier; 
@property (readonly) int protocolVersion; 
@property (getter=isActive,readonly) BOOL active; 
@property (getter=isMaster,readonly) BOOL master;                                          //@synthesize master=_master - In the implementation block
@property (copy,readonly) NSString * deviceName; 
@property (readonly) NSDate * lastInactiveDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) long long syncStoreType; 
+(id)nanoSyncStoreWithProfile:(id)arg1 device:(id)arg2 delegate:(id)arg3 ;
+(id)_observedDeviceProperties;
+(id)orderedSyncEntitiesForProfile:(id)arg1 protocolVersion:(int)arg2 companion:(BOOL)arg3 ;
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(id<HDNanoSyncStoreDelegate>)delegate;
-(void)setDelegate:(id<HDNanoSyncStoreDelegate>)arg1 ;
-(BOOL)isActive;
-(BOOL)isInvalidated;
-(IDSDevice *)device;
-(NSString *)deviceName;
-(HDProfile *)profile;
-(void)setProfile:(HDProfile *)arg1 ;
-(BOOL)isMaster;
-(int)protocolVersion;
-(HKNanoSyncPairedDeviceInfo *)deviceInfo;
-(id)syncStoreIdentifier;
-(long long)restoreState;
-(id)databaseIdentifier;
-(NSString *)sourceBundleIdentifier;
-(NSUUID *)persistentUUID;
-(BOOL)isRestoreComplete;
-(void)setPersistentUUID:(NSUUID *)arg1 ;
-(void)device:(id)arg1 propertyDidChange:(id)arg2 fromValue:(id)arg3 ;
-(id)diagnosticDescription;
-(long long)syncStoreType;
-(long long)syncProvenance;
-(void)prepareForObliteration;
-(BOOL)needsSyncOnUnlock;
-(void)setNeedsSyncOnUnlock:(BOOL)arg1 ;
-(void)configureOutgoingResponse:(id)arg1 ;
-(NSUUID *)nanoRegistryUUID;
-(id)nanoSyncStoreForProtocolVersion:(int)arg1 ;
-(HDNanoSyncRestoreSession *)restoreSession;
-(void)finishRestoreSessionWithError:(id)arg1 ;
-(id)beginRestoreSessionWithUUID:(id)arg1 timeout:(double)arg2 timeoutHandler:(/*^block*/id)arg3 ;
-(NSSet *)obliteratedDatabaseUUIDs;
-(NSUUID *)healthUUID;
-(id)orderedSyncEntities;
-(void)setHealthUUID:(NSUUID *)arg1 ;
-(BOOL)validatePairingUUIDsWithIncomingMessage:(id)arg1 ;
-(void)didReceiveRequestWithChangeSet:(id)arg1 ;
-(NSDate *)lastInactiveDate;
-(BOOL)supportsSpeculativeChangesForSyncEntityClass:(Class)arg1 ;
-(void)removeExpiredIncomingSyncObservers;
-(void)addIncomingSyncObserverWithTimeout:(double)arg1 timeoutHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)createRequestWithMessageID:(unsigned short)arg1 ;
-(void)addPendingRequestContext:(id)arg1 forUUID:(id)arg2 ;
-(id)pendingRequestContextForUUID:(id)arg1 ;
-(void)removePendingRequestContextForUUID:(id)arg1 ;
-(long long)syncEpoch;
-(id)syncStoreDefaultSourceBundleIdentifier;
-(id)syncEntityDependenciesForSyncEntity:(Class)arg1 ;
-(BOOL)canRecieveSyncObjectsForEntityClass:(Class)arg1 ;
-(BOOL)enforceSyncEntityOrdering;
-(BOOL)shouldContinueAfterAnchorValidationError:(id)arg1 ;
-(BOOL)shouldEnforceSequenceOrdering;
-(long long)expectedSequenceNumberForSyncEntityClass:(Class)arg1 ;
-(void)setExpectedSequenceNumber:(long long)arg1 forSyncEntityClass:(Class)arg2 ;
-(id)_initWithIdentityServicesDevice:(id)arg1 nanoRegistryDevice:(id)arg2 pairingEntity:(id)arg3 obliteratedDatabaseUUIDs:(id)arg4 protocolVersion:(int)arg5 delegate:(id)arg6 profile:(id)arg7 ;
-(NRDevice *)nanoRegistryDevice;
-(BOOL)_savePairingEntity;
-(void)_setRestoreState:(long long)arg1 ;
-(void)_notifyIncomingSyncObservers;
-(NSString *)remoteSystemBuildVersion;
-(NSString *)remoteProductType;
-(IDSDevice *)identityServicesDevice;
-(void)setIdentityServicesDevice:(IDSDevice *)arg1 ;
-(void)setNanoRegistryDevice:(NRDevice *)arg1 ;
@end

