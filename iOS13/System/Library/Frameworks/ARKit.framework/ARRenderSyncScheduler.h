/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


#import <ARKit/ARKit-Structs.h>
@class ARDisplayLink, ARRollingNumberSeries, NSMutableArray;

@interface ARRenderSyncScheduler : NSObject {

	ARDisplayLink* _displayLink;
	ARRollingNumberSeries* _latencies;
	NSMutableArray* _blocks;
	os_unfair_lock_s _lock;
	BOOL _initialLatencyReached;
	BOOL _reportAdjustments;
	BOOL _schedulingActive;
	double _inputJitterBufferInterval;
	unsigned long long _excessiveCallbackOptions;

}

@property (assign) double inputJitterBufferInterval;                         //@synthesize inputJitterBufferInterval=_inputJitterBufferInterval - In the implementation block
@property (assign) long long expectedFramesPerSecond; 
@property (assign) double vsyncOffset; 
@property (assign) BOOL schedulingActive;                                    //@synthesize schedulingActive=_schedulingActive - In the implementation block
@property (assign) unsigned long long excessiveCallbackOptions;              //@synthesize excessiveCallbackOptions=_excessiveCallbackOptions - In the implementation block
-(id)init;
-(void)_callback;
-(id)initWithExpectedFramesPerSecond:(long long)arg1 ;
-(double)vsyncOffset;
-(void)setVsyncOffset:(double)arg1 ;
-(unsigned long long)excessiveCallbackOptions;
-(void)_tryNextBlockWithTotalTried:(unsigned long long)arg1 ;
-(unsigned long long)_callbackActionForBlockWithLatency:(double)arg1 ;
-(double)inputJitterBufferInterval;
-(long long)expectedFramesPerSecond;
-(void)setExpectedFramesPerSecond:(long long)arg1 ;
-(BOOL)schedulingActive;
-(void)setSchedulingActive:(BOOL)arg1 ;
-(void)submitBlock:(/*^block*/id)arg1 ;
-(void)setInputJitterBufferInterval:(double)arg1 ;
-(void)setExcessiveCallbackOptions:(unsigned long long)arg1 ;
@end

