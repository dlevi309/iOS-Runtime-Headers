/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/


@class NSMutableArray;

@interface SVTimeline : NSObject {

	double _duration;
	double _time;
	NSMutableArray* _actions;

}

@property (nonatomic,readonly) NSMutableArray * actions;              //@synthesize actions=_actions - In the implementation block
@property (assign,nonatomic) double duration;                         //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double time;                             //@synthesize time=_time - In the implementation block
-(id)init;
-(void)dealloc;
-(double)duration;
-(double)time;
-(void)setTime:(double)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)addAction:(id)arg1 ;
-(NSMutableArray *)actions;
-(void)removeAction:(id)arg1 ;
-(void)removeActions:(id)arg1 ;
-(BOOL)hasPassedTimeOffset:(double)arg1 ;
-(id)performBlock:(/*^block*/id)arg1 at:(double)arg2 ;
-(void)cancelScheduledBlocks;
-(void)executeActionsForTime:(double)arg1 withDuration:(double)arg2 ;
-(double)executionTimeOfTime:(double)arg1 withinDuration:(double)arg2 ;
-(void)resetTime;
@end

