/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class NSPredicate;


@protocol PXCuratedLibraryMutableAssetsDataSourceManager <PXMutableAssetsDataSourceManager>
@property (assign,nonatomic) long long zoomLevel; 
@property (nonatomic,retain) NSPredicate * allPhotosFilterPredicate; 
@required
-(BOOL)forceAccurateSection:(long long)arg1 andSectionsBeforeAndAfter:(long long)arg2;
-(BOOL)forceAccurateSectionsIfNeeded:(id)arg1;
-(long long)zoomLevel;
-(BOOL)forceAccurateAllSectionsIfNeeded;
-(void)loadIfNeeded;
-(id)pauseChangeDeliveryWithTimeout:(double)arg1;
-(void)setZoomLevel:(long long)arg1;
-(void)setAllPhotosFilterPredicate:(id)arg1;
-(void)resumeChangeDelivery:(id)arg1;
-(NSPredicate *)allPhotosFilterPredicate;
-(BOOL)forceAccurateSectionsIfNeeded:(id)arg1 inZoomLevel:(long long)arg2;
-(void)setTransientKeyAsset:(id)arg1 forAssetCollection:(id)arg2 zoomLevel:(long long)arg3;

@end

