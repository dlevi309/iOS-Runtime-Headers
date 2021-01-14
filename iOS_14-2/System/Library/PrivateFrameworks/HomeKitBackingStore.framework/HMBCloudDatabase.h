/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMBCloudPushObserver.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMBCloudDatabaseDelegate;
@class HMBCloudDatabaseConfiguration, HMBLocalDatabase, HMBLocalZone, HMFUnfairLock, HMBCloudDatabaseStateModel, NSMutableDictionary, CKContainer, CKDatabase, NAFuture, NSSet, CKContainerID, NSString;

@interface HMBCloudDatabase : HMFObject <HMBCloudPushObserver, HMFLogging> {

	id<HMBCloudDatabaseDelegate> _delegate;
	HMBCloudDatabaseConfiguration* _configuration;
	HMBLocalDatabase* _localDatabase;
	HMBLocalZone* _stateZone;
	HMFUnfairLock* _propertyLock;
	HMBCloudDatabaseStateModel* _privateDatabaseState;
	HMBCloudDatabaseStateModel* _sharedDatabaseState;
	HMBCloudDatabaseStateModel* _publicDatabaseState;
	NSMutableDictionary* _zoneStateByZoneID;
	CKContainer* _container;
	CKDatabase* _sharedDatabase;
	CKDatabase* _privateDatabase;
	CKDatabase* _publicDatabase;
	NAFuture* _initialCloudSyncFuture;
	NAFuture* _manateeAvailabilityFuture;

}

