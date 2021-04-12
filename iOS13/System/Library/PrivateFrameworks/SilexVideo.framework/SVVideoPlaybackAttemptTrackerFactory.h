/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoPlaybackAttemptTrackerFactory.h>

@protocol SVVideoPlaybackAttemptTrackerFactory <NSObject>
@required
-(id)createPlaybackAttemptTrackerForVideo:(id)arg1;

@end


@protocol SVVideoLoadingStateObserverFactory, SVPlayerTimeControlStatusObserverFactory, SVVideoPlaybackPolicyObserverFactory, SVVideoVisibilityMonitorProviding;
@class NSString;

@interface SVVideoPlaybackAttemptTrackerFactory : NSObject <SVVideoPlaybackAttemptTrackerFactory> {

	id<SVVideoLoadingStateObserverFactory> _loadingStateObserverFactory;
	id<SVPlayerTimeControlStatusObserverFactory> _timeControlStatusObserverFactorty;
	id<SVVideoPlaybackPolicyObserverFactory> _playbackPolicyObserverFactory;
	id<SVVideoVisibilityMonitorProviding> _visibilityMonitorProvider;

}

@property (nonatomic,readonly) id<SVVideoLoadingStateObserverFactory> loadingStateObserverFactory;                          //@synthesize loadingStateObserverFactory=_loadingStateObserverFactory - In the implementation block
@property (nonatomic,readonly) id<SVPlayerTimeControlStatusObserverFactory> timeControlStatusObserverFactorty;              //@synthesize timeControlStatusObserverFactorty=_timeControlStatusObserverFactorty - In the implementation block
@property (nonatomic,readonly) id<SVVideoPlaybackPolicyObserverFactory> playbackPolicyObserverFactory;                      //@synthesize playbackPolicyObserverFactory=_playbackPolicyObserverFactory - In the implementation block
@property (nonatomic,readonly) id<SVVideoVisibilityMonitorProviding> visibilityMonitorProvider;                             //@synthesize visibilityMonitorProvider=_visibilityMonitorProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVVideoLoadingStateObserverFactory>)loadingStateObserverFactory;
-(id)createPlaybackAttemptTrackerForVideo:(id)arg1 ;
-(id)initWithLoadingStateObserverFactory:(id)arg1 timeControlStatusObserverFactory:(id)arg2 playbackPolicyObserverFactory:(id)arg3 visibilityMonitorProvider:(id)arg4 ;
-(id<SVVideoVisibilityMonitorProviding>)visibilityMonitorProvider;
-(id<SVPlayerTimeControlStatusObserverFactory>)timeControlStatusObserverFactorty;
-(id<SVVideoPlaybackPolicyObserverFactory>)playbackPolicyObserverFactory;
@end

