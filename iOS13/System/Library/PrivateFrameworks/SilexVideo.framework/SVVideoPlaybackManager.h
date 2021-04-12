/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoPlaybackController.h>
#import <libobjc.A.dylib/SVVideoTransitionObserver.h>

@protocol SVVideoPlaybackPolicy, SVVideoPlaybackAdvancing, SVPlaybackCoordinatorProviding, SVVideoLoadingStateObserverFactory, SVVideoPlaybackStateObserverFactory, SVVideoPlaybackStateObserving, SVVideoLoadingStateObserving;
@class SVPlaybackCoordinator, NSString;

@interface SVVideoPlaybackManager : NSObject <SVVideoPlaybackController, SVVideoTransitionObserver> {

	id<SVVideoPlaybackPolicy> _playbackPolicy;
	id<SVVideoPlaybackAdvancing> _playbackAdvancer;
	id<SVPlaybackCoordinatorProviding> _playbackCoordinatorProvider;
	id<SVVideoLoadingStateObserverFactory> _loadingStateObserverFactory;
	id<SVVideoPlaybackStateObserverFactory> _playbackStateObserverFactory;
	SVPlaybackCoordinator* _playbackCoordinator;
	id<SVVideoPlaybackStateObserving> _playbackStateObserver;
	id<SVVideoLoadingStateObserving> _loadingStateObserver;

}

@property (nonatomic,readonly) id<SVVideoPlaybackPolicy> playbackPolicy;                                          //@synthesize playbackPolicy=_playbackPolicy - In the implementation block
@property (nonatomic,readonly) id<SVVideoPlaybackAdvancing> playbackAdvancer;                                     //@synthesize playbackAdvancer=_playbackAdvancer - In the implementation block
@property (nonatomic,readonly) id<SVPlaybackCoordinatorProviding> playbackCoordinatorProvider;                    //@synthesize playbackCoordinatorProvider=_playbackCoordinatorProvider - In the implementation block
@property (nonatomic,readonly) id<SVVideoLoadingStateObserverFactory> loadingStateObserverFactory;                //@synthesize loadingStateObserverFactory=_loadingStateObserverFactory - In the implementation block
@property (nonatomic,readonly) id<SVVideoPlaybackStateObserverFactory> playbackStateObserverFactory;              //@synthesize playbackStateObserverFactory=_playbackStateObserverFactory - In the implementation block
@property (nonatomic,retain) SVPlaybackCoordinator * playbackCoordinator;                                         //@synthesize playbackCoordinator=_playbackCoordinator - In the implementation block
@property (nonatomic,retain) id<SVVideoPlaybackStateObserving> playbackStateObserver;                             //@synthesize playbackStateObserver=_playbackStateObserver - In the implementation block
@property (nonatomic,retain) id<SVVideoLoadingStateObserving> loadingStateObserver;                               //@synthesize loadingStateObserver=_loadingStateObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)pause;
-(void)play;
-(void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(id<SVPlaybackCoordinatorProviding>)playbackCoordinatorProvider;
-(id<SVVideoLoadingStateObserverFactory>)loadingStateObserverFactory;
-(id<SVVideoLoadingStateObserving>)loadingStateObserver;
-(id<SVVideoPlaybackStateObserverFactory>)playbackStateObserverFactory;
-(SVPlaybackCoordinator *)playbackCoordinator;
-(void)setPlaybackStateObserver:(id<SVVideoPlaybackStateObserving>)arg1 ;
-(void)setLoadingStateObserver:(id<SVVideoLoadingStateObserving>)arg1 ;
-(id<SVVideoPlaybackStateObserving>)playbackStateObserver;
-(id<SVVideoPlaybackPolicy>)playbackPolicy;
-(id)initWithPlaybackPolicy:(id)arg1 playbackAdvancer:(id)arg2 playbackCoordinatorProvider:(id)arg3 playbackStateObserverFactory:(id)arg4 loadingStateObserverFactory:(id)arg5 ;
-(void)setPlaybackCoordinator:(SVPlaybackCoordinator *)arg1 ;
-(id<SVVideoPlaybackAdvancing>)playbackAdvancer;
-(void)playWithoutRequestingPlayback;
@end

