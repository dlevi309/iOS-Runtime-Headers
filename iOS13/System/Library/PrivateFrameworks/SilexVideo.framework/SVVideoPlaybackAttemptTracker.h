/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoPlaybackAttemptTracking.h>

@protocol SVVideoLoadingStateObserving, SVPlayerTimeControlStatusObserving, SVVideoPlaybackPolicyObserving, SVVisibilityMonitoring;
@class NSString;

@interface SVVideoPlaybackAttemptTracker : NSObject <SVVideoPlaybackAttemptTracking> {

	BOOL _attemptedPlayback;
	/*^block*/id _playbackAttemptBlock;
	id<SVVideoLoadingStateObserving> _loadingStateObserver;
	id<SVPlayerTimeControlStatusObserving> _timeControlStatusObserver;
	id<SVVideoPlaybackPolicyObserving> _playbackPolicyObserver;
	id<SVVisibilityMonitoring> _visibilityMonitor;

}

@property (nonatomic,readonly) id<SVVideoLoadingStateObserving> loadingStateObserver;                         //@synthesize loadingStateObserver=_loadingStateObserver - In the implementation block
@property (nonatomic,readonly) id<SVPlayerTimeControlStatusObserving> timeControlStatusObserver;              //@synthesize timeControlStatusObserver=_timeControlStatusObserver - In the implementation block
@property (nonatomic,readonly) id<SVVideoPlaybackPolicyObserving> playbackPolicyObserver;                     //@synthesize playbackPolicyObserver=_playbackPolicyObserver - In the implementation block
@property (nonatomic,readonly) id<SVVisibilityMonitoring> visibilityMonitor;                                  //@synthesize visibilityMonitor=_visibilityMonitor - In the implementation block
@property (assign,getter=hasAttemptedPlayback,nonatomic) BOOL attemptedPlayback;                              //@synthesize attemptedPlayback=_attemptedPlayback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (setter=onPlaybackAttempt:,nonatomic,copy) id playbackAttemptBlock;                                 //@synthesize playbackAttemptBlock=_playbackAttemptBlock - In the implementation block
-(id<SVPlayerTimeControlStatusObserving>)timeControlStatusObserver;
-(id<SVVideoLoadingStateObserving>)loadingStateObserver;
-(id<SVVisibilityMonitoring>)visibilityMonitor;
-(void)setAttemptedPlayback:(BOOL)arg1 ;
-(id<SVVideoPlaybackPolicyObserving>)playbackPolicyObserver;
-(id)playbackAttemptBlock;
-(BOOL)hasAttemptedPlayback;
-(void)onPlaybackAttempt:(/*^block*/id)arg1 ;
-(id)initWithLoadingStateObserver:(id)arg1 timeControlStatusObserver:(id)arg2 playbackPolicyObserver:(id)arg3 visibilityMonitor:(id)arg4 ;
@end

