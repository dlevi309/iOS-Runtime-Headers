/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PLVideoViewDelegate.h>
#import <libobjc.A.dylib/PLPhotoTileViewControllerDelegate.h>
#import <libobjc.A.dylib/PLCropOverlayDelegate.h>

@class PLManagedAsset, UIImage, PLCropOverlay, PLPhotoTileViewController, PLVideoView, PLVideoRemaker, PLProgressView, NSURL, NSString;

@interface PLUIImageViewController : UIViewController <PLVideoViewDelegate, PLPhotoTileViewControllerDelegate, PLCropOverlayDelegate> {

	PLManagedAsset* _photo;
	CGImageRef _imageRef;
	UIImage* _image;
	CGRect _cropRect;
	PLCropOverlay* _cropOverlay;
	PLPhotoTileViewController* _imageTile;
	PLVideoView* _videoView;
	PLVideoRemaker* _remaker;
	PLProgressView* _progressView;
	NSURL* _videoURL;
	long long _previousStatusBarStyle;
	long long _newStatusBarStyle;
	unsigned _allowEditing : 1;
	unsigned _statusBarWasHidden : 1;
	unsigned _isVideo : 1;
	unsigned _isDisappearing : 1;
	unsigned _remaking : 1;

}

@property (nonatomic,readonly) NSString * localizedUseButtonTitle; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(NSString *)localizedTitle;
-(void)viewWillLayoutSubviews;
-(id)customBackgroundColor;
-(CGRect)_viewFrame;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(unsigned short)imageFormat;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(void)videoRemakerDidBeginRemaking:(id)arg1 ;
-(void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2 ;
-(Class)_viewClass;
-(BOOL)doNotTranscode;
-(void)cropOverlayWasOKed:(id)arg1 ;
-(BOOL)_displaysFullScreen;
-(void)handleMediaSelectionUsingTile:(id)arg1 managedAsset:(id)arg2 args:(id)arg3 includeEditing:(BOOL)arg4 ;
-(void)handleVideoSelectionWithURL:(id)arg1 args:(id)arg2 ;
-(void)handleAutoloopSelected;
-(id)exportPreset;
-(BOOL)viewImageBeforeSelecting;
-(BOOL)disableVideoTrimMessage;
-(BOOL)forceNativeScreenScale;
-(BOOL)force1XCroppedImage;
-(id)chooseButtonTitle;
-(id)cancelButtonTitle;
-(id)maxZoomScaleOverride;
-(BOOL)imagePickerAllowsEditing;
-(unsigned long long)imagePickerSavingOptions;
-(BOOL)wantsAutoloopUI;
-(BOOL)wantsLegacyImageUI;
-(BOOL)isDisplayedInPhotoPicker;
-(int)cropOverlayMode;
-(id)videoQuality;
-(id)cropOverlay;
-(void)_enableCropOverlay;
-(void)beginDisplayingProgress;
-(void)_enableCropOverlayIfNecessary;
-(id)initWithPhoto:(id)arg1 ;
-(long long)preferredStatusBarUpdateAnimation;
-(long long)_imagePickerStatusBarStyle;
-(void)loadView;
-(void)_removedAsTopViewController;
-(id)initWithImageData:(id)arg1 cropRect:(CGRect)arg2 ;
-(id)initWithUIImage:(id)arg1 cropRect:(CGRect)arg2 ;
-(id)videoMaximumDuration;
-(CGRect)previewFrame;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)dealloc;
-(long long)_preferredWhitePointAdaptivityStyle;
-(id)initWithVideoURL:(id)arg1 ;
-(void)cropOverlay:(id)arg1 didFinishSaving:(id)arg2 ;
-(double)videoViewScrubberYOrigin:(id)arg1 forOrientation:(long long)arg2 ;
-(BOOL)videoViewCanBeginPlayback:(id)arg1 ;
-(void)videoViewIsReadyToBeginPlayback:(id)arg1 ;
-(void)videoViewDidBeginPlayback:(id)arg1 ;
-(void)videoViewDidEndPlayback:(id)arg1 didFinish:(BOOL)arg2 ;
-(BOOL)videoViewCanCreateMetadata:(id)arg1 ;
-(void)cropOverlayWasCancelled:(id)arg1 ;
-(void)cropOverlayPlay:(id)arg1 ;
-(void)cropOverlayPause:(id)arg1 ;
-(BOOL)photoTileViewControllerIsDisplayingLandscape:(id)arg1 ;
-(unsigned long long)_contentAutoresizingMask;
-(unsigned long long)_tileAutoresizingMask;
-(id)_trimMessage;
-(void)didChooseVideoAtURL:(id)arg1 options:(id)arg2 ;
-(BOOL)photoTileViewControllerAllowsEditing:(id)arg1 ;
-(void)photoTileViewController:(id)arg1 willAppear:(BOOL)arg2 ;
-(void)photoTileViewController:(id)arg1 didAppear:(BOOL)arg2 ;
-(void)photoTileViewController:(id)arg1 didDisappear:(BOOL)arg2 ;
-(void)photoTileViewControllerRequestsFullScreenImage:(id)arg1 ;
-(void)photoTileViewControllerRequestsFullSizeImage:(id)arg1 ;
-(void)photoTileViewControllerCancelImageRequests:(id)arg1 ;
-(void)photoTileViewControllerSingleTap:(id)arg1 ;
-(void)photoTileViewControllerDoubleTap:(id)arg1 ;
-(void)photoTileViewControllerWillBeginGesture:(id)arg1 ;
-(void)photoTileViewControllerDidEndGesture:(id)arg1 ;
-(id)initWithImage:(CGImageRef)arg1 cropRect:(CGRect)arg2 ;
-(void)setCropOverlayDone;
-(NSString *)localizedUseButtonTitle;
-(BOOL)clientIsWallpaper;
-(void)setupNavigationItem;
-(BOOL)wantsStatusBarVisible;
-(long long)desiredStatusBarAnimation;
-(void)attachScrubberPalette;
-(void)_editabilityChanged:(id)arg1 ;
-(void)_updateGestureSettings;
-(void)_handleVideoSelected;
-(void)videoView:(id)arg1 scrubberWasCreated:(id)arg2 slalomRegionEditor:(id)arg3 ;
-(void)videoViewDidPausePlayback:(id)arg1 didFinish:(BOOL)arg2 ;
@end

