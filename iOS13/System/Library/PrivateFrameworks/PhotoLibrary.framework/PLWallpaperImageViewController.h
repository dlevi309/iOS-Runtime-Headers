/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <PhotoLibrary/PLUIEditImageViewController.h>
#import <libobjc.A.dylib/SBFLegibilitySettingsProviderDelegate.h>

@class UINavigationItem, NSArray, NSString, SBSUIWallpaperPreviewViewController;

@interface PLWallpaperImageViewController : PLUIEditImageViewController <SBFLegibilitySettingsProviderDelegate> {

	UINavigationItem* _navItem;
	int _wallpaperMode;
	NSArray* _navigationToolbarItems;
	BOOL _saveWallpaperData;
	NSString* _wallpaperTitle;
	unsigned _didSetImageMode : 1;
	BOOL _isWallpaperEdit;
	BOOL __statusBarHidden;
	SBSUIWallpaperPreviewViewController* _wallpaperPreviewViewController;
	long long _previewVariant;
	long long _previewType;
	long long __statusBarStyle;

}

@property (assign,nonatomic) long long previewVariant;                                                          //@synthesize previewVariant=_previewVariant - In the implementation block
@property (assign,nonatomic) long long previewType;                                                             //@synthesize previewType=_previewType - In the implementation block
@property (assign,nonatomic) BOOL isWallpaperEdit;                                                              //@synthesize isWallpaperEdit=_isWallpaperEdit - In the implementation block
@property (assign,setter=_setStatusBarStyle:,nonatomic) long long _statusBarStyle;                              //@synthesize _statusBarStyle=__statusBarStyle - In the implementation block
@property (assign,setter=_setStatusBarHidden:,nonatomic) BOOL _statusBarHidden;                                 //@synthesize _statusBarHidden=__statusBarHidden - In the implementation block
@property (nonatomic,retain) SBSUIWallpaperPreviewViewController * wallpaperPreviewViewController;              //@synthesize wallpaperPreviewViewController=_wallpaperPreviewViewController - In the implementation block
@property (assign,nonatomic) BOOL saveWallpaperData;                                                            //@synthesize saveWallpaperData=_saveWallpaperData - In the implementation block
@property (nonatomic,copy) NSString * wallpaperTitle;                                                           //@synthesize wallpaperTitle=_wallpaperTitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)_statusBarStyle;
-(id)navigationItem;
-(long long)preferredStatusBarUpdateAnimation;
-(BOOL)_statusBarHidden;
-(long long)preferredStatusBarStyle;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)_setStatusBarHidden:(BOOL)arg1 ;
-(unsigned short)imageFormat;
-(void)setPreviewType:(long long)arg1 ;
-(long long)previewType;
-(void)providerLegibilitySettingsChanged:(id)arg1 ;
-(id)initWithWallpaperVariant:(long long)arg1 ;
-(BOOL)uiipc_useTelephonyUI;
-(unsigned long long)_contentAutoresizingMask;
-(unsigned long long)_tileAutoresizingMask;
-(void)cropOverlayWasOKed:(id)arg1 ;
-(void)cropOverlayWasCancelled:(id)arg1 ;
-(int)cropOverlayMode;
-(void)setImageAsHomeScreenClicked:(id)arg1 ;
-(void)setImageAsLockScreenClicked:(id)arg1 ;
-(void)setImageAsHomeScreenAndLockScreenClicked:(id)arg1 ;
-(void)motionToggledManually:(BOOL)arg1 ;
-(void)photoTileViewControllerRequestsFullScreenImage:(id)arg1 ;
-(CGRect)_viewFrame;
-(BOOL)clientIsWallpaper;
-(void)setupNavigationItem;
-(BOOL)wantsStatusBarVisible;
-(long long)desiredStatusBarAnimation;
-(void)setWallpaperPreviewViewController:(SBSUIWallpaperPreviewViewController *)arg1 ;
-(void)setWallpaperFromArgs:(id)arg1 ;
-(void)setWallpaperSynchronouslyFromArgs:(id)arg1 ;
-(void)prepareForBackground:(id)arg1 ;
-(void)prepareForForeground:(id)arg1 ;
-(id)initWithUIImage:(id)arg1 ;
-(void)_adjustScrollViewGeometry;
-(void)_updateTitles;
-(void)_savePhoto;
-(void)_backgroundCropWallpaper;
-(void)_cropWallpaperFinished:(id)arg1 ;
-(void)_displayWallpaperOptionsSheet;
-(void)_updatePreviewFrame:(id)arg1 ;
-(void)setupWallpaperPreview;
-(BOOL)saveWallpaperData;
-(void)setSaveWallpaperData:(BOOL)arg1 ;
-(NSString *)wallpaperTitle;
-(void)setWallpaperTitle:(NSString *)arg1 ;
-(SBSUIWallpaperPreviewViewController *)wallpaperPreviewViewController;
-(long long)previewVariant;
-(void)setPreviewVariant:(long long)arg1 ;
-(BOOL)isWallpaperEdit;
-(void)setIsWallpaperEdit:(BOOL)arg1 ;
-(void)_setStatusBarStyle:(long long)arg1 ;
@end

