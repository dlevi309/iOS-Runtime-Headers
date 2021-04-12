/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


#import <ARKit/ARKit-Structs.h>
@class CADisplayLink, ARRunLoop;

@interface ARDisplayLink : NSObject {

	CADisplayLink* _displayLink;
	/*^block*/id _callback;
	os_unfair_lock_s _lock;
	double _actualVsyncOffset;
	long long _preferredFramesPerSecond;
	double _vsyncOffset;
	ARRunLoop* _runloop;

}

@property (assign) long long preferredFramesPerSecond;              //@synthesize preferredFramesPerSecond=_preferredFramesPerSecond - In the implementation block
@property (assign) double vsyncOffset;                              //@synthesize vsyncOffset=_vsyncOffset - In the implementation block
@property (nonatomic,readonly) ARRunLoop * runloop;                 //@synthesize runloop=_runloop - In the implementation block
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(ARRunLoop *)runloop;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(long long)preferredFramesPerSecond;
-(id)initWithPreferredFramesPerSecond:(long long)arg1 callback:(/*^block*/id)arg2 ;
-(double)vsyncOffset;
-(void)setVsyncOffset:(double)arg1 ;
-(void)_recomputeActualVsyncOffsetWithVsyncOffset:(double)arg1 preferredFramesPerSecond:(long long)arg2 ;
-(void)displayLinkCallback;
@end

