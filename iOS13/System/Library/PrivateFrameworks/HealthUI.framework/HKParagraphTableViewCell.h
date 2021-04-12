/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel, UIButton, NSLayoutConstraint, NSString;

@interface HKParagraphTableViewCell : UITableViewCell {

	UILabel* _titleLabel;
	UILabel* _paragraphLabel;
	UIButton* _button;
	NSLayoutConstraint* _titleLabelBaselineConstraint;
	NSLayoutConstraint* _paragraphLabelBaselineConstraint;
	NSLayoutConstraint* _buttonBaselineConstraint;
	NSLayoutConstraint* _contentViewBottomConstraint;
	NSString* _titleText;
	NSString* _paragraphText;
	NSString* _buttonText;

}

@property (nonatomic,copy) NSString * titleText;                  //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) NSString * paragraphText;              //@synthesize paragraphText=_paragraphText - In the implementation block
@property (nonatomic,copy) NSString * buttonText;                 //@synthesize buttonText=_buttonText - In the implementation block
+(id)reuseIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTitleText:(NSString *)arg1 ;
-(id)_buttonFont;
-(NSString *)buttonText;
-(void)setButtonText:(NSString *)arg1 ;
-(NSString *)titleText;
-(void)_updateForCurrentSizeCategory;
-(id)_titleLabelFont;
-(void)_setupUI;
-(long long)_buttonHorizontalAlignment;
-(id)_paragraphLabelFont;
-(double)_titleLabelTopToBaseline;
-(double)_titleLabelBaselineToParagraphBaseline;
-(double)_subtitleLabelBaselineToButton;
-(double)_buttonBaselineToBottom;
-(void)setParagraphText:(NSString *)arg1 ;
-(NSString *)paragraphText;
@end

