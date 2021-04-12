/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject;

@interface AFWatchdogTimer : NSObject <NSCopying> {

	double _interval;
	NSObject*<OS_dispatch_source> _timerSource;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _timeoutHandler;
	BOOL _isStopped;
	double _remainingInterval;
	double _startTime;

}
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)cancel;
-(BOOL)isStopped;
-(void)stop;
-(void)start;
-(void)reset;
-(id)initWithTimeoutInterval:(double)arg1 timeoutHandler:(/*^block*/id)arg2 ;
-(id)initWithTimeoutInterval:(double)arg1 onQueue:(id)arg2 timeoutHandler:(/*^block*/id)arg3 ;
-(BOOL)cancelIfNotAlreadyCanceled;
@end

