/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUTitleDescriptionCell.h>

@class NSString, UIFont, UILabel, NSLayoutConstraint;

@interface HUTitleValueDescriptionCell : HUTitleDescriptionCell {

	BOOL _hideValue;
	NSString* _valueText;
	UIFont* _valueFont;
	UILabel* _valueLabel;
	NSLayoutConstraint* _valueLabelWidthConstraint;

}

@property (nonatomic,retain) UILabel * valueLabel;                                        //@synthesize valueLabel=_valueLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * valueLabelWidthConstraint;              //@synthesize valueLabelWidthConstraint=_valueLabelWidthConstraint - In the implementation block
@property (nonatomic,retain) NSString * valueText;                                        //@synthesize valueText=_valueText - In the implementation block
@property (nonatomic,retain) UIFont * valueFont;                                          //@synthesize valueFont=_valueFont - In the implementation block
@property (assign,nonatomic) BOOL hideValue;                                              //@synthesize hideValue=_hideValue - In the implementation block
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)setValueText:(NSString *)arg1 ;
-(UIFont *)valueFont;
-(void)updateConstraints;
-(void)setValueFont:(UIFont *)arg1 ;
-(UILabel *)valueLabel;
-(void)setValueLabel:(UILabel *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSString *)valueText;
-(void)setHideValue:(BOOL)arg1 ;
-(void)_updateValueHidden;
-(void)_updateValueWidthConstraintConstant;
-(NSLayoutConstraint *)valueLabelWidthConstraint;
-(void)setValueLabelWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(BOOL)hideValue;
@end

