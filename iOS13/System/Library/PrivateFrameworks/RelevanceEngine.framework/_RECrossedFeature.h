/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REFeature.h>

@class NSString, REFeatureSet, NSArray;

@interface _RECrossedFeature : REFeature {

	NSString* _name;
	unsigned long long _featureType;
	unsigned long long _bitCount;
	REFeatureSet* _dependentFeatures;
	unsigned long long _hash;
	NSArray* _features;

}

@property (nonatomic,readonly) NSArray * features;              //@synthesize features=_features - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)features;
-(unsigned long long)featureType;
-(id)initWithFeatures:(id)arg1 ;
-(long long)_bitCount;
-(id)_rootFeatures;
-(id)_dependentFeatures;
-(void)_replaceDependentFeature:(id)arg1 withFeature:(id)arg2 ;
-(void)_computeHash;
-(void)_updateFeaturesArray;
@end

