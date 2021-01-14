/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/

#import <AssetsLibraryServices/PLAssetsdBaseClient.h>

@class PLAssetsdClientSandboxExtensions;

@interface PLAssetsdLibraryClient : PLAssetsdBaseClient {

	AB _isOpen;
	PLAssetsdClientSandboxExtensions* _sandboxExtensions;

}
-(BOOL)openPhotoLibraryDatabaseWithoutProgressIfNeededWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)recoverFromCrashIfNeeded;
-(void)launchAssetsd;
-(long long)getCurrentModelVersion;
-(BOOL)synchronouslyImportFileSystemAssetsForce:(BOOL)arg1 withError:(id*)arg2 ;
-(void)publishRemoteChangeEvent:(id)arg1 delayedSaveActionsDetail:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)synchronouslyUpdateThumbnailsForPhotos:(id)arg1 assignNewIndex:(BOOL)arg2 forceRefresh:(BOOL)arg3 error:(id*)arg4 ;
-(id)_assetURIStringsForPhotos:(id)arg1 ;
-(BOOL)openPhotoLibraryDatabaseWithPostOpenProgress:(id*)arg1 options:(id)arg2 error:(id*)arg3 ;
-(BOOL)repairSingletonObjectsWithError:(id*)arg1 ;
-(id)importFileSystemAssetsForce:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)initWithQueue:(id)arg1 proxyCreating:(id)arg2 proxyGetter:(SEL)arg3 sandboxExtensions:(id)arg4 ;
-(id)getPhotoLibraryStoreXPCListenerEndpoint;
-(void)pendingEventsForRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateThumbnailsForPhotos:(id)arg1 assignNewIndex:(BOOL)arg2 forceRefresh:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)automaticallyDeleteEmptyAlbumWithObjectID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)upgradePhotoLibraryDatabaseWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_consumeSandboxExtensions:(id)arg1 ;
-(BOOL)openPhotoLibraryDatabaseWithPostOpenProgress:(id*)arg1 error:(id*)arg2 ;
-(BOOL)createPhotoLibraryDatabaseWithOptions:(id)arg1 error:(id*)arg2 ;
@end

