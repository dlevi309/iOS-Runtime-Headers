/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/SFActivityBitmaps.h>

@class NSMutableDictionary;

@interface SFActivityFullBitmaps : SFActivityBitmaps {

	NSMutableDictionary* _flows;

}

@property (retain) NSMutableDictionary * flows;              //@synthesize flows=_flows - In the implementation block
-(id)getWrappedBitmapsForFlowId:(unsigned long long)arg1 fromTime:(unsigned long long)arg2 toTime:(unsigned long long)arg3 ;
-(id)init;
-(void)setFlows:(NSMutableDictionary *)arg1 ;
-(void)freeUpBufferSpace;
-(void)resetAllActivities;
-(id)getAllFlowIds;
-(unsigned long long)getLongestContiguousHammingWeightForFlowId:(unsigned long long)arg1 ;
-(id)getWrappedBitmapsForFlowId:(unsigned long long)arg1 ;
-(NSMutableDictionary *)flows;
-(void)addActivityWithFlowId:(unsigned long long)arg1 startTime:(unsigned long long)arg2 part1:(unsigned long long)arg3 part2:(unsigned long long)arg4 ;
-(unsigned long long)getHammingWeightForFlowId:(unsigned long long)arg1 ;
@end

