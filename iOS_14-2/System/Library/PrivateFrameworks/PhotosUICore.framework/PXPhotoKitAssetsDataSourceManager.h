/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXAssetsDataSourceManager.h>
#import <libobjc.A.dylib/PXPhotosDataSourceChangeObserver.h>
#import <libobjc.A.dylib/PXMutableAssetsDataSourceManager.h>

@protocol OS_dispatch_queue, PXPhotosDataSourceProvider;
@class NSPredicate, PXPhotosDataSource, NSNumber, NSObject, NSString, PXPhotoKitAssetsDataSource;

@interface PXPhotoKitAssetsDataSourceManager : PXAssetsDataSourceManager <PXPhotosDataSourceChangeObserver, PXMutableAssetsDataSourceManager> {

	PXPhotosDataSource* _photosDataSource;
	NSNumber* _backgroundFetchOriginSection;
	BOOL _isLoadingInitialPhotosDataSource;
	NSObject*<OS_dispatch_queue> _initialDataSourceLoadingQueue;
	NSString* _localizedLoadingInitialDataSourceMessage;
	id<PXPhotosDataSourceProvider> _photosDataSourceProvider;

}

@property (nonatomic,retain) id<PXPhotosDataSourceProvider> photosDataSourceProvider;              //@synthesize photosDataSourceProvider=_photosDataSourceProvider - In the implementation block
@property (nonatomic,retain) PXPhotosDataSource * photosDataSource; 
@property (nonatomic,readonly) PXPhotoKitAssetsDataSource * dataSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long backgroundFetchOriginSection; 
@property (nonatomic,retain) NSPredicate * filterPredicate; 
+(id)dataSourceManagerForConfiguration:(id)arg1 ;
+(id)dataSourceManagerWithAsset:(id)arg1 ;
+(id)dataSourceManagerForAssetCollection:(id)arg1 existingAssetsFetchResult:(id)arg2 existingKeyAssetsFetchResult:(id)arg3 fetchPropertySets:(id)arg4 basePredicate:(id)arg5 options:(unsigned long long)arg6 ;
+(id)dataSourceManagerWithAsset:(id)arg1 options:(unsigned long long)arg2 ;
+(id)dataSourceManagerForAssetCollection:(id)arg1 ;
-(void)setPhotosDataSource:(PXPhotosDataSource *)arg1 ;
-(BOOL)forceAccurateSection:(long long)arg1 andSectionsBeforeAndAfter:(long long)arg2 ;
-(void)setFilterPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)filterPredicate;
-(PXPhotosDataSource *)photosDataSource;
-(id)initWithPhotosDataSource:(id)arg1 ;
-(void)setFilteringDisabled:(BOOL)arg1 forAssetCollection:(id)arg2 ;
-(BOOL)forceAccurateSectionsIfNeeded:(id)arg1 ;
-(void)excludeAssetsAtIndexPaths:(id)arg1 ;
-(void)stopForceIncludingAllAssets;
-(id)createInitialDataSource;
-(void)setBackgroundFetchOriginSection:(long long)arg1 ;
-(BOOL)isLoadingInitialDataSource;
-(void)setPhotosDataSourceProvider:(id<PXPhotosDataSourceProvider>)arg1 ;
-(id)photosDataSourceInterestingAssetReferences:(id)arg1 ;
-(id)pauseChangeDeliveryWithTimeout:(double)arg1 ;
-(void)setCurationEnabled:(BOOL)arg1 forAssetCollection:(id)arg2 ;
-(id)init;
-(id)_createAssetsDataSourceWithPhotosDataSource:(id)arg1 withChange:(id)arg2 ;
-(BOOL)supportsFiltering;
-(id)localizedLoadingInitialDataSourceMessage;
-(void)setFilterPredicate:(id)arg1 provideIncrementalChangeDetailsForAssetCollections:(id)arg2 ;
-(void)photosDataSource:(id)arg1 didChange:(id)arg2 ;
-(void)photosDataSourceDidFinishBackgroundFetching:(id)arg1 ;
-(void)_ensurePhotosDataSource;
-(id)localizedEmptyPlaceholderTitle;
-(id)initWithPhotosDataSourceProvider:(id)arg1 ;
-(long long)backgroundFetchOriginSection;
-(void)setPhotosDataSource:(id)arg1 publishIntermediateEmptySnapshot:(BOOL)arg2 ;
-(void)resumeChangeDeliveryAndBackgroundLoading:(id)arg1 ;
-(void)refreshResultsForAssetCollection:(id)arg1 ;
-(void)updateWithPhotosDataSource:(id)arg1 andDataSourceChange:(id)arg2 ;
-(void)startBackgroundFetchIfNeeded;
-(id)localizedEmptyPlaceholderMessage;
-(BOOL)isBackgroundFetching;
-(void)forceIncludeAssetsAtIndexPaths:(id)arg1 ;
-(void)stopExcludingAssets:(id)arg1 ;
-(id<PXPhotosDataSourceProvider>)photosDataSourceProvider;
-(void)dealloc;
@end

