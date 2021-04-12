/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/

#import <UIKitCore/UIView.h>

@class UILabel, UIView;

@interface HRNumberedListItemView : UIView {

	UILabel* _numberLabel;
	unsigned long long _number;
	UIView* _numberLabelBackground;

}

@property (assign,nonatomic) unsigned long long number;                   //@synthesize number=_number - In the implementation block
@property (nonatomic,retain) UILabel * numberLabel;                       //@synthesize numberLabel=_numberLabel - In the implementation block
@property (nonatomic,retain) UIView * numberLabelBackground;              //@synthesize numberLabelBackground=_numberLabelBackground - In the implementation block
+(id)numberFont;
-(id)initWithInteger:(unsigned long long)arg1 ;
-(unsigned long long)number;
-(void)setNumber:(unsigned long long)arg1 ;
-(void)layoutSubviews;
-(void)setTintColor:(id)arg1 ;
-(void)_setUpConstraints;
-(UILabel *)numberLabel;
-(void)setNumberLabel:(UILabel *)arg1 ;
-(void)_setUpUI;
-(UIView *)numberLabelBackground;
-(void)setNumberLabelBackground:(UIView *)arg1 ;
@end

