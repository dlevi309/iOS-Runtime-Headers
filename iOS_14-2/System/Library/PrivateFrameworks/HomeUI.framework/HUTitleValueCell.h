/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUIconCell.h>

@class UILabel, UIStackView, NSString, UIFont, NSArray;

@interface HUTitleValueCell : HUIconCell {

	BOOL _hideTitle;
	BOOL _hideValue;
	BOOL _titleColorFollowsTintColor;
	BOOL _valueColorFollowsTintColor;
	BOOL _allowCopyValueToPasteboard;
	BOOL _useVerticalLayoutOnly;
	UILabel* _titleLabel;
	UILabel* _valueLabel;
	UIStackView* _labelsStackView;
	NSString* _titleText;
	UIFont* _titleFont;
	NSString* _valueText;
	UIFont* _valueFont;
	NSArray* _stackViewConstraints;

}

@property (nonatomic,retain) NSArray * stackViewConstraints;               //@synthesize stackViewConstraints=_stackViewConstraints - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * valueLabel;                       //@synthesize valueLabel=_valueLabel - In the implementation block
@property (nonatomic,readonly) UIStackView * labelsStackView;              //@synthesize labelsStackView=_labelsStackView - In the implementation block
@property (nonatomic,retain) NSString * titleText;                         //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,retain) UIFont * titleFont;                           //@synthesize titleFont=_titleFont - In the implementation block
@property (assign,nonatomic) BOOL hideTitle;                               //@synthesize hideTitle=_hideTitle - In the implementation block
@property (nonatomic,retain) NSString * valueText;                         //@synthesize valueText=_valueText - In the implementation block
@property (nonatomic,retain) UIFont * valueFont;                           //@synthesize valueFont=_valueFont - In the implementation block
@property (assign,nonatomic) BOOL hideValue;                               //@synthesize hideValue=_hideValue - In the implementation block
@property (assign,nonatomic) BOOL titleColorFollowsTintColor;              //@synthesize titleColorFollowsTintColor=_titleColorFollowsTintColor - In the implementation block
@property (assign,nonatomic) BOOL valueColorFollowsTintColor;              //@synthesize valueColorFollowsTintColor=_valueColorFollowsTintColor - In the implementation block
@property (assign,nonatomic) BOOL allowCopyValueToPasteboard;              //@synthesize allowCopyValueToPasteboard=_allowCopyValueToPasteboard - In the implementation block
@property (assign,nonatomic) BOOL useVerticalLayoutOnly;                   //@synthesize useVerticalLayoutOnly=_useVerticalLayoutOnly - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(UILabel *)titleLabel;
-(void)copy:(id)arg1 ;
-(void)_updateTitle;
-(void)setDisabled:(BOOL)arg1 ;
-(void)setTitleFont:(UIFont *)arg1 ;
-(void)layoutMarginsDidChange;
-(void)tintColorDidChange;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(UIFont *)titleFont;
-(NSString *)titleText;
-(void)prepareForReuse;
-(void)setTitleText:(NSString *)arg1 ;
-(void)setValueText:(NSString *)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(UIFont *)valueFont;
-(void)updateConstraints;
-(void)setHideTitle:(BOOL)arg1 ;
-(BOOL)hideTitle;
-(void)setValueFont:(UIFont *)arg1 ;
-(UILabel *)valueLabel;
-(UIStackView *)labelsStackView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSString *)valueText;
-(void)setHideValue:(BOOL)arg1 ;
-(void)setValueColorFollowsTintColor:(BOOL)arg1 ;
-(void)_addTitleLabel;
-(void)setTitleColorFollowsTintColor:(BOOL)arg1 ;
-(void)setAllowCopyValueToPasteboard:(BOOL)arg1 ;
-(BOOL)allowCopyValueToPasteboard;
-(BOOL)titleColorFollowsTintColor;
-(BOOL)valueColorFollowsTintColor;
-(BOOL)hideValue;
-(void)setUseVerticalLayoutOnly:(BOOL)arg1 ;
-(double)labelSpacing;
-(void)_addValueLabel;
-(void)_updateValue;
-(NSArray *)stackViewConstraints;
-(void)setStackViewConstraints:(NSArray *)arg1 ;
-(void)_ensureCorrectHeaderViewOrientation;
-(BOOL)useVerticalLayoutOnly;
@end

