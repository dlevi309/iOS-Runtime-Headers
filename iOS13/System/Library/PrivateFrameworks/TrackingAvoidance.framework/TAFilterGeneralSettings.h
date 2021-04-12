/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithDefaults;
-(double)thresholdOfSignificantDuration;
-(double)thresholdOfSignificantDistance;
-(double)thresholdOfLocationRelevance;
-(id)initWithDurationOfConsiderationOrDefault:(id)arg1 thresholdOfLocationRelevanceOrDefault:(id)arg2 thresholdOfSignificantDurationOrDefault:(id)arg3 thresholdOfSignificantDistanceOrDefault:(id)arg4 capOfReasonableWalkingSpeedOrDefault:(id)arg5 allowNavGeoHintAsPrivateVehicleHint:(id)arg6 ;
-(double)durationOfConsideration;
-(double)capOfReasonableWalkingSpeed;
-(BOOL)allowNavGeoHintAsPrivateVehicleHint;
-(id)initWithDurationOfConsideration:(double)arg1 thresholdOfLocationRelevance:(double)arg2 thresholdOfSignificantDuration:(double)arg3 thresholdOfSignificantDistance:(double)arg4 capOfReasonableWalkingSpeed:(double)arg5 allowNavGeoHintAsPrivateVehicleHint:(BOOL)arg6 ;
@end
