/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
*/


#import <HealthMenstrualCycles/HealthMenstrualCycles-Structs.h>
@interface HKMCAdjacentFlowAnalyzer : NSObject {

	long long _futureFlowDay;
	long long _pastFlowDay;
	BOOL _unsuitableForRange;
	long long _flowDayIndex;

}

@property (nonatomic,readonly) long long flowDayIndex;                                           //@synthesize flowDayIndex=_flowDayIndex - In the implementation block
@property (getter=isUnsuitableForRange,nonatomic,readonly) BOOL unsuitableForRange;              //@synthesize unsuitableForRange=_unsuitableForRange - In the implementation block
-(id)initWithFlowDayIndex:(long long)arg1 ;
-(void)addNextAscendingDay:(id)arg1 shouldStop:(BOOL*)arg2 ;
-(void)addNextDescendingDay:(id)arg1 shouldStop:(BOOL*)arg2 ;
-(SCD_Struct_HK0)flowDayIndexRange;
-(long long)flowDayIndex;
-(BOOL)isUnsuitableForRange;
@end

