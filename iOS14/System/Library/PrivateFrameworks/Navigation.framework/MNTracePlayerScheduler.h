/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)position;
-(id)init;
-(id<MNTracePlayerSchedulerDelegate>)delegate;
-(void)pause;
-(void)setDelegate:(id<MNTracePlayerSchedulerDelegate>)arg1 ;
-(void)setPosition:(double)arg1 ;
-(void)_update;
-(void)resume;
-(void)dealloc;
-(void)setSpeedMultiplier:(double)arg1 ;
-(double)speedMultiplier;
-(void)_timerUpdated:(id)arg1 ;
-(void)addTimelineStream:(id)arg1 ;
-(void)removeTimelineStream:(id)arg1 ;
-(void)removeAllTimelineStreams;
@end

