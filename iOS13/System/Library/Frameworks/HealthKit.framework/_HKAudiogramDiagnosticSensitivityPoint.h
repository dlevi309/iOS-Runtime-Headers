/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@interface _HKAudiogramDiagnosticSensitivityPoint : NSObject {

	double _earSensitivityDBHL;
	double _frequencyHz;

}

@property (nonatomic,readonly) double earSensitivityDBHL;              //@synthesize earSensitivityDBHL=_earSensitivityDBHL - In the implementation block
@property (nonatomic,readonly) double frequencyHz;                     //@synthesize frequencyHz=_frequencyHz - In the implementation block
-(double)frequencyHz;
-(double)earSensitivityDBHL;
-(id)initWithEarSensitivity:(id)arg1 frequency:(id)arg2 ;
@end

