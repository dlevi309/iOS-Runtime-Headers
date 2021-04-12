/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REComparisonCondition.h>
#import <libobjc.A.dylib/REAutomaticExportedInterface.h>

@class REFeature;

@interface _REFeatureComparisonCondition : REComparisonCondition <REAutomaticExportedInterface> {

	REFeature* _leftFeature;
	long long _relation;
	REFeature* _rightFeature;

}

@property (nonatomic,readonly) REFeature * leftFeature;               //@synthesize leftFeature=_leftFeature - In the implementation block
@property (nonatomic,readonly) long long relation;                    //@synthesize relation=_relation - In the implementation block
@property (nonatomic,readonly) REFeature * rightFeature;              //@synthesize rightFeature=_rightFeature - In the implementation block
-(unsigned long long)hash;
-(long long)relation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)_notCondition;
-(id)_inflectionFeatureValuePairs;
-(id)_dependentFeatures;
-(BOOL)_requiresTwoFeatures;
-(BOOL)_validForRanking;
-(BOOL)_acceptsLeftFeatureMap:(id)arg1 rightFeatureMap:(id)arg2 ;
-(id)initWithLeftFeature:(id)arg1 relation:(long long)arg2 rightFeature:(id)arg3 ;
-(REFeature *)leftFeature;
-(REFeature *)rightFeature;
@end

