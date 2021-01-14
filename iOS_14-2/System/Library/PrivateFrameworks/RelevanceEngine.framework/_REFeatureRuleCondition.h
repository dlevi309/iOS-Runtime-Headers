/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)hash;
-(long long)relation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)_notCondition;
-(BOOL)_acceptsFeatureMap:(id)arg1 predictionSet:(id)arg2 explanation:(id*)arg3 ;
-(id)_inflectionFeatureValuePairs;
-(id)_dependentFeatures;
-(id)initWithFeature:(id)arg1 relation:(long long)arg2 feature:(id)arg3 ;
-(BOOL)_requiresTwoFeatures;
-(REFeature *)firstFeature;
-(REFeature *)secondFeature;
@end

