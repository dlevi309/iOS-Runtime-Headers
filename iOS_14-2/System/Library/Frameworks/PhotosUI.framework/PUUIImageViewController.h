/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotoLibrary/PLUIImageViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/PUVideoPlayerViewDelegate.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PUPhotoPickerServicesConsumer.h>
#import <libobjc.A.dylib/PUPhotoPickerSelectionHandler.h>

@protocol PUPhotoPicker, PUUIImageViewControllerFileResizingDelegate;
@class PHAsset, PUPhotoPickerResizeTaskDescriptorViewModel, PUBrowsingIrisPlayer, PHLivePhotoView, PUVideoPlayerView, ISAnimatedImageView, NSURL, NSString;

@interface PUUIImageViewController : PLUIImageViewController <UIGestureRecognizerDelegate, PUVideoPlayerViewDelegate, PXChangeObserver, PUPhotoPickerServicesConsumer, PUPhotoPickerSelectionHandler> {

	BOOL _isIris;
	BOOL _isAutoloop;
	BOOL _isAnimatedImage;
	BOOL _wantsLivePhotoResult;
	BOOL _wantsVideoURLResult;
	BOOL _showFileResizingOption;
	PHAsset* _asset;
	int __imageManagerVideoRequestID;
	int __animatedImageRequestID;
	id<PUPhotoPicker> _photoPicker;
	id<PUUIImageViewControllerFileResizingDelegate> _fileResizingDelegate;
	PUPhotoPickerResizeTaskDescriptorViewModel* _resizeTaskDescriptorViewModel;
	PUBrowsingIrisPlayer* __irisPlayer;
	PHLivePhotoView* __livePhotoView;
	PUVideoPlayerView* __autoloopView;
	ISAnimatedImageView* __animatedImageView;
	NSURL* __videoAssetURL;
	NSURL* __assetURL;

}

