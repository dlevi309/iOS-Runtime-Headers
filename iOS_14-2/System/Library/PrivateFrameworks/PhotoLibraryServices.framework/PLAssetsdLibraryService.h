/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLAbstractLibraryServicesManagerService.h>
#import <libobjc.A.dylib/PLAssetsdLibraryServiceProtocol.h>

@class PLXPCPhotoLibraryStoreContainer, PLAssetsdConnectionAuthorization, NSMutableArray, PLPhotoLibraryBundleController, PLAssetsdService, NSString;

@interface PLAssetsdLibraryService : PLAbstractLibraryServicesManagerService <PLAssetsdLibraryServiceProtocol> {

	PLXPCPhotoLibraryStoreContainer* _xpcPhotoLibraryStoreContainer;
	PLAssetsdConnectionAuthorization* _connectionAuthorization;
	NSMutableArray* _preRunningProgressFollowers;
	NSMutableArray* _postRunningProgressFollowers;
	PLPhotoLibraryBundleController* _libraryBundleController;
	PLAssetsdService* _assetsdService;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)requiredLibraryServicesStateForURL:(id)arg1 ;
-(void)recoverFromCrashIfNeeded;
-(void)launchAssetsd;
-(id)newLibraryOpener;
-(id)upgradePhotoLibraryDatabaseWithOptions:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)sandboxExtensionsByPath;
-(void)_sendClientReply:(/*^block*/id)arg1 sandboxExtensionsByPath:(id)arg2 error:(id)arg3 ;
-(void)openPhotoLibraryDatabaseWithOptions:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)_postRunningProgress;
-(id)importFileSystemAssetsWithReason:(id)arg1 force:(BOOL)arg2 reply:(/*^block*/id)arg3 ;
-(id)postOpenProgressWithReply:(/*^block*/id)arg1 ;
-(void)pendingEventsForRequest:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)repairSingletonObjectsWithReply:(/*^block*/id)arg1 ;
-(void)createPhotoLibraryDatabaseWithOptions:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)automaticallyDeleteEmptyAlbumWithObjectURI:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)_preRunningProgress;
-(id)initWithLibraryServicesManager:(id)arg1 bundleController:(id)arg2 connectionAuthorization:(id)arg3 assetsdService:(id)arg4 ;
-(void)getCurrentModelVersionWithReply:(/*^block*/id)arg1 ;
-(id)libraryBundle;
-(void)getPhotoLibraryStoreXPCListenerEndpointWithReply:(/*^block*/id)arg1 ;
-(void)publishRemoteChangeEvent:(id)arg1 delayedSaveActionsDetail:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)updateThumbnailsForPhotos:(id)arg1 assignNewIndex:(BOOL)arg2 forceRefresh:(BOOL)arg3 reply:(/*^block*/id)arg4 ;
-(id)_returnValueForProgress:(id)arg1 addTo:(id)arg2 ;
@end

