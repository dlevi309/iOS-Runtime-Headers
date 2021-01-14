/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface PPEventFeatureScore : NSObject <NSCopying> {

	unsigned long long _ocnt_precomputedHash;
	NSArray* _featureValues;
	double _weightedScore;
	unsigned long long _prominentFeature;

}

@property (nonatomic,readonly) NSArray * featureValues;                          //@synthesize featureValues=_featureValues - In the implementation block
@property (nonatomic,readonly) double weightedScore;                             //@synthesize weightedScore=_weightedScore - In the implementation block
@property (nonatomic,readonly) unsigned long long prominentFeature;              //@synthesize prominentFeature=_prominentFeature - In the implementation block
+(id)eventFeatureScoreWithFeatureValues:(id)arg1 weightedScore:(double)arg2 prominentFeature:(unsigned long long)arg3 ;
-(unsigned long long)prominentFeature;
-(id)init;
-(NSArray *)featureValues;
-(unsigned long long)hash;
-(BOOL)isEqualToEventFeatureScore:(id)arg1 ;
-(id)initWithFeatureValues:(id)arg1 weightedScore:(double)arg2 prominentFeature:(unsigned long long)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)weightedScore;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)_hash;
@end

