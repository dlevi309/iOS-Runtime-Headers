/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(float)weight;
-(long long)functionType;
-(id)initWithWeight:(float)arg1 maxRelativeValue:(float)arg2 meanValue:(float)arg3 ;
-(float)maxRelativeValue;
-(float)meanValue;
@end

