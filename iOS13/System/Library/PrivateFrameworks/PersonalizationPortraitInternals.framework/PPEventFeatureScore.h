/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)_hash;
-(NSArray *)featureValues;
-(unsigned long long)prominentFeature;
-(double)weightedScore;
-(id)initWithFeatureValues:(id)arg1 weightedScore:(double)arg2 prominentFeature:(unsigned long long)arg3 ;
-(BOOL)isEqualToEventFeatureScore:(id)arg1 ;
@end

