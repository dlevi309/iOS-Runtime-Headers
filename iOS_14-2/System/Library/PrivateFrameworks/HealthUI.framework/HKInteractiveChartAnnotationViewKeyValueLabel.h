/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class HKSelectedRangeLabel, UIColor;

@interface HKInteractiveChartAnnotationViewKeyValueLabel : UIView {

	long long _orientation;
	HKSelectedRangeLabel* _keyLabel;
	HKSelectedRangeLabel* _valueLabel;
	UIColor* _textColor;

}

@property (assign,nonatomic) long long orientation;                            //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,readonly) HKSelectedRangeLabel * keyLabel;                //@synthesize keyLabel=_keyLabel - In the implementation block
@property (nonatomic,readonly) HKSelectedRangeLabel * valueLabel;              //@synthesize valueLabel=_valueLabel - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                              //@synthesize textColor=_textColor - In the implementation block
-(CGSize)intrinsicContentSize;
-(UIColor *)textColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(HKSelectedRangeLabel *)keyLabel;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(long long)orientation;
-(HKSelectedRangeLabel *)valueLabel;
-(void)setOrientation:(long long)arg1 ;
-(void)_layoutSubviewsVertically;
-(void)_layoutSubviewsHorizontally;
@end

