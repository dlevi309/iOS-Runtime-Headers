/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIStackView.h>

@class HKSelectedRangeLabel, UIColor;

@interface HKInteractiveChartAnnotationViewKeyValueLabel : UIStackView {

	HKSelectedRangeLabel* _keyLabel;
	HKSelectedRangeLabel* _valueLabel;
	UIColor* _textColor;

}

@property (nonatomic,readonly) HKSelectedRangeLabel * keyLabel;                //@synthesize keyLabel=_keyLabel - In the implementation block
@property (nonatomic,readonly) HKSelectedRangeLabel * valueLabel;              //@synthesize valueLabel=_valueLabel - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                              //@synthesize textColor=_textColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(UIColor *)textColor;
-(HKSelectedRangeLabel *)valueLabel;
-(HKSelectedRangeLabel *)keyLabel;
@end

