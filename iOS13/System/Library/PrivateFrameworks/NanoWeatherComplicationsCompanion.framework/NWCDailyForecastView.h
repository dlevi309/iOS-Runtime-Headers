/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(double)percentage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)weekdayLabel;
-(void)setPercentage:(double)arg1 ;
-(void)applyFilter:(id)arg1 ;
-(void)updateMonochromeColor:(id)arg1 fraction:(double)arg2 ;
-(LinearGaugeView *)linearGaugeView;
-(void)_applyLayoutConstraints:(SCD_Struct_NW0)arg1 ;
@end

