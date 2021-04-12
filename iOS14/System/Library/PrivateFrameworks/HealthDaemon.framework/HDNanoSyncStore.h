/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/NRDevicePropertyObserver.h>
#import <libobjc.A.dylib/HDSyncStore.h>

@protocol HDNanoSyncStoreDelegate;
@class HDProfile, NSString, HDNanoPairingEntity, NSMutableDictionary, NSMutableArray, NSUUID, NSDate, NSError, NSArray, IDSDevice, NRDevice, HDNanoSyncRestoreSession, NSSet, HKNanoSyncPairedDeviceInfo;

@interface HDNanoSyncStore : NSObject <NRDevicePropertyObserver, HDSyncStore> {

	HDProfile* _profile;
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
	BOOL _isTinkerPairing;
	BOOL _master;
	BOOL _needsSyncOnUnlock;
	IDSDevice* _identityServicesDevice;
	NRDevice* _nanoRegistryDevice;
	id<HDNanoSyncStoreDelegate> _delegate;
	long long _restoreState;
	HDNanoSyncRestoreSession* _restoreSession;
	NSSet* _obliteratedDatabaseUUIDs;

}

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
@property (getter=isAltAccount,readonly) BOOL altAccount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) long long syncStoreType; 
+(id)nanoSyncStoreWithProfile:(id)arg1 device:(id)arg2 delegate:(id)arg3 tinkerPaired:(BOOL)arg4 ;
+(id)_observedDeviceProperties;
+(id)tinkerNanoSyncStoreWithProfile:(id)arg1 device:(id)arg2 delegate:(id)arg3 ;
+(id)nanoSyncStoreWithProfile:(id)arg1 device:(id)arg2 delegate:(id)arg3 ;
+(id)orderedSyncEntitiesForProfile:(id)arg1 protocolVersion:(int)arg2 companion:(BOOL)arg3 ;
-(NSString *)deviceName;
-(BOOL)isMaster;
-(NSString *)sourceBundleIdentifier;
-(HKNanoSyncPairedDeviceInfo *)deviceInfo;
-(BOOL)isInvalidated;
-(id<HDNanoSyncStoreDelegate>)delegate;
-(BOOL)isActive;
-(void)setPersistentUUID:(NSUUID *)arg1 ;
-(int)protocolVersion;
-(void)device:(id)arg1 propertyDidChange:(id)arg2 fromValue:(id)arg3 ;
-(IDSDevice *)device;
-(long long)restoreState;
-(void)setDelegate:(id<HDNanoSyncStoreDelegate>)arg1 ;
-(NSString *)description;
-(id)orderedSyncEntities;
-(id)diagnosticDescription;
-(BOOL)isRestoreComplete;
-(id)profile;
-(id)syncStoreIdentifier;
-(BOOL)isAltAccount;
-(void)_setRestoreState:(long long)arg1 ;
-(void)invalidate;
-(NSUUID *)persistentUUID;
-(void)dealloc;
-(id)databaseIdentifier;
-(long long)syncProvenance;
-(void)prepareForObliteration;
-(BOOL)needsSyncOnUnlock;
-(void)setNeedsSyncOnUnlock:(BOOL)arg1 ;
-(NSUUID *)nanoRegistryUUID;
-(void)configureOutgoingResponse:(id)arg1 ;
-(id)nanoSyncStoreForProtocolVersion:(int)arg1 ;
-(HDNanoSyncRestoreSession *)restoreSession;
-(void)finishRestoreSessionWithError:(id)arg1 ;
-(id)beginRestoreSessionWithUUID:(id)arg1 timeout:(double)arg2 timeoutHandler:(/*^block*/id)arg3 ;
-(NSSet *)obliteratedDatabaseUUIDs;
-(NSUUID *)healthUUID;
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
-(long long)syncStoreType;
-(id)_initWithIdentityServicesDevice:(id)arg1 nanoRegistryDevice:(id)arg2 pairingEntity:(id)arg3 obliteratedDatabaseUUIDs:(id)arg4 protocolVersion:(int)arg5 delegate:(id)arg6 profile:(id)arg7 tinkerPairing:(BOOL)arg8 ;
-(NRDevice *)nanoRegistryDevice;
-(BOOL)_savePairingEntity;
-(void)_notifyIncomingSyncObservers;
-(NSString *)remoteSystemBuildVersion;
-(NSString *)remoteProductType;
-(IDSDevice *)identityServicesDevice;
-(void)setIdentityServicesDevice:(IDSDevice *)arg1 ;
-(void)setNanoRegistryDevice:(NRDevice *)arg1 ;
@end
