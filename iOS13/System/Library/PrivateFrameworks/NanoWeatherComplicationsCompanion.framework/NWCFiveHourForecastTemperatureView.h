/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
*/

#import <NanoWeatherComplicationsCompanion/NWCFiveHourForecastConditionGlyphView.h>

@class NWMTemperatureFormatter;

@interface NWCFiveHourForecastTemperatureView : NWCFiveHourForecastConditionGlyphView {

	NWMTemperatureFormatter* _formatter;

}

@property (nonatomic,retain) NWMTemperatureFormatter * formatter;              //@synthesize formatter=_formatter - In the implementation block
-(NWMTemperatureFormatter *)formatter;
-(void)setFormatter:(NWMTemperatureFormatter *)arg1 ;
-(id)dataFormatter;
-(Class)hourlyForecastViewClass;
@end

