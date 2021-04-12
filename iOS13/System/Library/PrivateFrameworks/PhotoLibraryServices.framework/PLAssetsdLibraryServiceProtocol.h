/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLAssetsdLibraryServiceProtocol <NSObject>
@required
-(void)recoverFromCrashIfNeeded;
-(void)launchAssetsd;
-(void)publishRemoteChangeEvent:(id)arg1 delayedSaveActionsDetail:(id)arg2 reply:(/*^block*/id)arg3;
-(void)getCurrentModelVersionWithReply:(/*^block*/id)arg1;
-(void)createPhotoLibraryDatabaseWithReply:(/*^block*/id)arg1;
-(void)openPhotoLibraryDatabaseWithReply:(/*^block*/id)arg1;
-(id)upgradePhotoLibraryDatabaseWithOptions:(unsigned long long)arg1 reply:(/*^block*/id)arg2;
-(id)postOpenProgressWithReply:(/*^block*/id)arg1;
-(void)getPhotoLibraryStoreXPCListenerEndpointWithReply:(/*^block*/id)arg1;
-(void)importFileSystemAssetsWithReason:(id)arg1 reply:(/*^block*/id)arg2;
-(void)repairSingletonObjectsWithReply:(/*^block*/id)arg1;
-(void)updateThumbnailsForPhotos:(id)arg1 assignNewIndex:(BOOL)arg2 forceRefresh:(BOOL)arg3 reply:(/*^block*/id)arg4;
-(void)automaticallyDeleteEmptyAlbumWithObjectURI:(id)arg1 reply:(/*^block*/id)arg2;
-(void)pendingEventsForRequest:(id)arg1 reply:(/*^block*/id)arg2;

@end

