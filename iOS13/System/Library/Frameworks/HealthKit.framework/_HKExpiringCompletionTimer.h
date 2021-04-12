/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, NSDate;

@interface _HKExpiringCompletionTimer : NSObject {

	NSObject*<OS_dispatch_source> _timerSource;
	double _expirationTime;
	double _timeout;
	/*^block*/id _timeoutHandler;
	BOOL _invalidated;
	/*^block*/id _completion;
	NSDate* _startDate;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (nonatomic,readonly) NSDate * startDate;                              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSDate *)startDate;
-(void)_start;
-(BOOL)isExpired;
-(void)_cancelTimer;
-(id)initWithCompletion:(/*^block*/id)arg1 ;
-(void)restart;
-(id)initWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_invalidateAndInvokeCompletion:(BOOL)arg1 error:(id)arg2 ;
-(void)startWithTimeoutInterval:(double)arg1 handler:(/*^block*/id)arg2 ;
-(void)invalidateAndInvokeCompletionWithError:(id)arg1 ;
@end

