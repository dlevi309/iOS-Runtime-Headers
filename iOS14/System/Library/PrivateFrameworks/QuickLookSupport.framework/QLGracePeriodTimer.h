/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)suppress;
-(void)arm;
-(id)initWithAction:(/*^block*/id)arg1 callbackQueue:(id)arg2 delay:(double)arg3 ;
-(id)action;
-(void)setAction:(id)arg1 ;
-(void)_createTimer;
-(void)_suppress;
@end

