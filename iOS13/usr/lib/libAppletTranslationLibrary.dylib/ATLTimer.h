/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAppletTranslationLibrary.dylib
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject;

@interface ATLTimer : NSObject {

	NSObject*<OS_dispatch_source> _src;
	/*^block*/id _block;
	double _delay;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)dealloc;
-(void)stopTimer;
-(void)onExpire;
-(void)startTimerWithDelay:(double)arg1 leeway:(double)arg2 ;
-(void)startTimerWithDelay:(double)arg1 ;
-(id)initOnQueue:(id)arg1 withTimerBlock:(/*^block*/id)arg2 ;
-(void)addDelay:(double)arg1 ;
@end

