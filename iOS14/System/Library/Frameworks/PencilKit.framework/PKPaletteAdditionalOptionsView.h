/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKPaletteMoreOptionsViewControllerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/PKEdgeLocatable.h>
#import <libobjc.A.dylib/PKPalettePopoverUpdating.h>
#import <libobjc.A.dylib/PKPalettePopoverDismissing.h>
#import <libobjc.A.dylib/PKPaletteViewSizeScaling.h>

@protocol PKPalettePopoverPresenting, PKPaletteAdditionalOptionsViewDelegate;
@class UIStackView, PKPaletteButton, PKPaletteButtonGroupView, PKPaletteKeyboardButton, PKPaletteMoreOptionsViewController, UIViewController, NSLayoutConstraint, NSString;

@interface PKPaletteAdditionalOptionsView : UIView <PKPaletteMoreOptionsViewControllerDelegate, UIPopoverPresentationControllerDelegate, PKEdgeLocatable, PKPalettePopoverUpdating, PKPalettePopoverDismissing, PKPaletteViewSizeScaling> {

	BOOL _supportsAnnotationEditing;
	BOOL _autoHideOn;
	BOOL _isFingerDrawsOn;
	BOOL _shouldShowFingerDrawsOption;
	BOOL _shouldShowTapToRadarOption;
	BOOL _wantsEllipsisButtonVisible;
	BOOL _wantsInputAssistantViewVisible;
	BOOL _enableKeyboardButtons;
	unsigned long long _edgeLocation;
	double _scalingFactor;
	id<PKPalettePopoverPresenting> _palettePopoverPresenting;
	id<PKPaletteAdditionalOptionsViewDelegate> _delegate;
	long long _floatingKeyboardType;
	UIStackView* _contentStackView;
	UIStackView* _stackView;
	PKPaletteButton* _plusButton;
	PKPaletteButton* _ellipsisButton;
	PKPaletteButtonGroupView* _keyboardButtonGroupView;
	PKPaletteKeyboardButton* _keyboardButton;
	PKPaletteButton* _returnKeyButton;
	PKPaletteMoreOptionsViewController* _moreOptionsViewController;
	UIViewController* _presentedPopoverViewController;
	NSLayoutConstraint* _plusButtonWidthConstraint;
	NSLayoutConstraint* _plusButtonHeightConstraint;
	NSLayoutConstraint* _ellipsisButtonWidthConstraint;
	NSLayoutConstraint* _ellipsisButtonHeightConstraint;

}

