/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)restart;
-(NSDate *)startDate;
-(id)initWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_invalidateAndInvokeCompletion:(BOOL)arg1 error:(id)arg2 ;
-(void)startWithTimeoutInterval:(double)arg1 handler:(/*^block*/id)arg2 ;
-(void)invalidateAndInvokeCompletionWithError:(id)arg1 ;
-(void)_start;
-(id)initWithCompletion:(/*^block*/id)arg1 ;
-(void)_cancelTimer;
-(BOOL)isExpired;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)dealloc;
@end

