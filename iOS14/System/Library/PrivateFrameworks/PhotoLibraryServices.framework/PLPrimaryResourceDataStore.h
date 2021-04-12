/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLResourceDataStore.h>
#import <libobjc.A.dylib/PLResourceDataStore.h>

@class PLPhotoLibraryPathManager, NSMutableDictionary, PLDeferredPhotoFinalizer, PAImageConversionServiceClient, PAVideoConversionServiceClient, PLPrimaryResourceDataStoreKeyHelper, NSDictionary, PLCloudPhotoLibraryManager, NSString;

@interface PLPrimaryResourceDataStore : PLResourceDataStore <PLResourceDataStore> {

	NSMutableDictionary* _makeAvailableProgressByTaskIdentifier;
	os_unfair_lock_s _lock;
	PLDeferredPhotoFinalizer* _deferredPhotoFinalizer;
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
@property (nonatomic,readonly) PLPhotoLibraryPathManager * pathManager; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned)currentDeviceMasterThumbRecipeID;
+(id)supportedRecipes;
+(unsigned short)keyLengthWithDataPreview:(unsigned char)arg1 ;
+(unsigned)storeClassID;
-(id)_imageConversionServiceClient;
-(BOOL)_isSystemLibraryStore;
-(void)setKeyHelperByBundleScope:(NSDictionary *)arg1 ;
-(id)_deferredPhotoFinalizer;
-(id)virtualResourcesForAsset:(id)arg1 ;
-(id)updateDerivativeResourcesForAsset:(id)arg1 forLifecycleEvent:(unsigned)arg2 ;
-(id)keyFromKeyStruct:(const void*)arg1 ;
-(id)resourceURLForKey:(id)arg1 assetID:(id)arg2 ;
-(id)requestLocalAvailabilityChange:(short)arg1 forResource:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_makeResourceLocallyAvailable:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)name;
-(void)transitional_reconsiderLocalAvailabilityBasedOnExistingLocationOfCPLResource:(id)arg1 givenFilePath:(id)arg2 ;
-(id)initWithPathManager:(id)arg1 ;
-(void)requestStreamingURLForResource:(id)arg1 asset:(id)arg2 intent:(unsigned long long)arg3 inContext:(id)arg4 clientBundleID:(id)arg5 completion:(/*^block*/id)arg6 ;
-(BOOL)_taskIsPendingPhotoFinalizationWithIdentifier:(id)arg1 ;
-(BOOL)videoResource:(id)arg1 matchesOrExceedsQualityLevel:(unsigned)arg2 ;
-(id)_expectedFilePathForMasterThumbnailForAsset:(id)arg1 ;
-(void)_downloadCPLResource:(id)arg1 options:(id)arg2 taskDidBeginHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_pruneResource:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_cplManager;
-(void)_cancelAvailabilityRequestWithTaskIdentifier:(id)arg1 ;
-(void)setMasterThumbRecipeID:(unsigned)arg1 ;
-(void)setMainScopeKeyHelper:(PLPrimaryResourceDataStoreKeyHelper *)arg1 ;
-(BOOL)_taskIsPendingDownloadWithIdentifier:(id)arg1 ;
-(id)keyHelperForBundleScope:(unsigned char)arg1 ;
-(id)descriptionForSubtype:(long long)arg1 ;
-(void)_transitionTaskToInflightWithIdentifier:(id)arg1 ;
-(id)_finalizeDeferredAsset:(id)arg1 forWide:(BOOL)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(unsigned)masterThumbRecipeID;
-(id)_videoConversionServiceClient;
-(BOOL)dataStoreSubtypeIsDownloadable:(long long)arg1 ;
-(PLPrimaryResourceDataStoreKeyHelper *)mainScopeKeyHelper;
-(id)_newProgressForTaskWithIdentifier:(id)arg1 type:(long long)arg2 ;
-(void)markAsynchronousLocalRenderAsOptionalForProgress:(id)arg1 ;
-(id)_masterThumbnailVirtualResourceForAsset:(id)arg1 ;
-(BOOL)canStoreExternalResource:(id)arg1 ;
-(id)resourceDataForKey:(id)arg1 assetID:(id)arg2 ;
-(BOOL)canStreamResource:(id)arg1 ;
-(BOOL)canMarkAsynchronousLocalRenderAsOptionalForProgress:(id)arg1 ;
-(NSDictionary *)keyHelperByBundleScope;
-(BOOL)storeExternalResource:(id)arg1 forAsset:(id)arg2 inContext:(id)arg3 options:(id)arg4 error:(id*)arg5 resultingResource:(id*)arg6 ;
-(void)dealloc;
@end

