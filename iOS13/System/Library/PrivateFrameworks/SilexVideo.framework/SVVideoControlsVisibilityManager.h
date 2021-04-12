/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoTransitionObserver.h>
#import <libobjc.A.dylib/SVVideoControlsVisibilityManager.h>

@protocol SVVideoControlsVisibilityManager <NSObject>
@required
-(void)removeItem:(id)arg1;
-(void)addItem:(id)arg1;

@end

#import <libobjc.A.dylib/SVVideoViewControllerControlsVisibilityDelegate.h>
#import <libobjc.A.dylib/SVVideoViewControllerAppearanceObserver.h>

@protocol SVVideoQueueProviding, SVVideoControlsTimingProviding, SVVideoLoadingStateObserverFactory, SVVideoPlaybackStateObserverFactory, SVVideoViewControllerProviding, SVVideoLoadingStateObserving, SVVideoPlaybackStateObserving;
@class SVTimeline, NSMutableSet, SVTimeBasedAction, NSString;

@interface SVVideoControlsVisibilityManager : NSObject <SVVideoTransitionObserver, SVVideoControlsVisibilityManager, SVVideoViewControllerControlsVisibilityDelegate, SVVideoViewControllerAppearanceObserver> {

	BOOL _autoHidingEnabled;
	BOOL _shouldIgnoreControlItemHideability;
	SVTimeline* _timeline;
	id<SVVideoQueueProviding> _queueProvider;
	id<SVVideoControlsTimingProviding> _timingProvider;
	id<SVVideoLoadingStateObserverFactory> _loadingStateObserverFactory;
	id<SVVideoPlaybackStateObserverFactory> _playbackStateObserverFactory;
	id<SVVideoViewControllerProviding> _videoViewControllerProvider;
	id<SVVideoLoadingStateObserving> _loadingStateObserver;
	id<SVVideoPlaybackStateObserving> _playbackStateObserver;
	NSMutableSet* _items;
	SVTimeBasedAction* _autoAppearanceAction;

}

@property (nonatomic,readonly) SVTimeline * timeline;                                                             //@synthesize timeline=_timeline - In the implementation block
@property (nonatomic,readonly) id<SVVideoQueueProviding> queueProvider;                                           //@synthesize queueProvider=_queueProvider - In the implementation block
@property (nonatomic,readonly) id<SVVideoControlsTimingProviding> timingProvider;                                 //@synthesize timingProvider=_timingProvider - In the implementation block
@property (nonatomic,readonly) id<SVVideoLoadingStateObserverFactory> loadingStateObserverFactory;                //@synthesize loadingStateObserverFactory=_loadingStateObserverFactory - In the implementation block
@property (nonatomic,readonly) id<SVVideoPlaybackStateObserverFactory> playbackStateObserverFactory;              //@synthesize playbackStateObserverFactory=_playbackStateObserverFactory - In the implementation block
@property (nonatomic,readonly) id<SVVideoViewControllerProviding> videoViewControllerProvider;                    //@synthesize videoViewControllerProvider=_videoViewControllerProvider - In the implementation block
@property (nonatomic,retain) id<SVVideoLoadingStateObserving> loadingStateObserver;                               //@synthesize loadingStateObserver=_loadingStateObserver - In the implementation block
@property (nonatomic,retain) id<SVVideoPlaybackStateObserving> playbackStateObserver;                             //@synthesize playbackStateObserver=_playbackStateObserver - In the implementation block
@property (nonatomic,readonly) NSMutableSet * items;                                                              //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) SVTimeBasedAction * autoAppearanceAction;                                            //@synthesize autoAppearanceAction=_autoAppearanceAction - In the implementation block
@property (assign,nonatomic) BOOL autoHidingEnabled;                                                              //@synthesize autoHidingEnabled=_autoHidingEnabled - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreControlItemHideability;                                             //@synthesize shouldIgnoreControlItemHideability=_shouldIgnoreControlItemHideability - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeItem:(id)arg1 ;
-(NSMutableSet *)items;
-(void)addItem:(id)arg1 ;
-(id<SVVideoQueueProviding>)queueProvider;
-(id<SVVideoViewControllerProviding>)videoViewControllerProvider;
-(void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(id<SVVideoLoadingStateObserverFactory>)loadingStateObserverFactory;
-(SVTimeline *)timeline;
-(id)initWithTimeline:(id)arg1 queueProvider:(id)arg2 timingProvider:(id)arg3 loadingStateObserverFactory:(id)arg4 playbackStateObserverFactory:(id)arg5 videoViewControllerProvider:(id)arg6 ;
-(id<SVVideoLoadingStateObserving>)loadingStateObserver;
-(id<SVVideoPlaybackStateObserverFactory>)playbackStateObserverFactory;
-(void)updateAutoHidingState;
-(void)setPlaybackStateObserver:(id<SVVideoPlaybackStateObserving>)arg1 ;
-(void)setLoadingStateObserver:(id<SVVideoLoadingStateObserving>)arg1 ;
-(id<SVVideoControlsTimingProviding>)timingProvider;
-(void)scheduleAutoAppearanceWithTimeInterval:(double)arg1 ;
-(id<SVVideoPlaybackStateObserving>)playbackStateObserver;
-(SVTimeBasedAction *)autoAppearanceAction;
-(void)setAutoAppearanceAction:(SVTimeBasedAction *)arg1 ;
-(BOOL)shouldIgnoreControlItemHideability;
-(id)itemsPassingTest:(/*^block*/id)arg1 ;
-(void)setShouldIgnoreControlItemHideability:(BOOL)arg1 ;
-(void)videoViewController:(id)arg1 willTransitionToVisibilityOfPlaybackControls:(BOOL)arg2 withAnimationCoordinator:(id)arg3 ;
-(void)videoViewControllerWillAppear:(id)arg1 ;
-(void)videoViewControllerDidAppear:(id)arg1 ;
-(void)videoViewControllerWillDisappear:(id)arg1 ;
-(BOOL)autoHidingEnabled;
-(void)setAutoHidingEnabled:(BOOL)arg1 ;
@end

