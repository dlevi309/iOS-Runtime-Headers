/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)invalidate;
-(double)interval;
-(id)initWithTimeInterval:(double)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 repeats:(BOOL)arg4 ;
@end

