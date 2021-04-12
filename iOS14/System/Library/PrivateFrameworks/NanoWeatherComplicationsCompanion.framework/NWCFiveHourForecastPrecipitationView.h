/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
*/

#import <NanoWeatherComplicationsCompanion/NWCFiveHourForecastConditionGlyphView.h>

@class NWMPrecipitationFormatter;

@interface NWCFiveHourForecastPrecipitationView : NWCFiveHourForecastConditionGlyphView {

	NWMPrecipitationFormatter* _formatter;

}

@property (nonatomic,retain) NWMPrecipitationFormatter * formatter;              //@synthesize formatter=_formatter - In the implementation block
-(NWMPrecipitationFormatter *)formatter;
-(void)setFormatter:(NWMPrecipitationFormatter *)arg1 ;
-(id)dataFormatter;
-(Class)hourlyForecastViewClass;
@end

