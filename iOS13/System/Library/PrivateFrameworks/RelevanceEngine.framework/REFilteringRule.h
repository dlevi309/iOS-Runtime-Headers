/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RERule.h>
#import <libobjc.A.dylib/REAutomaticExportedInterface.h>

@class REConditionEvaluator, RECondition;

@interface REFilteringRule : RERule <REAutomaticExportedInterface> {

	REConditionEvaluator* _conditionEvaluator;
	RECondition* _condition;
	unsigned long long _type;

}

@property (nonatomic,readonly) REConditionEvaluator * conditionEvaluator; 
@property (nonatomic,readonly) RECondition * condition;                                //@synthesize condition=_condition - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                                //@synthesize type=_type - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(id)initWithCondition:(id)arg1 ;
-(RECondition *)condition;
-(REConditionEvaluator *)conditionEvaluator;
-(id)initWithCondition:(id)arg1 type:(unsigned long long)arg2 ;
@end

