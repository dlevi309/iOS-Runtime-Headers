/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <CameraEffectsKit/JTViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/JTAVPlayerViewerDelegate.h>
#import <libobjc.A.dylib/JTClipSequencePlaybackDelegate.h>

@protocol JTClipSequenceDisplayViewControllerDelegate, JTCompositionClipsDataSource;
@class NSString, UIView, UIColor, JTClipSequencePlayer;

@interface JTClipSequenceDisplayViewController : JTViewController <UIGestureRecognizerDelegate, JTAVPlayerViewerDelegate, JTClipSequencePlaybackDelegate> {

	BOOL _disableVideoDisplayGestures;
	BOOL _isDisplaying;
	BOOL _dontRenderLiveTitles;
	BOOL _duckAllAudioClips;
	BOOL _dontRemovePlaceHolderOnDisplay;
	BOOL _cachedWasPlaying;
	int _cachedDuration;
	int _cachedCurrentTime;
	int _cachedMuted;
	id<JTClipSequenceDisplayViewControllerDelegate> _delegate;
	id<JTCompositionClipsDataSource> _clipsDataSource;
	NSString* _displayName;
	long long _videoContentMode;
	UIView* _videoDisplayOverlayView;
	UIView* _viewFlashed;
	UIColor* _restoreToColor;
	JTClipSequencePlayer* _clipsPlayer;
	UIView* _placeHolderView;
	CGSize _cachedRenderSizeInPixels;
	CGSize _lastPlayerViewSize;
	SCD_Struct_JT6 _playbackTimeChangedObserverInterval;

}

