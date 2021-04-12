/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
*/

#import <UIKitCore/UIView.h>

@protocol WGWidgetPinningTeachingViewDelegate;
@class UIView, UILabel, UIButton, WGWidgetPinningTeachingAnimationView, NSLayoutConstraint;

@interface WGWidgetPinningTeachingView : UIView {

	UIView* _contentView;
	id<WGWidgetPinningTeachingViewDelegate> _delegate;
	UILabel* _titleLabel;
	UILabel* _bodyLabel;
	UIButton* _yesButton;
	UIButton* _noButton;
	WGWidgetPinningTeachingAnimationView* _iconImageView;
	NSLayoutConstraint* _titleLabelTopConstraint;
	NSLayoutConstraint* _titleLabelToBodyLabelConstraint;

}

@property (nonatomic,retain) UILabel * titleLabel;                                                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * bodyLabel;                                                  //@synthesize bodyLabel=_bodyLabel - In the implementation block
@property (nonatomic,retain) UIButton * yesButton;                                                 //@synthesize yesButton=_yesButton - In the implementation block
@property (nonatomic,retain) UIButton * noButton;                                                  //@synthesize noButton=_noButton - In the implementation block
@property (nonatomic,retain) WGWidgetPinningTeachingAnimationView * iconImageView;                 //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleLabelTopConstraint;                         //@synthesize titleLabelTopConstraint=_titleLabelTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleLabelToBodyLabelConstraint;                 //@synthesize titleLabelToBodyLabelConstraint=_titleLabelToBodyLabelConstraint - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                                 //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic,__weak) id<WGWidgetPinningTeachingViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(UILabel *)titleLabel;
-(WGWidgetPinningTeachingAnimationView *)iconImageView;
-(void)_contentSizeCategoryDidChange;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)init;
-(id<WGWidgetPinningTeachingViewDelegate>)delegate;
-(UIButton *)noButton;
-(void)_createConstraints;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)setDelegate:(id<WGWidgetPinningTeachingViewDelegate>)arg1 ;
-(void)_updateAppearance;
-(UILabel *)bodyLabel;
-(void)_updateFonts;
-(void)setContentView:(UIView *)arg1 ;
-(void)startAnimating;
-(void)setYesButton:(UIButton *)arg1 ;
-(void)setNoButton:(UIButton *)arg1 ;
-(NSLayoutConstraint *)titleLabelTopConstraint;
-(void)setTitleLabelTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)stopAnimating;
-(void)setIconImageView:(WGWidgetPinningTeachingAnimationView *)arg1 ;
-(UIButton *)yesButton;
-(void)setBodyLabel:(UILabel *)arg1 ;
-(UIView *)contentView;
-(void)_createContainerViews;
-(void)_createContentViews;
-(void)_setupButtonsTargets;
-(void)_updateFontDependantConstraints;
-(void)_yesButtonTapped;
-(void)_noButtonTapped;
-(NSLayoutConstraint *)titleLabelToBodyLabelConstraint;
-(void)setTitleLabelToBodyLabelConstraint:(NSLayoutConstraint *)arg1 ;
@end

