/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/


@class TAFilterVisitsSettings, NSSet;

@interface TAFilterSingleVisitSettings : NSObject {

	double _thresholdOfSignificantDuration;
	double _thresholdOfSignificantDistance;
	TAFilterVisitsSettings* _visitsSettings;
	NSSet* _enabledLoiTypes;

}

@property (nonatomic,readonly) double thresholdOfSignificantDuration;                //@synthesize thresholdOfSignificantDuration=_thresholdOfSignificantDuration - In the implementation block
@property (nonatomic,readonly) double thresholdOfSignificantDistance;                //@synthesize thresholdOfSignificantDistance=_thresholdOfSignificantDistance - In the implementation block
@property (nonatomic,readonly) TAFilterVisitsSettings * visitsSettings;              //@synthesize visitsSettings=_visitsSettings - In the implementation block
@property (nonatomic,readonly) NSSet * enabledLoiTypes;                              //@synthesize enabledLoiTypes=_enabledLoiTypes - In the implementation block
+(id)defaultSingleVisitEnabledLoiTypes;
-(id)initWithDefaults;
-(id)enabledLoiTypesToString;
-(id)initWithThresholdOfSignificantDuration:(double)arg1 thresholdOfSignificantDistance:(double)arg2 filterVisitsSettings:(id)arg3 enabledLoiTypes:(id)arg4 ;
-(id)initWithThresholdOfSignificantDurationOrDefault:(id)arg1 thresholdOfSignificantDistanceOrDefault:(id)arg2 filterVisitsSettingsOrDefault:(id)arg3 enabledLoiTypesOrDefault:(id)arg4 ;
-(double)thresholdOfSignificantDuration;
-(double)thresholdOfSignificantDistance;
-(TAFilterVisitsSettings *)visitsSettings;
-(NSSet *)enabledLoiTypes;
@end

