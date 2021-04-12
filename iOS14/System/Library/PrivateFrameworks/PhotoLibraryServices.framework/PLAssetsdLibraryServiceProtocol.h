/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLAssetsdLibraryServiceProtocol <NSObject>
@required
-(void)recoverFromCrashIfNeeded;
-(void)launchAssetsd;
-(id)upgradePhotoLibraryDatabaseWithOptions:(id)arg1 reply:(/*^block*/id)arg2;
-(void)openPhotoLibraryDatabaseWithOptions:(id)arg1 reply:(/*^block*/id)arg2;
-(id)importFileSystemAssetsWithReason:(id)arg1 force:(BOOL)arg2 reply:(/*^block*/id)arg3;
-(id)postOpenProgressWithReply:(/*^block*/id)arg1;
-(void)pendingEventsForRequest:(id)arg1 reply:(/*^block*/id)arg2;
-(void)repairSingletonObjectsWithReply:(/*^block*/id)arg1;
-(void)createPhotoLibraryDatabaseWithOptions:(id)arg1 reply:(/*^block*/id)arg2;
-(void)automaticallyDeleteEmptyAlbumWithObjectURI:(id)arg1 reply:(/*^block*/id)arg2;
-(void)getCurrentModelVersionWithReply:(/*^block*/id)arg1;
-(void)getPhotoLibraryStoreXPCListenerEndpointWithReply:(/*^block*/id)arg1;
-(void)publishRemoteChangeEvent:(id)arg1 delayedSaveActionsDetail:(id)arg2 reply:(/*^block*/id)arg3;
-(void)updateThumbnailsForPhotos:(id)arg1 assignNewIndex:(BOOL)arg2 forceRefresh:(BOOL)arg3 reply:(/*^block*/id)arg4;

@end

