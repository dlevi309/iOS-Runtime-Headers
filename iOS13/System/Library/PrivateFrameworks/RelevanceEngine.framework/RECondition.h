/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/REAutomaticExportedInterface.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface RECondition : NSObject <REAutomaticExportedInterface, NSCopying>
+(id)falseCondition;
+(id)trueCondition;
+(id)conditionHasValueForFeature:(id)arg1 ;
+(id)conditionForFeature:(id)arg1 relation:(long long)arg2 floatValue:(float)arg3 ;
+(id)andConditions:(id)arg1 ;
+(id)orConditions:(id)arg1 ;
+(id)conditionForFeature:(id)arg1 hasBoolValue:(BOOL)arg2 ;
+(id)notCondition:(id)arg1 ;
+(id)conditionForFeature:(id)arg1 hasIntegerValue:(long long)arg2 ;
+(id)conditionForFeature:(id)arg1 relation:(long long)arg2 feature:(id)arg3 ;
+(id)conditionForProbabilityForInteraction:(id)arg1 relation:(long long)arg2 floatValue:(float)arg3 ;
+(id)conditionForProbabilityForInteraction:(id)arg1 relation:(long long)arg2 feature:(id)arg3 ;
+(id)conditionForProbabilityWithRelation:(long long)arg1 floatValue:(float)arg2 ;
+(id)conditionForFeature:(id)arg1 relation:(long long)arg2 integerValue:(long long)arg3 ;
+(id)conditionForFeature:(id)arg1 hasValue:(id)arg2 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_notCondition;
-(BOOL)_acceptsFeatureMap:(id)arg1 predictionSet:(id)arg2 explanation:(id*)arg3 ;
-(id)_inflectionFeatureValuePairs;
-(id)_dependentFeatures;
-(BOOL)_requiresTwoFeatures;
-(BOOL)_validForRanking;
-(BOOL)_acceptsLeftFeatureMap:(id)arg1 rightFeatureMap:(id)arg2 ;
-(BOOL)_needsProbability;
@end