@property (nonatomic,readonly) NSSet * privateZoneIDs; 
@property (nonatomic,readonly) NSSet * sharedZoneIDs; 
@property (nonatomic,readonly) NSSet * publicZoneIDs; 
@property (nonatomic,readonly) HMBLocalDatabase * localDatabase;                                //@synthesize localDatabase=_localDatabase - In the implementation block
@property (nonatomic,readonly) HMBLocalZone * stateZone;                                        //@synthesize stateZone=_stateZone - In the implementation block
@property (nonatomic,readonly) HMFUnfairLock * propertyLock;                                    //@synthesize propertyLock=_propertyLock - In the implementation block
@property (nonatomic,retain) HMBCloudDatabaseStateModel * privateDatabaseState;                 //@synthesize privateDatabaseState=_privateDatabaseState - In the implementation block
@property (nonatomic,retain) HMBCloudDatabaseStateModel * sharedDatabaseState;                  //@synthesize sharedDatabaseState=_sharedDatabaseState - In the implementation block
@property (nonatomic,retain) HMBCloudDatabaseStateModel * publicDatabaseState;                  //@synthesize publicDatabaseState=_publicDatabaseState - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * zoneStateByZoneID;                         //@synthesize zoneStateByZoneID=_zoneStateByZoneID - In the implementation block
@property (nonatomic,readonly) CKContainer * container;                                         //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) CKDatabase * sharedDatabase;                                     //@synthesize sharedDatabase=_sharedDatabase - In the implementation block
@property (nonatomic,readonly) CKDatabase * privateDatabase;                                    //@synthesize privateDatabase=_privateDatabase - In the implementation block
@property (nonatomic,readonly) CKDatabase * publicDatabase;                                     //@synthesize publicDatabase=_publicDatabase - In the implementation block
@property (nonatomic,retain) NAFuture * initialCloudSyncFuture;                                 //@synthesize initialCloudSyncFuture=_initialCloudSyncFuture - In the implementation block
@property (nonatomic,retain) NAFuture * manateeAvailabilityFuture;                              //@synthesize manateeAvailabilityFuture=_manateeAvailabilityFuture - In the implementation block
@property (assign,nonatomic,__weak) id<HMBCloudDatabaseDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CKContainerID * containerID; 
@property (nonatomic,copy,readonly) HMBCloudDatabaseConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)extantDatabasesLock;
+(id)extantDatabases;
-(id)createPrivateZoneWithID:(id)arg1 ;
-(id)waitForManateeAvailabilityAndRecheckIfAlreadyAvailable:(BOOL)arg1 ;
-(id)openOrCreatePrivateZoneWithID:(id)arg1 configuration:(id)arg2 delegate:(id)arg3 error:(id*)arg4 ;
-(void)addContainerOperation:(id)arg1 ;
-(void)notifyDelegateOfError:(id)arg1 forOperation:(id)arg2 ;
-(id)removeZoneWithID:(id)arg1 ;
-(CKContainerID *)containerID;
-(id)shutdown;
-(void)setPublicDatabaseState:(HMBCloudDatabaseStateModel *)arg1 ;
-(NSSet *)publicZoneIDs;
-(NSMutableDictionary *)zoneStateByZoneID;
-(id)performAdministrativeFetchForDatabaseScope:(long long)arg1 withForce:(BOOL)arg2 ;
-(NSSet *)sharedZoneIDs;
-(id)operationConfigurationWithProcessingOptions:(id)arg1 ;
-(void)handleAccountChangedNotification:(id)arg1 ;
-(id<HMBCloudDatabaseDelegate>)delegate;
-(void)setSharedDatabaseState:(HMBCloudDatabaseStateModel *)arg1 ;
-(void)handleUpdatedZonesIDs:(id)arg1 ;
-(id)registerSharedSubscriptionForExternalRecordType:(id)arg1 ;
-(HMBCloudDatabaseStateModel *)sharedDatabaseState;
-(void)handleCreatedZoneIDs:(id)arg1 ;
-(void)setPrivateDatabaseState:(HMBCloudDatabaseStateModel *)arg1 ;
-(id)_zonesWithScope:(long long)arg1 ;
-(void)handler:(id)arg1 didReceiveCKNotification:(id)arg2 ;
-(HMBCloudDatabaseStateModel *)privateDatabaseState;
-(id)registerSubscriptionForExternalRecordType:(id)arg1 databaseState:(id)arg2 ;
-(id)declineInvitation:(id)arg1 ;
-(id)logIdentifier;
-(id)peformCodeOperationWithServiceName:(id)arg1 functionName:(id)arg2 request:(id)arg3 responseClass:(Class)arg4 ;
-(id)fetchParticipants:(id)arg1 ;
-(id)pushSubscriptionsForDatabase:(id)arg1 subscriptionsToSave:(id)arg2 subscriptionIDsToRemove:(id)arg3 ;
-(CKDatabase *)sharedDatabase;
-(void)deallocForZoneWithID:(id)arg1 ;
-(void)updateServerChangeToken:(id)arg1 forZoneWithID:(id)arg2 ;
-(void)setDelegate:(id<HMBCloudDatabaseDelegate>)arg1 ;
-(id)initWithLocalDatabase:(id)arg1 configuration:(id)arg2 ;
-(id)unregisterSharedSubscriptionForExternalRecordType:(id)arg1 ;
-(id)fetchZones:(BOOL)arg1 ;
-(void)addDatabaseOperation:(id)arg1 forScope:(long long)arg2 ;
-(void)updateNeedsZoneDeletion:(BOOL)arg1 forZoneWithID:(id)arg2 ;
-(HMBCloudDatabaseConfiguration *)configuration;
-(id)databaseStateForDatabaseScope:(long long)arg1 ;
-(CKDatabase *)privateDatabase;
-(id)registerSubscription:(id)arg1 forZoneWithID:(id)arg2 ;
-(id)unregisterPrivateSubscriptionForExternalRecordType:(id)arg1 ;
-(id)subscriptionIDForCloudID:(id)arg1 recordType:(id)arg2 ;
-(id)attributeDescriptions;
-(void)handleRemovedZoneIDs:(id)arg1 userInitiated:(BOOL)arg2 ;
-(NSSet *)privateZoneIDs;
-(void)setInitialCloudSyncFuture:(NAFuture *)arg1 ;
-(id)performAdministrativeFetchForAllDatabases:(BOOL)arg1 ;
-(id)acceptInvitation:(id)arg1 ;
-(id)waitForManateeAvailabilityAndRecheckIfAlreadyAvailable;
-(id)openExistingSharedZoneWithID:(id)arg1 configuration:(id)arg2 delegate:(id)arg3 error:(id*)arg4 ;
-(void)updateRebuildStatus:(id)arg1 forZoneWithID:(id)arg2 ;
-(id)fetchShareMetadataForInvitations:(id)arg1 ;
-(void)updateServerChangeToken:(id)arg1 forDatabaseWithScope:(long long)arg2 ;
-(id)performInitialCloudSync;
-(HMFUnfairLock *)propertyLock;
-(CKDatabase *)publicDatabase;
-(id)subscriptionIDForZoneID:(id)arg1 recordType:(id)arg2 ;
-(id)serverChangeTokenForZoneWithID:(id)arg1 ;
-(id)unregisterPrivateSubscriptionForSubscriptionID:(id)arg1 ;
-(id)openExistingPrivateZoneWithID:(id)arg1 configuration:(id)arg2 delegate:(id)arg3 error:(id*)arg4 ;
-(id)fetchSubscriptionsOn:(id)arg1 ;
-(id)subscriptionsForZoneWithID:(id)arg1 ;
-(id)registerPrivateSubscriptionForExternalRecordType:(id)arg1 ;
-(HMBCloudDatabaseStateModel *)publicDatabaseState;
-(id)acceptInvitations:(id)arg1 ;
-(id)unregisterSharedSubscriptionForSubscriptionID:(id)arg1 ;
-(id)fetchUserRecordOn:(id)arg1 ;
-(void)removeStateForZoneID:(id)arg1 ;
-(id)performCloudPullForScope:(long long)arg1 ;
-(HMBLocalDatabase *)localDatabase;
-(BOOL)retryCloudKitOperation:(id)arg1 afterError:(id)arg2 retryBlock:(/*^block*/id)arg3 ;
-(HMBLocalZone *)stateZone;
-(NAFuture *)manateeAvailabilityFuture;
-(id)waitForManateeAvailability;
-(CKContainer *)container;
-(id)initWithLocalDatabase:(id)arg1 stateZone:(id)arg2 container:(id)arg3 configuration:(id)arg4 databaseStateModelsByScope:(id)arg5 zoneStateModels:(id)arg6 ;
-(void)setManateeAvailabilityFuture:(NAFuture *)arg1 ;
-(BOOL)_retryCloudKitOperationAfterError:(id)arg1 retryBlock:(/*^block*/id)arg2 ;
-(id)unregisterSubscription:(id)arg1 forZoneWithID:(id)arg2 ;
-(void)handler:(id)arg1 didReceiveMessageWithUserInfo:(id)arg2 ;
-(id)fetchZonesOn:(id)arg1 ;
-(id)removePrivateZoneWithID:(id)arg1 ;
-(NAFuture *)initialCloudSyncFuture;
@end

