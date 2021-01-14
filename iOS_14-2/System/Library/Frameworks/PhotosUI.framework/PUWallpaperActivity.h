/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUICore/PXActivity.h>
#import <libobjc.A.dylib/SBSUIWallpaperPreviewViewControllerDelegate.h>

@class UIViewController, NSString;

@interface PUWallpaperActivity : PXActivity <SBSUIWallpaperPreviewViewControllerDelegate> {

	UIViewController* _wallpaperActivityViewController;
	BOOL __wallpaperModificationAllowed;
	BOOL __needsUpdateWallpaperModificationAllowed;

}

@property (assign,setter=_setWallpaperModificationAllowed:,getter=_isWallpaperModificationAllowed,nonatomic) BOOL _wallpaperModificationAllowed;              //@synthesize _wallpaperModificationAllowed=__wallpaperModificationAllowed - In the implementation block
@property (assign,setter=_setNeedsUpdateWallpaperModificationAllowed:,nonatomic) BOOL _needsUpdateWallpaperModificationAllowed;                               //@synthesize _needsUpdateWallpaperModificationAllowed=__needsUpdateWallpaperModificationAllowed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)activityType;
-(id)init;
-(void)prepareWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(id)_activityImageName;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityTitle;
-(void)wallpaperPreviewViewControllerCancelButtonPressed:(id)arg1 ;
-(void)wallpaperPreviewViewControllerSetButtonPressed:(id)arg1 ;
-(void)_fetchImageForWallPaperAsset:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)_handleSetWallpaperActionWithController:(id)arg1 locations:(long long)arg2 ;
-(void)_restrictionsChanged:(id)arg1 ;
-(void)_updateWallpaperModificationAllowedIfNeeded;
-(BOOL)_isWallpaperModificationAllowed;
-(void)_setWallpaperModificationAllowed:(BOOL)arg1 ;
-(BOOL)_needsUpdateWallpaperModificationAllowed;
-(void)_setNeedsUpdateWallpaperModificationAllowed:(BOOL)arg1 ;
-(id)activityImage;
-(void)dealloc;
-(id)activityViewController;
@end

