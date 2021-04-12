/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RECondition.h>
#import <libobjc.A.dylib/REAutomaticExportedInterface.h>

@class REFeature;

@interface _REFeatureRuleCondition : RECondition <REAutomaticExportedInterface> {

	REFeature* _firstFeature;
	long long _relation;
	REFeature* _secondFeature;

}

@property (nonatomic,readonly) REFeature * firstFeature;               //@synthesize firstFeature=_firstFeature - In the implementation block
@property (nonatomic,readonly) long long relation;                     //@synthesize relation=_relation - In the implementation block
@property (nonatomic,readonly) REFeature * secondFeature;              //@synthesize secondFeature=_secondFeature - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)relation;
-(id)_notCondition;
-(BOOL)_acceptsFeatureMap:(id)arg1 predictionSet:(id)arg2 explanation:(id*)arg3 ;
-(id)_inflectionFeatureValuePairs;
-(id)_dependentFeatures;
-(id)initWithFeature:(id)arg1 relation:(long long)arg2 feature:(id)arg3 ;
-(BOOL)_requiresTwoFeatures;
-(REFeature *)firstFeature;
-(REFeature *)secondFeature;
@end

