/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/

#import <AssetsLibraryServices/PLAssetsdBaseClient.h>

@class PLAssetsdClientSandboxExtensions;

@interface PLAssetsdLibraryClient : PLAssetsdBaseClient {

	AB _isOpen;
	PLAssetsdClientSandboxExtensions* _sandboxExtensions;

}
-(BOOL)repairSingletonObjectsWithError:(id*)arg1 ;
-(BOOL)openPhotoLibraryDatabaseWithoutProgressIfNeeded:(id*)arg1 ;
-(void)recoverFromCrashIfNeeded;
-(void)importFileSystemAssetsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)launchAssetsd;
-(void)updateThumbnailsForPhotos:(id)arg1 assignNewIndex:(BOOL)arg2 forceRefresh:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)automaticallyDeleteEmptyAlbumWithObjectID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)getCurrentModelVersion;
-(void)publishRemoteChangeEvent:(id)arg1 delayedSaveActionsDetail:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)getPhotoLibraryStoreXPCListenerEndpoint;
-(BOOL)createPhotoLibraryDatabaseWithError:(id*)arg1 ;
-(id)upgradePhotoLibraryDatabaseWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)openPhotoLibraryDatabaseWithPostOpenProgress:(id*)arg1 error:(id*)arg2 ;
-(id)initWithQueue:(id)arg1 proxyCreating:(id)arg2 proxyGetter:(SEL)arg3 sandboxExtensions:(id)arg4 ;
-(BOOL)synchronouslyImportFileSystemAssetsWithError:(id*)arg1 ;
-(id)_assetURIStringsForPhotos:(id)arg1 ;
-(BOOL)synchronouslyUpdateThumbnailsForPhotos:(id)arg1 assignNewIndex:(BOOL)arg2 forceRefresh:(BOOL)arg3 error:(id*)arg4 ;
-(void)pendingEventsForRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_consumeSandboxExtensions:(id)arg1 ;
@end

