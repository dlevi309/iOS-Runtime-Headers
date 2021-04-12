/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)willBecomeActive;
-(void)handleURL:(id)arg1 ;
-(id)initWithSpec:(id)arg1 ;
-(void)setSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)specifier;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)suspend;
-(PSRootController *)rootController;
-(BOOL)canDragIn;
-(void)popupViewDidDisappear;
-(void)formSheetViewDidDisappear;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)didLock;
-(void)didWake;
-(BOOL)isPreheatingEnabled;
-(BOOL)canDragOut;
-(BOOL)canNavigateToPhotoInteractively:(BOOL)arg1 ;
-(void)updateLayoutMetrics;
-(id)newGridLayout;
-(BOOL)allowSlideshowButton;
-(void)setParentController:(UIViewController*<PSController>)arg1 ;
-(void)handleURL:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)navigateToPhoto:(id)arg1 inAssetContainer:(id)arg2 animated:(BOOL)arg3 ;
-(UIViewController*<PSController>)parentController;
-(void)didUnlock;
-(BOOL)shouldShowMenu;
-(void)willResignActive;
-(void)setAlbum:(id)arg1 existingFetchResult:(id)arg2 ;
-(void)setRootController:(PSRootController *)arg1 ;
-(id)readPreferenceValue:(id)arg1 ;
-(void)setPreferenceValue:(id)arg1 specifier:(id)arg2 ;
-(BOOL)canBeShownFromSuspendedState;
-(void)showController:(id)arg1 ;
-(void)willUnlock;
-(void)showController:(id)arg1 animate:(BOOL)arg2 ;
-(void)statusBarWillAnimateByHeight:(double)arg1 ;
-(void)wallpaperPreviewViewControllerCancelButtonPressed:(id)arg1 ;
-(void)wallpaperPreviewViewControllerSetButtonPressed:(id)arg1 ;
-(void)_fetchImageForWallPaperAsset:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(PUPhotosGridDownloadHelper *)downloadHelper;
-(void)popupViewWillDisappear;
-(void)formSheetViewWillDisappear;
-(void)dealloc;
-(long long)_preferredWhitePointAdaptivityStyle;
-(WallpaperAlbumViewControllerSpec *)wallpaperAlbumSpec;
-(void)_showWallpaperImageViewControllerForPhoto:(id)arg1 ;
-(BOOL)allowsPeeking;
-(void)setWallpaperAlbumSpec:(WallpaperAlbumViewControllerSpec *)arg1 ;
@end

