/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/PLPhotoTileCloudPlaceholderViewDelegate.h>

@protocol PLTilePlaceholderView, PLPhotoTileViewControllerDelegate, OS_dispatch_source;
@class UIImage, PHAsset, PLImageScrollView, PLExpandableImageView, PLVideoView, UIImageView, UIView, UIGestureRecognizer, NSObject, PLTileContainerView, PHCachingImageManager, NSArray, NSNumber, NSString;

@interface PLPhotoTileViewController : UIViewController <UIScrollViewDelegate, UIGestureRecognizerDelegate, PLPhotoTileCloudPlaceholderViewDelegate> {

	UIImage* _image;
	UIImage* _pendingImage;
	UIImage* _unscaledImage;
	PHAsset* _modelPhoto;
	PLImageScrollView* _scrollView;
	PLExpandableImageView* _imageView;
	PLVideoView* _videoView;
	UIImageView* _gradientView;
	UIImageView* _reviewCheckmarkImageView;
	UIView*<PLTilePlaceholderView> _placeholderView;
	BOOL _currentTileDownloadFinished;
	UIGestureRecognizer* _singleTapGestureRecognizer;
	UIGestureRecognizer* _doubleTapGestureRecognizer;
	id<PLPhotoTileViewControllerDelegate> _tileDelegate;
	int _imageOrientation;
	CGSize _imageSize;
	CGRect _tileFrame;
	BOOL _zoomToFillInsteadOfToFit;
	BOOL _useLessThanMinZoomForZoomedOutTest;
	BOOL _allowZoomToFill;
	id _orientationDelegate;
	float _cropRectZoomScale;
	CGRect _cropOverlayRect;
	CGRect _cropRect;
	double _doubleTapZoomScale;
	double _minZoomScale;
	double _zoomToFillScale;
	int _mode;
	BOOL _clientIsTemporarilyWallpaper;
	BOOL _userDidAdjustWallpaper;
	float _wallpaperPortraitZoomScale;
	float _wallpaperLandscapeZoomScale;
	float _zoomScaleBeforeZooming;
	CGRect _cropRectBeforeDragging;
	BOOL _force1XCroppedImage;
	BOOL _forceNativeScreenScale;
	BOOL _centerContentVertically;
	/*^block*/id _didEndZoomingBlock;
	NSObject*<OS_dispatch_source> _dispatchTimer;
	double _dispatchStartTime;
	double _dispatchTimeElapsed;
	BOOL _hasNotedZoom;
	unsigned _imageIsThumbnail : 1;
	unsigned _isTVOut : 1;
	unsigned _zooming : 1;
	unsigned _autoZooming : 1;
	unsigned _zoomGesturesEnabled : 1;
	unsigned _userDidZoom : 1;
	unsigned _ignoreZoomChange : 1;
	unsigned _tileParentIsPageController : 1;
	unsigned _lockedUnderCropOverlay : 1;
	unsigned _viewDidAppear : 1;
	unsigned _viewWillAppear : 1;
	unsigned _didRequestFullSizeImage : 1;
	unsigned _useZoomScaleForCropRect : 1;
	unsigned _avalancheBadgeShouldBeHidden : 1;
	unsigned _badgeShouldBeVisible : 1;
	PLTileContainerView* _containerView;
	PHCachingImageManager* __cachingImageManager;
	int _fullSizeImageRequestID;
	NSArray* _customCenterOverlayConstraints;
	BOOL _shouldUpdateBadgeViewOptimalLayout;
	double _badgeViewOptimalLayoutLowestTop;
	BOOL _isLoadingFullSizeImage;
	BOOL _wantsCompactLayout;
	BOOL _reviewing;
	BOOL _picked;
	BOOL _shouldHideProgressIndicator;
	BOOL _shouldSupressViewWillTransitionToSize;
	int _inflightFullSizeImageRequestID;
	NSNumber* _maxZoomScaleOverride;
	UIView* __customCenterOverlay;
	UIEdgeInsets _overlayInsets;

}

