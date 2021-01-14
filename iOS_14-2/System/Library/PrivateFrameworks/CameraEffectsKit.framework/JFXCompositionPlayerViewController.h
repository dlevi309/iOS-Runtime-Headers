/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol JFXCompositionPlayerViewControllerDelegate, JFXCompositionPlayableElementsDataSource;
@class NSString, UIView, JFXCompositionPlayer, UIColor;

@interface JFXCompositionPlayerViewController : UIViewController <UIGestureRecognizerDelegate> {

	BOOL _disableVideoDisplayGestures;
	BOOL _isDisplaying;
	BOOL _dontRemovePlaceHolderOnDisplay;
	BOOL _cachedWasPlaying;
	unsigned _parentCode;
	int _cachedDuration;
	int _cachedCurrentTime;
	int _cachedMuted;
	id<JFXCompositionPlayerViewControllerDelegate> _delegate;
	id<JFXCompositionPlayableElementsDataSource> _clipsDataSource;
	NSString* _displayName;
	long long _videoContentMode;
	UIView* _videoDisplayOverlayView;
	JFXCompositionPlayer* _clipsPlayer;
	UIView* _viewFlashed;
	UIColor* _restoreToColor;
	UIView* _placeHolderView;
	CGSize _cachedRenderSizeInPixels;
	CGSize _lastPlayerViewSize;
	CGSize _lastPlayerViewBoundsSize;
	SCD_Struct_JF3 _playbackTimeChangedObserverInterval;

}

