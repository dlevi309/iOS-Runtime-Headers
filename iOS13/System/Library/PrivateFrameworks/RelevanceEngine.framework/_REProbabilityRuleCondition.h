/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RECondition.h>
#import <libobjc.A.dylib/REAutomaticExportedInterface.h>

@class NSString, REFeature;

@interface _REProbabilityRuleCondition : RECondition <REAutomaticExportedInterface> {

	float _threshold;
	NSString* _interaction;
	REFeature* _feature;
	long long _relation;

}

@property (nonatomic,readonly) NSString * interaction;              //@synthesize interaction=_interaction - In the implementation block
@property (nonatomic,readonly) REFeature * feature;                 //@synthesize feature=_feature - In the implementation block
@property (nonatomic,readonly) long long relation;                  //@synthesize relation=_relation - In the implementation block
@property (nonatomic,readonly) float threshold;                     //@synthesize threshold=_threshold - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)relation;
-(float)threshold;
-(NSString *)interaction;
-(REFeature *)feature;
-(id)_notCondition;
-(BOOL)_acceptsFeatureMap:(id)arg1 predictionSet:(id)arg2 explanation:(id*)arg3 ;
-(id)_inflectionFeatureValuePairs;
-(id)_dependentFeatures;
-(BOOL)_needsProbability;
-(id)initWithProbability:(id)arg1 relation:(long long)arg2 feature:(id)arg3 threshold:(float)arg4 ;
@end

