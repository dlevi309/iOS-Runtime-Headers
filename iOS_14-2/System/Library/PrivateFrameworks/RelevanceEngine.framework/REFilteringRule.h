/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithCondition:(id)arg1 ;
-(unsigned long long)type;
-(unsigned long long)hash;
-(RECondition *)condition;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCondition:(id)arg1 type:(unsigned long long)arg2 ;
-(REConditionEvaluator *)conditionEvaluator;
@end

