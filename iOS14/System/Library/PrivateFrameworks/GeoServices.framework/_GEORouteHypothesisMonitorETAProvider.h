/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol _GEORouteHypothesisMonitorETAProvider
@property (nonatomic,readonly) double _hypothesis_travelDuration; 
@property (nonatomic,readonly) double _hypothesis_travelDurationAggressiveEstimate; 
@property (nonatomic,readonly) double _hypothesis_travelDurationConservativeEstimate; 
@required
-(double)_hypothesis_travelDuration;
-(double)_hypothesis_travelDurationAggressiveEstimate;
-(double)_hypothesis_travelDurationConservativeEstimate;
-(double)_hypothesis_travelDurationFromStep:(id)arg1 stepRemainingDistance:(double)arg2;

@end

