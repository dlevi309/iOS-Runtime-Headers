/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface MLBackgroundWatchdog : NSObject {

	NSObject*<OS_dispatch_source> _timer;

}

@property (retain) NSObject*<OS_dispatch_source> timer;              //@synthesize timer=_timer - In the implementation block
+(id)watchdogWithTimeout:(double)arg1 queue:(id)arg2 ;
+(id)watchdogWithTimeout:(double)arg1 label:(id)arg2 queue:(id)arg3 ;
-(NSObject*<OS_dispatch_source>)timer;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)invalidate;
-(void)dealloc;
@end

