/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

