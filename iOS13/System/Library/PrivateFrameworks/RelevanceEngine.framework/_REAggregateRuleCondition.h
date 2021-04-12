/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(unsigned long long)type;
-(NSSet *)conditions;
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

