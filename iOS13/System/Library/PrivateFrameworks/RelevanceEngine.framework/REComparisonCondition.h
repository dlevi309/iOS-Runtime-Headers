/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RECondition.h>

@interface REComparisonCondition : RECondition
+(id)falseCondition;
+(id)trueCondition;
+(id)conditionForLeftFeature:(id)arg1 relation:(long long)arg2 rightFeature:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_inflectionFeatureValuePairs;
-(BOOL)_validForRanking;
@end

