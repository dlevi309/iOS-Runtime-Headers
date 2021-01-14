/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/

#import <OnBoardingKit/OnBoardingKit-Structs.h>
#import <UIKitCore/UIView.h>

@class OBPrivacyLinkController, UIViewController, NSMutableArray, OBButtonTrayLayoutGuide, OBTemplateLabel, UIStackView, UIView, UIVisualEffectView, NSLayoutConstraint;

@interface OBButtonTray : UIView {

	BOOL _detached;
	OBPrivacyLinkController* _privacyLinkController;
	UIViewController* _parentViewController;
	long long _backdropStyle;
	NSMutableArray* _buttons;
	OBButtonTrayLayoutGuide* _buttonLayoutGuide;
	OBTemplateLabel* _captionLabel;
	long long _captionStyle;
	UIStackView* _stackView;
	UIView* _backdropContainer;
	UIVisualEffectView* _effectView;
	NSLayoutConstraint* _buttonViewTopConstraint;
	NSLayoutConstraint* _buttonViewBottomConstraint;
	NSLayoutConstraint* _buttonViewLeadingConstraint;
	NSLayoutConstraint* _buttonViewTrailingConstraint;

}

@property (assign,nonatomic,__weak) UIViewController * parentViewController;                 //@synthesize parentViewController=_parentViewController - In the implementation block
@property (assign,nonatomic) long long backdropStyle;                                        //@synthesize backdropStyle=_backdropStyle - In the implementation block
@property (nonatomic,retain) NSMutableArray * buttons;                                       //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,retain) OBButtonTrayLayoutGuide * buttonLayoutGuide;                    //@synthesize buttonLayoutGuide=_buttonLayoutGuide - In the implementation block
@property (nonatomic,retain) OBPrivacyLinkController * privacyLinkController;                //@synthesize privacyLinkController=_privacyLinkController - In the implementation block
@property (nonatomic,retain) OBTemplateLabel * captionLabel;                                 //@synthesize captionLabel=_captionLabel - In the implementation block
@property (assign,nonatomic) long long captionStyle;                                         //@synthesize captionStyle=_captionStyle - In the implementation block
@property (nonatomic,retain) UIStackView * stackView;                                        //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) UIView * backdropContainer;                                     //@synthesize backdropContainer=_backdropContainer - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * effectView;                                //@synthesize effectView=_effectView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * buttonViewTopConstraint;                   //@synthesize buttonViewTopConstraint=_buttonViewTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * buttonViewBottomConstraint;                //@synthesize buttonViewBottomConstraint=_buttonViewBottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * buttonViewLeadingConstraint;               //@synthesize buttonViewLeadingConstraint=_buttonViewLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * buttonViewTrailingConstraint;              //@synthesize buttonViewTrailingConstraint=_buttonViewTrailingConstraint - In the implementation block
@property (assign,getter=isDetached,nonatomic) BOOL detached;                                //@synthesize detached=_detached - In the implementation block
-(double)topPadding;
-(UIVisualEffectView *)effectView;
-(double)bottomPadding;
-(CGSize)intrinsicContentSize;
-(BOOL)hasContent;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)removeFromSuperview;
-(UIViewController *)parentViewController;
-(void)setDetached:(BOOL)arg1 ;
-(NSMutableArray *)buttons;
-(BOOL)isDetached;
-(UIStackView *)stackView;
-(void)setPrivacyLinkForBundles:(id)arg1 ;
-(void)layoutSubviews;
-(void)setEffectView:(UIVisualEffectView *)arg1 ;
-(OBTemplateLabel *)captionLabel;
-(void)setParentViewController:(UIViewController *)arg1 ;
-(void)addButton:(id)arg1 ;
-(void)setCaptionLabel:(OBTemplateLabel *)arg1 ;
-(void)setPrivacyLinkController:(OBPrivacyLinkController *)arg1 ;
-(OBPrivacyLinkController *)privacyLinkController;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setBackdropContainer:(UIView *)arg1 ;
-(void)setButtons:(NSMutableArray *)arg1 ;
-(UIView *)backdropContainer;
-(void)setButtonLayoutGuide:(OBButtonTrayLayoutGuide *)arg1 ;
-(OBButtonTrayLayoutGuide *)buttonLayoutGuide;
-(void)setButtonViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setButtonViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setButtonViewLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setButtonViewTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)buttonViewTopConstraint;
-(NSLayoutConstraint *)buttonViewBottomConstraint;
-(NSLayoutConstraint *)buttonViewLeadingConstraint;
-(NSLayoutConstraint *)buttonViewTrailingConstraint;
-(void)_setUpBackdrops;
-(void)_updateTrayVisibility;
-(void)_updateButtonConstraints;
-(void)_updateCaptionTextAppearance;
-(void)setCaptionText:(id)arg1 ;
-(void)setCaptionText:(id)arg1 style:(long long)arg2 ;
-(void)setCaptionStyle:(long long)arg1 ;
-(long long)captionStyle;
-(BOOL)_shouldHandleLandscapeiPhoneLayout;
-(void)removeButton:(id)arg1 ;
-(void)removeAllButtons;
-(void)addCaptionText:(id)arg1 ;
-(void)addPrivacyLinkForBundles:(id)arg1 ;
-(long long)backdropStyle;
-(void)setStackView:(UIStackView *)arg1 ;
-(void)setBackdropStyle:(long long)arg1 ;
@end

