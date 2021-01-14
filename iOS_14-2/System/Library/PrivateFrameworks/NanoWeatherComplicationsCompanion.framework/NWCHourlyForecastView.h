/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UILabel *)timeLabel;
-(id<NWMDataFormatter>)formatter;
-(void)applyStyle;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFormatter:(id<NWMDataFormatter>)arg1 ;
-(UILabel *)topLabel;
-(UILabel *)middleLabel;
-(void)_applyConstraintsWithConstants:(SCD_Struct_NW0)arg1 ;
-(UIImageView *)middleImageView;
-(void)applyEntryModel:(id)arg1 date:(id)arg2 timeZone:(id)arg3 ;
@end

