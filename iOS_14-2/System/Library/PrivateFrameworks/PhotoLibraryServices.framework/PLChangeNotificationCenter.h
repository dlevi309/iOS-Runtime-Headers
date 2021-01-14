/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol OS_dispatch_queue;
@class NSNumber, NSObject, NSMutableArray, PLChangeList, PLContentChanges, NSMutableSet, PLManagedObjectContext, NSDictionary, NSNotificationCenter;

@interface PLChangeNotificationCenter : NSObject {

	BOOL _isProcessingRemoteDidSave;
	int _cameraPreviewChangeListenerCount;
	NSNumber* _cameraPreviewChangedToken;
	NSObject*<OS_dispatch_queue> _notificationHandlingQueue;
	NSMutableArray* _snapshots;
	PLChangeList* _changedAlbumLists;
	PLContentChanges* _albumListsContent;
	PLChangeList* _changedAlbums;
	PLContentChanges* _albumsContent;
	PLChangeList* _changedAssets;
	NSMutableSet* _assetsWithCloudCommentChanges;
	PLContentChanges* _momentsContent;
	PLChangeList* _changedMoments;
	PLContentChanges* _momentListsContent;
	PLChangeList* _changedMomentLists;
	PLChangeList* _changedCloudFeedEntries;
	PLManagedObjectContext* _moc;
	NSMutableArray* _enqueuedNotifications;
	NSDictionary* _remoteNotificationData;
	BOOL _isOverloaded;
	NSMutableSet* _overloadedObjects;

}

@property (nonatomic,retain,readonly) NSNotificationCenter * backingCenter; 
@property (nonatomic,readonly) BOOL _shouldForceFetchingAlbumsToReload; 
+(id)defaultCenter;
+(void)forceFetchingAlbumReload;
+(id)allManagedObjectKeysStrategyWithContext:(id)arg1 ;
+(void)getInsertedAssetCount:(unsigned long long*)arg1 deletedAssetCount:(unsigned long long*)arg2 updatedAssets:(id)arg3 fromContextDidChangeNotification:(id)arg4 ;
-(void)_enqueueAssetContainerChangeNotification:(id)arg1 ;
-(BOOL)_isInterestedInUpdatesOfObject:(id)arg1 ;
-(id)_orderedRelationshipsOfInterestForObject:(id)arg1 ;
-(void)_unregisterForCameraPreviewWellChanges;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)removeInvitationRecordsObserver:(id)arg1 ;
-(id)init;
-(void)_enqueueAlbumListNotifications;
-(void)addCloudCommentsChangeObserver:(id)arg1 asset:(id)arg2 ;
-(NSNotificationCenter *)backingCenter;
-(id)_keysOfInterestForObject:(id)arg1 ;
-(void)_enqueueAlbumNotifications;
-(void)addShouldReloadObserver:(id)arg1 ;
-(void)_enqueueMomentChangeNotifications;
-(void)managedObjectContext:(id)arg1 willProcessRemoteContextSave:(id)arg2 usingObjectIDs:(BOOL)arg3 isCoalescedEvent:(BOOL)arg4 ;
-(void)addCameraPreviewWellImageChangeObserver:(id)arg1 ;
-(void)_enqueueNotification:(id)arg1 object:(id)arg2 userInfoWithObjects:(const id*)arg3 forKeys:(const id*)arg4 count:(unsigned long long)arg5 ;
-(void)_enqueueAssetChangeNotification;
-(id)_toOneRelationshipsOfInterestForObject:(id)arg1 ;
-(void)addInvitationRecordsObserver:(id)arg1 ;
-(id)_takeSnapshotOfObject:(id)arg1 useCommitedValues:(BOOL)arg2 ;
-(void)_enqueuePhotoLibraryNotifications;
-(void)_enqueueMomentListChangeNotifications;
-(id)descriptionOfSplitChanges;
-(void)_enqueueInvitationRecordsChangeNotification:(id)arg1 ;
-(id)_attributesOfInterestForObject:(id)arg1 ;
-(void)removeShouldReloadObserver:(id)arg1 ;
-(void)managedObjectContext:(id)arg1 didProcessRemoteContextSave:(id)arg2 usingObjectIDs:(BOOL)arg3 ;
-(void)processContextDidChangeNotification:(id)arg1 ;
-(void)_cleanupState;
-(void)_enqueueAssetContainerListChangeNotification:(id)arg1 ;
-(void)managedObjectContextWillBeOverloaded:(id)arg1 withNotificationData:(id)arg2 usingObjectIDs:(BOOL)arg3 ;
-(void)_enqueueNotification:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
-(void)_sendNotificationsForSplitChanges;
-(void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3 ;
-(void)removeObserver:(id)arg1 ;
-(void)_registerForCameraPreviewWellChanges;
-(id)_snapshotForObject:(id)arg1 ;
-(void)postShouldReloadNotificationWithPhotoLibrary:(id)arg1 ;
-(void)_enqueueCloudCommentsNotifications;
-(id)_takeSnapshotOfObject:(id)arg1 ;
-(void)managedObjectContextWasOverloaded:(id)arg1 withNotificationData:(id)arg2 usingObjectIDs:(BOOL)arg3 ;
-(id)observeCameraPreviewWellImageChangeOnQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)enqueueNotification:(id)arg1 ;
-(void)_enqueueCloudFeedEntriesChangeNotifications;
-(void)_evaluateContainersWithUpdatedContent;
-(void)addAssetContainerChangeObserver:(id)arg1 container:(id)arg2 ;
-(void)addCloudFeedEntriesObserver:(id)arg1 ;
-(void)enumerateIndexMappingCachesForObject:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)_shouldForceFetchingAlbumsToReload;
-(void)_splitContextDidChangeNotification:(id)arg1 ;
-(void)_enqueueAlbumChangeNotification:(id)arg1 ;
-(void)removeAssetContainerListChangeObserver:(id)arg1 containerList:(id)arg2 ;
-(void)_takeSnapshotsFromContext:(id)arg1 forRemoteContextSaveNotification:(id)arg2 usingObjectIDs:(BOOL)arg3 ;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4 ;
-(void)_postEnqueuedNotifications;
-(void)addAssetContainerListChangeObserver:(id)arg1 containerList:(id)arg2 ;
-(void)removeCloudCommentsChangeObserver:(id)arg1 asset:(id)arg2 ;
-(id)addObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)removeCameraPreviewWellImageChangeObserver:(id)arg1 ;
-(void)processContextDidSaveObjectIDsNotification:(id)arg1 ;
-(void)_evaluateUpdatedAssets;
-(void)addAssetChangeObserver:(id)arg1 ;
-(void)removeAssetChangeObserver:(id)arg1 ;
-(void)dealloc;
-(id)_takeSnapshotFromCommittedValuesOfObject:(id)arg1 ;
-(void)removeAssetContainerChangeObserver:(id)arg1 container:(id)arg2 ;
-(void)removeCloudFeedEntriesObserver:(id)arg1 ;
@end

