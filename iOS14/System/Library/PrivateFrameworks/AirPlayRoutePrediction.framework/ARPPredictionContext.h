/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirPlayRoutePrediction.framework/AirPlayRoutePrediction
*/


@class NSDate, NSDictionary;

@interface ARPPredictionContext : NSObject {

	NSDate* _microLocationEventDate;
	NSDate* _predictionDate;
	NSDictionary* _microLocationProbabilityVector;

}

@property (nonatomic,readonly) NSDictionary * microLocationProbabilityVector;              //@synthesize microLocationProbabilityVector=_microLocationProbabilityVector - In the implementation block
@property (nonatomic,copy,readonly) NSDate * microLocationEventDate;                       //@synthesize microLocationEventDate=_microLocationEventDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * predictionDate;                               //@synthesize predictionDate=_predictionDate - In the implementation block
-(id)description;
-(NSDate *)microLocationEventDate;
-(NSDictionary *)microLocationProbabilityVector;
-(id)initWithPredictionDate:(id)arg1 microLocationEventDate:(id)arg2 microLocationProbabilityVector:(id)arg3 ;
-(NSDate *)predictionDate;
@end

