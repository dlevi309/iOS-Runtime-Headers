/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFeatures:(id)arg1 ;
-(NSArray *)features;
-(unsigned long long)featureType;
-(id)name;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)_bitCount;
-(id)_rootFeatures;
-(id)_dependentFeatures;
-(void)_replaceDependentFeature:(id)arg1 withFeature:(id)arg2 ;
-(void)_computeHash;
-(void)_updateFeaturesArray;
@end