@property (nonatomic,retain) PUBrowsingIrisPlayer * _irisPlayer;                                                             //@synthesize _irisPlayer=__irisPlayer - In the implementation block
@property (setter=_setLivePhotoView:,nonatomic,retain) PHLivePhotoView * _livePhotoView;                                     //@synthesize _livePhotoView=__livePhotoView - In the implementation block
@property (setter=_setAutoloopView:,nonatomic,retain) PUVideoPlayerView * _autoloopView;                                     //@synthesize _autoloopView=__autoloopView - In the implementation block
@property (setter=_setAnimatedImageView:,nonatomic,retain) ISAnimatedImageView * _animatedImageView;                         //@synthesize _animatedImageView=__animatedImageView - In the implementation block
@property (setter=_setVideoAssetURL:,nonatomic,retain) NSURL * _videoAssetURL;                                               //@synthesize _videoAssetURL=__videoAssetURL - In the implementation block
@property (setter=_setAssetURL:,nonatomic,retain) NSURL * _assetURL;                                                         //@synthesize _assetURL=__assetURL - In the implementation block
@property (setter=_setImageManagerVideoRequestID:) int _imageManagerVideoRequestID;                                          //@synthesize _imageManagerVideoRequestID=__imageManagerVideoRequestID - In the implementation block
@property (setter=_setAnimatedImageRequestID:) int _animatedImageRequestID;                                                  //@synthesize _animatedImageRequestID=__animatedImageRequestID - In the implementation block
@property (assign,nonatomic,__weak) id<PUUIImageViewControllerFileResizingDelegate> fileResizingDelegate;                    //@synthesize fileResizingDelegate=_fileResizingDelegate - In the implementation block
@property (assign,nonatomic,__weak) PUPhotoPickerResizeTaskDescriptorViewModel * resizeTaskDescriptorViewModel;              //@synthesize resizeTaskDescriptorViewModel=_resizeTaskDescriptorViewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<PUPhotoPicker> photoPicker;                                                           //@synthesize photoPicker=_photoPicker - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)customBackgroundColor;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(PUBrowsingIrisPlayer *)_irisPlayer;
-(BOOL)pu_wantsNavigationBarVisible;
-(void)performPhotoPickerSelection;
-(PHLivePhotoView *)_livePhotoView;
-(int)_animatedImageRequestID;
-(void)_setAnimatedImageRequestID:(int)arg1 ;
-(void)viewDidLoad;
-(id<PUPhotoPicker>)photoPicker;
-(void)setPhotoPicker:(id<PUPhotoPicker>)arg1 ;
-(void)videoPlayerView:(id)arg1 isReadyForDisplayDidChange:(BOOL)arg2 ;
-(void)setIrisPlayer:(id)arg1 ;
-(id)irisPlayerView:(id)arg1 delegateForGestureRecognizer:(id)arg2 ;
-(id)irisPlayerViewViewHostingGestureRecognizers:(id)arg1 ;
-(void)_loadAnimatedImage;
-(void)_handleAnimatedImagePreviewResult:(id)arg1 ;
-(void)_handleAnimatedImageResult:(id)arg1 ;
-(void)_loadAutoloopVideo;
-(void)_handleAutoloopPreviewImageResult:(id)arg1 ;
-(void)_handleAutoloopVideoResult:(id)arg1 ;
-(void)_loadLivePhoto;
-(void)_handleLivePhotoRequestResult:(id)arg1 info:(id)arg2 ;
-(BOOL)doNotTranscode;
-(void)_fetchPreviewImageWithCompletion:(/*^block*/id)arg1 ;
-(void)_fetchVideoWithCompletion:(/*^block*/id)arg1 ;
-(void)_fetchLivePhotoWithCompletion:(/*^block*/id)arg1 ;
-(void)_fetchAnimatedImageWithCompletion:(/*^block*/id)arg1 ;
-(void)_generateGIFFromVideoURL:(id)arg1 progressHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)cropOverlayWasOKed:(id)arg1 ;
-(void)handleMediaSelectionUsingTile:(id)arg1 managedAsset:(id)arg2 args:(id)arg3 includeEditing:(BOOL)arg4 ;
-(void)handleVideoSelectionWithURL:(id)arg1 args:(id)arg2 ;
-(void)handleAutoloopSelected;
-(void)_finishAutoloopDeliveryWithVideoURL:(id)arg1 gifURL:(id)arg2 ;
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
-(BOOL)uiipc_useTelephonyUI;
-(BOOL)isDisplayedInPhotoPicker;
-(int)cropOverlayMode;
-(id)cropOverlayFileSizeMenuActions:(id)arg1 ;
-(BOOL)_isPhotosPickerExtensionAvailable;
-(id<PUUIImageViewControllerFileResizingDelegate>)fileResizingDelegate;
-(void)set_irisPlayer:(PUBrowsingIrisPlayer *)arg1 ;
-(void)_setLivePhotoView:(id)arg1 ;
-(PUVideoPlayerView *)_autoloopView;
-(NSURL *)_videoAssetURL;
-(id)videoQuality;
-(void)_setAutoloopView:(id)arg1 ;
-(void)_setAnimatedImageView:(id)arg1 ;
-(void)_setVideoAssetURL:(id)arg1 ;
-(void)_setAssetURL:(id)arg1 ;
-(int)_imageManagerVideoRequestID;
-(void)_setImageManagerVideoRequestID:(int)arg1 ;
-(void)loadView;
-(PUPhotoPickerResizeTaskDescriptorViewModel *)resizeTaskDescriptorViewModel;
-(NSURL *)_assetURL;
-(id)videoMaximumDuration;
-(ISAnimatedImageView *)_animatedImageView;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setPhotoPickerMediaTypes:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setFileResizingDelegate:(id<PUUIImageViewControllerFileResizingDelegate>)arg1 ;
-(id)initWithPhoto:(id)arg1 imagePickerProperties:(id)arg2 expectsLivePhoto:(BOOL)arg3 ;
-(void)dealloc;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)setResizeTaskDescriptorViewModel:(PUPhotoPickerResizeTaskDescriptorViewModel *)arg1 ;
@end

