/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol OS_dispatch_queue;
@class PLPhotoLibrary, NSObject;

@interface PLManagedAssetRecoveryManager : NSObject {

	int _assetsDownloadsCount;
	PLPhotoLibrary* _photoLibrary;
	PLPhotoLibrary* _syncablePhotoLibrary;
	NSObject*<OS_dispatch_queue> _resourceDownloadIsolationQueue;
	NSObject*<OS_dispatch_queue> _workQueue;
	long long _state;

}

@property (nonatomic,retain) PLPhotoLibrary * photoLibrary;                                            //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,retain) PLPhotoLibrary * syncablePhotoLibrary;                                    //@synthesize syncablePhotoLibrary=_syncablePhotoLibrary - In the implementation block
@property (assign,nonatomic) int assetsDownloadsCount;                                                 //@synthesize assetsDownloadsCount=_assetsDownloadsCount - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> resourceDownloadIsolationQueue;              //@synthesize resourceDownloadIsolationQueue=_resourceDownloadIsolationQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                                   //@synthesize workQueue=_workQueue - In the implementation block
@property (assign,nonatomic) long long state;                                                          //@synthesize state=_state - In the implementation block
+(id)_irisesWithZeroVideoCpDuration;
+(id)_predicateForAdjustedAssetsWithMissingResources;
+(id)_predicateForAdjustedAssetsFailedDeferredRendering;
+(id)_jpegImagesPredicate;
+(id)_imagesWithZeroWidthHeightPredicate;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(PLPhotoLibrary *)photoLibrary;
-(id)initWithLibraryServicesManager:(id)arg1 ;
-(void)setPhotoLibrary:(PLPhotoLibrary *)arg1 ;
-(void)identifyAssetsWithInconsistentCloudState;
-(void)startRecoveryOfAssetsInInconsistentCloudStateUsingCloudPhotoLibraryManager:(id)arg1 ;
-(void)_setCloudRecoveryState:(unsigned long long)arg1 forAssetsWithFetchRequestPredicate:(id)arg2 resultsFilterPredicate:(id)arg3 ;
-(void)_recoverAsset:(id)arg1 usingCloudPhotoLibraryManager:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_performAssetRecoveryTaskForInconsistentState:(id)arg1 state:(unsigned long long)arg2 usingCloudPhotoLibraryManager:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_downloadResources:(id)arg1 forAsset:(id)arg2 usingCloudPhotoLibraryManager:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_assetKindsAllowedForDownloading;
-(void)_fixDimensionsForAsset:(id)arg1 cloudPhotoLibraryManager:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_fixOriginalAssetDimensionsForAsset:(id)arg1 cloudPhotoLibraryManager:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)_fixRawUTIForAsset:(id)arg1 error:(id*)arg2 ;
-(void)_fixFullSizeAdjustedResource:(id)arg1 cloudPhotoLibraryManager:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_fixIrisWithZeroVideoComplementDuration:(id)arg1 cloudPhotoLibraryManager:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)_fixIrisWithZeroVideoComplementDuration:(id)arg1 usingExistingVideoComplementAtPath:(id)arg2 error:(id*)arg3 ;
-(BOOL)_canUnderstandAdjustmentForAsset:(id)arg1 ;
-(PLPhotoLibrary *)syncablePhotoLibrary;
-(void)setSyncablePhotoLibrary:(PLPhotoLibrary *)arg1 ;
-(int)assetsDownloadsCount;
-(void)setAssetsDownloadsCount:(int)arg1 ;
-(NSObject*<OS_dispatch_queue>)resourceDownloadIsolationQueue;
-(void)setResourceDownloadIsolationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

