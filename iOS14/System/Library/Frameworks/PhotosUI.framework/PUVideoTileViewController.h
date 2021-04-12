/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUTileViewController.h>
#import <libobjc.A.dylib/PUAssetViewModelChangeObserver.h>
#import <libobjc.A.dylib/PUBrowsingVideoPlayerChangeObserver.h>
#import <libobjc.A.dylib/PXVideoSessionUIViewDelegate.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PUBrowsingVideoPlayerTimeObserver.h>
#import <libobjc.A.dylib/PUBrowsingVideoPlayerVideoOutput.h>
#import <libobjc.A.dylib/PXSettingsKeyObserver.h>

@protocol PUDisplayAsset;
@class UIView, UIImageView, UIImage, PUAssetViewModel, PUMediaProvider, PXVideoSession, PXVideoSessionUIView, PUBrowsingVideoPlayer, NSString;

@interface PUVideoTileViewController : PUTileViewController <PUAssetViewModelChangeObserver, PUBrowsingVideoPlayerChangeObserver, PXVideoSessionUIViewDelegate, PXChangeObserver, PUBrowsingVideoPlayerTimeObserver, PUBrowsingVideoPlayerVideoOutput, PXSettingsKeyObserver> {

	UIView* _view;
	UIImageView* _placeholderImageView;
	UIImage* _preloadedImage;
	BOOL _hidePlaceholderImmediately;
	BOOL _waitForFocusValueForCrossfade;
	BOOL _canPlayVideo;
	BOOL __isDisplayingFullQualityImage;
	BOOL _playerIsSeeking;
	BOOL _playerDidPlayToEnd;
	BOOL _placeholderVisible;
	BOOL _currentImageIsPlaceholder;
	BOOL _placeholderIsAnimatingToHidden;
	int __currentImageRequestID;
	/*^block*/id _readyForDisplayChangeHandler;
	PUAssetViewModel* _assetViewModel;
	PUMediaProvider* _mediaProvider;
	PXVideoSession* _videoSession;
	PXVideoSessionUIView* _videoView;
	id<PUDisplayAsset> _asset;
	PUBrowsingVideoPlayer* __browsingVideoPlayer;
	long long __thumbnailRequestNumber;
	/*^block*/id __readyForDisplayCompletionHandler;
	CGSize __targetSize;
	CGSize _requestedImageTargetSize;

}

