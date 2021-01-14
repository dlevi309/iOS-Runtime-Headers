/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RERule.h>
#import <libobjc.A.dylib/REAutomaticExportedInterface.h>

@class REConditionEvaluator, RECondition, REComparisonCondition;

@interface RERankingRule : RERule <REAutomaticExportedInterface> {

	REConditionEvaluator* _leftConditionEvaluator;
	REConditionEvaluator* _rightConditionEvaluator;
	REConditionEvaluator* _comparisonConditionEvaluator;
	RECondition* _leftCondition;
	RECondition* _rightCondition;
	REComparisonCondition* _comparison;
	long long _order;

}

@property (nonatomic,readonly) REConditionEvaluator * leftConditionEvaluator; 
@property (nonatomic,readonly) REConditionEvaluator * rightConditionEvaluator; 
@property (nonatomic,readonly) REConditionEvaluator * comparisonConditionEvaluator; 
@property (nonatomic,readonly) RECondition * leftCondition;                                      //@synthesize leftCondition=_leftCondition - In the implementation block
@property (nonatomic,readonly) RECondition * rightCondition;                                     //@synthesize rightCondition=_rightCondition - In the implementation block
@property (nonatomic,readonly) REComparisonCondition * comparison;                               //@synthesize comparison=_comparison - In the implementation block
@property (nonatomic,readonly) long long order;                                                  //@synthesize order=_order - In the implementation block
-(REComparisonCondition *)comparison;
-(RECondition *)leftCondition;
-(RECondition *)rightCondition;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)order;
-(id)initWithLeftCondition:(id)arg1 rightCondition:(id)arg2 comparisonCondition:(id)arg3 order:(long long)arg4 ;
-(REConditionEvaluator *)leftConditionEvaluator;
-(REConditionEvaluator *)rightConditionEvaluator;
-(REConditionEvaluator *)comparisonConditionEvaluator;
@end

