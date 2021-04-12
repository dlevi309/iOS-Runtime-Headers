/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(double)delay;
-(id)initWithDelay:(double)arg1 ;
-(id)initWithDelay:(double)arg1 queue:(id)arg2 ;
-(void)coalesceBlock:(/*^block*/id)arg1 ;
@end

