/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
*/


@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_log;
@class CBDisplayModule, NSObject;

@interface CBABRamp : NSObject {

	CBDisplayModule* _displayModule;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _fadeTimer;
	NSObject*<OS_os_log> _logHandle;
	float _maxLinearBrightness;
	float _minLinearBrightness;

}
-(id)initWithDisplayModule:(id)arg1 andQueue:(id)arg2 ;
-(void)dealloc;
-(float)getVersion;
-(void)stopTransition;
-(void)transitionToBrightness:(float)arg1 force:(BOOL)arg2 periodOverride:(BOOL)arg3 period:(float)arg4 ;
-(void)setPerceptualBrightnessWithFade:(float)arg1 length:(float)arg2 current:(float)arg3 ;
@end

