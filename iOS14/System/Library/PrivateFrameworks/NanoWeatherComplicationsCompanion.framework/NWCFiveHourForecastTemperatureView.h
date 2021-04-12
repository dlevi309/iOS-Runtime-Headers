/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

