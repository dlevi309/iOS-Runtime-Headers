/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
*/

#import <NanoWeatherComplicationsCompanion/NanoWeatherComplicationsCompanion-Structs.h>
#import <UIKitCore/UIView.h>

@protocol NWMDataFormatter;
@class UILabel, UIImageView;

@interface NWCHourlyForecastView : UIView {

	UILabel* _topLabel;
	UIImageView* _middleImageView;
	UILabel* _middleLabel;
	UILabel* _timeLabel;
	id<NWMDataFormatter> _formatter;

}

@property (nonatomic,readonly) UILabel * topLabel;                               //@synthesize topLabel=_topLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * middleImageView;                    //@synthesize middleImageView=_middleImageView - In the implementation block
@property (nonatomic,readonly) UILabel * middleLabel;                            //@synthesize middleLabel=_middleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * timeLabel;                              //@synthesize timeLabel=_timeLabel - In the implementation block
@property (assign,nonatomic,__weak) id<NWMDataFormatter> formatter;              //@synthesize formatter=_formatter - In the implementation block
-(id<NWMDataFormatter>)formatter;
-(void)setFormatter:(id<NWMDataFormatter>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)applyStyle;
-(UILabel *)topLabel;
-(UILabel *)timeLabel;
-(UILabel *)middleLabel;
-(void)_applyConstraintsWithConstants:(SCD_Struct_NW0)arg1 ;
-(UIImageView *)middleImageView;
-(void)applyConditions:(id)arg1 date:(id)arg2 timeZone:(id)arg3 ;
@end

