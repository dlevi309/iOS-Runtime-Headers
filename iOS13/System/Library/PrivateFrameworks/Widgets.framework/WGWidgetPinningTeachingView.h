/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id<WGWidgetPinningTeachingViewDelegate>)delegate;
-(void)setDelegate:(id<WGWidgetPinningTeachingViewDelegate>)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)startAnimating;
-(void)stopAnimating;
-(void)_createConstraints;
-(void)_updateAppearance;
-(UILabel *)bodyLabel;
-(void)setBodyLabel:(UILabel *)arg1 ;
-(WGWidgetPinningTeachingAnimationView *)iconImageView;
-(void)setIconImageView:(WGWidgetPinningTeachingAnimationView *)arg1 ;
-(void)_updateFonts;
-(void)_contentSizeCategoryDidChange;
-(NSLayoutConstraint *)titleLabelTopConstraint;
-(void)setTitleLabelTopConstraint:(NSLayoutConstraint *)arg1 ;
-(UIButton *)yesButton;
-(UIButton *)noButton;
-(void)setYesButton:(UIButton *)arg1 ;
-(void)setNoButton:(UIButton *)arg1 ;
-(void)_createContainerViews;
-(void)_createContentViews;
-(void)_setupButtonsTargets;
-(void)_updateFontDependantConstraints;
-(void)_yesButtonTapped;
-(void)_noButtonTapped;
-(NSLayoutConstraint *)titleLabelToBodyLabelConstraint;
-(void)setTitleLabelToBodyLabelConstraint:(NSLayoutConstraint *)arg1 ;
@end

