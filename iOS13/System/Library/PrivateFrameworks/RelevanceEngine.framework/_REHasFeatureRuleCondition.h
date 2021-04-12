/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(REFeature *)feature;
-(id)_notCondition;
-(BOOL)_acceptsFeatureMap:(id)arg1 predictionSet:(id)arg2 explanation:(id*)arg3 ;
-(id)_inflectionFeatureValuePairs;
-(id)_dependentFeatures;
-(id)initWithFeature:(id)arg1 contains:(BOOL)arg2 ;
-(BOOL)contains;
@end

