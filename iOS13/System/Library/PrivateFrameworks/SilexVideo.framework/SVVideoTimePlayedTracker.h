/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoTimePlayedTracking.h>

@protocol SVVideoPeriodicTimeObserving, SVVideoTimeProviding, SVVideoPlaybackStateObserving, SVVideoTimeJumpObserving;
@class NSString;

@interface SVVideoTimePlayedTracker : NSObject <SVVideoTimePlayedTracking> {

	/*^block*/id changeBlock;
	id<SVVideoPeriodicTimeObserving> _timeObserver;
	id<SVVideoTimeProviding> _timeProvider;
	id<SVVideoPlaybackStateObserving> _playbackStateObserver;
	id<SVVideoTimeJumpObserving> _timeJumpObserver;
	double _timePlayed;

}

@property (nonatomic,readonly) id<SVVideoPeriodicTimeObserving> timeObserver;                        //@synthesize timeObserver=_timeObserver - In the implementation block
@property (nonatomic,readonly) id<SVVideoTimeProviding> timeProvider;                                //@synthesize timeProvider=_timeProvider - In the implementation block
@property (nonatomic,readonly) id<SVVideoPlaybackStateObserving> playbackStateObserver;              //@synthesize playbackStateObserver=_playbackStateObserver - In the implementation block
@property (nonatomic,readonly) id<SVVideoTimeJumpObserving> timeJumpObserver;                        //@synthesize timeJumpObserver=_timeJumpObserver - In the implementation block
@property (assign,nonatomic) double timePlayed;                                                      //@synthesize timePlayed=_timePlayed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (setter=onChange:,nonatomic,copy) id changeBlock; 
-(void)setTimePlayed:(double)arg1 ;
-(double)timePlayed;
-(id<SVVideoTimeProviding>)timeProvider;
-(id)changeBlock;
-(id<SVVideoPeriodicTimeObserving>)timeObserver;
-(void)onChange:(/*^block*/id)arg1 ;
-(id<SVVideoPlaybackStateObserving>)playbackStateObserver;
-(id)initWithTimeObserver:(id)arg1 timeProvider:(id)arg2 playbackStateObserver:(id)arg3 timeJumpObserver:(id)arg4 ;
-(id<SVVideoTimeJumpObserving>)timeJumpObserver;
@end

