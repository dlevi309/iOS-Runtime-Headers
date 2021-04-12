/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@class NSDate;

@interface StopWatch : NSObject {

	NSDate* start;
	double cumul;

}
+(BOOL)nearlyEqualRun:(double)arg1 toRun:(double)arg2 fudgeFactor:(double)arg3 ;
-(double)stop;
-(void)start;
-(BOOL)isRunning;
-(double)total;
-(double)currentRun;
-(BOOL)wasRunningBefore:(id)arg1 ;
@end

