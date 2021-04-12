/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/


@interface TAFilterGeneralSettings : NSObject {

	BOOL _allowNavGeoHintAsPrivateVehicleHint;
	double _durationOfConsideration;
	double _thresholdOfLocationRelevance;
	double _thresholdOfSignificantDuration;
	double _thresholdOfSignificantDistance;
	double _capOfReasonableWalkingSpeed;

}

@property (nonatomic,readonly) double durationOfConsideration;                        //@synthesize durationOfConsideration=_durationOfConsideration - In the implementation block
@property (nonatomic,readonly) double thresholdOfLocationRelevance;                   //@synthesize thresholdOfLocationRelevance=_thresholdOfLocationRelevance - In the implementation block
@property (nonatomic,readonly) double thresholdOfSignificantDuration;                 //@synthesize thresholdOfSignificantDuration=_thresholdOfSignificantDuration - In the implementation block
@property (nonatomic,readonly) double thresholdOfSignificantDistance;                 //@synthesize thresholdOfSignificantDistance=_thresholdOfSignificantDistance - In the implementation block
@property (nonatomic,readonly) double capOfReasonableWalkingSpeed;                    //@synthesize capOfReasonableWalkingSpeed=_capOfReasonableWalkingSpeed - In the implementation block
@property (nonatomic,readonly) BOOL allowNavGeoHintAsPrivateVehicleHint;              //@synthesize allowNavGeoHintAsPrivateVehicleHint=_allowNavGeoHintAsPrivateVehicleHint - In the implementation block
-(id)initWithDurationOfConsiderationOrDefault:(id)arg1 thresholdOfLocationRelevanceOrDefault:(id)arg2 thresholdOfSignificantDurationOrDefault:(id)arg3 thresholdOfSignificantDistanceOrDefault:(id)arg4 capOfReasonableWalkingSpeedOrDefault:(id)arg5 allowNavGeoHintAsPrivateVehicleHint:(id)arg6 ;
-(double)capOfReasonableWalkingSpeed;
-(BOOL)allowNavGeoHintAsPrivateVehicleHint;
-(double)durationOfConsideration;
-(double)thresholdOfSignificantDuration;
-(double)thresholdOfSignificantDistance;
-(id)initWithDurationOfConsideration:(double)arg1 thresholdOfLocationRelevance:(double)arg2 thresholdOfSignificantDuration:(double)arg3 thresholdOfSignificantDistance:(double)arg4 capOfReasonableWalkingSpeed:(double)arg5 allowNavGeoHintAsPrivateVehicleHint:(BOOL)arg6 ;
-(id)initWithDefaults;
-(double)thresholdOfLocationRelevance;
@end