@property (setter=_setCustomCenterOverlay:,nonatomic,retain) UIView * _customCenterOverlay;              //@synthesize _customCenterOverlay=__customCenterOverlay - In the implementation block
@property (nonatomic,readonly) PHAsset * photo; 
@property (assign,nonatomic) int inflightFullSizeImageRequestID;                                         //@synthesize inflightFullSizeImageRequestID=_inflightFullSizeImageRequestID - In the implementation block
@property (nonatomic,retain) UIImage * thumbnailImage; 
@property (assign,nonatomic) CGRect tileFrame; 
@property (nonatomic,retain) UIImage * unscaledImage;                                                    //@synthesize unscaledImage=_unscaledImage - In the implementation block
@property (assign,nonatomic) BOOL centerContentVertically;                                               //@synthesize centerContentVertically=_centerContentVertically - In the implementation block
@property (assign,nonatomic) UIEdgeInsets overlayInsets;                                                 //@synthesize overlayInsets=_overlayInsets - In the implementation block
@property (assign,nonatomic) BOOL forceNativeScreenScale;                                                //@synthesize forceNativeScreenScale=_forceNativeScreenScale - In the implementation block
@property (assign,nonatomic) BOOL force1XCroppedImage;                                                   //@synthesize force1XCroppedImage=_force1XCroppedImage - In the implementation block
@property (nonatomic,retain) NSNumber * maxZoomScaleOverride;                                            //@synthesize maxZoomScaleOverride=_maxZoomScaleOverride - In the implementation block
@property (assign,nonatomic) BOOL wantsCompactLayout;                                                    //@synthesize wantsCompactLayout=_wantsCompactLayout - In the implementation block
@property (assign,nonatomic) BOOL reviewing;                                                             //@synthesize reviewing=_reviewing - In the implementation block
@property (assign,nonatomic) BOOL picked;                                                                //@synthesize picked=_picked - In the implementation block
@property (assign,nonatomic) BOOL shouldHideProgressIndicator;                                           //@synthesize shouldHideProgressIndicator=_shouldHideProgressIndicator - In the implementation block
@property (assign,nonatomic) BOOL shouldSupressViewWillTransitionToSize;                                 //@synthesize shouldSupressViewWillTransitionToSize=_shouldSupressViewWillTransitionToSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)tileSize;
+(BOOL)_shouldForwardViewWillTransitionToSize;
+(BOOL)shouldShowPlaceholderForAsset:(id)arg1 ;
+(id)newPhotoTileViewControllerWithFrame:(CGRect)arg1 imageRef:(CGImageRef)arg2 imageOrientation:(long long)arg3 allowZoomToFill:(BOOL)arg4 mode:(int)arg5 ;
+(id)newPhotoTileViewControllerWithFrame:(CGRect)arg1 image:(id)arg2 allowZoomToFill:(BOOL)arg3 mode:(int)arg4 ;
+(CGSize)tvOutTileSize;
+(id)newPhotoTileViewControllerWithFrame:(CGRect)arg1 modelPhoto:(id)arg2 mode:(int)arg3 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(int)imageOrientation;
-(void)updateViewConstraints;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)scrollViewDidZoom:(id)arg1 ;
-(void)_configureViews;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(PHAsset *)photo;
-(void)setZoomScale:(float)arg1 ;
-(UIEdgeInsets)overlayInsets;
-(id)init;
-(id)imageView;
-(BOOL)allowsEditing;
-(CGSize)scrollView:(id)arg1 contentSizeForZoomScale:(double)arg2 withProposedSize:(CGSize)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(id)cachingImageManager;
-(void)updateZoomScales;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(id)image;
-(void)setVideoView:(id)arg1 ;
-(long long)_imageOrientation;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(NSString *)description;
-(void)viewSafeAreaInsetsDidChange;
-(BOOL)picked;
-(BOOL)_canShowWhileLocked;
-(void)setPicked:(BOOL)arg1 ;
-(UIImage *)thumbnailImage;
-(double)minZoomScale;
-(void)_updatePlaceholderVisibility;
-(void)_updateSubviewOrdering;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)forceNativeScreenScale;
-(BOOL)force1XCroppedImage;
-(NSNumber *)maxZoomScaleOverride;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)videoView;
-(void)loadView;
-(void)_handleDoubleTap:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setFullSizeImage:(id)arg1 ;
-(void)setThumbnailImage:(UIImage *)arg1 ;
-(void)setOverlayInsets:(UIEdgeInsets)arg1 ;
-(id)scrollView;
-(void)viewDidLayoutSubviews;
-(BOOL)isTVOut;
-(void)dealloc;
-(void)resetZoom;
-(void)setOrientationDelegate:(id)arg1 ;
-(void)_handleSingleTap:(id)arg1 ;
-(void)setGesturesEnabled:(BOOL)arg1 ;
-(void)setShouldSupressViewWillTransitionToSize:(BOOL)arg1 ;
-(void)setCenterContentVertically:(BOOL)arg1 ;
-(void)setForce1XCroppedImage:(BOOL)arg1 ;
-(void)setUnscaledImage:(UIImage *)arg1 ;
-(CGRect)tileFrame;
-(id)_newOriginalImageForPickerFromCachedData;
-(void)updateCloudDownloadProgress:(double)arg1 ;
-(void)_viewWillMoveToSuperView:(id)arg1 ;
-(void)retryDownload;
-(id)initWithModelPhoto:(id)arg1 image:(id)arg2 frame:(CGRect)arg3 isThumbnail:(BOOL)arg4 imageOrientation:(int)arg5 allowZoomToFill:(BOOL)arg6 mode:(int)arg7 ;
-(id)initForPageController;
-(id)initWithModelPhoto:(id)arg1 thumbnailImage:(id)arg2 size:(CGSize)arg3 ;
-(void)_teardownDispatchTimer;
-(BOOL)tileIsOnScreen;
-(void)_setPhoto:(id)arg1 ;
-(void)_updateVideoViewForModelPhoto;
-(void)setTileFrame:(CGRect)arg1 ;
-(void)setCropOverlayRect:(CGRect)arg1 forCropRect:(CGRect)arg2 ;
-(void)setZoomingGesturesEnabled:(BOOL)arg1 ;
-(void)forceZoomingGesturesEnabled;
-(id)expandableImageView;
-(id)_newCGImageBackedUIImageFromImage:(id)arg1 ;
-(void)updateCenterOverlay;
-(void)_setCustomCenterOverlay:(id)arg1 ;
-(void)hideContentView;
-(void)showContentView;
-(id)tileDelegate;
-(void)setTileDelegate:(id)arg1 ;
-(void)setTVOut:(BOOL)arg1 ;
-(BOOL)userDidAdjustWallpaper;
-(BOOL)_clientIsWallpaper;
-(void)setClientIsWallpaper:(BOOL)arg1 ;
-(BOOL)gesturesEnabled;
-(void)_repositionBadgeView;
-(BOOL)photoShouldHaveHDRBadge;
-(BOOL)photoShouldHaveAvalancheBadge;
-(void)setAvalancheBadgesHidden:(BOOL)arg1 ;
-(void)_setupBadgeView;
-(void)_showBadgeViewIfAppropriate;
-(void)setBadgeVisible:(BOOL)arg1 ;
-(void)setBadgeVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)installVideoOverlay:(id)arg1 ;
-(void)_installSubview:(id)arg1 ;
-(void)_updatePlaceholderViewAnimated:(BOOL)arg1 ;
-(void)_centerImageInScrollView;
-(void)_adjustScrollViewContentOffsetForInsets;
-(void)_updateContentInset;
-(void)_updatePlaceholderImageRect;
-(void)setShouldHideProgressIndicator:(BOOL)arg1 ;
-(void)_updateModelPhotoWithImage:(id)arg1 ;
-(void)_setImage:(id)arg1 isThumbnail:(BOOL)arg2 preserveFrame:(BOOL)arg3 ;
-(void)refreshTileWithFullScreenImage:(id)arg1 modelPhoto:(id)arg2 ;
-(void)didLoadImage;
-(void)_removePlaceholderView;
-(void)showErrorPlaceholderView;
-(BOOL)hasFullSizeImage;
-(void)cancelFullSizeImageRequest;
-(void)updateForVisibleOverlays:(BOOL)arg1 ;
-(void)noteParentViewControllerDidDisappear;
-(void)_performRotationUpdatesWithDuration:(double)arg1 size:(CGSize)arg2 ;
-(void)_resetZoomCommon;
-(void)ensureFullSizeImageLoaded;
-(void)_requestFullSizeImage;
-(void)_handleFullSizeImageRequestResult:(id)arg1 dataUTI:(id)arg2 orientation:(long long)arg3 ;
-(id)newImageWithCropRect:(CGRect)arg1 minimalCropDimension:(double)arg2 croppedImageData:(id*)arg3 fullScreenImageData:(id*)arg4 imageCropRect:(CGRect*)arg5 intersectCropWithFullRect:(BOOL)arg6 ;
-(void)_getFullScreenImageData:(id*)arg1 forImage:(id)arg2 fullSize:(CGSize)arg3 imageView:(id)arg4 screenScaleTransform:(CGAffineTransform)arg5 ;
-(id)_newImageForAsset:(id)arg1 targetSize:(CGSize)arg2 cropRect:(CGRect)arg3 fullSize:(CGSize)arg4 ;
-(id)dictionaryWithCroppedImageForRect:(CGRect)arg1 minimalCropDimension:(double)arg2 withOptions:(int)arg3 ;
-(void)zoomToScale:(double)arg1 animated:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_setDidEndZoomingBlock:(/*^block*/id)arg1 ;
-(void)_performDidEndZoomBlock;
-(double)minRotatedScale;
-(float)_calculateZoomScale:(BOOL)arg1 inView:(id)arg2 ;
-(double)zoomToFillScale;
-(double)zoomToFitScale;
-(double)defaultZoomScale;
-(double)currentToMinZoomRatio;
-(double)currentToDefaultZoomRatio;
-(BOOL)isZoomedOut;
-(void)_setDefaultZoomScale;
-(void)reloadZoomScale;
-(void)setAllowsZoomToFill:(BOOL)arg1 ;
-(void)updateAfterCollapse;
-(void)_adjustZoomForEnteringMode:(BOOL)arg1 ;
-(void)setLockedUnderCropOverlay:(BOOL)arg1 ;
-(void)_setupReviewCheckmark;
-(void)setReviewing:(BOOL)arg1 ;
-(void)setReviewing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateReviewCheckmark;
-(BOOL)centerContentVertically;
-(UIImage *)unscaledImage;
-(void)setForceNativeScreenScale:(BOOL)arg1 ;
-(int)inflightFullSizeImageRequestID;
-(void)setInflightFullSizeImageRequestID:(int)arg1 ;
-(void)setMaxZoomScaleOverride:(NSNumber *)arg1 ;
-(BOOL)wantsCompactLayout;
-(void)setWantsCompactLayout:(BOOL)arg1 ;
-(BOOL)reviewing;
-(BOOL)shouldHideProgressIndicator;
-(BOOL)shouldSupressViewWillTransitionToSize;
-(UIView *)_customCenterOverlay;
@end

