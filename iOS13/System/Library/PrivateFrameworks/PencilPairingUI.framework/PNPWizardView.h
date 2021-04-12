/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
*/

#import <PencilPairingUI/PencilPairingUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PNPWizardScratchpadViewDelegate.h>
#import <UIKit/UIPencilInteractionDelegate.h>
#import <libobjc.A.dylib/PNPPencilInteractionEventDestination.h>
#import <libobjc.A.dylib/PNPDeviceStateConfigurable.h>

@protocol PNPWizardViewDelegate;
@class PNPDeviceState, PNPSyntheticPencilInteractionEventSource, UIPencilInteraction, UILabel, PNPWizardAdvanceStepButton, PNPWizardScratchpadView, PNPPencilView, NSLayoutConstraint, PNPWelcomeBuddyDescriptionView, NSArray, UINavigationBar, UIVisualEffectView, UIScrollView, UIView, NSString;

@interface PNPWizardView : UIView <PNPWizardScratchpadViewDelegate, UIPencilInteractionDelegate, PNPPencilInteractionEventDestination, PNPDeviceStateConfigurable> {

	PNPDeviceState* _deviceState;
	unsigned long long _step;
	PNPSyntheticPencilInteractionEventSource* _eventSourceForStep;
	UIPencilInteraction* _pencilInteraction;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	PNPWizardAdvanceStepButton* _advanceStepButton;
	PNPWizardScratchpadView* _scratchpadView;
	PNPPencilView* _pencilView;
	NSLayoutConstraint* _pencilViewHeightConstraint;
	NSLayoutConstraint* _scratchpadTopConstraint;
	BOOL _transitioningToNextStep;
	PNPWelcomeBuddyDescriptionView* _firstDescriptionView;
	PNPWelcomeBuddyDescriptionView* _secondDescriptionView;
	PNPWelcomeBuddyDescriptionView* _thirdDescriptionView;
	NSArray* _quickSwapViews;
	NSArray* _bulletPointViews;
	UINavigationBar* _navBar;
	UIVisualEffectView* _topTuckView;
	UIVisualEffectView* _tuckView;
	NSLayoutConstraint* _tuckViewConstraintWelcome;
	NSLayoutConstraint* _tuckViewConstraintQuickSwap;
	UIScrollView* _scrollView;
	UIView* _scrollViewContainer;
	NSLayoutConstraint* _scrollViewBottomConstraintWelcome;
	NSLayoutConstraint* _scrollViewBottomConstraintQuickSwap;
	BOOL _showsWizardContents;
	id<PNPWizardViewDelegate> _delegate;

}

@property (nonatomic,readonly) CGRect pencilViewRect; 
@property (assign,nonatomic) BOOL showsWizardContents;                               //@synthesize showsWizardContents=_showsWizardContents - In the implementation block
@property (assign,nonatomic,__weak) id<PNPWizardViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) PNPDeviceState * deviceState;                             //@synthesize deviceState=_deviceState - In the implementation block
-(id<PNPWizardViewDelegate>)delegate;
-(void)setDelegate:(id<PNPWizardViewDelegate>)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)play;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)pencilInteractionDidTap:(id)arg1 ;
-(PNPDeviceState *)deviceState;
-(void)_updateFonts;
-(void)_goBack;
-(void)setDeviceState:(PNPDeviceState *)arg1 ;
-(double)_titlePadding;
-(void)eventSource:(id)arg1 hadPencilDoubleTapped:(/*^block*/id)arg2 ;
-(void)scratchPadViewHadInteractionEvent:(id)arg1 ;
-(BOOL)scratchPadViewIsPlayingAnimation:(id)arg1 ;
-(BOOL)showsWizardContents;
-(void)_moveToStep:(unsigned long long)arg1 ;
-(void)_updateEventSource;
-(void)_advanceStep;
-(void)_setupBackButton;
-(void)_setupWelcomePaneElements;
-(CGRect)pencilViewRect;
-(void)setShowsWizardContents:(BOOL)arg1 ;
-(void)prepareForDrawing;
@end

