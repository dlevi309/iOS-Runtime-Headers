/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
*/

#import <NanoWeatherComplicationsCompanion/NanoWeatherComplicationsCompanion-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel;

@interface NWCDailyForecastRangeView : UIView {

	UILabel* _highLabel;
	UILabel* _interpunctLabel;
	UILabel* _lowLabel;

}

@property (nonatomic,readonly) UILabel * highLabel;                    //@synthesize highLabel=_highLabel - In the implementation block
@property (nonatomic,readonly) UILabel * interpunctLabel;              //@synthesize interpunctLabel=_interpunctLabel - In the implementation block
@property (nonatomic,readonly) UILabel * lowLabel;                     //@synthesize lowLabel=_lowLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)highLabel;
-(UILabel *)lowLabel;
-(id)_rangeLabelWithFontSize:(double)arg1 ;
-(void)_applyConstraints:(SCD_Struct_NW2)arg1 ;
-(UILabel *)interpunctLabel;
@end

