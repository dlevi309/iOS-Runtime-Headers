/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RECondition.h>
#import <libobjc.A.dylib/REAutomaticExportedInterface.h>

@class REFeature;

@interface _REHasFeatureRuleCondition : RECondition <REAutomaticExportedInterface> {

	BOOL _contains;
	REFeature* _feature;

}

@property (nonatomic,readonly) REFeature * feature;              //@synthesize feature=_feature - In the implementation block
@property (nonatomic,readonly) BOOL contains;                    //@synthesize contains=_contains - In the implementation block
-(REFeature *)feature;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)contains;
-(id)_notCondition;
-(BOOL)_acceptsFeatureMap:(id)arg1 predictionSet:(id)arg2 explanation:(id*)arg3 ;
-(id)_inflectionFeatureValuePairs;
-(id)_dependentFeatures;
-(id)initWithFeature:(id)arg1 contains:(BOOL)arg2 ;
@end

