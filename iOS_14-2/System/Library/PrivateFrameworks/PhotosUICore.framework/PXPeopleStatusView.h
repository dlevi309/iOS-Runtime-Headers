/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIButton, UIStackView, NSArray, NSLayoutConstraint, UIActivityIndicatorView;

@interface PXPeopleStatusView : UIView {

	UILabel* _titleLabel;
	UILabel* _countLabel;
	UILabel* _descriptionLabel;
	UIButton* _continueButton;
	unsigned long long _viewState;
	UIStackView* _stackView;
	NSArray* _constraints;
	NSLayoutConstraint* _stackViewY;
	NSLayoutConstraint* _continueButtonBottom;
	UIActivityIndicatorView* _activityIndicator;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,retain) UIStackView * stackView;                                  //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) NSArray * constraints;                                    //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * stackViewY;                          //@synthesize stackViewY=_stackViewY - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * continueButtonBottom;                //@synthesize continueButtonBottom=_continueButtonBottom - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * countLabel;                                   //@synthesize countLabel=_countLabel - In the implementation block
@property (nonatomic,readonly) UILabel * descriptionLabel;                             //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) UIButton * continueButton;                                //@synthesize continueButton=_continueButton - In the implementation block
@property (assign,nonatomic) unsigned long long viewState;                             //@synthesize viewState=_viewState - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                               //@synthesize contentInsets=_contentInsets - In the implementation block
-(UILabel *)titleLabel;
-(UIActivityIndicatorView *)activityIndicator;
-(NSArray *)constraints;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)setConstraints:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)contentInsets;
-(UIStackView *)stackView;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)setViewState:(unsigned long long)arg1 ;
-(NSLayoutConstraint *)stackViewY;
-(void)commonInit;
-(void)setStackViewY:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)continueButtonBottom;
-(id)_goButtonBackgroundImageWithColor:(id)arg1 ;
-(void)setContinueButtonBottom:(NSLayoutConstraint *)arg1 ;
-(void)updateConstraints;
-(UILabel *)countLabel;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)viewState;
-(UIButton *)continueButton;
-(void)_createViews;
-(void)setContinueButton:(UIButton *)arg1 ;
-(UILabel *)descriptionLabel;
-(void)setStackView:(UIStackView *)arg1 ;
@end

