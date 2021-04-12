/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoPlaybackStateObserving.h>

@protocol SVPlayerStatusObserving, SVVideoPlaybackPositionObserving, SVPlayerTimeControlStatusObserving;
@class NSError, NFStateMachine, NSString;

@interface SVVideoPlaybackStateObserver : NSObject <SVVideoPlaybackStateObserving> {

	/*^block*/id changeBlock;
	id<SVPlayerStatusObserving> _statusObserver;
	id<SVVideoPlaybackPositionObserving> _playbackPositionObserver;
	id<SVPlayerTimeControlStatusObserving> _timeControlStatusObserver;
	NFStateMachine* _stateMachine;
	unsigned long long _state;
	NSError* _error;

}

@property (nonatomic,readonly) id<SVPlayerStatusObserving> statusObserver;                                    //@synthesize statusObserver=_statusObserver - In the implementation block
@property (nonatomic,readonly) id<SVVideoPlaybackPositionObserving> playbackPositionObserver;                 //@synthesize playbackPositionObserver=_playbackPositionObserver - In the implementation block
@property (nonatomic,readonly) id<SVPlayerTimeControlStatusObserving> timeControlStatusObserver;              //@synthesize timeControlStatusObserver=_timeControlStatusObserver - In the implementation block
@property (nonatomic,readonly) NFStateMachine * stateMachine;                                                 //@synthesize stateMachine=_stateMachine - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                                        //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSError * error;                                                                   //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
@property (setter=onChange:,nonatomic,copy) id changeBlock; 
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(NFStateMachine *)stateMachine;
-(BOOL)isPlaying;
-(id)changeBlock;
-(void)onChange:(/*^block*/id)arg1 ;
-(id<SVPlayerTimeControlStatusObserving>)timeControlStatusObserver;
-(id<SVPlayerStatusObserving>)statusObserver;
-(id)initWithStatusObserver:(id)arg1 playbackPositionObserver:(id)arg2 timeControlStatusObserver:(id)arg3 ;
-(id<SVVideoPlaybackPositionObserving>)playbackPositionObserver;
@end

