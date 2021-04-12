/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@protocol OS_dispatch_source;
@class NSObject, NSDate;

@interface CountDown : NSObject {

	NSObject*<OS_dispatch_source> timer;
	unsigned count;
	NSDate* _startTime;

}

@property (nonatomic,readonly) NSDate * startTime;              //@synthesize startTime=_startTime - In the implementation block
-(id)init;
-(void)stop;
-(NSDate *)startTime;
-(void)goOffNext:(unsigned long long)arg1 fromTime:(id)arg2 forEpoch:(id)arg3 timesTotal:(unsigned long long)arg4 onQueue:(id)arg5 withIterationBlock:(/*^block*/id)arg6 completionBlock:(/*^block*/id)arg7 ;
@end

