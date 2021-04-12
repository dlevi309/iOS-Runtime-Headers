/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/APSConnectionDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMBCloudDatabaseDelegate;
@class HMBCloudDatabaseConfiguration, HMBLocalDatabase, HMBLocalZone, HMFUnfairLock, HMBCloudDatabaseStateModel, NSMutableDictionary, CKContainer, CKDatabase, APSConnection, NAFuture, NSSet, CKContainerID, NSString;

@interface HMBCloudDatabase : HMFObject <APSConnectionDelegate, HMFLogging> {

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
	APSConnection* _apsConnection;
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
@property (nonatomic,retain) APSConnection * apsConnection;                                     //@synthesize apsConnection=_apsConnection - In the implementation block
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
-(CKContainer *)container;
-(id<HMBCloudDatabaseDelegate>)delegate;
-(void)setDelegate:(id<HMBCloudDatabaseDelegate>)arg1 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4 ;
-(HMBCloudDatabaseConfiguration *)configuration;
-(CKContainerID *)containerID;
-(APSConnection *)apsConnection;
-(void)setApsConnection:(APSConnection *)arg1 ;
-(id)shutdown;
-(id)acceptInvitation:(id)arg1 ;
-(id)declineInvitation:(id)arg1 ;
-(id)logIdentifier;
-(id)attributeDescriptions;
-(CKDatabase *)sharedDatabase;
-(HMFUnfairLock *)propertyLock;
-(CKDatabase *)privateDatabase;
-(void)handleAccountChangedNotification:(id)arg1 ;
-(HMBLocalDatabase *)localDatabase;
-(CKDatabase *)publicDatabase;
-(HMBLocalZone *)stateZone;
-(void)deallocForZoneWithID:(id)arg1 ;
-(BOOL)retryCloudKitOperationAfterError:(id)arg1 retryBlock:(/*^block*/id)arg2 ;
-(id)performInitialCloudSync;
-(id)serverChangeTokenForZoneWithID:(id)arg1 ;
-(void)handleRemovedZoneIDs:(id)arg1 userInitiated:(BOOL)arg2 ;
-(id)createPrivateZoneWithID:(id)arg1 ;
-(id)removeZoneWithID:(id)arg1 ;
-(id)operationConfigurationWithProcessingOptions:(id)arg1 ;
-(id)peformFunctionInvokeOperationWithServiceName:(id)arg1 functionName:(id)arg2 serializedRequest:(id)arg3 ;
-(void)updateRebuildStatus:(id)arg1 forZoneWithID:(id)arg2 ;
-(void)updateServerChangeToken:(id)arg1 forZoneWithID:(id)arg2 ;
-(id)removePrivateZoneWithID:(id)arg1 ;
-(id)fetchShareMetadataForInvitations:(id)arg1 ;
-(id)acceptInvitations:(id)arg1 ;
-(NSMutableDictionary *)zoneStateByZoneID;
-(HMBCloudDatabaseStateModel *)sharedDatabaseState;
-(void)handleCreatedZoneIDs:(id)arg1 ;
-(id)initWithLocalDatabase:(id)arg1 stateZone:(id)arg2 container:(id)arg3 configuration:(id)arg4 databaseStateModelsByScope:(id)arg5 zoneStateModels:(id)arg6 ;
-(NAFuture *)initialCloudSyncFuture;
-(void)setInitialCloudSyncFuture:(NAFuture *)arg1 ;
-(id)waitForManateeAvailability;
-(HMBCloudDatabaseStateModel *)privateDatabaseState;
-(id)performCloudPullForScope:(long long)arg1 ;
-(void)handleUpdatedZonesIDs:(id)arg1 ;
-(id)performAdministrativeFetchForDatabaseScope:(long long)arg1 withForce:(BOOL)arg2 ;
-(void)removeStateForZoneID:(id)arg1 ;
-(void)updateNeedsZoneDeletion:(BOOL)arg1 forZoneWithID:(id)arg2 ;
-(id)openExistingSharedZoneWithID:(id)arg1 configuration:(id)arg2 delegate:(id)arg3 error:(id*)arg4 ;
-(id)waitForManateeAvailabilityAndRecheckIfAlreadyAvailable;
-(id)initWithLocalDatabase:(id)arg1 configuration:(id)arg2 ;
-(void)addContainerOperation:(id)arg1 ;
-(void)addDatabaseOperation:(id)arg1 forScope:(long long)arg2 ;
-(id)performAdministrativeFetchForAllDatabases:(BOOL)arg1 ;
-(id)openOrCreatePrivateZoneWithID:(id)arg1 configuration:(id)arg2 delegate:(id)arg3 error:(id*)arg4 ;
-(id)openExistingPrivateZoneWithID:(id)arg1 configuration:(id)arg2 delegate:(id)arg3 error:(id*)arg4 ;
-(void)setPrivateDatabaseState:(HMBCloudDatabaseStateModel *)arg1 ;
-(void)setSharedDatabaseState:(HMBCloudDatabaseStateModel *)arg1 ;
-(HMBCloudDatabaseStateModel *)publicDatabaseState;
-(void)setPublicDatabaseState:(HMBCloudDatabaseStateModel *)arg1 ;
-(NAFuture *)manateeAvailabilityFuture;
-(void)setManateeAvailabilityFuture:(NAFuture *)arg1 ;
-(id)fetchZonesOn:(id)arg1 ;
-(id)fetchSubscriptionsOn:(id)arg1 ;
-(id)subscriptionsForZoneWithID:(id)arg1 ;
-(id)subscriptionIDForZoneID:(id)arg1 recordType:(id)arg2 ;
-(id)registerSubscription:(id)arg1 forZoneWithID:(id)arg2 ;
-(id)unregisterSubscription:(id)arg1 forZoneWithID:(id)arg2 ;
-(id)waitForManateeAvailabilityAndRecheckIfAlreadyAvailable:(BOOL)arg1 ;
-(id)databaseStateForDatabaseScope:(long long)arg1 ;
-(void)updateServerChangeToken:(id)arg1 forDatabaseWithScope:(long long)arg2 ;
-(id)subscriptionIDForCloudID:(id)arg1 recordType:(id)arg2 ;
-(id)fetchParticipants:(id)arg1 ;
-(id)fetchUserRecordOn:(id)arg1 ;
-(id)_zonesWithScope:(long long)arg1 ;
-(NSSet *)privateZoneIDs;
-(NSSet *)sharedZoneIDs;
-(NSSet *)publicZoneIDs;
-(id)fetchZones:(BOOL)arg1 ;
-(id)pushSubscriptionsForDatabase:(id)arg1 subscriptionsToSave:(id)arg2 subscriptionIDsToRemove:(id)arg3 ;
-(id)unregisterPrivateSubscriptionForSubscriptionID:(id)arg1 ;
-(id)unregisterSharedSubscriptionForSubscriptionID:(id)arg1 ;
-(id)registerSubscriptionForExternalRecordType:(id)arg1 databaseState:(id)arg2 ;
-(id)registerPrivateSubscriptionForExternalRecordType:(id)arg1 ;
-(id)registerSharedSubscriptionForExternalRecordType:(id)arg1 ;
-(id)unregisterPrivateSubscriptionForExternalRecordType:(id)arg1 ;
-(id)unregisterSharedSubscriptionForExternalRecordType:(id)arg1 ;
@end

