/*
* Generated on Monday, March 1, 2021 at 2:30:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <CoreData/NSManagedObjectContext.h>

@protocol PLManagedObjectContextPTPNotificationDelegate;
@class PLMergePolicy, PLDelayedFiledSystemDeletions, NSMutableSet, NSMutableDictionary, PLPhotoLibrary, PLPhotoLibraryPathManager, PLDelayedSaveActions, PLChangeHandlingContainer, NSError;

@interface PLManagedObjectContext : NSManagedObjectContext {

	BOOL _hasMetadataChanges;
	BOOL _isConnectedToChangeHandling;
	BOOL _mergingChanges;
	BOOL _savingDuringMerge;
	BOOL _isInitializingSingletons;
	BOOL _isBackingALAssetsLibrary;
	BOOL _isObservingChangesForPTPNotificationDelegate;
	BOOL _needsBackgroundJobProcessing;
	PLMergePolicy* _mergePolicy;
	PLDelayedFiledSystemDeletions* _delayedDeletions;
	NSMutableSet* _avalancheUUIDsForUpdate;
	NSMutableDictionary* _uuidsForCloudDeletion;
	BOOL _syncChangeMarker;
	NSMutableDictionary* _updatedObjectsAttributes;
	NSMutableDictionary* _updatedObjectsRelationships;
	PLPhotoLibrary* _photoLibrary;
	PLPhotoLibraryPathManager* _pathManager;
	PLDelayedSaveActions* _delayedSaveActions;
	PLChangeHandlingContainer* _changeHandlingContainer;
	os_unfair_lock_s _invalidationStateLock;
	NSError* _invalidationReason;
	BOOL _regenerateVideoThumbnails;
	int _changeSource;
	id<PLManagedObjectContextPTPNotificationDelegate> _ptpNotificationDelegate;

}

@property (nonatomic,readonly) BOOL mergingChanges;                                                                         //@synthesize mergingChanges=_mergingChanges - In the implementation block
@property (nonatomic,readonly) BOOL savingDuringMerge;                                                                      //@synthesize savingDuringMerge=_savingDuringMerge - In the implementation block
@property (assign,nonatomic) BOOL isInitializingSingletons;                                                                 //@synthesize isInitializingSingletons=_isInitializingSingletons - In the implementation block
@property (nonatomic,retain) PLDelayedFiledSystemDeletions * delayedDeletions;                                              //@synthesize delayedDeletions=_delayedDeletions - In the implementation block
@property (assign,nonatomic,__weak) id<PLManagedObjectContextPTPNotificationDelegate> ptpNotificationDelegate;              //@synthesize ptpNotificationDelegate=_ptpNotificationDelegate - In the implementation block
@property (assign,nonatomic) BOOL isBackingALAssetsLibrary;                                                                 //@synthesize isBackingALAssetsLibrary=_isBackingALAssetsLibrary - In the implementation block
@property (nonatomic,readonly) PLDelayedSaveActions * delayedSaveActions; 
@property (assign,nonatomic,__weak) PLPhotoLibrary * photoLibrary; 
@property (nonatomic,readonly) BOOL isUserInterfaceContext; 
@property (assign,nonatomic) BOOL regenerateVideoThumbnails;                                                                //@synthesize regenerateVideoThumbnails=_regenerateVideoThumbnails - In the implementation block
@property (assign,nonatomic) BOOL hasMetadataChanges;                                                                       //@synthesize hasMetadataChanges=_hasMetadataChanges - In the implementation block
@property (assign,nonatomic) int changeSource;                                                                              //@synthesize changeSource=_changeSource - In the implementation block
+(id)managedObjectModel;
+(id)managedObjectModelURL;
+(void)removePhotosDatabaseWithPathManager:(id)arg1 ;
+(BOOL)hasConfiguredPhotoLibrary;
+(void)getPersistentStoreURL:(id*)arg1 options:(id*)arg2 forDatabasePath:(id)arg3 ;
+(unsigned long long)indexValueForAttributeNames:(id)arg1 entity:(id)arg2 ;
+(id)sanitizedErrorFromError:(id)arg1 ;
+(id)contextForPhotoLibrary:(id)arg1 automaticallyMerges:(BOOL)arg2 name:(const char*)arg3 ;
+(void)recordChangedProperties:(id)arg1 forObjectID:(id)arg2 inAttributesByOID:(id)arg3 relationshipsByOID:(id)arg4 ;
+(id)changeNotificationObjectIDKeys;
+(BOOL)_isAssetLibraryFetchingAlbum:(id)arg1 ;
+(BOOL)assetsLibraryLoggingEnabled;
+(void)recordChangedKeys:(id)arg1 forObjectID:(id)arg2 inAttributesByOID:(id)arg3 relationshipsByOID:(id)arg4 ;
+(BOOL)canMergeRemoteChanges;
+(BOOL)shouldHavePhotoLibrary;
+(id)contextForRepairingSingletonObjects:(const char*)arg1 libraryURL:(id)arg2 error:(id*)arg3 ;
+(id)contextForManagedObjectLookupItemCache:(id)arg1 coordinator:(id)arg2 ;
+(id)__processEntityByName:(id)arg1 obj:(id)arg2 ;
+(id)__processSubEntityByName:(id)arg1 entity:(id)arg2 withEntityData:(id)arg3 ;
+(void)__prepareEntityPropertyLookups;
+(id)_attributeNamesByIndexByEntityNames;
+(id)_indexesByAttributeNamesByEntityNames;
+(id)_relationshipNamesByIndexByEntityNames;
+(id)_indexesByRelationshipNamesByEntityNames;
+(unsigned long long)_indexValueForPropertyNames:(id)arg1 entityName:(id)arg2 indexesByPropertyNamesByEntityNames:(id)arg3 ;
+(id)_propertyNamesForIndexValues:(unsigned long long)arg1 entity:(id)arg2 propertyNamesByIndexByEntityNames:(id)arg3 ;
+(id)attributeNamesForIndexValues:(unsigned long long)arg1 entity:(id)arg2 ;
+(unsigned long long)indexValueForRelationshipNames:(id)arg1 entity:(id)arg2 ;
+(id)relationshipNamesForIndexValues:(unsigned long long)arg1 entity:(id)arg2 ;
+(id)changeNotificationObjectMutationKeys;
+(id)changeNotificationObjectKeys;
+(id)changeNotificationObjectIDMutationKeys;
-(void)dealloc;
-(void)setName:(id)arg1 ;
-(id)existingObjectWithID:(id)arg1 error:(id*)arg2 ;
-(id)executeFetchRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)save:(id*)arg1 ;
-(id)executeRequest:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)countForFetchRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2 ;
-(BOOL)isReadOnly;
-(void)_mergeChangesFromDidSaveDictionary:(id)arg1 usingObjectIDs:(BOOL)arg2 ;
-(PLPhotoLibrary *)photoLibrary;
-(id)pathManager;
-(int)changeSource;
-(void)setChangeSource:(int)arg1 ;
-(id)libraryBundle;
-(id)globalValueForKey:(id)arg1 ;
-(void)setGlobalValue:(id)arg1 forKey:(id)arg2 ;
-(void)invalidateWithReason:(id)arg1 ;
-(void)setHasMetadataChanges:(BOOL)arg1 ;
-(void)breakRetainCycles;
-(void)recordCloudDeletionForObject:(id)arg1 ;
-(BOOL)mergingChanges;
-(PLDelayedSaveActions *)delayedSaveActions;
-(void)recordAvalancheUUIDForUpdate:(id)arg1 ;
-(void)registerFilesystemDeletionInfo:(id)arg1 ;
-(id)initWithConcurrencyType:(unsigned long long)arg1 libraryBundle:(id)arg2 ;
-(id)initWithConcurrencyType:(unsigned long long)arg1 pathManager:(id)arg2 changeHandlingContainer:(id)arg3 coordinator:(id)arg4 ;
-(void)setPhotoLibrary:(PLPhotoLibrary *)arg1 ;
-(id<PLManagedObjectContextPTPNotificationDelegate>)ptpNotificationDelegate;
-(void)setPtpNotificationDelegate:(id<PLManagedObjectContextPTPNotificationDelegate>)arg1 ;
-(BOOL)isUserInterfaceContext;
-(BOOL)isDatabaseCreationContext;
-(void)withDispatchGroup:(id)arg1 performBlock:(/*^block*/id)arg2 ;
-(BOOL)isValidForSelector:(SEL)arg1 error:(id*)arg2 ;
-(void)_logFaultForPotentialySlowFetchRequeset:(id)arg1 ;
-(void)_simulateCrashIfNotAssetsd;
-(BOOL)pl_performWithOptions:(unsigned long long)arg1 andBlock:(/*^block*/id)arg2 ;
-(void)connectToChangeHandling;
-(void)disconnectFromChangeHandling;
-(void)recordManagedObjectWillSave:(id)arg1 ;
-(void)recordChangesFromTriggerModifiedObjectIDs:(id)arg1 ;
-(void)_recordChangedKeys:(id)arg1 forObjectID:(id)arg2 ;
-(void)getAndClearUpdatedObjectsAttributes:(id*)arg1 relationships:(id*)arg2 ;
-(void)_createDelayedSaveActionsWithTransaction:(id)arg1 ;
-(void)_destroyDelayedSaveActions;
-(BOOL)hasPreviouslyMergedDeleteForObject:(id)arg1 ;
-(id)getAndClearRecordedAvalancheUUIDsForUpdate;
-(void)_addCloudUUID:(id)arg1 forDeletionType:(long long)arg2 ;
-(id)getAndClearRecordedObjectsForCloudDeletion;
-(void)recordSyncChangeMarker;
-(BOOL)getAndClearSyncChangeMarker;
-(void)updateTransactionAuthor;
-(BOOL)_tooManyAssetChangesToHandle:(unsigned long long)arg1 ;
-(void)recordNeedsBackgroundJobProcessing;
-(id)pl_fetchObjectsWithIDs:(id)arg1 rootEntity:(id)arg2 ;
-(id)pl_fetchObjectsWithIDs:(id)arg1 ;
-(void)_notifyALAssetsLibraryWithChanges:(id)arg1 usingObjectIDs:(BOOL)arg2 ;
-(void)resetAllFetchingAlbums;
-(BOOL)_adjustmentTimestampChangedChangedAttribute:(id)arg1 from:(id)arg2 ;
-(void)_getInsertedIDs:(id)arg1 deletedIDs:(id)arg2 changedIDs:(id)arg3 adjustedIDs:(id)arg4 ofEntityKind:(id)arg5 fromRemoteContextDidSaveObjectIDsNotification:(id)arg6 ;
-(void)_informPTPDelegateAboutChangesFromRemoteContextSaveNotification:(id)arg1 ;
-(void)appendDelayedDeletionsToXPCMessage:(id)arg1 ;
-(void)setupLocalChangeNotifications;
-(void)tearDownLocalChangeNotifications;
-(BOOL)savingDuringMerge;
-(PLDelayedFiledSystemDeletions *)delayedDeletions;
-(void)setDelayedDeletions:(PLDelayedFiledSystemDeletions *)arg1 ;
-(BOOL)hasMetadataChanges;
-(BOOL)regenerateVideoThumbnails;
-(void)setRegenerateVideoThumbnails:(BOOL)arg1 ;
-(BOOL)isInitializingSingletons;
-(void)setIsInitializingSingletons:(BOOL)arg1 ;
-(BOOL)isBackingALAssetsLibrary;
-(void)setIsBackingALAssetsLibrary:(BOOL)arg1 ;
@end

