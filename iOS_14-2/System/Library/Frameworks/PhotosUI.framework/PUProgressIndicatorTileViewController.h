/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUTileViewController.h>
#import <libobjc.A.dylib/PUAssetSharedViewModelChangeObserver.h>
#import <libobjc.A.dylib/PUBrowsingVideoPlayerChangeObserver.h>

@class PUAssetSharedViewModel, PUBrowsingVideoPlayer, PUOperationStatus, PLRoundProgressView, UIButton, UILabel, NSString;

@interface PUProgressIndicatorTileViewController : PUTileViewController <PUAssetSharedViewModelChangeObserver, PUBrowsingVideoPlayerChangeObserver> {

	BOOL __needsUpdateProgressViewStyle;
	BOOL __needsUpdateStatus;
	BOOL __needsUpdateSizeClass;
	BOOL __needsUpdateStatusViews;
	BOOL __isProgressViewVisible;
	BOOL __didStartProgressLogging;
	PUAssetSharedViewModel* _assetSharedViewModel;
	PUBrowsingVideoPlayer* _videoPlayer;
	/*^block*/id _errorPresenter;
	long long __progressViewStyle;
	PUOperationStatus* __status;
	long long __sizeClass;
	PLRoundProgressView* __progressView;
	UIButton* __errorButton;
	UILabel* __debugProgressLabel;

}

@property (assign,setter=_setNeedsUpdateProgressViewStyle:,nonatomic) BOOL _needsUpdateProgressViewStyle;                                    //@synthesize _needsUpdateProgressViewStyle=__needsUpdateProgressViewStyle - In the implementation block
@property (assign,setter=_setNeedsUpdateStatus:,nonatomic) BOOL _needsUpdateStatus;                                                          //@synthesize _needsUpdateStatus=__needsUpdateStatus - In the implementation block
@property (assign,setter=_setNeedsUpdateSizeClass:,nonatomic) BOOL _needsUpdateSizeClass;                                                    //@synthesize _needsUpdateSizeClass=__needsUpdateSizeClass - In the implementation block
@property (assign,setter=_setNeedsUpdateStatusViews:,nonatomic) BOOL _needsUpdateStatusViews;                                                //@synthesize _needsUpdateStatusViews=__needsUpdateStatusViews - In the implementation block
@property (assign,setter=_setProgressViewStyle:,nonatomic) long long _progressViewStyle;                                                     //@synthesize _progressViewStyle=__progressViewStyle - In the implementation block
@property (setter=_setStatus:,nonatomic,copy) PUOperationStatus * _status;                                                                   //@synthesize _status=__status - In the implementation block
@property (assign,setter=_setSizeClass:,nonatomic) long long _sizeClass;                                                                     //@synthesize _sizeClass=__sizeClass - In the implementation block
@property (setter=_setProgressView:,nonatomic,retain) PLRoundProgressView * _progressView;                                                   //@synthesize _progressView=__progressView - In the implementation block
@property (assign,setter=_setProgressViewVisible:,nonatomic) BOOL _isProgressViewVisible;                                                    //@synthesize _isProgressViewVisible=__isProgressViewVisible - In the implementation block
@property (setter=_setErrorButton:,nonatomic,retain) UIButton * _errorButton;                                                                //@synthesize _errorButton=__errorButton - In the implementation block
@property (setter=_setDebugProgressLabel:,nonatomic,retain) UILabel * _debugProgressLabel;                                                   //@synthesize _debugProgressLabel=__debugProgressLabel - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> _progressLog; 
@property (assign,setter=_setDidStartProgressLogging:,getter=_didStartProgressLogging,nonatomic) BOOL _didStartProgressLogging;              //@synthesize _didStartProgressLogging=__didStartProgressLogging - In the implementation block
@property (nonatomic,retain) PUAssetSharedViewModel * assetSharedViewModel;                                                                  //@synthesize assetSharedViewModel=_assetSharedViewModel - In the implementation block
@property (nonatomic,retain) PUBrowsingVideoPlayer * videoPlayer;                                                                            //@synthesize videoPlayer=_videoPlayer - In the implementation block
@property (nonatomic,copy) id errorPresenter;                                                                                                //@synthesize errorPresenter=_errorPresenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)progressIndicatorIconSizeForSizeClass:(long long)arg1 ;
+(CGSize)progressIndicatorTileSizeForSizeClass:(long long)arg1 ;
+(UIEdgeInsets)progressIndicatorIconInsetsForSizeClass:(long long)arg1 ;
+(id)_loadErrorIconForSizeClass:(long long)arg1 ;
-(void)becomeReusable;
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(void)_updateStatusViewsIfNeeded;
-(long long)_sizeClass;
-(void)_setProgressViewVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setNeedsUpdateStatusViews:(BOOL)arg1 ;
-(NSObject*<OS_os_log>)_progressLog;
-(void)_handleErrorButtonTap:(id)arg1 ;
-(void)_invalidateSizeClass;
-(void)_updateSizeClassIfNeeded;
-(void)_setProgressViewStyle:(long long)arg1 ;
-(BOOL)_isProgressViewVisible;
-(void)_updateIfNeeded;
-(void)_updateStatusIfNeeded;
-(void)setVideoPlayer:(PUBrowsingVideoPlayer *)arg1 ;
-(void)applyLayoutInfo:(id)arg1 ;
-(void)_setSizeClass:(long long)arg1 ;
-(PUBrowsingVideoPlayer *)videoPlayer;
-(void)_setDebugProgressLabel:(id)arg1 ;
-(void)setAssetSharedViewModel:(PUAssetSharedViewModel *)arg1 ;
-(void)_invalidateStatusViews;
-(void)viewDidLoad;
-(void)postReloadNotification;
-(id)errorPresenter;
-(BOOL)_needsUpdateStatus;
-(void)_handleVideoPlayer:(id)arg1 didChange:(id)arg2 ;
-(void)_updateSubviewOrdering;
-(void)_setNeedsUpdateStatus:(BOOL)arg1 ;
-(void)_handleAssetSharedViewModel:(id)arg1 didChange:(id)arg2 ;
-(UILabel *)_debugProgressLabel;
-(BOOL)_needsUpdate;
-(PUOperationStatus *)_status;
-(void)_setProgressViewVisible:(BOOL)arg1 ;
-(void)_setErrorButton:(id)arg1 ;
-(void)_setNeedsUpdateProgressViewStyle:(BOOL)arg1 ;
-(void)_invalidateProgressViewStyle;
-(PUAssetSharedViewModel *)assetSharedViewModel;
-(void)_setNeedsUpdateSizeClass:(BOOL)arg1 ;
-(BOOL)_needsUpdateStatusViews;
-(void)_setProgressView:(id)arg1 ;
-(UIButton *)_errorButton;
-(BOOL)_didStartProgressLogging;
-(void)_invalidateStatus;
-(void)_setDidStartProgressLogging:(BOOL)arg1 ;
-(void)_setNeedsUpdate;
-(long long)_progressViewStyle;
-(BOOL)_needsUpdateSizeClass;
-(void)_setStatus:(id)arg1 ;
-(void)_updateProgressViewStyleIfNeeded;
-(BOOL)_needsUpdateProgressViewStyle;
-(PLRoundProgressView *)_progressView;
-(void)setErrorPresenter:(id)arg1 ;
@end

