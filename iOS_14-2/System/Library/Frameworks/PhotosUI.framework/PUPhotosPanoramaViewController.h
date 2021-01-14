/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUPhotosGridViewController.h>

@class PUPhotosPanoramaViewControllerSpec, PHAssetCollection, PUSectionedGridLayout;

@interface PUPhotosPanoramaViewController : PUPhotosGridViewController {

	PUPhotosPanoramaViewControllerSpec* _panoramaSpec;
	PHAssetCollection* _userPanoAlbum;

}

@property (nonatomic,readonly) PUSectionedGridLayout * mainGridLayout; 
@property (nonatomic,retain) PHAssetCollection * userPanoAlbum;                              //@synthesize userPanoAlbum=_userPanoAlbum - In the implementation block
@property (nonatomic,retain) PUPhotosPanoramaViewControllerSpec * panoramaSpec;              //@synthesize panoramaSpec=_panoramaSpec - In the implementation block
-(id)initWithSpec:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)updateLayoutMetrics;
-(id)newGridLayout;
-(BOOL)updateSpec;
-(BOOL)canBeginStackCollapseTransition;
-(void)configureGlobalFooterView:(id)arg1 ;
-(void)viewDidLoad;
-(void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 ;
-(void)configureGridCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(id)imageRequestOptionsForAsset:(id)arg1 pixelSize:(inout CGSize*)arg2 ;
-(void)_updatePhotoDecorationForCell:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)wantsGlobalFooter;
-(CGSize)maximumThumbnailRequestSize;
-(long long)cellFillMode;
-(void)_configureCollectionViewGridLayout:(id)arg1 ;
-(void)updatePhotoViewContent:(id)arg1 withThumbnailImage:(id)arg2 ;
-(void)rotatePhotoViewToHorizontalIfNeeded:(id)arg1 withAsset:(id)arg2 ;
-(PUPhotosPanoramaViewControllerSpec *)panoramaSpec;
-(void)setPanoramaSpec:(PUPhotosPanoramaViewControllerSpec *)arg1 ;
-(PHAssetCollection *)userPanoAlbum;
-(void)setUserPanoAlbum:(PHAssetCollection *)arg1 ;
@end

