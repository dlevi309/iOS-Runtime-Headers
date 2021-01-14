/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
*/

#import <NanoWeatherComplicationsCompanion/NanoWeatherComplicationsCompanion-Structs.h>
#import <NanoWeatherComplicationsCompanion/NWCDailyForecastView.h>

@class LinearGaugeView;

@interface NWCDailyForecastUltravioletIndexView : NWCDailyForecastView {

	LinearGaugeView* _backgroundLinearGaugeView;

}

@property (nonatomic,readonly) LinearGaugeView * backgroundLinearGaugeView;              //@synthesize backgroundLinearGaugeView=_backgroundLinearGaugeView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)applyFilter:(id)arg1 ;
-(LinearGaugeView *)backgroundLinearGaugeView;
@end

