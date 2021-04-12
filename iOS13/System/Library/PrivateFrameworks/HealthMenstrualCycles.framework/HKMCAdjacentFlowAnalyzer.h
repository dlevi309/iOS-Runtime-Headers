/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

