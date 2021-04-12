/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIButton.h>

@class UIViewController, UIImage, VUIDownloadButtonViewModel, VUICircularProgress, UIAlertController;

@interface VUIDownloadButton : VUIButton {

	BOOL _showsTextInDownloadedState;
	BOOL _observingDownloadProgress;
	BOOL _wasDeleted;
	BOOL _wasCanceled;
	BOOL _isForLibrary;
	UIViewController* _presentingViewController;
	/*^block*/id _downloadStateChangeHandler;
	UIImage* _notDownloadedImage;
	UIImage* _connectingImage;
	UIImage* _downloadingImage;
	UIImage* _downloadedImage;
	VUIDownloadButtonViewModel* _viewModel;
	VUICircularProgress* _progressIndicator;
	UIAlertController* _deleteConfirmationAlertController;

}

@property (nonatomic,retain) UIImage * notDownloadedImage;                                       //@synthesize notDownloadedImage=_notDownloadedImage - In the implementation block
@property (nonatomic,retain) UIImage * connectingImage;                                          //@synthesize connectingImage=_connectingImage - In the implementation block
@property (nonatomic,retain) UIImage * downloadingImage;                                         //@synthesize downloadingImage=_downloadingImage - In the implementation block
@property (nonatomic,retain) UIImage * downloadedImage;                                          //@synthesize downloadedImage=_downloadedImage - In the implementation block
@property (nonatomic,retain) VUIDownloadButtonViewModel * viewModel;                             //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,retain) VUICircularProgress * progressIndicator;                            //@synthesize progressIndicator=_progressIndicator - In the implementation block
@property (assign,nonatomic) BOOL observingDownloadProgress;                                     //@synthesize observingDownloadProgress=_observingDownloadProgress - In the implementation block
@property (assign,nonatomic) BOOL wasDeleted;                                                    //@synthesize wasDeleted=_wasDeleted - In the implementation block
@property (assign,nonatomic) BOOL wasCanceled;                                                   //@synthesize wasCanceled=_wasCanceled - In the implementation block
@property (assign,nonatomic) BOOL isForLibrary;                                                  //@synthesize isForLibrary=_isForLibrary - In the implementation block
@property (nonatomic,retain) UIAlertController * deleteConfirmationAlertController;              //@synthesize deleteConfirmationAlertController=_deleteConfirmationAlertController - In the implementation block
@property (assign,nonatomic) BOOL showsTextInDownloadedState;                                    //@synthesize showsTextInDownloadedState=_showsTextInDownloadedState - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentingViewController;                 //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,copy) id downloadStateChangeHandler;                                        //@synthesize downloadStateChangeHandler=_downloadStateChangeHandler - In the implementation block
+(id)defaultLayout;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIViewController *)presentingViewController;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)_setImage:(id)arg1 ;
-(VUICircularProgress *)progressIndicator;
-(id)_buttonPropertiesForState:(unsigned long long)arg1 ;
-(VUIDownloadButtonViewModel *)viewModel;
-(void)setViewModel:(VUIDownloadButtonViewModel *)arg1 ;
-(void)setProgressIndicator:(VUICircularProgress *)arg1 ;
-(void)setWasDeleted:(BOOL)arg1 ;
-(BOOL)wasDeleted;
-(void)_startObservingViewModel:(id)arg1 ;
-(void)_stopObservingViewModel:(id)arg1 ;
-(void)updateWithElement:(id)arg1 ;
-(id)initWithAssetController:(id)arg1 layout:(id)arg2 ;
-(void)updateWithAssetController:(id)arg1 ;
-(void)setDownloadStateChangeHandler:(id)arg1 ;
-(void)setShowsTextInDownloadedState:(BOOL)arg1 ;
-(id)_localize:(id)arg1 token:(id)arg2 value:(id)arg3 ;
-(void)_handleAppDidEnterBackgroundNotification:(id)arg1 ;
-(CGSize)_imageSizeThatFits:(CGSize)arg1 ;
-(void)_downloadButtonTapped:(id)arg1 ;
-(void)setIsForLibrary:(BOOL)arg1 ;
-(void)_layoutProgressIndicator;
-(void)_updateButtonToState:(unsigned long long)arg1 oldState:(unsigned long long)arg2 ;
-(void)_updateDownloadProgress:(double)arg1 animated:(BOOL)arg2 ;
-(void)_stopObservingDownloadProgress:(id)arg1 ;
-(void)_updateButtonToState:(unsigned long long)arg1 ;
-(void)_updateButtonToDownloadedWithProperties:(id)arg1 ;
-(void)_startDownloadIfPossible;
-(void)setWasCanceled:(BOOL)arg1 ;
-(void)_askUserAndDeleteIfNeeded;
-(void)setDeleteConfirmationAlertController:(UIAlertController *)arg1 ;
-(void)_dismissConfirmationAlertController;
-(UIAlertController *)deleteConfirmationAlertController;
-(BOOL)showsTextInDownloadedState;
-(id)_notDownloadedImage;
-(id)_connectingImage;
-(id)_downloadingImage;
-(id)_downloadedImage;
-(id)downloadStateChangeHandler;
-(BOOL)wasCanceled;
-(void)_updateButtonToNotDownloadedWithProperties:(id)arg1 ;
-(void)_updateButtonToConnectingWithProperties:(id)arg1 ;
-(void)_updateButtonToDownloadingWithProperties:(id)arg1 ;
-(void)_setTitleWithProperties:(id)arg1 ;
-(void)_insertProgressIndicatorWithFrame:(CGRect)arg1 ;
-(void)_configureProgressIndicatorWithProperties:(id)arg1 ;
-(void)_startObservingDownloadProgress:(id)arg1 ;
-(id)_imageForDownloadState:(unsigned long long)arg1 ;
-(void)setObservingDownloadProgress:(BOOL)arg1 ;
-(BOOL)observingDownloadProgress;
-(id)initWithPlayable:(id)arg1 layout:(id)arg2 ;
-(id)_pausedImage;
-(UIImage *)notDownloadedImage;
-(void)setNotDownloadedImage:(UIImage *)arg1 ;
-(UIImage *)connectingImage;
-(void)setConnectingImage:(UIImage *)arg1 ;
-(UIImage *)downloadingImage;
-(void)setDownloadingImage:(UIImage *)arg1 ;
-(UIImage *)downloadedImage;
-(void)setDownloadedImage:(UIImage *)arg1 ;
-(BOOL)isForLibrary;
@end

