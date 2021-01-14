/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIView;

@interface HKNumberedListItemView : UIView {

	UILabel* _numberLabel;
	unsigned long long _number;
	UIView* _numberLabelBackground;

}

@property (assign,nonatomic) unsigned long long number;                   //@synthesize number=_number - In the implementation block
@property (nonatomic,retain) UILabel * numberLabel;                       //@synthesize numberLabel=_numberLabel - In the implementation block
@property (nonatomic,retain) UIView * numberLabelBackground;              //@synthesize numberLabelBackground=_numberLabelBackground - In the implementation block
+(id)numberFont;
+(id)createNumberedViewWithInteger:(unsigned long long)arg1 ;
+(CGSize)listItemSize;
-(void)setNumber:(unsigned long long)arg1 ;
-(unsigned long long)number;
-(void)setTintColor:(id)arg1 ;
-(void)_setUpConstraints;
-(void)layoutSubviews;
-(id)initWithInteger:(unsigned long long)arg1 ;
-(void)_setUpUI;
-(void)setNumberLabel:(UILabel *)arg1 ;
-(UILabel *)numberLabel;
-(UIView *)numberLabelBackground;
-(void)setNumberLabelBackground:(UIView *)arg1 ;
@end

