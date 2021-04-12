/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class NSPredicate;


@protocol PXMutableAssetsDataSourceManager <NSObject>
@property (assign,nonatomic) long long backgroundFetchOriginSection; 
@property (nonatomic,retain) NSPredicate * filterPredicate; 
@required
-(BOOL)forceAccurateSection:(long long)arg1 andSectionsBeforeAndAfter:(long long)arg2;
-(void)setFilterPredicate:(id)arg1;
-(NSPredicate *)filterPredicate;
-(void)setFilteringDisabled:(BOOL)arg1 forAssetCollection:(id)arg2;
-(BOOL)forceAccurateSectionsIfNeeded:(id)arg1;
-(void)excludeAssetsAtIndexPaths:(id)arg1;
-(void)stopForceIncludingAllAssets;
-(void)setBackgroundFetchOriginSection:(long long)arg1;
-(BOOL)forceAccurateAllSectionsIfNeeded;
-(id)pauseChangeDeliveryWithTimeout:(double)arg1;
-(void)setCurationEnabled:(BOOL)arg1 forAssetCollection:(id)arg2;
-(void)setFilterPredicate:(id)arg1 provideIncrementalChangeDetailsForAssetCollections:(id)arg2;
-(long long)backgroundFetchOriginSection;
-(void)resumeChangeDeliveryAndBackgroundLoading:(id)arg1;
-(void)refreshResultsForAssetCollection:(id)arg1;
-(void)startBackgroundFetchIfNeeded;
-(void)forceIncludeAssetsAtIndexPaths:(id)arg1;
-(void)stopExcludingAssets:(id)arg1;
-(void)ensureLastSectionHasContent;
-(void)ensureStartingSectionHasContent;

@end

