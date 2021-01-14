/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
*/


@interface BMBasketExtractor : NSObject {

	BOOL _shouldStop;
	double _samplingInterval;

}

@property (assign) BOOL shouldStop;                                  //@synthesize shouldStop=_shouldStop - In the implementation block
@property (nonatomic,readonly) double samplingInterval;              //@synthesize samplingInterval=_samplingInterval - In the implementation block
-(double)samplingInterval;
-(id)initWithSamplingInterval:(double)arg1 ;
-(id)extractBasketsFromEvents:(id)arg1 withTemporalFeatures:(BOOL)arg2 ;
-(id)extractDatedBasketsFromEvents:(id)arg1 itemTypes:(id)arg2 ;
-(void)terminateEarly;
-(id)slotForHourOfDay:(id)arg1 slotDuration:(id)arg2 ;
-(id)extractBasketsFromEvents:(id)arg1 itemTypes:(id)arg2 ;
-(BOOL)shouldStop;
-(id)extractTemporalItemsFromDate:(id)arg1 ;
-(void)setShouldStop:(BOOL)arg1 ;
-(id)slotForHourOfDay:(id)arg1 ;
@end

