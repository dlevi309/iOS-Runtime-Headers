/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


#import <HealthDaemon/HealthDaemon-Structs.h>
@interface HDQuantityDistributionCalculator : NSObject {

	HistogramState* _histogramState;

}
-(void)_initializeWideBucketDatesFromStartDate:(id)arg1 endDate:(id)arg2 anchorDate:(id)arg3 intervalComponents:(id)arg4 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 anchorDate:(id)arg3 intervalComponents:(id)arg4 histogramBucketAnchor:(double)arg5 histogramBucketSize:(double)arg6 ;
-(void)addDataPoint:(double)arg1 startTime:(double)arg2 endTime:(double)arg3 ;
-(id)quantityDistributionsWithUnit:(id)arg1 ;
-(BOOL)validateDateSequenceForTesting:(id)arg1 ;
-(BOOL)_isWideIntervalComponents:(id)arg1 ;
-(double)_dateComponentsToInterval:(id)arg1 ;
@end

