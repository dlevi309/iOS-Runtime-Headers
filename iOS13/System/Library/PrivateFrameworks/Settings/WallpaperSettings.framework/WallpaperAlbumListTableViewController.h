/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Settings/WallpaperSettings.framework/WallpaperSettings
*/

#import <WallpaperSettings/WallpaperSettings-Structs.h>
#import <PhotosUI/PUAlbumListViewController.h>
#import <libobjc.A.dylib/WSBundleCollectionsTableViewCellDelegate.h>
#import <libobjc.A.dylib/PSController.h>

@protocol PSController;
@class WallpaperAlbumListTableViewControllerSpec, UIViewController, PSRootController, PSSpecifier, WKWallpaperBundleImporter, NSString;

@interface WallpaperAlbumListTableViewController : PUAlbumListViewController <WSBundleCollectionsTableViewCellDelegate, PSController> {

	WallpaperAlbumListTableViewControllerSpec* _wallpaperAlbumListTableViewSpec;
	UIViewController*<PSController> _parentController;
	PSRootController* _rootController;
	PSSpecifier* _specifier;
	WKWallpaperBundleImporter* _wallpaperBundleImporter;
	double _layoutReferenceWidth;
	CGSize _canonicalButtonSize;

}

@property (nonatomic,retain) WallpaperAlbumListTableViewControllerSpec * wallpaperAlbumListTableViewSpec;              //@synthesize wallpaperAlbumListTableViewSpec=_wallpaperAlbumListTableViewSpec - In the implementation block
@property (assign,nonatomic) UIViewController*<PSController> parentController;                                         //@synthesize parentController=_parentController - In the implementation block
@property (assign,nonatomic) PSRootController * rootController;                                                        //@synthesize rootController=_rootController - In the implementation block
@property (nonatomic,retain) PSSpecifier * specifier;                                                                  //@synthesize specifier=_specifier - In the implementation block
@property (nonatomic,retain) WKWallpaperBundleImporter * wallpaperBundleImporter;                                      //@synthesize wallpaperBundleImporter=_wallpaperBundleImporter - In the implementation block
@property (assign,nonatomic) double layoutReferenceWidth;                                                              //@synthesize layoutReferenceWidth=_layoutReferenceWidth - In the implementation block
@property (assign,nonatomic) CGSize canonicalButtonSize;                                                               //@synthesize canonicalButtonSize=_canonicalButtonSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PSSpecifier *)specifier;
-(void)suspend;
-(void)handleURL:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)willBecomeActive;
-(void)willResignActive;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)_preferredWhitePointAdaptivityStyle;
-(void)_updateLayout;
-(long long)tableViewStyle;
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
-(id)initWithSpec:(id)arg1 ;
-(double)layoutReferenceWidth;
-(void)_prepareStackView:(id)arg1 forCollection:(id)arg2 withStackCount:(long long)arg3 withCustomEmptyPlaceHolderImage:(id)arg4 ;
-(BOOL)updateSpec;
-(unsigned long long)filteringAssetTypes;
-(id)assetsFilterPredicate;
-(BOOL)showsEmptyPlaceholderWhenEmpty;
-(BOOL)canShowSyncProgress;
-(void)setTitleForCell:(id)arg1 withCollection:(id)arg2 ;
-(BOOL)canShowAvatarViews;
-(BOOL)showsTopPlaceholdersSection;
-(id)backgroundColorForTableView;
-(void)setLayoutReferenceWidth:(double)arg1 ;
-(void)setWallpaperBundleImporter:(WKWallpaperBundleImporter *)arg1 ;
-(void)setCanonicalButtonSize:(CGSize)arg1 ;
-(WKWallpaperBundleImporter *)wallpaperBundleImporter;
-(CGSize)canonicalButtonSize;
-(WallpaperAlbumListTableViewControllerSpec *)wallpaperAlbumListTableViewSpec;
-(void)_navigateToStills;
-(void)_navigateToLive;
-(void)_navigateToDynamic;
-(void)navigateToAssetContainer:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_configureWallpaperViewControllerAllowedActions:(id)arg1 ;
-(void)bundleCollectionsTableViewCell:(id)arg1 didTapOnBundleCollectionWithWallpaperType:(unsigned long long)arg2 ;
-(void)_navigateToVR;
-(void)_navigateToPanorama;
-(void)setWallpaperAlbumListTableViewSpec:(WallpaperAlbumListTableViewControllerSpec *)arg1 ;
@end

