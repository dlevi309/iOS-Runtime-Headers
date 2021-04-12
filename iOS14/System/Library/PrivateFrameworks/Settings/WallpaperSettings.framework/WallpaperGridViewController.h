/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Settings/WallpaperSettings.framework/WallpaperSettings
*/

#import <UIKitCore/UICollectionViewController.h>
#import <libobjc.A.dylib/SBSUIWallpaperPreviewViewControllerDelegate.h>
#import <libobjc.A.dylib/PSStateRestoration.h>

@class NSCache, WKWallpaperBundleCollection, NSString;

@interface WallpaperGridViewController : UICollectionViewController <SBSUIWallpaperPreviewViewControllerDelegate, PSStateRestoration> {

	NSCache* _thumbnailCache;
	WKWallpaperBundleCollection* __bundleCollection;

}

@property (nonatomic,retain) WKWallpaperBundleCollection * _bundleCollection;              //@synthesize _bundleCollection=__bundleCollection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(BOOL)canBeShownFromSuspendedState;
-(void)wallpaperPreviewViewControllerCancelButtonPressed:(id)arg1 ;
-(void)wallpaperPreviewViewControllerSetButtonPressed:(id)arg1 ;
-(id)initWithWallperBundleCollection:(id)arg1 ;
-(WKWallpaperBundleCollection *)_bundleCollection;
-(id)_thumbnailForWallpaperBundle:(id)arg1 ;
-(void)_handlePresentWallpaperPreviewForWallpaperBundle:(id)arg1 ;
-(id)_wallpaperPreviewInputForStripeWallpaper:(id)arg1 wallpaperMode:(long long)arg2 ;
-(id)_wallpaperPreviewInputsForStripesWallpaperBundle:(id)arg1 ;
-(id)_fileBasedWallpaperPreviewViewControllerPromiseWithWallpaperBundle:(id)arg1 ;
-(id)_valueBasedDynamicWallpaperPreviewViewControllerWithWallpaperBundle:(id)arg1 ;
-(id)_valueBasedStripesWallpaperPreviewViewControllerWithWallpaperBundle:(id)arg1 ;
-(void)_wallpaperPreviewController:(id)arg1 wallpaperLocations:(long long)arg2 ;
-(void)set_bundleCollection:(WKWallpaperBundleCollection *)arg1 ;
@end

