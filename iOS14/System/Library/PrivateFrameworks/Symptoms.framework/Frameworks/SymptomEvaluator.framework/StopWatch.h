/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@class NSDate;

@interface StopWatch : NSObject {

	NSDate* start;
	double cumul;

}
+(BOOL)nearlyEqualRun:(double)arg1 toRun:(double)arg2 fudgeFactor:(double)arg3 ;
-(double)currentRun;
-(void)start;
-(double)total;
-(double)stop;
-(BOOL)isRunning;
-(BOOL)wasRunningBefore:(id)arg1 ;
@end

