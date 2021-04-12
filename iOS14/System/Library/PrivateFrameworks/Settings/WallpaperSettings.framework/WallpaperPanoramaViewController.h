/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Settings/WallpaperSettings.framework/WallpaperSettings
*/

#import <WallpaperSettings/WallpaperSettings-Structs.h>
#import <PhotosUI/PUPhotosPanoramaViewController.h>
#import <libobjc.A.dylib/SBSUIWallpaperPreviewViewControllerDelegate.h>

@class WallpaperPanoramaViewControllerSpec, NSDictionary, NSArray, SBSUIWallpaperPreviewViewController, NSString;

@interface WallpaperPanoramaViewController : PUPhotosPanoramaViewController <SBSUIWallpaperPreviewViewControllerDelegate> {

	BOOL _mineOnly;
	WallpaperPanoramaViewControllerSpec* __wallpaperPanoramaSpec;
	NSDictionary* __variantBeingPreviewed;
	NSDictionary* __optionsBeingPreviewed;
	NSArray* __wallpaperVariants;
	SBSUIWallpaperPreviewViewController* __previewController;

}

@property (setter=_setWallpaperPanoramaSpec:,nonatomic,retain) WallpaperPanoramaViewControllerSpec * _wallpaperPanoramaSpec;              //@synthesize _wallpaperPanoramaSpec=__wallpaperPanoramaSpec - In the implementation block
@property (setter=_setVariantBeingPreviewed:,nonatomic,retain) NSDictionary * _variantBeingPreviewed;                                     //@synthesize _variantBeingPreviewed=__variantBeingPreviewed - In the implementation block
@property (setter=_setOptionsBeingPreviewed:,nonatomic,retain) NSDictionary * _optionsBeingPreviewed;                                     //@synthesize _optionsBeingPreviewed=__optionsBeingPreviewed - In the implementation block
@property (setter=_setWallpaperVariants:,nonatomic,retain) NSArray * _wallpaperVariants;                                                  //@synthesize _wallpaperVariants=__wallpaperVariants - In the implementation block
@property (assign,nonatomic) BOOL mineOnly;                                                                                               //@synthesize mineOnly=_mineOnly - In the implementation block
@property (setter=_setPreviewController:,nonatomic,retain) SBSUIWallpaperPreviewViewController * _previewController;                      //@synthesize _previewController=__previewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSpec:(id)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(BOOL)canDragIn;
-(BOOL)isPreheatingEnabled;
-(BOOL)canDragOut;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(BOOL)canNavigateToPhotoInteractively:(BOOL)arg1 ;
-(void)updateLayoutMetrics;
-(id)newGridLayout;
-(BOOL)allowSlideshowButton;
-(SBSUIWallpaperPreviewViewController *)_previewController;
-(void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 ;
-(BOOL)shouldShowMenu;
-(void)configureGridCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)loadView;
-(BOOL)isEmpty;
-(CGSize)_itemSizeForWidth:(double)arg1 ;
-(BOOL)canBeShownFromSuspendedState;
-(void)wallpaperPreviewViewControllerCancelButtonPressed:(id)arg1 ;
-(void)wallpaperPreviewViewControllerSetButtonPressed:(id)arg1 ;
-(void)_fetchImageForWallPaperAsset:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(long long)_preferredWhitePointAdaptivityStyle;
-(BOOL)allowsPeeking;
-(id)initWithSpec:(id)arg1 mineOnly:(BOOL)arg2 ;
-(void)_setWallpaperPanoramaSpec:(id)arg1 ;
-(void)_setWallpaperVariants:(id)arg1 ;
-(NSArray *)_wallpaperVariants;
-(void)navigateToFactoryWallpaperAtIndex:(unsigned long long)arg1 ;
-(void)navigateToPhoto:(id)arg1 ;
-(void)presentPreviewControllerWithWallpaperDict:(id)arg1 photo:(id)arg2 andOptions:(id)arg3 ;
-(void)_setVariantBeingPreviewed:(id)arg1 ;
-(void)_setOptionsBeingPreviewed:(id)arg1 ;
-(WallpaperPanoramaViewControllerSpec *)_wallpaperPanoramaSpec;
-(NSDictionary *)_variantBeingPreviewed;
-(NSDictionary *)_optionsBeingPreviewed;
-(BOOL)mineOnly;
-(void)setMineOnly:(BOOL)arg1 ;
-(void)_setPreviewController:(id)arg1 ;
@end

