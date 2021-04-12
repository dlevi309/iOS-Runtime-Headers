/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Settings/WallpaperSettings.framework/WallpaperSettings
*/

#import <PhotosUI/PUPhotosAlbumViewController.h>
#import <libobjc.A.dylib/SBSUIWallpaperPreviewViewControllerDelegate.h>
#import <libobjc.A.dylib/PSController.h>

@protocol PSController;
@class WallpaperAlbumViewControllerSpec, UIViewController, PSRootController, PSSpecifier, PUPhotosGridDownloadHelper, NSString;

@interface WallpaperAlbumViewController : PUPhotosAlbumViewController <SBSUIWallpaperPreviewViewControllerDelegate, PSController> {

	WallpaperAlbumViewControllerSpec* _wallpaperAlbumSpec;
	UIViewController*<PSController> _parentController;
	PSRootController* _rootController;
	PSSpecifier* _specifier;
	PUPhotosGridDownloadHelper* _downloadHelper;

}

@property (nonatomic,retain) WallpaperAlbumViewControllerSpec * wallpaperAlbumSpec;              //@synthesize wallpaperAlbumSpec=_wallpaperAlbumSpec - In the implementation block
@property (assign,nonatomic) UIViewController*<PSController> parentController;                   //@synthesize parentController=_parentController - In the implementation block
@property (assign,nonatomic) PSRootController * rootController;                                  //@synthesize rootController=_rootController - In the implementation block
@property (nonatomic,retain) PSSpecifier * specifier;                                            //@synthesize specifier=_specifier - In the implementation block
@property (nonatomic,readonly) PUPhotosGridDownloadHelper * downloadHelper;                      //@synthesize downloadHelper=_downloadHelper - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(PSSpecifier *)specifier;
-(void)suspend;
-(void)handleURL:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)willBecomeActive;
-(void)willResignActive;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(long long)_preferredWhitePointAdaptivityStyle;
-(void)setSpecifier:(PSSpecifier *)arg1 ;
-(void)setPreferenceValue:(id)arg1 specifier:(id)arg2 ;
-(id)readPreferenceValue:(id)arg1 ;
-(BOOL)canBeShownFromSuspendedState;
-(void)setParentController:(UIViewController*<PSController>)arg1 ;
-(UIViewController*<PSController>)parentController;
-(void)setRootController:(PSRootController *)arg1 ;
-(PSRootController *)rootController;
-(void)showController:(id)arg1 ;
-(void)showController:(id)arg1 animate:(BOOL)arg2 ;
-(void)handleURL:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)didLock;
-(void)willUnlock;
-(void)didUnlock;
-(void)didWake;
-(void)statusBarWillAnimateByHeight:(double)arg1 ;
-(void)formSheetViewWillDisappear;
-(void)popupViewWillDisappear;
-(void)popupViewDidDisappear;
-(void)formSheetViewDidDisappear;
-(void)wallpaperPreviewViewControllerCancelButtonPressed:(id)arg1 ;
-(void)wallpaperPreviewViewControllerSetButtonPressed:(id)arg1 ;
-(void)_fetchImageForWallPaperAsset:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(BOOL)canDragOut;
-(BOOL)canDragIn;
-(id)initWithSpec:(id)arg1 ;
-(id)newGridLayout;
-(void)navigateToPhoto:(id)arg1 inAssetContainer:(id)arg2 animated:(BOOL)arg3 ;
-(void)setAlbum:(id)arg1 existingFetchResult:(id)arg2 ;
-(BOOL)allowSlideshowButton;
-(BOOL)isPreheatingEnabled;
-(BOOL)canNavigateToPhotoInteractively:(BOOL)arg1 ;
-(void)updateLayoutMetrics;
-(BOOL)shouldShowMenu;
-(BOOL)allowsPeeking;
-(WallpaperAlbumViewControllerSpec *)wallpaperAlbumSpec;
-(PUPhotosGridDownloadHelper *)downloadHelper;
-(void)_showWallpaperImageViewControllerForPhoto:(id)arg1 ;
-(void)setWallpaperAlbumSpec:(WallpaperAlbumViewControllerSpec *)arg1 ;
@end