@property (nonatomic,retain) UIStackView * contentStackView;                                              //@synthesize contentStackView=_contentStackView - In the implementation block
@property (nonatomic,retain) UIStackView * stackView;                                                     //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) PKPaletteButton * plusButton;                                                //@synthesize plusButton=_plusButton - In the implementation block
@property (nonatomic,retain) PKPaletteButton * ellipsisButton;                                            //@synthesize ellipsisButton=_ellipsisButton - In the implementation block
@property (nonatomic,retain) PKPaletteButtonGroupView * keyboardButtonGroupView;                          //@synthesize keyboardButtonGroupView=_keyboardButtonGroupView - In the implementation block
@property (nonatomic,retain) PKPaletteKeyboardButton * keyboardButton;                                    //@synthesize keyboardButton=_keyboardButton - In the implementation block
@property (nonatomic,retain) PKPaletteButton * returnKeyButton;                                           //@synthesize returnKeyButton=_returnKeyButton - In the implementation block
@property (nonatomic,retain) PKPaletteMoreOptionsViewController * moreOptionsViewController;              //@synthesize moreOptionsViewController=_moreOptionsViewController - In the implementation block
@property (nonatomic,retain) UIViewController * presentedPopoverViewController;                           //@synthesize presentedPopoverViewController=_presentedPopoverViewController - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * plusButtonWidthConstraint;                              //@synthesize plusButtonWidthConstraint=_plusButtonWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * plusButtonHeightConstraint;                             //@synthesize plusButtonHeightConstraint=_plusButtonHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * ellipsisButtonWidthConstraint;                          //@synthesize ellipsisButtonWidthConstraint=_ellipsisButtonWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * ellipsisButtonHeightConstraint;                         //@synthesize ellipsisButtonHeightConstraint=_ellipsisButtonHeightConstraint - In the implementation block
@property (assign,nonatomic,__weak) id<PKPalettePopoverPresenting> palettePopoverPresenting;              //@synthesize palettePopoverPresenting=_palettePopoverPresenting - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaletteAdditionalOptionsViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL supportsAnnotationEditing;                                              //@synthesize supportsAnnotationEditing=_supportsAnnotationEditing - In the implementation block
@property (assign,getter=isAutoHideOn,nonatomic) BOOL autoHideOn;                                         //@synthesize autoHideOn=_autoHideOn - In the implementation block
@property (assign,nonatomic) BOOL isFingerDrawsOn;                                                        //@synthesize isFingerDrawsOn=_isFingerDrawsOn - In the implementation block
@property (assign,nonatomic) BOOL shouldShowFingerDrawsOption;                                            //@synthesize shouldShowFingerDrawsOption=_shouldShowFingerDrawsOption - In the implementation block
@property (assign,nonatomic) BOOL shouldShowTapToRadarOption;                                             //@synthesize shouldShowTapToRadarOption=_shouldShowTapToRadarOption - In the implementation block
@property (assign,nonatomic) BOOL wantsEllipsisButtonVisible;                                             //@synthesize wantsEllipsisButtonVisible=_wantsEllipsisButtonVisible - In the implementation block
@property (assign,nonatomic) BOOL wantsInputAssistantViewVisible;                                         //@synthesize wantsInputAssistantViewVisible=_wantsInputAssistantViewVisible - In the implementation block
@property (assign,nonatomic) BOOL enableKeyboardButtons;                                                  //@synthesize enableKeyboardButtons=_enableKeyboardButtons - In the implementation block
@property (assign,nonatomic) long long floatingKeyboardType;                                              //@synthesize floatingKeyboardType=_floatingKeyboardType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long edgeLocation;                                             //@synthesize edgeLocation=_edgeLocation - In the implementation block
@property (assign,nonatomic) double scalingFactor;                                                        //@synthesize scalingFactor=_scalingFactor - In the implementation block
-(void)willMoveToSuperview:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 ;
-(id<PKPaletteAdditionalOptionsViewDelegate>)delegate;
-(UIStackView *)stackView;
-(double)scalingFactor;
-(void)setDelegate:(id<PKPaletteAdditionalOptionsViewDelegate>)arg1 ;
-(void)setPlusButton:(PKPaletteButton *)arg1 ;
-(void)_updateUI;
-(PKPaletteButton *)plusButton;
-(void)setScalingFactor:(double)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setStackView:(UIStackView *)arg1 ;
-(void)dealloc;
-(UIStackView *)contentStackView;
-(void)setContentStackView:(UIStackView *)arg1 ;
-(unsigned long long)edgeLocation;
-(void)setEdgeLocation:(unsigned long long)arg1 ;
-(id<PKPalettePopoverPresenting>)palettePopoverPresenting;
-(void)setPalettePopoverPresenting:(id<PKPalettePopoverPresenting>)arg1 ;
-(void)setWantsEllipsisButtonVisible:(BOOL)arg1 ;
-(void)setWantsInputAssistantViewVisible:(BOOL)arg1 ;
-(BOOL)enableKeyboardButtons;
-(void)setEnableKeyboardButtons:(BOOL)arg1 ;
-(long long)floatingKeyboardType;
-(void)setFloatingKeyboardType:(long long)arg1 ;
-(void)setShouldShowTapToRadarOption:(BOOL)arg1 ;
-(PKPaletteKeyboardButton *)keyboardButton;
-(PKPaletteButton *)returnKeyButton;
-(void)dismissPalettePopoverWithCompletion:(/*^block*/id)arg1 ;
-(CGRect)plusButtonFrame;
-(void)updatePopoverUI;
-(void)setSupportsAnnotationEditing:(BOOL)arg1 ;
-(void)setShouldShowFingerDrawsOption:(BOOL)arg1 ;
-(BOOL)isAutoHideOn;
-(BOOL)isFingerDrawsOn;
-(void)moreOptionsViewControllerDidToggleAutoHide:(id)arg1 ;
-(void)moreOptionsViewControllerDidToggleFingerDraws:(id)arg1 ;
-(BOOL)shouldShowTapToRadarOption;
-(void)moreOptionsViewControllerDidSelectTapToRadar:(id)arg1 ;
-(void)moreOptionsViewControllerDidSelectOpenPencilSettings:(id)arg1 ;
-(BOOL)shouldShowFingerDrawsOption;
-(void)setIsFingerDrawsOn:(BOOL)arg1 ;
-(void)setAutoHideOn:(BOOL)arg1 ;
-(void)setKeyboardButton:(PKPaletteKeyboardButton *)arg1 ;
-(void)setReturnKeyButton:(PKPaletteButton *)arg1 ;
-(PKPaletteButton *)ellipsisButton;
-(void)_handleKeyboardButton;
-(void)_handleReturnKeyButton;
-(void)_didSelectPlusButton:(id)arg1 ;
-(void)_didSelectEllipsisButton:(id)arg1 ;
-(PKPaletteMoreOptionsViewController *)moreOptionsViewController;
-(BOOL)supportsAnnotationEditing;
-(BOOL)wantsEllipsisButtonVisible;
-(BOOL)wantsInputAssistantViewVisible;
-(PKPaletteButtonGroupView *)keyboardButtonGroupView;
-(NSLayoutConstraint *)plusButtonWidthConstraint;
-(NSLayoutConstraint *)plusButtonHeightConstraint;
-(NSLayoutConstraint *)ellipsisButtonWidthConstraint;
-(NSLayoutConstraint *)ellipsisButtonHeightConstraint;
-(id)_keyboardButtonGroupViewButtons;
-(UIViewController *)presentedPopoverViewController;
-(void)setMoreOptionsViewController:(PKPaletteMoreOptionsViewController *)arg1 ;
-(void)setPresentedPopoverViewController:(UIViewController *)arg1 ;
-(void)setEllipsisButton:(PKPaletteButton *)arg1 ;
-(void)setKeyboardButtonGroupView:(PKPaletteButtonGroupView *)arg1 ;
-(void)setPlusButtonWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setPlusButtonHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setEllipsisButtonWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setEllipsisButtonHeightConstraint:(NSLayoutConstraint *)arg1 ;
@end