@property (nonatomic,retain) PXVideoSession * videoSession;                                                                //@synthesize videoSession=_videoSession - In the implementation block
@property (nonatomic,retain) PXVideoSessionUIView * videoView;                                                             //@synthesize videoView=_videoView - In the implementation block
@property (setter=_setAsset:,nonatomic,retain) id<PUDisplayAsset> asset;                                                   //@synthesize asset=_asset - In the implementation block
@property (assign,setter=_setCurrentImageRequestID:,nonatomic) int _currentImageRequestID;                                 //@synthesize _currentImageRequestID=__currentImageRequestID - In the implementation block
@property (assign,setter=_setTargetSize:,nonatomic) CGSize _targetSize;                                                    //@synthesize _targetSize=__targetSize - In the implementation block
@property (assign,nonatomic) CGSize requestedImageTargetSize;                                                              //@synthesize requestedImageTargetSize=_requestedImageTargetSize - In the implementation block
@property (setter=_setBrowsingVideoPlayer:,nonatomic,retain) PUBrowsingVideoPlayer * _browsingVideoPlayer;                 //@synthesize _browsingVideoPlayer=__browsingVideoPlayer - In the implementation block
@property (assign,setter=_setThumbnailRequestNumber:,nonatomic) long long _thumbnailRequestNumber;                         //@synthesize _thumbnailRequestNumber=__thumbnailRequestNumber - In the implementation block
@property (assign,setter=_setDisplayingFullQualityImage:,nonatomic) BOOL _isDisplayingFullQualityImage;                    //@synthesize _isDisplayingFullQualityImage=__isDisplayingFullQualityImage - In the implementation block
@property (setter=_setReadyForDisplayCompletionHandler:,nonatomic,copy) id _readyForDisplayCompletionHandler;              //@synthesize _readyForDisplayCompletionHandler=__readyForDisplayCompletionHandler - In the implementation block
@property (nonatomic,readonly) BOOL _isDisplayingVideo; 
@property (assign,nonatomic) BOOL playerIsSeeking;                                                                         //@synthesize playerIsSeeking=_playerIsSeeking - In the implementation block
@property (assign,nonatomic) BOOL playerDidPlayToEnd;                                                                      //@synthesize playerDidPlayToEnd=_playerDidPlayToEnd - In the implementation block
@property (assign,nonatomic) BOOL placeholderVisible;                                                                      //@synthesize placeholderVisible=_placeholderVisible - In the implementation block
@property (assign,nonatomic) BOOL currentImageIsPlaceholder;                                                               //@synthesize currentImageIsPlaceholder=_currentImageIsPlaceholder - In the implementation block
@property (assign,nonatomic) BOOL placeholderIsAnimatingToHidden;                                                          //@synthesize placeholderIsAnimatingToHidden=_placeholderIsAnimatingToHidden - In the implementation block
@property (nonatomic,retain) PUAssetViewModel * assetViewModel;                                                            //@synthesize assetViewModel=_assetViewModel - In the implementation block
@property (nonatomic,retain) PUMediaProvider * mediaProvider;                                                              //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (assign,nonatomic) BOOL canPlayVideo;                                                                            //@synthesize canPlayVideo=_canPlayVideo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL videoOutputIsReadyForDisplay; 
@property (nonatomic,copy) id readyForDisplayChangeHandler;                                                                //@synthesize readyForDisplayChangeHandler=_readyForDisplayChangeHandler - In the implementation block
-(PUAssetViewModel *)assetViewModel;
-(void)setAssetViewModel:(PUAssetViewModel *)arg1 ;
-(void)removeAllAnimations;
-(void)setMediaProvider:(PUMediaProvider *)arg1 ;
-(void)becomeReusable;
-(BOOL)_isDisplayingFullQualityImage;
-(void)setEdgeAntialiasingEnabled:(BOOL)arg1 ;
-(CGSize)_targetSize;
-(void)_updateReadyForDisplay;
-(PUMediaProvider *)mediaProvider;
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(id)generateAssetTransitionInfo;
-(void)_setTargetSize:(CGSize)arg1 ;
-(void)_setCurrentImageRequestID:(int)arg1 ;
-(BOOL)adoptAssetTransitionInfo:(id)arg1 ;
-(void)setCanPlayVideo:(BOOL)arg1 ;
-(int)_currentImageRequestID;
-(id<PUDisplayAsset>)asset;
-(id)readyForDisplayChangeHandler;
-(void)setReadyForDisplayChangeHandler:(id)arg1 ;
-(void)_handleAssetViewModel:(id)arg1 didChange:(id)arg2 ;
-(void)setVideoView:(PXVideoSessionUIView *)arg1 ;
-(void)applyLayoutInfo:(id)arg1 ;
-(void)videoPlayer:(id)arg1 desiredSeekTimeDidChange:(SCD_Struct_PH4)arg2 ;
-(void)didChangeAnimating;
-(void)_updateImage;
-(void)_handleBrowsingVideoPlayer:(id)arg1 didChange:(id)arg2 ;
-(void)setVideoSession:(PXVideoSession *)arg1 ;
-(void)_setDisplayingFullQualityImage:(BOOL)arg1 ;
-(PXVideoSession *)videoSession;
-(BOOL)videoOutputIsReadyForDisplay;
-(void)_updatePlaceholderVisibility;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)didChangeActive;
-(void)_setAsset:(id)arg1 ;
-(PXVideoSessionUIView *)videoView;
-(id)loadView;
-(void)setPreloadedImage:(id)arg1 ;
-(BOOL)_isDisplayingVideo;
-(void)videoSessionViewPlaceholderVisibilityChanged:(id)arg1 ;
-(void)_updateDebugBorders;
-(void)setPlaceholderIsAnimatingToHidden:(BOOL)arg1 ;
-(void)setPlaceholderVisible:(BOOL)arg1 animated:(BOOL)arg2 animationDuration:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)_updateTargetSize;
-(void)_callReadyToDisplayChangeHandler;
-(void)_handleImageResult:(id)arg1 info:(id)arg2 synchronous:(BOOL)arg3 ;
-(void)_updateVideo;
-(void)setPlayerIsSeeking:(BOOL)arg1 ;
-(void)setPlayerDidPlayToEnd:(BOOL)arg1 ;
-(BOOL)canPlayVideo;
-(CGSize)requestedImageTargetSize;
-(void)setRequestedImageTargetSize:(CGSize)arg1 ;
-(BOOL)playerIsSeeking;
-(long long)_thumbnailRequestNumber;
-(void)_setThumbnailRequestNumber:(long long)arg1 ;
-(id)_readyForDisplayCompletionHandler;
-(void)_setReadyForDisplayCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)playerDidPlayToEnd;
-(BOOL)placeholderVisible;
-(void)setPlaceholderVisible:(BOOL)arg1 ;
-(BOOL)currentImageIsPlaceholder;
-(void)setCurrentImageIsPlaceholder:(BOOL)arg1 ;
-(BOOL)placeholderIsAnimatingToHidden;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)videoPlayer:(id)arg1 currentTimeDidChange:(SCD_Struct_PH4)arg2 ;
-(void)dealloc;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)_setBrowsingVideoPlayer:(id)arg1 ;
-(PUBrowsingVideoPlayer *)_browsingVideoPlayer;
@end

