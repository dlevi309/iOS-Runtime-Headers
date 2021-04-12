/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
*/

#import <NanoWeatherComplicationsCompanion/NanoWeatherComplicationsCompanion-Structs.h>
#import <UIKitCore/UIView.h>

@class LinearGaugeView, UILabel;

@interface NWCDailyForecastView : UIView {

	double _percentage;
	LinearGaugeView* _linearGaugeView;
	UILabel* _weekdayLabel;

}

@property (assign,nonatomic) double percentage;                                //@synthesize percentage=_percentage - In the implementation block
@property (nonatomic,readonly) LinearGaugeView * linearGaugeView;              //@synthesize linearGaugeView=_linearGaugeView - In the implementation block
@property (nonatomic,readonly) UILabel * weekdayLabel;                         //@synthesize weekdayLabel=_weekdayLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)weekdayLabel;
-(void)layoutSubviews;
-(void)applyFilter:(id)arg1 ;
-(double)percentage;
-(void)setPercentage:(double)arg1 ;
-(void)updateMonochromeColor:(id)arg1 fraction:(double)arg2 ;
-(LinearGaugeView *)linearGaugeView;
-(void)_applyLayoutConstraints:(SCD_Struct_NW0)arg1 ;
@end

