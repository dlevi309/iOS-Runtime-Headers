/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Settings/WallpaperSettings.framework/WallpaperSettings
*/

#import <UIKitCore/UICollectionViewController.h>
#import <libobjc.A.dylib/SBSUIWallpaperPreviewViewControllerDelegate.h>
#import <libobjc.A.dylib/PSStateRestoration.h>

@class NSCache, WKWallpaperBundleCollection, NSString;

@interface WallpaperGridViewController : UICollectionViewController <SBSUIWallpaperPreviewViewControllerDelegate, PSStateRestoration> {

	NSCache* _thumbnailCache;
	double _layoutReferenceWidth;
	WKWallpaperBundleCollection* __bundleCollection;

}

@property (assign,nonatomic) double layoutReferenceWidth;                                  //@synthesize layoutReferenceWidth=_layoutReferenceWidth - In the implementation block
@property (nonatomic,retain) WKWallpaperBundleCollection * _bundleCollection;              //@synthesize _bundleCollection=__bundleCollection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)_updateLayout;
-(BOOL)canBeShownFromSuspendedState;
-(void)wallpaperPreviewViewControllerCancelButtonPressed:(id)arg1 ;
-(void)wallpaperPreviewViewControllerSetButtonPressed:(id)arg1 ;
-(double)layoutReferenceWidth;
-(void)setLayoutReferenceWidth:(double)arg1 ;
-(id)initWithWallperBundleCollection:(id)arg1 ;
-(WKWallpaperBundleCollection *)_bundleCollection;
-(id)_thumbnailForWallpaperBundle:(id)arg1 ;
-(void)_handlePresentWallpaperPreviewForWallpaperBundle:(id)arg1 ;
-(void)_wallpaperPreviewController:(id)arg1 wallpaperLocations:(long long)arg2 ;
-(void)set_bundleCollection:(WKWallpaperBundleCollection *)arg1 ;
@end

