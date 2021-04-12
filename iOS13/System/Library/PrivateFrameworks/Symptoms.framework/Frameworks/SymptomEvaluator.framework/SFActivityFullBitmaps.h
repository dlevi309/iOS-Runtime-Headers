/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/SFActivityBitmaps.h>

@class NSMutableDictionary;

@interface SFActivityFullBitmaps : SFActivityBitmaps {

	NSMutableDictionary* _flows;

}

@property (retain) NSMutableDictionary * flows;              //@synthesize flows=_flows - In the implementation block
-(id)init;
-(NSMutableDictionary *)flows;
-(void)setFlows:(NSMutableDictionary *)arg1 ;
-(void)freeUpBufferSpace;
-(void)addActivityWithFlowId:(unsigned long long)arg1 startTime:(unsigned long long)arg2 part1:(unsigned long long)arg3 part2:(unsigned long long)arg4 ;
-(void)resetAllActivities;
-(id)getAllFlowIds;
-(id)getWrappedBitmapsForFlowId:(unsigned long long)arg1 ;
-(id)getWrappedBitmapsForFlowId:(unsigned long long)arg1 fromTime:(unsigned long long)arg2 toTime:(unsigned long long)arg3 ;
-(unsigned long long)getHammingWeightForFlowId:(unsigned long long)arg1 ;
-(unsigned long long)getLongestContiguousHammingWeightForFlowId:(unsigned long long)arg1 ;
@end

