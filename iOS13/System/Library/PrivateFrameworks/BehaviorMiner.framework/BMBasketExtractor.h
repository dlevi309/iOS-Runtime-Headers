/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
*/


@interface BMBasketExtractor : NSObject {

	double _samplingInterval;

}

@property (assign) double samplingInterval;              //@synthesize samplingInterval=_samplingInterval - In the implementation block
-(void)setSamplingInterval:(double)arg1 ;
-(double)samplingInterval;
-(id)slotForHourOfDay:(id)arg1 ;
-(id)initWithSamplingInterval:(double)arg1 ;
-(id)extractBasketsFromEvents:(id)arg1 withTemporalFeatures:(BOOL)arg2 ;
-(id)slotForHourOfDay:(id)arg1 slotDuration:(id)arg2 ;
-(id)extractTemporalItemsFromDate:(id)arg1 ;
@end