@property (nonatomic,retain) UIView * videoDisplayOverlayView;                                                 //@synthesize videoDisplayOverlayView=_videoDisplayOverlayView - In the implementation block
@property (nonatomic,retain) JFXCompositionPlayer * clipsPlayer;                                               //@synthesize clipsPlayer=_clipsPlayer - In the implementation block
@property (assign,nonatomic) BOOL dontRemovePlaceHolderOnDisplay;                                              //@synthesize dontRemovePlaceHolderOnDisplay=_dontRemovePlaceHolderOnDisplay - In the implementation block
@property (assign,nonatomic) int cachedDuration;                                                               //@synthesize cachedDuration=_cachedDuration - In the implementation block
@property (assign,nonatomic) int cachedCurrentTime;                                                            //@synthesize cachedCurrentTime=_cachedCurrentTime - In the implementation block
@property (assign,nonatomic) int cachedMuted;                                                                  //@synthesize cachedMuted=_cachedMuted - In the implementation block
@property (assign,nonatomic) BOOL cachedWasPlaying;                                                            //@synthesize cachedWasPlaying=_cachedWasPlaying - In the implementation block
@property (assign,nonatomic) CGSize cachedRenderSizeInPixels;                                                  //@synthesize cachedRenderSizeInPixels=_cachedRenderSizeInPixels - In the implementation block
@property (assign,nonatomic,__weak) UIView * viewFlashed;                                                      //@synthesize viewFlashed=_viewFlashed - In the implementation block
@property (nonatomic,retain) UIColor * restoreToColor;                                                         //@synthesize restoreToColor=_restoreToColor - In the implementation block
@property (assign,nonatomic) CGSize lastPlayerViewSize;                                                        //@synthesize lastPlayerViewSize=_lastPlayerViewSize - In the implementation block
@property (assign,nonatomic) CGSize lastPlayerViewBoundsSize;                                                  //@synthesize lastPlayerViewBoundsSize=_lastPlayerViewBoundsSize - In the implementation block
@property (nonatomic,retain) UIView * placeHolderView;                                                         //@synthesize placeHolderView=_placeHolderView - In the implementation block
@property (assign,nonatomic,__weak) id<JFXCompositionPlayerViewControllerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<JFXCompositionPlayableElementsDataSource> clipsDataSource;              //@synthesize clipsDataSource=_clipsDataSource - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                                             //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) unsigned parentCode;                                                              //@synthesize parentCode=_parentCode - In the implementation block
@property (assign,nonatomic) BOOL disableVideoDisplayGestures;                                                 //@synthesize disableVideoDisplayGestures=_disableVideoDisplayGestures - In the implementation block
@property (nonatomic,readonly) SCD_Struct_JF3 currentCMTime; 
@property (nonatomic,readonly) int currentTime; 
@property (assign,nonatomic) SCD_Struct_JF3 playbackTimeChangedObserverInterval;                               //@synthesize playbackTimeChangedObserverInterval=_playbackTimeChangedObserverInterval - In the implementation block
@property (assign,getter=isMuted,nonatomic) BOOL muted; 
@property (assign,nonatomic) long long videoContentMode;                                                       //@synthesize videoContentMode=_videoContentMode - In the implementation block
@property (nonatomic,readonly) CGSize renderSizeInPixels; 
@property (nonatomic,readonly) BOOL isDisplaying;                                                              //@synthesize isDisplaying=_isDisplaying - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)compositionPlayerClass;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isPlaying;
-(id)init;
-(id<JFXCompositionPlayerViewControllerDelegate>)delegate;
-(void)pause;
-(void)appWillResignActive:(id)arg1 ;
-(void)play;
-(void)playWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<JFXCompositionPlayerViewControllerDelegate>)arg1 ;
-(int)frameRate;
-(int)currentTime;
-(void)didReceiveMemoryWarning;
-(void)setVideoContentMode:(long long)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)viewDidLoad;
-(void)setMuted:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isDisplaying;
-(BOOL)isMuted;
-(int)duration;
-(void)appDidBecomeActive:(id)arg1 ;
-(NSString *)displayName;
-(void)viewDidLayoutSubviews;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)seekToTime:(int)arg1 ;
-(long long)videoContentMode;
-(void)appDidEnterBackground:(id)arg1 ;
-(void)dealloc;
-(void)playbackDidStart:(id)arg1 ;
-(void)setCachedDuration:(int)arg1 ;
-(int)cachedDuration;
-(SCD_Struct_JF3)currentCMTime;
-(void)sharedInit;
-(id<JFXCompositionPlayableElementsDataSource>)clipsDataSource;
-(unsigned)parentCode;
-(void)setParentCode:(unsigned)arg1 ;
-(void)setClipsDataSource:(id<JFXCompositionPlayableElementsDataSource>)arg1 ;
-(id)contentModeToVideoGravity:(long long)arg1 ;
-(void)mediaserverdCrashed;
-(id)playerContainerView;
-(void)dispatchBlockWhenDone:(/*^block*/id)arg1 ;
-(void)pauseWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)playbackTimeDidChange:(id)arg1 currentTime:(int)arg2 ;
-(void)playbackDidStop:(id)arg1 currentTime:(int)arg2 ;
-(void)playbackAreaDoubleTapped:(id)arg1 ;
-(void)playbackReadyForDisplayChanged:(id)arg1 isReady:(BOOL)arg2 ;
-(void)setPlaybackTimeChangedObserverInterval:(SCD_Struct_JF3)arg1 ;
-(SCD_Struct_JF3)playbackTimeChangedObserverInterval;
-(void)playerWillBeDestroyed:(id)arg1 ;
-(void)resetPlaybackTimeChangedObserverInterval;
-(id)playerViewer;
-(void)setRestoreToColor:(UIColor *)arg1 ;
-(void)updateDelegatePlayer;
-(CGSize)lastPlayerViewSize;
-(void)setLastPlayerViewSize:(CGSize)arg1 ;
-(JFXCompositionPlayer *)clipsPlayer;
-(void)reloadClipDataSourceOnBecomingActive;
-(void)unloadComposition;
-(void)preparePlaceHolder;
-(void)setCachedCurrentTime:(int)arg1 ;
-(void)setCachedMuted:(int)arg1 ;
-(CGSize)renderSizeInPixels;
-(void)setCachedRenderSizeInPixels:(CGSize)arg1 ;
-(UIView *)placeHolderView;
-(void)setClipsPlayer:(JFXCompositionPlayer *)arg1 ;
-(void)reloadClipDataSource;
-(void)reloadClipDataSourceIfNeeded;
-(BOOL)isReloadClipDataSourceNeeded;
-(int)cachedCurrentTime;
-(int)cachedMuted;
-(void)beginFlash;
-(void)endFlash;
-(void)setNeedsCompositionUpdate;
-(UIView *)videoDisplayOverlayView;
-(void)setVideoDisplayOverlayView:(UIView *)arg1 ;
-(void)updateCachedPlaybackProperties;
-(void)unloadClipDataSource;
-(id)placeholderContainerView;
-(void)setPlaceHolderView:(UIView *)arg1 ;
-(void)setDontRemovePlaceHolderOnDisplay:(BOOL)arg1 ;
-(void)addPlaceHolder;
-(BOOL)dontRemovePlaceHolderOnDisplay;
-(CGSize)cachedRenderSizeInPixels;
-(BOOL)shouldHandleMediaServerCrash;
-(BOOL)cachedWasPlaying;
-(void)setCachedWasPlaying:(BOOL)arg1 ;
-(void)playerBecameReadyForDisplayChanged:(BOOL)arg1 ;
-(void)removePlaceHolder;
-(void)prepareVideoDisplayView;
-(void)setLastPlayerViewBoundsSize:(CGSize)arg1 ;
-(void)updateVideoDisplayViewBounds;
-(BOOL)disableVideoDisplayGestures;
-(void)installVideoDisplayGestures;
-(CGSize)lastPlayerViewBoundsSize;
-(CGSize)playerViewBoundsSize;
-(void)playbackAreaTapped:(id)arg1 ;
-(void)playbackAreaPanned:(id)arg1 ;
-(void)playbackAreaPinched:(id)arg1 ;
-(void)playbackAreaRotated:(id)arg1 ;
-(CGPoint)convertPointInPlaybackSizeToClipPointNormalized:(CGPoint)arg1 ;
-(CGSize)normalizedMinimumTouchSize;
-(id)viewToFlash;
-(void)setViewFlashed:(UIView *)arg1 ;
-(UIView *)viewFlashed;
-(UIColor *)restoreToColor;
-(void)setNeedsCompositionUpdateForClip:(id)arg1 ;
-(void)displayPlaceHolder;
-(void)setPlaybackTimeChangeNotificationPeriod:(SCD_Struct_JF3)arg1 ;
-(CGRect)videoDisplayBounds;
-(CGPoint)convertPointInPlaybackSizeToClipPoint:(CGPoint)arg1 ;
-(void)setDisableVideoDisplayGestures:(BOOL)arg1 ;
@end
