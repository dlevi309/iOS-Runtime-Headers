/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLResourceDataStore.h>
#import <libobjc.A.dylib/PLResourceDataStore.h>

@class PLPhotoLibraryPathManager, NSMutableDictionary, PLDeferredPhotoFinalizer, PAImageConversionServiceClient, PAVideoConversionServiceClient, PLPrimaryResourceDataStoreKeyHelper, NSDictionary, PLCloudPhotoLibraryManager, NSString;

@interface PLPrimaryResourceDataStore : PLResourceDataStore <PLResourceDataStore> {

	NSMutableDictionary* _inflightCPLDownloadTaskIdentifiersByRequestID;
	NSMutableDictionary* _pendingCPLDownloadShouldRunByRequestID;
	os_unfair_lock_s _lock;
	PLDeferredPhotoFinalizer* _deferredPhotoFinalizer;
	NSMutableDictionary* _pendingDeferredPhotoFinalizationShouldRunByRequestID;
	os_unfair_lock_s _deferredFinalizerLock;
	PAImageConversionServiceClient* _imageConversionServiceClient;
	PAVideoConversionServiceClient* _videoConversionServiceClient;
	unsigned _masterThumbRecipeID;
	PLPrimaryResourceDataStoreKeyHelper* _mainScopeKeyHelper;
	NSDictionary* _keyHelperByBundleScope;

}

@property (nonatomic,retain) PLPrimaryResourceDataStoreKeyHelper * mainScopeKeyHelper;              //@synthesize mainScopeKeyHelper=_mainScopeKeyHelper - In the implementation block
@property (nonatomic,retain) NSDictionary * keyHelperByBundleScope;                                 //@synthesize keyHelperByBundleScope=_keyHelperByBundleScope - In the implementation block
@property (getter=_cplManager,readonly) PLCloudPhotoLibraryManager * cplManager; 
@property (assign,nonatomic) unsigned masterThumbRecipeID;                                          //@synthesize masterThumbRecipeID=_masterThumbRecipeID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) PLPhotoLibraryPathManager * pathManager; 
+(unsigned)storeClassID;
+(unsigned short)keyLengthWithDataPreview:(unsigned char)arg1 ;
+(id)supportedRecipes;
+(unsigned)currentDeviceMasterThumbRecipeID;
-(void)dealloc;
-(id)name;
-(id)descriptionForSubtype:(long long)arg1 ;
-(BOOL)storeExternalResource:(id)arg1 forAsset:(id)arg2 inContext:(id)arg3 options:(id)arg4 error:(id*)arg5 resultingResource:(id*)arg6 ;
-(id)initWithPathManager:(id)arg1 ;
-(id)_deferredPhotoFinalizer;
-(id)_imageConversionServiceClient;
-(id)_videoConversionServiceClient;
-(id)keyFromKeyStruct:(const void*)arg1 ;
-(id)resourceDataForKey:(id)arg1 assetID:(id)arg2 ;
-(id)resourceURLForKey:(id)arg1 assetID:(id)arg2 ;
-(id)updateDerivativeResourcesForAsset:(id)arg1 forLifecycleEvent:(unsigned)arg2 ;
-(id)virtualResourcesForAsset:(id)arg1 ;
-(BOOL)canStoreExternalResource:(id)arg1 ;
-(unsigned long long)requestLocalAvailabilityChange:(short)arg1 forResource:(id)arg2 asset:(id)arg3 inContext:(id)arg4 options:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)cancelLocalAvailabilityChangeRequest:(unsigned long long)arg1 ;
-(void)requestRemoteAvailabilityChange:(short)arg1 forResource:(id)arg2 asset:(id)arg3 inContext:(id)arg4 options:(id)arg5 completion:(/*^block*/id)arg6 ;
-(BOOL)videoResource:(id)arg1 matchesOrExceedsQualityLevel:(unsigned)arg2 ;
-(BOOL)canStreamResource:(id)arg1 ;
-(void)requestStreamingURLForResource:(id)arg1 asset:(id)arg2 intent:(unsigned long long)arg3 inContext:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_finalizeDeferredAsset:(id)arg1 forWide:(BOOL)arg2 options:(id)arg3 taskDidBeginHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)_isSystemLibraryStore;
-(void)_downloadCPLResource:(id)arg1 forAsset:(id)arg2 options:(id)arg3 taskDidBeginHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(unsigned long long)_pruneResource:(id)arg1 asset:(id)arg2 inContext:(id)arg3 completion:(/*^block*/id)arg4 ;
-(unsigned long long)_makeResourceLocallyAvailable:(id)arg1 asset:(id)arg2 inContext:(id)arg3 options:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)_expectedFilePathForMasterThumbnailForAsset:(id)arg1 ;
-(id)_masterThumbnailVirtualResourceForAsset:(id)arg1 ;
-(id)_cplManager;
-(unsigned)masterThumbRecipeID;
-(void)transitional_reconsiderLocalAvailabilityBasedOnExistingLocationOfCPLResource:(id)arg1 givenFilePath:(id)arg2 ;
-(void)setMasterThumbRecipeID:(unsigned)arg1 ;
-(PLPrimaryResourceDataStoreKeyHelper *)mainScopeKeyHelper;
-(void)setMainScopeKeyHelper:(PLPrimaryResourceDataStoreKeyHelper *)arg1 ;
-(NSDictionary *)keyHelperByBundleScope;
-(void)setKeyHelperByBundleScope:(NSDictionary *)arg1 ;
-(id)keyHelperForBundleScope:(unsigned char)arg1 ;
@end

