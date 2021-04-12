/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@interface HKElectrocardiogramVoltageMeasurement : NSObject {

	float _leadIVoltage;
	double _timeSinceSampleStart;

}

@property (nonatomic,readonly) double timeSinceSampleStart;              //@synthesize timeSinceSampleStart=_timeSinceSampleStart - In the implementation block
-(id)quantityForLead:(long long)arg1 ;
-(double)timeSinceSampleStart;
-(id)initWithLeadIVoltage:(float)arg1 timeSinceSampleStart:(double)arg2 ;
@end

