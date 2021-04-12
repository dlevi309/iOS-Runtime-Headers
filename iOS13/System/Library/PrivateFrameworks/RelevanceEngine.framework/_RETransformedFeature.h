/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REFeature.h>

@class NSString, REFeatureSet, REFeatureTransformer;

@interface _RETransformedFeature : REFeature {

	NSString* _name;
	unsigned long long _hash;
	REFeatureSet* _features;
	REFeatureTransformer* _transformer;

}

@property (nonatomic,readonly) REFeatureSet * features;                         //@synthesize features=_features - In the implementation block
@property (nonatomic,readonly) REFeatureTransformer * transformer;              //@synthesize transformer=_transformer - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(REFeatureSet *)features;
-(REFeatureTransformer *)transformer;
-(unsigned long long)featureType;
-(long long)_bitCount;
-(id)_rootFeatures;
-(id)_dependentFeatures;
-(void)_replaceDependentFeature:(id)arg1 withFeature:(id)arg2 ;
-(id)initWithTransformer:(id)arg1 features:(id)arg2 ;
-(void)_computeHash;
@end

