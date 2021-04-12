/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)start;
-(BOOL)cancelIfNotAlreadyCanceled;
-(BOOL)isStopped;
-(void)stop;
-(id)initWithTimeoutInterval:(double)arg1 timeoutHandler:(/*^block*/id)arg2 ;
-(id)initWithTimeoutInterval:(double)arg1 onQueue:(id)arg2 timeoutHandler:(/*^block*/id)arg3 ;
-(void)reset;
-(void)cancel;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

