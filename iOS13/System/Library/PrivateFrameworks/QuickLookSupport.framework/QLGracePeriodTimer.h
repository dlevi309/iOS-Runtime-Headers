/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/QuickLookSupport.framework/QuickLookSupport
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject;

@interface QLGracePeriodTimer : NSObject {

	/*^block*/id _action;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	double _delay;
	NSObject*<OS_dispatch_source> _timer;

}

@property (copy) id action;              //@synthesize action=_action - In the implementation block
-(id)action;
-(void)setAction:(id)arg1 ;
-(void)_suppress;
-(void)suppress;
-(void)_createTimer;
-(id)initWithAction:(/*^block*/id)arg1 callbackQueue:(id)arg2 delay:(double)arg3 ;
-(void)arm;
@end

