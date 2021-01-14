/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol OS_dispatch_queue;
@class PLPhotoLibrary, NSManagedObjectContext, NSMutableDictionary, NSObject;

@interface PLRelationshipOrderKeyManager : NSObject {

	PLPhotoLibrary* _photoLibrary;
	NSManagedObjectContext* _managedObjectContext;
	NSMutableDictionary* _locationsCache;
	NSMutableDictionary* _enqueuedFolderAlbumsOrderValueUpdates;
	NSMutableDictionary* _enqueuedAlbumAssetsOrderValueUpdates;
	NSObject*<OS_dispatch_queue> _locationsCacheQueue;
	BOOL _hasStashedLocationValues;
	BOOL _conflictDetected;
	BOOL _inWriteStashedLocationMode;

}

@property (assign) BOOL inWriteStashedLocationMode;                                        //@synthesize inWriteStashedLocationMode=_inWriteStashedLocationMode - In the implementation block
@property (nonatomic,readonly) BOOL hasStashedLocationValues;                              //@synthesize hasStashedLocationValues=_hasStashedLocationValues - In the implementation block
@property (nonatomic,readonly) BOOL conflictDetected;                                      //@synthesize conflictDetected=_conflictDetected - In the implementation block
@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
-(id)new;
-(NSManagedObjectContext *)managedObjectContext;
-(id)_enqueuedFolderAlbumsOrderValueUpdates;
-(id)init;
-(void)migration_fixupOrderKeys:(id)arg1 usingOrderValuePropertyKey:(id)arg2 enforceSingletonAlbumReservedKeySpace:(BOOL)arg3 ;
-(id)initWithPhotoLibrary:(id)arg1 managedObjectContext:(id)arg2 ;
-(id)parentFolderOrderValueForAlbum:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(void)migration_updateLegacyOrderValuesForAssetsInAlbums:(id)arg1 managedObjectContext:(id)arg2 ;
-(void)_performForReading:(/*^block*/id)arg1 ;
-(void)updateKeyAssetsForAlbums:(id)arg1 inLibrary:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)inWriteStashedLocationMode;
-(void)updateAlbumAssetsUsingTransientOrdersByAlbumOID:(id)arg1 inLibrary:(id)arg2 ;
-(void)stashFolderAlbumsLocationValue:(long long)arg1 forAlbumWithID:(id)arg2 inFolderWithID:(id)arg3 atIndex:(unsigned long long)arg4 ;
-(BOOL)conflictDetected;
-(BOOL)writeStashedLocationValuesInContext:(id)arg1 error:(id*)arg2 ;
-(void)migration_ensureValidOrderKey:(id)arg1 usingOrderValuePropertyKey:(id)arg2 ;
-(long long)compareOrderKeyObject:(id)arg1 withObject:(id)arg2 ;
-(id)_locationsCache;
-(id)objectIDsAndOrderValuesForRelationship:(id)arg1 onObjectWithID:(id)arg2 invalidateCache:(BOOL)arg3 ;
-(void)migration_updateLegacyChildCollectionOrderKeysInFolder:(id)arg1 ;
-(unsigned long long)findIndexForAssetWithID:(id)arg1 newOrderValue:(long long)arg2 inAlbumWithID:(id)arg3 hasOrderValueConflictWithAssetID:(id*)arg4 ;
-(void)_getAndResetEnqueuedOrderValueUpdatesForFolders:(id*)arg1 albums:(id*)arg2 conflictDetected:(BOOL*)arg3 ;
-(void)_updateOrderOfChildrenInParent:(id)arg1 usingTransientOrders:(id)arg2 ;
-(void)getConflictResolutionOrderValuesForRelationship:(id)arg1 onObjectWithID:(id)arg2 atIndex:(unsigned long long)arg3 intoLower:(long long*)arg4 higher:(long long*)arg5 ;
-(id)initWithLibraryBundle:(id)arg1 ;
-(void)_migration_updateOrderKeysForAssetsInParentAlbum:(id)arg1 childToOrderKeyMap:(id)arg2 ;
-(unsigned long long)findIndexForAlbumWithID:(id)arg1 newOrderValue:(long long)arg2 inFolderWithID:(id)arg3 hasOrderValueConflictWithAlbumID:(id*)arg4 ;
-(void)_migration_updateOrderValuesForAssetsInAlbum:(id)arg1 managedObjectContext:(id)arg2 ;
-(void)setConflictDetected:(BOOL)arg1 ;
-(void)setInWriteStashedLocationMode:(BOOL)arg1 ;
-(BOOL)hasStashedLocationValues;
-(id)_inq_orderingStateForRelationship:(id)arg1 onObjectWithID:(id)arg2 invalidateCache:(BOOL)arg3 ;
-(id)initWithManagedObjectContext:(id)arg1 ;
-(id)_inq_orderingStateForRelationship:(id)arg1 onObjectWithID:(id)arg2 ;
-(id)_enqueuedAlbumAssetsOrderValueUpdates;
-(id)migration_sortedOrderKeysForAssetsInAlbum:(id)arg1 usingMap:(id)arg2 ;
-(void)stashAlbumAssetsLocationValue:(long long)arg1 forAssetWithID:(id)arg2 inAlbumWithID:(id)arg3 atIndex:(unsigned long long)arg4 ;
-(void)_inq_stashLocationValue:(long long)arg1 forOrderedObjectWithID:(id)arg2 inSourceObjectID:(id)arg3 relationship:(id)arg4 atIndex:(unsigned long long)arg5 usingStashDictionary:(id)arg6 ;
-(id)albumsAndOrderValuesForAsset:(id)arg1 inManagedObjectContext:(id)arg2 ;
@end

