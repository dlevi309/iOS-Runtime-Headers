/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/

#import <OnBoardingKit/OnBoardingKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIViewController, NSMutableArray, OBButtonTrayLayoutGuide, OBPrivacyLinkController, OBTemplateLabel, UIStackView, UIView, UIVisualEffectView, NSLayoutConstraint;

@interface OBButtonTray : UIView {

	long long _backdropStyle;
	UIViewController* _parentViewController;
	NSMutableArray* _buttons;
	OBButtonTrayLayoutGuide* _buttonLayoutGuide;
	OBPrivacyLinkController* _privacyLinkController;
	OBTemplateLabel* _captionLabel;
	UIStackView* _stackView;
	UIView* _backdropContainer;
	UIVisualEffectView* _effectView;
	NSLayoutConstraint* _stackViewTopConstraint;
	NSLayoutConstraint* _stackViewBottomConstraint;
	NSLayoutConstraint* _stackViewLeadingConstraint;
	NSLayoutConstraint* _stackViewTrailingConstraint;

}

@property (assign,nonatomic,__weak) UIViewController * parentViewController;                //@synthesize parentViewController=_parentViewController - In the implementation block
@property (nonatomic,retain) NSMutableArray * buttons;                                      //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,retain) OBButtonTrayLayoutGuide * buttonLayoutGuide;                   //@synthesize buttonLayoutGuide=_buttonLayoutGuide - In the implementation block
@property (nonatomic,retain) OBPrivacyLinkController * privacyLinkController;               //@synthesize privacyLinkController=_privacyLinkController - In the implementation block
@property (nonatomic,retain) OBTemplateLabel * captionLabel;                                //@synthesize captionLabel=_captionLabel - In the implementation block
@property (nonatomic,retain) UIStackView * stackView;                                       //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) UIView * backdropContainer;                                    //@synthesize backdropContainer=_backdropContainer - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * effectView;                               //@synthesize effectView=_effectView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * stackViewTopConstraint;                   //@synthesize stackViewTopConstraint=_stackViewTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * stackViewBottomConstraint;                //@synthesize stackViewBottomConstraint=_stackViewBottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * stackViewLeadingConstraint;               //@synthesize stackViewLeadingConstraint=_stackViewLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * stackViewTrailingConstraint;              //@synthesize stackViewTrailingConstraint=_stackViewTrailingConstraint - In the implementation block
@property (assign,nonatomic) long long backdropStyle;                                       //@synthesize backdropStyle=_backdropStyle - In the implementation block
-(void)removeFromSuperview;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(UIStackView *)stackView;
-(UIViewController *)parentViewController;
-(UIVisualEffectView *)effectView;
-(void)setBackdropStyle:(long long)arg1 ;
-(long long)backdropStyle;
-(void)setParentViewController:(UIViewController *)arg1 ;
-(void)setStackView:(UIStackView *)arg1 ;
-(void)setEffectView:(UIVisualEffectView *)arg1 ;
-(void)setButtons:(NSMutableArray *)arg1 ;
-(void)setBackdropContainer:(UIView *)arg1 ;
-(UIView *)backdropContainer;
-(void)setButtonLayoutGuide:(OBButtonTrayLayoutGuide *)arg1 ;
-(OBButtonTrayLayoutGuide *)buttonLayoutGuide;
-(void)setStackViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setStackViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setStackViewLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setStackViewTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)stackViewTopConstraint;
-(NSLayoutConstraint *)stackViewBottomConstraint;
-(NSLayoutConstraint *)stackViewLeadingConstraint;
-(NSLayoutConstraint *)stackViewTrailingConstraint;
-(void)_setUpBackdrops;
-(void)_updateTrayVisibility;
-(NSMutableArray *)buttons;
-(void)_updateButtonConstraints;
-(OBTemplateLabel *)captionLabel;
-(void)setPrivacyLinkController:(OBPrivacyLinkController *)arg1 ;
-(OBPrivacyLinkController *)privacyLinkController;
-(void)setCaptionLabel:(OBTemplateLabel *)arg1 ;
-(id)_captionFont;
-(double)bottomPadding;
-(void)addButton:(id)arg1 ;
-(void)addPrivacyLinkForBundles:(id)arg1 ;
-(void)addCaptionText:(id)arg1 ;
@end

