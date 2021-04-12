/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GEOClientRankingModelFeatureFunction.h>

@interface GEOClientRankingModelFeatureFunctionDiscrete : GEOClientRankingModelFeatureFunction {

	float _valueThresholdLow;
	float _weightLow;
	float _valueThresholdHigh;
	float _weightHigh;

}

@property (nonatomic,readonly) float valueThresholdLow;               //@synthesize valueThresholdLow=_valueThresholdLow - In the implementation block
@property (nonatomic,readonly) float weightLow;                       //@synthesize weightLow=_weightLow - In the implementation block
@property (nonatomic,readonly) float valueThresholdHigh;              //@synthesize valueThresholdHigh=_valueThresholdHigh - In the implementation block
@property (nonatomic,readonly) float weightHigh;                      //@synthesize weightHigh=_weightHigh - In the implementation block
-(long long)functionType;
-(id)init;
-(float)weightHigh;
-(float)weightLow;
-(float)valueThresholdHigh;
-(id)initWithValueThresholdLow:(float)arg1 weightLow:(float)arg2 valueThresholdHigh:(float)arg3 weightHigh:(float)arg4 ;
-(float)valueThresholdLow;
@end

