/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXAssetBadgeManager.h>
#import <libobjc.A.dylib/PXPhotosDataSourceChangeObserver.h>

@class PXPhotosDataSource, PXMiroMovieProvider, PHFetchResult, NSSet, NSString;

@interface PXDebugAssetBadgeManager : PXAssetBadgeManager <PXPhotosDataSourceChangeObserver> {

	PXPhotosDataSource* _curatedPhotosDataSource;
	PXMiroMovieProvider* _miroMovieProvider;
	PXPhotosDataSource* _photosDataSource;
	PHFetchResult* __photosGraphCurationAssets;
	NSSet* __miroCurationAssets;

}

@property (setter=_setPhotosGraphCurationAssets:,nonatomic,retain) PHFetchResult * _photosGraphCurationAssets;              //@synthesize _photosGraphCurationAssets=__photosGraphCurationAssets - In the implementation block
@property (setter=_setMiroCurationAssets:,nonatomic,retain) NSSet * _miroCurationAssets;                                    //@synthesize _miroCurationAssets=__miroCurationAssets - In the implementation block
@property (nonatomic,retain) PXPhotosDataSource * photosDataSource;                                                         //@synthesize photosDataSource=_photosDataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPhotosDataSource:(PXPhotosDataSource *)arg1 ;
-(PXPhotosDataSource *)photosDataSource;
-(void)photosDataSource:(id)arg1 didChange:(id)arg2 ;
-(PXAssetBadgeInfo)badgeInfoForAsset:(id)arg1 inCollection:(id)arg2 options:(unsigned long long)arg3 ;
-(void)_updateAssets;
-(PHFetchResult *)_photosGraphCurationAssets;
-(BOOL)_isAssetContainedInMiroCuration:(id)arg1 ;
-(BOOL)_isAssetContainedInPhotosGraphCuration:(id)arg1 ;
-(void)_setPhotosGraphCurationAssets:(id)arg1 ;
-(NSSet *)_miroCurationAssets;
-(void)_setMiroCurationAssets:(id)arg1 ;
-(void)dealloc;
@end