@property (nonatomic,retain) UIView * videoDisplayOverlayView;                                             //@synthesize videoDisplayOverlayView=_videoDisplayOverlayView - In the implementation block
@property (assign,nonatomic) BOOL dontRemovePlaceHolderOnDisplay;                                          //@synthesize dontRemovePlaceHolderOnDisplay=_dontRemovePlaceHolderOnDisplay - In the implementation block
@property (assign,nonatomic) int cachedDuration;                                                           //@synthesize cachedDuration=_cachedDuration - In the implementation block
@property (assign,nonatomic) int cachedCurrentTime;                                                        //@synthesize cachedCurrentTime=_cachedCurrentTime - In the implementation block
@property (assign,nonatomic) int cachedMuted;                                                              //@synthesize cachedMuted=_cachedMuted - In the implementation block
@property (assign,nonatomic) BOOL cachedWasPlaying;                                                        //@synthesize cachedWasPlaying=_cachedWasPlaying - In the implementation block
@property (assign,nonatomic) CGSize cachedRenderSizeInPixels;                                              //@synthesize cachedRenderSizeInPixels=_cachedRenderSizeInPixels - In the implementation block
@property (assign,nonatomic,__weak) UIView * viewFlashed;                                                  //@synthesize viewFlashed=_viewFlashed - In the implementation block
@property (nonatomic,retain) UIColor * restoreToColor;                                                     //@synthesize restoreToColor=_restoreToColor - In the implementation block
@property (nonatomic,retain) JTClipSequencePlayer * clipsPlayer;                                           //@synthesize clipsPlayer=_clipsPlayer - In the implementation block
@property (nonatomic,retain) UIView * placeHolderView;                                                     //@synthesize placeHolderView=_placeHolderView - In the implementation block
@property (assign) CGSize lastPlayerViewSize;                                                              //@synthesize lastPlayerViewSize=_lastPlayerViewSize - In the implementation block
@property (assign,nonatomic,__weak) id<JTClipSequenceDisplayViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<JTCompositionClipsDataSource> clipsDataSource;                      //@synthesize clipsDataSource=_clipsDataSource - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                                         //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) BOOL disableVideoDisplayGestures;                                             //@synthesize disableVideoDisplayGestures=_disableVideoDisplayGestures - In the implementation block
@property (assign,nonatomic) SCD_Struct_JT6 playbackTimeChangedObserverInterval;                           //@synthesize playbackTimeChangedObserverInterval=_playbackTimeChangedObserverInterval - In the implementation block
@property (assign,getter=isMuted,nonatomic) BOOL muted; 
@property (assign,nonatomic) long long videoContentMode;                                                   //@synthesize videoContentMode=_videoContentMode - In the implementation block
@property (nonatomic,readonly) CGSize renderSizeInPixels; 
@property (nonatomic,readonly) BOOL isDisplaying;                                                          //@synthesize isDisplaying=_isDisplaying - In the implementation block
@property (assign,nonatomic) BOOL dontRenderLiveTitles;                                                    //@synthesize dontRenderLiveTitles=_dontRenderLiveTitles - In the implementation block
@property (assign,nonatomic) BOOL duckAllAudioClips;                                                       //@synthesize duckAllAudioClips=_duckAllAudioClips - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<JTClipSequenceDisplayViewControllerDelegate>)delegate;
-(void)setDelegate:(id<JTClipSequenceDisplayViewControllerDelegate>)arg1 ;
-(void)pause;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(int)duration;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)play;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)didReceiveMemoryWarning;
-(int)currentTime;
-(BOOL)isPlaying;
-(BOOL)isDisplaying;
-(void)setMuted:(BOOL)arg1 ;
-(void)playWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isMuted;
-(void)seekToTime:(int)arg1 ;
-(long long)videoContentMode;
-(void)setVideoContentMode:(long long)arg1 ;
-(void)appDidEnterBackground:(id)arg1 ;
-(void)appWillResignActive:(id)arg1 ;
-(void)appDidBecomeActive:(id)arg1 ;
-(int)frameRate;
-(void)playbackDidStart:(id)arg1 ;
-(void)sharedInit;
-(void)playbackReadyForDisplayChanged:(id)arg1 isReady:(BOOL)arg2 ;
-(void)setPlaybackTimeChangedObserverInterval:(SCD_Struct_JT6)arg1 ;
-(id<JTCompositionClipsDataSource>)clipsDataSource;
-(void)playbackDidStop:(id)arg1 currentTime:(int)arg2 ;
-(void)dispatchBlockWhenDone:(/*^block*/id)arg1 ;
-(void)updateLiveTransformForClip:(id)arg1 ;
-(SCD_Struct_JT6)playbackTimeChangedObserverInterval;
-(void)playbackTimeDidChange:(id)arg1 currentTime:(int)arg2 ;
-(void)playerWillBeDestroyed:(id)arg1 ;
-(void)resetPlaybackTimeChangedObserverInterval;
-(void)liveTransformForClip:(id)arg1 ;
-(void)setClipsDataSource:(id<JTCompositionClipsDataSource>)arg1 ;
-(BOOL)duckAllAudioClips;
-(BOOL)dontRenderLiveTitles;
-(id)playerContainerView;
-(void)pauseWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)playbackAreaDoubleTapped:(id)arg1 ;
-(void)setDontRenderLiveTitles:(BOOL)arg1 ;
-(void)setDuckAllAudioClips:(BOOL)arg1 ;
-(void)setNeedsCompositionUpdate;
-(void)setNeedsCompositionUpdateForClip:(id)arg1 ;
-(id)playerViewer;
-(id)placeholderContainerView;
-(id)contentModeToVideoGravity:(long long)arg1 ;
-(void)setRestoreToColor:(UIColor *)arg1 ;
-(void)updateDelegatePlayer;
-(CGSize)lastPlayerViewSize;
-(void)setLastPlayerViewSize:(CGSize)arg1 ;
-(JTClipSequencePlayer *)clipsPlayer;
-(void)reloadClipDataSourceOnBecomingActive;
-(void)updateCachedPlaybackProperties;
-(void)unloadClipDataSource;
-(void)preparePlaceHolder;
-(void)setCachedDuration:(int)arg1 ;
-(void)setCachedCurrentTime:(int)arg1 ;
-(void)setCachedMuted:(int)arg1 ;
-(CGSize)renderSizeInPixels;
-(void)setCachedRenderSizeInPixels:(CGSize)arg1 ;
-(UIView *)placeHolderView;
-(void)setClipsPlayer:(JTClipSequencePlayer *)arg1 ;
-(void)reloadClipDataSource;
-(void)reloadClipDataSourceIfNeeded;
-(int)cachedCurrentTime;
-(int)cachedMuted;
-(void)beginFlash;
-(void)endFlash;
-(void)mediaserverdCrashed;
-(UIView *)videoDisplayOverlayView;
-(void)setVideoDisplayOverlayView:(UIView *)arg1 ;
-(void)setPlaceHolderView:(UIView *)arg1 ;
-(void)setDontRemovePlaceHolderOnDisplay:(BOOL)arg1 ;
-(void)addPlaceHolder;
-(BOOL)dontRemovePlaceHolderOnDisplay;
-(CGSize)cachedRenderSizeInPixels;
-(int)cachedDuration;
-(BOOL)cachedWasPlaying;
-(void)playbackDidReachEnd;
-(void)setCachedWasPlaying:(BOOL)arg1 ;
-(void)playerBecameReadyForDisplayChanged:(BOOL)arg1 ;
-(void)removePlaceHolder;
-(void)prepareVideoDisplayView;
-(void)updateVideoDisplayViewBounds;
-(BOOL)disableVideoDisplayGestures;
-(void)installVideoDisplayGestures;
-(void)playbackAreaTapped:(id)arg1 ;
-(void)playbackAreaPanned:(id)arg1 ;
-(void)playbackAreaPinched:(id)arg1 ;
-(void)playbackAreaRotated:(id)arg1 ;
-(CGPoint)convertPointInPlaybackSizeToClipPointNormalized:(CGPoint)arg1 ;
-(id)viewToFlash;
-(void)setViewFlashed:(UIView *)arg1 ;
-(UIView *)viewFlashed;
-(UIColor *)restoreToColor;
-(void)playbackDidReachEnd:(id)arg1 ;
-(void)displayPlaceHolder;
-(void)setPlaybackTimeChangeNotificationPeriod:(SCD_Struct_JT6)arg1 ;
-(CGRect)videoDisplayBounds;
-(CGPoint)convertPointInPlaybackSizeToClipPoint:(CGPoint)arg1 ;
-(void)setDisableVideoDisplayGestures:(BOOL)arg1 ;
@end

