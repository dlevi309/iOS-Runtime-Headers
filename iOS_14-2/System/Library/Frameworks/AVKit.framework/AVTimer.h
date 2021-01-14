/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject;

@interface AVTimer : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _timer;
	BOOL _invalidated;
	double _interval;

}

@property (readonly) double interval;              //@synthesize interval=_interval - In the implementation block
-(id)init;
-(double)interval;
-(id)initWithTimeInterval:(double)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 repeats:(BOOL)arg4 ;
-(void)invalidate;
-(void)dealloc;
@end

