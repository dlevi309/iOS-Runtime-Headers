/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMBMirrorProtocol.h>

@protocol HMBCloudZoneDelegate, HMBCloudZoneRebuilder;
@class NAFuture, HMBCloudDatabase, HMBCloudZoneConfiguration, HMBLocalZone, CKDatabase, NSUUID, HMBCloudZoneID, NSMapTable, HMFUnfairLock, NSString, NSMutableArray, HMBCloudZoneShareModel, NSOperationQueue, NSMutableDictionary, HMBModelContainer, NSSet;

@interface HMBCloudZone : HMFObject <HMFLogging, HMBMirrorProtocol> {

	BOOL _needsZoneCreation;
	BOOL _needsZoneDeletion;
	NAFuture* _startUp;
	HMBCloudDatabase* _cloudDatabase;
	id<HMBCloudZoneDelegate> _delegate;
	HMBCloudZoneConfiguration* _configuration;
	HMBLocalZone* _localZone;
	CKDatabase* _database;
	HMBLocalZone* _stateZone;
	NSUUID* _stateModelID;
	HMBCloudZoneID* _zoneID;
	NSMapTable* _modelClassToRequiresPostProcessingMap;
	NSMapTable* _inflightPushOperations;
	HMFUnfairLock* _propertyLock;
	NSString* _deviceIdentifier;
	NSMutableArray* _ckOperations;
	NAFuture* _shutdownFuture;
	NAFuture* _destroyFuture;
	id<HMBCloudZoneRebuilder> _rebuilder;
	HMBCloudZoneShareModel* _shareModel;
	NSOperationQueue* _shareOperationQueue;
	NSMutableDictionary* _shareParticipantModelsByClientIdentifier;
	HMBModelContainer* _modelContainer;

}

