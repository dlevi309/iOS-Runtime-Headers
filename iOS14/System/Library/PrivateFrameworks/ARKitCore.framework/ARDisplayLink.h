/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


#import <ARKitCore/ARKitCore-Structs.h>
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
-(void)displayLinkCallback;
-(ARRunLoop *)runloop;
-(void)setVsyncOffset:(double)arg1 ;
-(double)vsyncOffset;
-(long long)preferredFramesPerSecond;
-(void)invalidate;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(void)_recomputeActualVsyncOffsetWithVsyncOffset:(double)arg1 preferredFramesPerSecond:(long long)arg2 ;
-(id)initWithPreferredFramesPerSecond:(long long)arg1 callback:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

