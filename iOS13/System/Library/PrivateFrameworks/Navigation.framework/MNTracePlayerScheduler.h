/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@protocol MNTracePlayerSchedulerDelegate;
@class NSTimer, NSMutableArray, MNTracePlayerTimelineStream;

@interface MNTracePlayerScheduler : NSObject {

	id<MNTracePlayerSchedulerDelegate> _delegate;
	NSTimer* _timer;
	double _lastTimerScheduleTime;
	double _speedMultiplier;
	NSMutableArray* _timelineStreams;
	double _position;
	MNTracePlayerTimelineStream* _nextTimelineStream;

}

@property (assign,nonatomic,__weak) id<MNTracePlayerSchedulerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double speedMultiplier;                                          //@synthesize speedMultiplier=_speedMultiplier - In the implementation block
@property (assign,nonatomic) double position;                                                 //@synthesize position=_position - In the implementation block
-(id)init;
-(void)dealloc;
-(id<MNTracePlayerSchedulerDelegate>)delegate;
-(void)setDelegate:(id<MNTracePlayerSchedulerDelegate>)arg1 ;
-(void)pause;
-(void)resume;
-(void)_update;
-(double)position;
-(void)setPosition:(double)arg1 ;
-(void)setSpeedMultiplier:(double)arg1 ;
-(double)speedMultiplier;
-(void)_timerUpdated:(id)arg1 ;
-(void)addTimelineStream:(id)arg1 ;
-(void)removeTimelineStream:(id)arg1 ;
-(void)removeAllTimelineStreams;
@end

