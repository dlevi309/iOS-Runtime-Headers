/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSectionedDataSourceManager.h>
#import <libobjc.A.dylib/PXMutableAssetsDataSourceManager.h>

@class NSString, NSPredicate, PXAssetsDataSource;

@interface PXAssetsDataSourceManager : PXSectionedDataSourceManager <PXMutableAssetsDataSourceManager> {

	BOOL _isLoadingInitialDataSource;
	BOOL _isBackgroundFetching;
	BOOL _supportsFiltering;
	NSString* _localizedEmptyPlaceholderTitle;
	NSString* _localizedEmptyPlaceholderMessage;
	NSString* _localizedLoadingInitialDataSourceMessage;
	NSPredicate* _filterPredicate;

}

@property (nonatomic,readonly) PXAssetsDataSource * dataSource; 
@property (nonatomic,copy,readonly) NSString * localizedEmptyPlaceholderTitle;                        //@synthesize localizedEmptyPlaceholderTitle=_localizedEmptyPlaceholderTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedEmptyPlaceholderMessage;                      //@synthesize localizedEmptyPlaceholderMessage=_localizedEmptyPlaceholderMessage - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedLoadingInitialDataSourceMessage;              //@synthesize localizedLoadingInitialDataSourceMessage=_localizedLoadingInitialDataSourceMessage - In the implementation block
@property (nonatomic,readonly) BOOL isLoadingInitialDataSource;                                       //@synthesize isLoadingInitialDataSource=_isLoadingInitialDataSource - In the implementation block
@property (nonatomic,readonly) BOOL isBackgroundFetching;                                             //@synthesize isBackgroundFetching=_isBackgroundFetching - In the implementation block
@property (nonatomic,readonly) BOOL supportsFiltering;                                                //@synthesize supportsFiltering=_supportsFiltering - In the implementation block
@property (nonatomic,readonly) NSPredicate * filterPredicate;                                         //@synthesize filterPredicate=_filterPredicate - In the implementation block
@property (assign,nonatomic) long long backgroundFetchOriginSection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)forceAccurateSection:(long long)arg1 andSectionsBeforeAndAfter:(long long)arg2 ;
-(NSPredicate *)filterPredicate;
-(void)setFilteringDisabled:(BOOL)arg1 forAssetCollection:(id)arg2 ;
-(BOOL)forceAccurateSectionsIfNeeded:(id)arg1 ;
-(void)excludeAssetsAtIndexPaths:(id)arg1 ;
-(void)stopForceIncludingAllAssets;
-(void)setBackgroundFetchOriginSection:(long long)arg1 ;
-(BOOL)isLoadingInitialDataSource;
-(BOOL)forceAccurateAllSectionsIfNeeded;
-(id)pauseChangeDeliveryWithTimeout:(double)arg1 ;
-(void)setCurationEnabled:(BOOL)arg1 forAssetCollection:(id)arg2 ;
-(BOOL)supportsFiltering;
-(NSString *)localizedLoadingInitialDataSourceMessage;
-(void)setFilterPredicate:(id)arg1 provideIncrementalChangeDetailsForAssetCollections:(id)arg2 ;
-(void)registerChangeObserver:(id)arg1 context:(void*)arg2 ;
-(void)waitForAvailabilityOfAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)unregisterChangeObserver:(id)arg1 context:(void*)arg2 ;
-(NSString *)localizedEmptyPlaceholderTitle;
-(long long)backgroundFetchOriginSection;
-(void)resumeChangeDeliveryAndBackgroundLoading:(id)arg1 ;
-(id)mutableChangeObject;
-(void)refreshResultsForAssetCollection:(id)arg1 ;
-(void)startBackgroundFetchIfNeeded;
-(NSString *)localizedEmptyPlaceholderMessage;
-(BOOL)isBackgroundFetching;
-(void)forceIncludeAssetsAtIndexPaths:(id)arg1 ;
-(void)stopExcludingAssets:(id)arg1 ;
-(void)ensureLastSectionHasContent;
-(void)ensureStartingSectionHasContent;
@end

