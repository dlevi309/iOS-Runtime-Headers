/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RECondition.h>
#import <libobjc.A.dylib/REAutomaticExportedInterface.h>

@class NSSet;

@interface _REAggregateRuleCondition : RECondition <REAutomaticExportedInterface> {

	unsigned long long _type;
	NSSet* _conditions;

}

@property (nonatomic,readonly) unsigned long long type;               //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSSet * conditions;                    //@synthesize conditions=_conditions - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
-(NSSet *)conditions;
-(unsigned long long)count;
-(unsigned long long)type;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)_notCondition;
-(BOOL)_acceptsFeatureMap:(id)arg1 predictionSet:(id)arg2 explanation:(id*)arg3 ;
-(id)_inflectionFeatureValuePairs;
-(id)_dependentFeatures;
-(BOOL)_requiresTwoFeatures;
-(BOOL)_validForRanking;
-(BOOL)_acceptsLeftFeatureMap:(id)arg1 rightFeatureMap:(id)arg2 ;
-(BOOL)_needsProbability;
-(id)initWithConditions:(id)arg1 type:(unsigned long long)arg2 ;
@end

