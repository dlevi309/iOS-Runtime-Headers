/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject;

@interface NUCoalescer : NSObject {

	NSObject*<OS_dispatch_source> _timer;
	double _delay;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) double delay;                                    //@synthesize delay=_delay - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(id)init;
-(double)delay;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithDelay:(double)arg1 queue:(id)arg2 ;
-(id)initWithDelay:(double)arg1 ;
-(void)dealloc;
-(void)coalesceBlock:(/*^block*/id)arg1 ;
@end

