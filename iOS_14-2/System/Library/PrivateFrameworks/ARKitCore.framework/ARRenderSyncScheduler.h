/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


#import <ARKitCore/ARKitCore-Structs.h>
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
-(id)initWithExpectedFramesPerSecond:(long long)arg1 ;
-(id)init;
-(BOOL)schedulingActive;
-(void)_tryNextBlockWithTotalTried:(unsigned long long)arg1 ;
-(void)setInputJitterBufferInterval:(double)arg1 ;
-(void)setVsyncOffset:(double)arg1 ;
-(double)vsyncOffset;
-(void)setExcessiveCallbackOptions:(unsigned long long)arg1 ;
-(long long)expectedFramesPerSecond;
-(unsigned long long)excessiveCallbackOptions;
-(void)_callback;
-(void)setExpectedFramesPerSecond:(long long)arg1 ;
-(void)setSchedulingActive:(BOOL)arg1 ;
-(void)submitBlock:(/*^block*/id)arg1 ;
-(double)inputJitterBufferInterval;
-(unsigned long long)_callbackActionForBlockWithLatency:(double)arg1 ;
@end

