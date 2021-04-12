/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)enabledLoiTypesToString;
-(TAFilterVisitsSettings *)visitsSettings;
-(double)thresholdOfSignificantDuration;
-(id)initWithThresholdOfSignificantDuration:(double)arg1 thresholdOfSignificantDistance:(double)arg2 filterVisitsSettings:(id)arg3 enabledLoiTypes:(id)arg4 ;
-(double)thresholdOfSignificantDistance;
-(id)initWithDefaults;
-(id)initWithThresholdOfSignificantDurationOrDefault:(id)arg1 thresholdOfSignificantDistanceOrDefault:(id)arg2 filterVisitsSettingsOrDefault:(id)arg3 enabledLoiTypesOrDefault:(id)arg4 ;
-(NSSet *)enabledLoiTypes;
@end