@property (nonatomic,readonly) long long keyStatus; 
@property (nonatomic,readonly) NAFuture * waitForPendingRebuild; 
@property (getter=isZoneRebuildInProgress,nonatomic,readonly) BOOL zoneRebuildInProgress; 
@property (copy,readonly) NSSet * subscriptions; 
@property (nonatomic,readonly) NSSet * participants; 
@property (nonatomic,readonly) CKDatabase * database;                                                       //@synthesize database=_database - In the implementation block
@property (assign,nonatomic,__weak) HMBCloudDatabase * cloudDatabase;                                       //@synthesize cloudDatabase=_cloudDatabase - In the implementation block
@property (assign,nonatomic,__weak) HMBLocalZone * stateZone;                                               //@synthesize stateZone=_stateZone - In the implementation block
@property (nonatomic,readonly) NSUUID * stateModelID;                                                       //@synthesize stateModelID=_stateModelID - In the implementation block
@property (nonatomic,readonly) BOOL needsZoneCreation;                                                      //@synthesize needsZoneCreation=_needsZoneCreation - In the implementation block
@property (nonatomic,readonly) BOOL needsZoneDeletion;                                                      //@synthesize needsZoneDeletion=_needsZoneDeletion - In the implementation block
@property (nonatomic,retain) HMBCloudZoneID * zoneID;                                                       //@synthesize zoneID=_zoneID - In the implementation block
@property (nonatomic,readonly) NSMapTable * modelClassToRequiresPostProcessingMap;                          //@synthesize modelClassToRequiresPostProcessingMap=_modelClassToRequiresPostProcessingMap - In the implementation block
@property (nonatomic,retain) NSMapTable * inflightPushOperations;                                           //@synthesize inflightPushOperations=_inflightPushOperations - In the implementation block
@property (nonatomic,readonly) HMFUnfairLock * propertyLock;                                                //@synthesize propertyLock=_propertyLock - In the implementation block
@property (nonatomic,readonly) NSString * deviceIdentifier;                                                 //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * ckOperations;                                                 //@synthesize ckOperations=_ckOperations - In the implementation block
@property (nonatomic,retain) NAFuture * shutdownFuture;                                                     //@synthesize shutdownFuture=_shutdownFuture - In the implementation block
@property (nonatomic,retain) NAFuture * destroyFuture;                                                      //@synthesize destroyFuture=_destroyFuture - In the implementation block
@property (nonatomic,retain) id<HMBCloudZoneRebuilder> rebuilder;                                           //@synthesize rebuilder=_rebuilder - In the implementation block
@property (retain) HMBCloudZoneShareModel * shareModel;                                                     //@synthesize shareModel=_shareModel - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * shareOperationQueue;                                      //@synthesize shareOperationQueue=_shareOperationQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * shareParticipantModelsByClientIdentifier;              //@synthesize shareParticipantModelsByClientIdentifier=_shareParticipantModelsByClientIdentifier - In the implementation block
@property (nonatomic,retain) HMBModelContainer * modelContainer;                                            //@synthesize modelContainer=_modelContainer - In the implementation block
@property (assign,nonatomic,__weak) id<HMBCloudZoneDelegate> delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) HMBCloudZoneConfiguration * configuration;                              //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic,__weak) HMBLocalZone * localZone;                                               //@synthesize localZone=_localZone - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NAFuture * startUp;                                                          //@synthesize startUp=_startUp - In the implementation block
+(id)logCategory;
-(void)dealloc;
-(id<HMBCloudZoneDelegate>)delegate;
-(void)setDelegate:(id<HMBCloudZoneDelegate>)arg1 ;
-(CKDatabase *)database;
-(NSString *)deviceIdentifier;
-(HMBCloudZoneID *)zoneID;
-(void)setZoneID:(HMBCloudZoneID *)arg1 ;
-(HMBCloudZoneConfiguration *)configuration;
-(id)destroy;
-(id)flush;
-(NSSet *)subscriptions;
-(NSSet *)participants;
-(id)shutdown;
-(id)logIdentifier;
-(id)attributeDescriptions;
-(HMFUnfairLock *)propertyLock;
-(void)addCKOperation:(id)arg1 ;
-(void)rebuild;
-(HMBLocalZone *)localZone;
-(HMBModelContainer *)modelContainer;
-(id)decodeShareModelFromShare:(id)arg1 ;
-(id)decodeManateeCloudFrom:(id)arg1 recordSource:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)encodeRecordFromModel:(id)arg1 existingRecord:(id)arg2 encodingContext:(id)arg3 error:(id*)arg4 ;
-(id)encodeShareModel:(id)arg1 ;
-(id)encodeManateeCloudModel:(id)arg1 existingRecord:(id)arg2 encodingContext:(id)arg3 error:(id*)arg4 ;
-(id)decodeModelFrom:(id)arg1 recordSource:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)encodeRecordFromModel:(id)arg1 externalData:(id)arg2 encodingContext:(id)arg3 error:(id*)arg4 ;
-(long long)keyStatus;
-(NAFuture *)waitForPendingRebuild;
-(BOOL)isZoneRebuildInProgress;
-(id)startUpRebuilderIfNeeded;
-(void)handleLostKeys;
-(void)handleZoneChangedNotification;
-(id<HMBCloudZoneRebuilder>)rebuilder;
-(HMBCloudDatabase *)cloudDatabase;
-(void)setRebuilder:(id<HMBCloudZoneRebuilder>)arg1 ;
-(id)triggerOutputForOutputRow:(unsigned long long)arg1 options:(id)arg2 ;
-(HMBCloudZoneShareModel *)shareModel;
-(NSUUID *)stateModelID;
-(HMBLocalZone *)stateZone;
-(BOOL)needsZoneCreation;
-(NAFuture *)startUp;
-(NAFuture *)shutdownFuture;
-(NAFuture *)destroyFuture;
-(id)_triggerOutputForOutputRow:(unsigned long long)arg1 options:(id)arg2 ;
-(BOOL)retryCloudKitOperationAfterError:(id)arg1 retryBlock:(/*^block*/id)arg2 ;
-(void)setLocalZone:(HMBLocalZone *)arg1 ;
-(void)setModelContainer:(HMBModelContainer *)arg1 ;
-(id)performCloudPullWithOptions:(id)arg1 ;
-(void)initializeShareModels;
-(void)handleUpdatedShareParticipantModels:(id)arg1 ;
-(void)handleUpdatedShareModel:(id)arg1 ;
-(NSMutableArray *)ckOperations;
-(void)startUpWithLocalZone:(id)arg1 ;
-(id)initWithCloudDatabase:(id)arg1 configuration:(id)arg2 state:(id)arg3 ;
-(BOOL)startupWithModelContainer:(id)arg1 error:(id*)arg2 ;
-(BOOL)isInternalModel:(id)arg1 ;
-(void)handleUpdatedInternalModels:(id)arg1 ;
-(void)handleDeletion;
-(void)setCloudDatabase:(HMBCloudDatabase *)arg1 ;
-(void)setStateZone:(HMBLocalZone *)arg1 ;
-(BOOL)needsZoneDeletion;
-(NSMapTable *)modelClassToRequiresPostProcessingMap;
-(NSMapTable *)inflightPushOperations;
-(void)setInflightPushOperations:(NSMapTable *)arg1 ;
-(void)setCkOperations:(NSMutableArray *)arg1 ;
-(void)setShutdownFuture:(NAFuture *)arg1 ;
-(void)setDestroyFuture:(NAFuture *)arg1 ;
-(void)setShareModel:(HMBCloudZoneShareModel *)arg1 ;
-(NSOperationQueue *)shareOperationQueue;
-(NSMutableDictionary *)shareParticipantModelsByClientIdentifier;
-(id)pushRecordsToUpdate:(id)arg1 recordIDsToRemove:(id)arg2 configuration:(id)arg3 rollbackEnabled:(BOOL)arg4 needsNewInvitationToken:(BOOL)arg5 ;
-(id)pushRecordsToUpdate:(id)arg1 recordIDsToRemove:(id)arg2 configuration:(id)arg3 rollbackEnabled:(BOOL)arg4 ;
-(id)cloudMetadataForModel:(id)arg1 usingEncoding:(unsigned long long)arg2 ;
-(BOOL)populateV4CloudRecord:(id)arg1 withModel:(id)arg2 metadataFieldData:(id)arg3 startEncoding:(unsigned long long)arg4 endEncoding:(unsigned long long)arg5 error:(id*)arg6 ;
-(id)recordIDForModel:(id)arg1 ;
-(BOOL)populateManateeCloudRecord:(id)arg1 withModel:(id)arg2 encodingContext:(id)arg3 error:(id*)arg4 ;
-(id)cloudFieldForEncoding:(unsigned long long)arg1 ;
-(id)fetchRecordWithRecordID:(id)arg1 canRetry:(BOOL)arg2 ;
-(id)leaveCloudShareRequestingNewInvitationToken:(BOOL)arg1 ;
-(BOOL)resolveConflicts:(id)arg1 options:(id)arg2 ;
-(id)performCloudPullWithFetchToken:(id)arg1 options:(id)arg2 ;
-(id)registerSubscriptionForExternalRecordType:(id)arg1 ;
-(id)unregisterSubscriptionForExternalRecordType:(id)arg1 ;
-(id)fetchCompleteModelForRecordID:(id)arg1 ;
-(id)fetchCompleteModels:(id)arg1 force:(BOOL)arg2 ;
-(id)fetchCompleteModelsForRecordIDs:(id)arg1 ;
-(id)fetchCompleteModel:(id)arg1 force:(BOOL)arg2 ;
-(id)fetchRecordsWithRecordIDs:(id)arg1 desiredKeys:(id)arg2 ;
-(id)_createShareModel;
-(id)_addShareOperationAfterStartupWithName:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)_pushUpdatedShare:(id)arg1 ;
-(id)_leaveCloudShareRequestingNewInvitationToken:(BOOL)arg1 allowCloudPull:(BOOL)arg2 ;
-(id)_handleLeaveCloudShareErrorUsingCloudZoneRecordPushResult:(id)arg1 ;
-(id)_addShareOperationWithName:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)handleUpdatedShare:(id)arg1 error:(id*)arg2 ;
-(BOOL)handleUpdatedShareParticipantRecord:(id)arg1 error:(id*)arg2 ;
-(id)createShareModel;
-(id)_pushUpdatedShare:(id)arg1 participantRecord:(id)arg2 ;
-(id)_pushDeletedParticipantRecordID:(id)arg1 ;
-(id)participantWithClientIdentifier:(id)arg1 ;
-(id)_fetchInvitationWithContext:(id)arg1 usingShare:(id)arg2 ;
-(id)_setWriteAccessEnabled:(BOOL)arg1 forParticipant:(id)arg2 usingShare:(id)arg3 ;
-(id)_revokeShareForParticipant:(id)arg1 usingShare:(id)arg2 ;
-(id)fetchOwnerParticipantCloudShareID;
-(id)fetchCurrentParticipantCloudShareID;
-(id)fetchCloudShareIDForShareParticipantClientIdentifier:(id)arg1 ;
-(id)fetchInvitationWithContext:(id)arg1 ;
-(id)setWriteAccessEnabled:(BOOL)arg1 forParticipant:(id)arg2 ;
-(id)revokeShareForParticipant:(id)arg1 ;
@end

