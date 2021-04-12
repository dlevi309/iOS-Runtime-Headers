/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/

#import <UIKitCore/UITableViewCell.h>

@class NSString, UILabel, UIButton, NSLayoutConstraint;

@interface HRParagraphTableViewCell : UITableViewCell {

	NSString* _titleText;
	NSString* _paragraphText;
	NSString* _buttonText;
	UILabel* _titleLabel;
	UILabel* _paragraphLabel;
	UIButton* _button;
	NSLayoutConstraint* _titleLabelBaselineConstraint;
	NSLayoutConstraint* _paragraphLabelBaselineConstraint;
	NSLayoutConstraint* _buttonBaselineConstraint;
	NSLayoutConstraint* _contentViewParagraphBottomConstraint;
	NSLayoutConstraint* _contentViewButtonBottomConstraint;

}

@property (nonatomic,retain) UILabel * titleLabel;                                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * paragraphLabel;                                               //@synthesize paragraphLabel=_paragraphLabel - In the implementation block
@property (nonatomic,retain) UIButton * button;                                                      //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleLabelBaselineConstraint;                      //@synthesize titleLabelBaselineConstraint=_titleLabelBaselineConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * paragraphLabelBaselineConstraint;                  //@synthesize paragraphLabelBaselineConstraint=_paragraphLabelBaselineConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * buttonBaselineConstraint;                          //@synthesize buttonBaselineConstraint=_buttonBaselineConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentViewParagraphBottomConstraint;              //@synthesize contentViewParagraphBottomConstraint=_contentViewParagraphBottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentViewButtonBottomConstraint;                 //@synthesize contentViewButtonBottomConstraint=_contentViewButtonBottomConstraint - In the implementation block
@property (nonatomic,copy) NSString * titleText;                                                     //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) NSString * paragraphText;                                                 //@synthesize paragraphText=_paragraphText - In the implementation block
@property (nonatomic,copy) NSString * buttonText;                                                    //@synthesize buttonText=_buttonText - In the implementation block
+(id)reuseIdentifier;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIButton *)button;
-(NSString *)buttonText;
-(void)_setUpConstraints;
-(void)setButton:(UIButton *)arg1 ;
-(NSString *)titleText;
-(void)setButtonText:(NSString *)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
-(id)_buttonFont;
-(void)_updateForCurrentSizeCategory;
-(id)_titleLabelFont;
-(id)initWithCoder:(id)arg1 ;
-(long long)_buttonHorizontalAlignment;
-(void)_setUpUI;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)_paragraphLabelFont;
-(double)_titleLabelTopToBaseline;
-(double)_titleLabelBaselineToParagraphBaseline;
-(double)_subtitleLabelBaselineToButton;
-(void)setParagraphText:(NSString *)arg1 ;
-(NSString *)paragraphText;
-(void)_updateBottomConstraint;
-(NSLayoutConstraint *)titleLabelBaselineConstraint;
-(void)setTitleLabelBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(id)_titleLabelFontTextStyle;
-(UILabel *)paragraphLabel;
-(void)setParagraphLabel:(UILabel *)arg1 ;
-(void)setParagraphLabelBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)paragraphLabelBaselineConstraint;
-(void)setButtonBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)buttonBaselineConstraint;
-(double)_lastViewToBottom;
-(void)setContentViewParagraphBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setContentViewButtonBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(id)_paragraphLabelFontTextStyle;
-(id)_buttonFontTextStyle;
-(NSLayoutConstraint *)contentViewParagraphBottomConstraint;
-(NSLayoutConstraint *)contentViewButtonBottomConstraint;
@end

