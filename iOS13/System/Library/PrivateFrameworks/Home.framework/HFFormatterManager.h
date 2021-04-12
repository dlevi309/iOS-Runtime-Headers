/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class HFTemperatureFormatter;

@interface HFFormatterManager : NSObject {

	HFTemperatureFormatter* _temperatureFormatter;

}

@property (nonatomic,retain) HFTemperatureFormatter * temperatureFormatter;              //@synthesize temperatureFormatter=_temperatureFormatter - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)percentFormatter;
-(HFTemperatureFormatter *)temperatureFormatter;
-(id)booleanFormatter;
-(void)registerTemperatureFormatter:(id)arg1 ;
-(id)timeIntervalFormatter;
-(id)arcDegreeFormatter;
-(id)luxFormatter;
-(id)identityFormatter;
-(id)emptyStringFormatter;
-(void)setTemperatureFormatter:(HFTemperatureFormatter *)arg1 ;
@end

