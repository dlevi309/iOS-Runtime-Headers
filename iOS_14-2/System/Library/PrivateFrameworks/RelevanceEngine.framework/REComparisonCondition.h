/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

