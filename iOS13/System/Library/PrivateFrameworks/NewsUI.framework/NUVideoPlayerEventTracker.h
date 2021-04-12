/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NSSNewsAnalyticsSessionManagerObserving.h>
#import <libobjc.A.dylib/NUAggregateVideoPlayerEventTracker.h>
#import <libobjc.A.dylib/SVVideoViewControllerAppearanceObserver.h>

@class NSMutableArray, NSString;

@interface NUVideoPlayerEventTracker : NSObject <NSSNewsAnalyticsSessionManagerObserving, NUAggregateVideoPlayerEventTracker, SVVideoViewControllerAppearanceObserver> {

	BOOL _hostProcessIsForeground;
	BOOL _videoPlayerViewHasAppeared;
	BOOL _videoPlayerIsVisible;
	NSMutableArray* _eventTrackers;

}

@property (nonatomic,readonly) NSMutableArray * eventTrackers;                                               //@synthesize eventTrackers=_eventTrackers - In the implementation block
@property (assign,getter=isHostProcessForeground,nonatomic) BOOL hostProcessIsForeground;                    //@synthesize hostProcessIsForeground=_hostProcessIsForeground - In the implementation block
@property (assign,getter=hasVideoPlayerViewAppeared,nonatomic) BOOL videoPlayerViewHasAppeared;              //@synthesize videoPlayerViewHasAppeared=_videoPlayerViewHasAppeared - In the implementation block
@property (assign,getter=isVideoPlayerVisible,nonatomic) BOOL videoPlayerIsVisible;                          //@synthesize videoPlayerIsVisible=_videoPlayerIsVisible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithSessionManager:(id)arg1 ;
-(void)videoViewControllerDidAppear:(id)arg1 ;
-(void)videoViewControllerDidDisappear:(id)arg1 ;
-(void)videoDidAppearWithVideoItem:(id)arg1 ;
-(void)videoDidDisappearWithVideoItem:(id)arg1 ;
-(void)playbackInitiatedWithVideoItem:(id)arg1 metadata:(id)arg2 ;
-(void)playbackStartedWithVideoItem:(id)arg1 metadata:(id)arg2 ;
-(void)playbackPausedWithVideoItem:(id)arg1 metadata:(id)arg2 ;
-(void)playbackResumedWithVideoItem:(id)arg1 metadata:(id)arg2 ;
-(void)playbackFinishedWithVideoItem:(id)arg1 metadata:(id)arg2 ;
-(void)playbackFailedWithVideoItem:(id)arg1 metadata:(id)arg2 ;
-(void)muteStateChanged:(BOOL)arg1 withVideoItem:(id)arg2 metadata:(id)arg3 ;
-(void)videoPlaybackPassedFirstQuartileWithVideoItem:(id)arg1 ;
-(void)videoPlaybackPassedSecondQuartileWithVideoItem:(id)arg1 ;
-(void)videoPlaybackPassedThirdQuartileWithVideoItem:(id)arg1 ;
-(void)userEngagedWithCallToActionBarWithVideoItem:(id)arg1 ;
-(void)userEngagedWithDiscoverMoreButtonWithVideoItem:(id)arg1 ;
-(void)impressionThresholdReachedForVideoAdWithMetadata:(id)arg1 ;
-(void)loadingFinishedForVideoAdWithMetadata:(id)arg1 ;
-(void)playbackStartedForVideoAdWithMetadata:(id)arg1 ;
-(void)playbackPausedForVideoAdWithMetadata:(id)arg1 ;
-(void)playbackFinishedForVideoAdWithMetadata:(id)arg1 ;
-(void)userSkippedPlaybackOfVideoAdWithMetadata:(id)arg1 ;
-(void)userEngagedWithCallToActionOfVideoAdWithMetadata:(id)arg1 ;
-(void)videoPlayerDidBecomeVisible;
-(void)videoPlayerDidBecomeInvisible;
-(void)addEventTracker:(id)arg1 ;
-(BOOL)isVideoPlayerVisible;
-(void)setVideoPlayerIsVisible:(BOOL)arg1 ;
-(NSMutableArray *)eventTrackers;
-(void)_performBlockForEventTrackersRespondingToSelector:(SEL)arg1 block:(/*^block*/id)arg2 ;
-(void)setVideoPlayerViewHasAppeared:(BOOL)arg1 ;
-(void)_updateVideoPlayerVisibilityIfNeeded;
-(void)setHostProcessIsForeground:(BOOL)arg1 ;
-(BOOL)hasVideoPlayerViewAppeared;
-(BOOL)isHostProcessForeground;
-(void)sessionDidStartWithSessionID:(id)arg1 ;
-(void)sessionWillEnd;
-(void)removeEventTracker:(id)arg1 ;
@end

