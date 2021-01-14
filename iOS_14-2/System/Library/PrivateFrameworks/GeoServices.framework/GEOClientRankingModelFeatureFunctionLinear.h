/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GEOClientRankingModelFeatureFunction.h>

@interface GEOClientRankingModelFeatureFunctionLinear : GEOClientRankingModelFeatureFunction {

	float _weight;
	float _maxRelativeValue;
	float _meanValue;

}

@property (nonatomic,readonly) float weight;                        //@synthesize weight=_weight - In the implementation block
@property (nonatomic,readonly) float maxRelativeValue;              //@synthesize maxRelativeValue=_maxRelativeValue - In the implementation block
@property (nonatomic,readonly) float meanValue;                     //@synthesize meanValue=_meanValue - In the implementation block
-(long long)functionType;
-(id)init;
-(float)weight;
-(float)meanValue;
-(float)maxRelativeValue;
-(id)initWithWeight:(float)arg1 maxRelativeValue:(float)arg2 meanValue:(float)arg3 ;
@end

