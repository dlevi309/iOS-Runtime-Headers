/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton, UIView, NSString, UILabel, NSArray, NSLayoutConstraint, UILayoutGuide, UIFont;

@interface PXOnboardingWelcomeUIView : UIView {

	struct {
		BOOL button;
	}  _needsUpdateFlags;
	UIButton* _startButton;
	UIView* _iconView;
	NSString* _title;
	NSString* _descriptionText;
	NSString* _buttonTitle;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	NSArray* _constraints;
	NSLayoutConstraint* _iconTopCnst;
	NSLayoutConstraint* _startBottomCnst;
	long long _layoutStyle;
	UILayoutGuide* _leadingWhitespace;
	UILayoutGuide* _middleWhitespace;
	UILayoutGuide* _trailingWhitespace;
	UIFont* _buttonFont;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,readonly) UILabel * titleLabel;                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * descriptionLabel;                      //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) NSArray * constraints;                             //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * iconTopCnst;                  //@synthesize iconTopCnst=_iconTopCnst - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * startBottomCnst;              //@synthesize startBottomCnst=_startBottomCnst - In the implementation block
@property (assign,nonatomic) long long layoutStyle;                             //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * leadingWhitespace;               //@synthesize leadingWhitespace=_leadingWhitespace - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * middleWhitespace;                //@synthesize middleWhitespace=_middleWhitespace - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * trailingWhitespace;              //@synthesize trailingWhitespace=_trailingWhitespace - In the implementation block
@property (nonatomic,retain) UIFont * buttonFont;                               //@synthesize buttonFont=_buttonFont - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                        //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,readonly) UIButton * startButton;                          //@synthesize startButton=_startButton - In the implementation block
@property (nonatomic,retain) UIView * iconView;                                 //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,copy) NSString * title;                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * descriptionText;                          //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,copy) NSString * buttonTitle;                              //@synthesize buttonTitle=_buttonTitle - In the implementation block
-(UILabel *)titleLabel;
-(NSArray *)constraints;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)setLayoutStyle:(long long)arg1 ;
-(NSString *)buttonTitle;
-(void)setConstraints:(NSArray *)arg1 ;
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIFont *)buttonFont;
-(void)_invalidateConstraints;
-(UIEdgeInsets)contentInsets;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(long long)layoutStyle;
-(void)setTitle:(NSString *)arg1 ;
-(NSLayoutConstraint *)iconTopCnst;
-(id)_createPortraitConstraintsPhone;
-(id)_createLandscapeConstraintsPhone;
-(id)_createPadConstraints;
-(void)setIconTopCnst:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)startBottomCnst;
-(void)setStartBottomCnst:(NSLayoutConstraint *)arg1 ;
-(UILayoutGuide *)leadingWhitespace;
-(UILayoutGuide *)middleWhitespace;
-(UILayoutGuide *)trailingWhitespace;
-(void)setButtonFont:(UIFont *)arg1 ;
-(void)commonInit;
-(void)updateConstraints;
-(UIView *)iconView;
-(void)setIconView:(UIView *)arg1 ;
-(UIButton *)startButton;
-(id)initWithCoder:(id)arg1 ;
-(void)_invalidateButton;
-(void)setButtonTitle:(NSString *)arg1 ;
-(void)_updateButtonIfNeeded;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UILabel *)descriptionLabel;
-(NSString *)title;
@end

