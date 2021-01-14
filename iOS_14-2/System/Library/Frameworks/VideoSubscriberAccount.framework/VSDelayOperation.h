/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@protocol OS_dispatch_source;
@class NSObject, NSDate;

@interface VSDelayOperation : VSAsyncOperation {

	NSObject*<OS_dispatch_source> _timerSource;
	BOOL _shouldIgnoreTolerance;
	double _delay;
	double _tolerance;
	NSDate* _fireDate;

}

@property (nonatomic,readonly) double delay;                          //@synthesize delay=_delay - In the implementation block
@property (nonatomic,readonly) double tolerance;                      //@synthesize tolerance=_tolerance - In the implementation block
@property (nonatomic,copy,readonly) NSDate * fireDate;                //@synthesize fireDate=_fireDate - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreTolerance;              //@synthesize shouldIgnoreTolerance=_shouldIgnoreTolerance - In the implementation block
+(id)delayOperationWithDelay:(double)arg1 ;
+(id)delayOperationWithFireDate:(id)arg1 ;
-(NSDate *)fireDate;
-(void)executionDidBegin;
-(double)tolerance;
-(id)init;
-(double)delay;
-(void)_cancelTimer;
-(void)cancel;
-(void)dealloc;
-(id)initWithDelay:(double)arg1 tolerance:(double)arg2 ;
-(id)initWithFireDate:(id)arg1 tolerance:(double)arg2 ;
-(void)setShouldIgnoreTolerance:(BOOL)arg1 ;
-(BOOL)shouldIgnoreTolerance;
@end

