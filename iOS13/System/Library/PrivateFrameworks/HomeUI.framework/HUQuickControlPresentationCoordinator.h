/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <libobjc.A.dylib/HUQuickControlContainerViewControllerDelegate.h>
#import <libobjc.A.dylib/HUPresentationDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/HUCardViewControllerDelegate.h>
#import <UIKit/UIPresentationControllerDelegatePrivate.h>
#import <libobjc.A.dylib/_UIClickPresentationInteractionDelegate.h>
#import <libobjc.A.dylib/_UIClickPresentationInteractionDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <libobjc.A.dylib/_UISheetPresentationControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UITraitEnvironment.h>

@protocol HUQuickControlPresentationCoordinatorDelegate, NACancelable;
@class UITraitCollection, HUCardViewController, HUQuickControlPresentationContext, HUQuickControlContainerViewController, HUGridServiceCell, UIView, HUQuickControlNavigationController, HUItemTableViewController, UITapGestureRecognizer, HUForceInterpolatedPressGestureRecognizer, NSMutableSet, NSMapTable, _UIClickPresentationInteraction, UIVisualEffectView, HUIconView, UILabel, HUGridServiceCellTextView, HUGridActionSetTitleAndDescriptionView, UIImpactFeedbackGenerator, UIViewController, HUPressedItemContext, NSString;

@interface HUQuickControlPresentationCoordinator : NSObject <HUQuickControlContainerViewControllerDelegate, HUPresentationDelegate, UIGestureRecognizerDelegate, HUCardViewControllerDelegate, UIPresentationControllerDelegatePrivate, _UIClickPresentationInteractionDelegate, _UIClickPresentationInteractionDelegate, UIViewControllerTransitioningDelegate, _UISheetPresentationControllerDelegate, UINavigationControllerDelegate, UITraitEnvironment> {

	HUCardViewController* _cardViewController;
	HUQuickControlPresentationContext* _presentationContext;
	HUQuickControlContainerViewController* _quickControlViewController;
	HUGridServiceCell* _pressedTile;
	UIView* _targetView;
	id<HUQuickControlPresentationCoordinatorDelegate> _delegate;
	HUQuickControlNavigationController* _cardNavigationController;
	HUItemTableViewController* _settingsViewController;
	UITapGestureRecognizer* _singleTapGestureRecognizer;
	UITapGestureRecognizer* _doubleTapGestureRecognizer;
	HUForceInterpolatedPressGestureRecognizer* _pressGestureRecognizer;
	NSMutableSet* _mutuallyExclusiveGestureRecognizers;
	id<NACancelable> _pressGestureActiveTimerCancellationToken;
	NSMapTable* _pressedItemContexts;
	_UIClickPresentationInteraction* _presentationInteraction;
	UIVisualEffectView* _pressedTileBlurEffectView;
	UIView* _pressedTilePrerenderedView;
	HUIconView* _transitionIconView;
	HUIconView* _transitionIconViewVibrant;
	UILabel* _transitionPrimaryLabel;
	HUGridServiceCellTextView* _transitionTextView;
	HUGridServiceCellTextView* _transitionTextViewVibrant;
	UIVisualEffectView* _transitionTextViewVibrantEffectView;
	HUGridActionSetTitleAndDescriptionView* _transitionTitleAndDescriptionView;
	UIVisualEffectView* _transitionTitleAndDescriptionVibrantEffectView;
	UILabel* _transitionSecondaryLabel;
	UIVisualEffectView* _transitionSecondaryLabelVibrantEffectView;
	UIVisualEffectView* _transitionBlurView;
	UIImpactFeedbackGenerator* _feedbackGenerator;

}

@property (nonatomic,retain) HUQuickControlPresentationContext * presentationContext;                                 //@synthesize presentationContext=_presentationContext - In the implementation block
@property (nonatomic,retain) HUQuickControlNavigationController * cardNavigationController;                           //@synthesize cardNavigationController=_cardNavigationController - In the implementation block
@property (nonatomic,retain) HUCardViewController * cardViewController;                                               //@synthesize cardViewController=_cardViewController - In the implementation block
@property (nonatomic,retain) HUQuickControlContainerViewController * quickControlViewController;                      //@synthesize quickControlViewController=_quickControlViewController - In the implementation block
@property (nonatomic,retain) HUItemTableViewController * settingsViewController;                                      //@synthesize settingsViewController=_settingsViewController - In the implementation block
@property (nonatomic,readonly) UIViewController * presentingViewController; 
@property (nonatomic,retain) UITapGestureRecognizer * singleTapGestureRecognizer;                                     //@synthesize singleTapGestureRecognizer=_singleTapGestureRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * doubleTapGestureRecognizer;                                     //@synthesize doubleTapGestureRecognizer=_doubleTapGestureRecognizer - In the implementation block
@property (nonatomic,retain) HUForceInterpolatedPressGestureRecognizer * pressGestureRecognizer;                      //@synthesize pressGestureRecognizer=_pressGestureRecognizer - In the implementation block
@property (nonatomic,readonly) NSMutableSet * mutuallyExclusiveGestureRecognizers;                                    //@synthesize mutuallyExclusiveGestureRecognizers=_mutuallyExclusiveGestureRecognizers - In the implementation block
@property (nonatomic,retain) id<NACancelable> pressGestureActiveTimerCancellationToken;                               //@synthesize pressGestureActiveTimerCancellationToken=_pressGestureActiveTimerCancellationToken - In the implementation block
@property (nonatomic,readonly) NSMapTable * pressedItemContexts;                                                      //@synthesize pressedItemContexts=_pressedItemContexts - In the implementation block
@property (nonatomic,readonly) HUPressedItemContext * activePressedItemContext; 
@property (nonatomic,retain) _UIClickPresentationInteraction * presentationInteraction;                               //@synthesize presentationInteraction=_presentationInteraction - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * pressedTileBlurEffectView;                                          //@synthesize pressedTileBlurEffectView=_pressedTileBlurEffectView - In the implementation block
@property (nonatomic,retain) UIView * pressedTilePrerenderedView;                                                     //@synthesize pressedTilePrerenderedView=_pressedTilePrerenderedView - In the implementation block
@property (nonatomic,retain) HUIconView * transitionIconView;                                                         //@synthesize transitionIconView=_transitionIconView - In the implementation block
@property (nonatomic,retain) HUIconView * transitionIconViewVibrant;                                                  //@synthesize transitionIconViewVibrant=_transitionIconViewVibrant - In the implementation block
@property (nonatomic,retain) UILabel * transitionPrimaryLabel;                                                        //@synthesize transitionPrimaryLabel=_transitionPrimaryLabel - In the implementation block
@property (nonatomic,retain) HUGridServiceCellTextView * transitionTextView;                                          //@synthesize transitionTextView=_transitionTextView - In the implementation block
@property (nonatomic,retain) HUGridServiceCellTextView * transitionTextViewVibrant;                                   //@synthesize transitionTextViewVibrant=_transitionTextViewVibrant - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * transitionTextViewVibrantEffectView;                                //@synthesize transitionTextViewVibrantEffectView=_transitionTextViewVibrantEffectView - In the implementation block
@property (nonatomic,retain) HUGridActionSetTitleAndDescriptionView * transitionTitleAndDescriptionView;              //@synthesize transitionTitleAndDescriptionView=_transitionTitleAndDescriptionView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * transitionTitleAndDescriptionVibrantEffectView;                     //@synthesize transitionTitleAndDescriptionVibrantEffectView=_transitionTitleAndDescriptionVibrantEffectView - In the implementation block
@property (nonatomic,retain) UILabel * transitionSecondaryLabel;                                                      //@synthesize transitionSecondaryLabel=_transitionSecondaryLabel - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * transitionSecondaryLabelVibrantEffectView;                          //@synthesize transitionSecondaryLabelVibrantEffectView=_transitionSecondaryLabelVibrantEffectView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * transitionBlurView;                                                 //@synthesize transitionBlurView=_transitionBlurView - In the implementation block
@property (nonatomic,retain) UIImpactFeedbackGenerator * feedbackGenerator;                                           //@synthesize feedbackGenerator=_feedbackGenerator - In the implementation block
@property (nonatomic,retain) HUGridServiceCell * pressedTile;                                                         //@synthesize pressedTile=_pressedTile - In the implementation block
@property (nonatomic,__weak,readonly) UIView * targetView;                                                            //@synthesize targetView=_targetView - In the implementation block
@property (assign,nonatomic,__weak) id<HUQuickControlPresentationCoordinatorDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (getter=isQuickControlPresented,nonatomic,readonly) BOOL quickControlIsPresented; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UITraitCollection * traitCollection; 
-(id<HUQuickControlPresentationCoordinatorDelegate>)delegate;
-(void)setDelegate:(id<HUQuickControlPresentationCoordinatorDelegate>)arg1 ;
-(UITraitCollection *)traitCollection;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(UIViewController *)presentingViewController;
-(void)setFeedbackGenerator:(UIImpactFeedbackGenerator *)arg1 ;
-(void)presentationControllerWillDismiss:(id)arg1 ;
-(UIImpactFeedbackGenerator *)feedbackGenerator;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(BOOL)_isRTL;
-(UIView *)targetView;
-(id)_sheetPresentationControllerViewForTouchContinuation:(id)arg1 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)_handlePressGesture:(id)arg1 ;
-(HUQuickControlPresentationContext *)presentationContext;
-(void)clickPresentationInteractionEnded:(id)arg1 wasCancelled:(BOOL)arg2 ;
-(id)clickPresentationInteraction:(id)arg1 presentationForPresentingViewController:(id)arg2 ;
-(BOOL)clickPresentationInteractionShouldBegin:(id)arg1 ;
-(BOOL)clickPresentationInteractionShouldPresent:(id)arg1 ;
-(id)clickPresentationInteraction:(id)arg1 previewForHighlightingAtLocation:(CGPoint)arg2 ;
-(_UIClickPresentationInteraction *)presentationInteraction;
-(void)setPresentationInteraction:(_UIClickPresentationInteraction *)arg1 ;
-(HUCardViewController *)cardViewController;
-(void)setCardViewController:(HUCardViewController *)arg1 ;
-(HUForceInterpolatedPressGestureRecognizer *)pressGestureRecognizer;
-(void)setPressGestureRecognizer:(HUForceInterpolatedPressGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)doubleTapGestureRecognizer;
-(void)_handleDoubleTapGesture:(id)arg1 ;
-(void)_handleSingleTapGesture:(id)arg1 ;
-(void)setDoubleTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setPresentationContext:(HUQuickControlPresentationContext *)arg1 ;
-(HUItemTableViewController *)settingsViewController;
-(UITapGestureRecognizer *)singleTapGestureRecognizer;
-(void)setSingleTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setSettingsViewController:(HUItemTableViewController *)arg1 ;
-(id)dismissQuickControlAnimated:(BOOL)arg1 wasDismissed:(BOOL*)arg2 ;
-(BOOL)isQuickControlPresented;
-(id)presentQuickControlWithContext:(id)arg1 animated:(BOOL)arg2 ;
-(id)finishPresentation:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithTargetView:(id)arg1 delegate:(id)arg2 ;
-(void)addMutuallyExclusiveGestureRecognizer:(id)arg1 ;
-(void)setPressedTile:(HUGridServiceCell *)arg1 ;
-(void)_prepareForTapticFeedback;
-(HUQuickControlContainerViewController *)quickControlViewController;
-(void)_actuateTapticFeedback;
-(id)cardViewControllerRequestingDismissal:(id)arg1 ;
-(BOOL)hasDetailsActionForQuickControlViewController:(id)arg1 item:(id)arg2 ;
-(double)quickControlViewController:(id)arg1 sourceViewInitialScaleForPresentation:(BOOL)arg2 ;
-(id)quickControlViewController:(id)arg1 applierForSourceViewTransitionWithAnimationSettings:(id)arg2 presenting:(BOOL)arg3 ;
-(id)detailsViewControllerForQuickControlViewController:(id)arg1 item:(id)arg2 ;
-(void)quickControlViewControllerWillDismissDetailsViewController:(id)arg1 shouldDismissQuickControl:(BOOL)arg2 ;
-(void)quickControlViewControllerDidTapDetailsButton:(id)arg1 ;
-(void)_installGestureRecognizer;
-(NSMapTable *)pressedItemContexts;
-(void)_validatePresentationContext:(id)arg1 ;
-(NSMutableSet *)mutuallyExclusiveGestureRecognizers;
-(void)_handleMutuallyExclusiveGesture:(id)arg1 ;
-(void)_configureInitialStateForPressedItemContext:(id)arg1 userInitiated:(BOOL)arg2 ;
-(id)_createPressedContextForItem:(id)arg1 userInitiated:(BOOL)arg2 ;
-(void)_initiateProgrammaticBounceForItem:(id)arg1 ;
-(id)_gestureInstallationView;
-(void)_preparePressedItemContextForItem:(id)arg1 startApplier:(BOOL)arg2 ;
-(void)_pressGestureDidBeginWithLocation:(CGPoint)arg1 ;
-(void)_pressGestureDidEnd:(BOOL)arg1 ;
-(void)_pressGestureDidBecomeActive;
-(void)setPressGestureActiveTimerCancellationToken:(id<NACancelable>)arg1 ;
-(id<NACancelable>)pressGestureActiveTimerCancellationToken;
-(HUPressedItemContext *)activePressedItemContext;
-(HUGridServiceCell *)pressedTile;
-(id)_beginControlPresentationAnimated:(BOOL)arg1 ;
-(void)_updateOverrideAttributesWithScale:(double)arg1 forItem:(id)arg2 ;
-(void)removeAllTransitionSubviews;
-(BOOL)isTileOff;
-(void)setPressedTileBlurEffectView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)pressedTileBlurEffectView;
-(HUQuickControlNavigationController *)cardNavigationController;
-(void)setPressedTilePrerenderedView:(UIView *)arg1 ;
-(UIView *)pressedTilePrerenderedView;
-(void)setTransitionBlurView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)transitionBlurView;
-(void)setTransitionIconView:(HUIconView *)arg1 ;
-(BOOL)isActionSetTile;
-(HUIconView *)transitionIconView;
-(unsigned long long)iconSizeInActionSetTile;
-(CGRect)iconFrameInActionSetTile;
-(unsigned long long)iconSizeInTile;
-(CGRect)iconFrameInTile;
-(void)setTransitionIconViewVibrant:(HUIconView *)arg1 ;
-(HUIconView *)transitionIconViewVibrant;
-(void)setTransitionPrimaryLabel:(UILabel *)arg1 ;
-(UILabel *)transitionPrimaryLabel;
-(CGRect)primaryLabelFrameInActionSetTile;
-(CGRect)primaryLabelFrameInTile;
-(void)setTransitionSecondaryLabel:(UILabel *)arg1 ;
-(UILabel *)transitionSecondaryLabel;
-(CGRect)secondaryLabelFrameInActionSetTile;
-(CGRect)secondaryLabelFrameInTile;
-(void)_createTransitionViewsForPresentation;
-(unsigned long long)iconSizeInNavigationBar;
-(CGRect)iconFrameInNavigationBar;
-(CGRect)primaryLabelFrameInNavigationBar;
-(CGRect)secondaryLabelFrameInNavigationBar;
-(void)setTransitionTitleAndDescriptionVibrantEffectView:(UIVisualEffectView *)arg1 ;
-(CGRect)titleAndDescriptionViewFrameInActionSetTile;
-(UIVisualEffectView *)transitionTitleAndDescriptionVibrantEffectView;
-(void)setTransitionTitleAndDescriptionView:(HUGridActionSetTitleAndDescriptionView *)arg1 ;
-(HUGridActionSetTitleAndDescriptionView *)transitionTitleAndDescriptionView;
-(void)setTransitionTextView:(HUGridServiceCellTextView *)arg1 ;
-(HUGridServiceCellTextView *)transitionTextView;
-(void)setTransitionTextViewVibrant:(HUGridServiceCellTextView *)arg1 ;
-(HUGridServiceCellTextView *)transitionTextViewVibrant;
-(void)setTransitionTextViewVibrantEffectView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)transitionTextViewVibrantEffectView;
-(void)setTransitionSecondaryLabelVibrantEffectView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)transitionSecondaryLabelVibrantEffectView;
-(void)_createTransitionViewsForDismissal;
-(void)_restoreOriginalTile;
-(void)_cleanupForQuickControlDismissal;
-(void)_pressedStateDidEndForItem:(id)arg1 clearPresentationContext:(BOOL)arg2 ;
-(void)_updateOverrideAttributesWithTransform:(CGAffineTransform)arg1 alpha:(double)arg2 forItem:(id)arg3 ;
-(BOOL)_allowsCardPresentationWithOnlySettings;
-(BOOL)_shouldCancelPresentation;
-(void)_logUserMetricsAfterPress;
-(void)setQuickControlViewController:(HUQuickControlContainerViewController *)arg1 ;
-(id)_prepareSettingsViewController;
-(void)setCardNavigationController:(HUQuickControlNavigationController *)arg1 ;
-(id)dismissQuickControlAnimated:(BOOL)arg1 ;
-(id)_dismissQuickControlViewControllerAnimated:(BOOL)arg1 ;
-(id)_dismissChildViewController;
-(id)_dismissServiceDetailsViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)_dismissCardViewController;
-(void)removeMutuallyExclusiveGestureRecognizer:(id)arg1 ;
-(void)playBounceForItem:(id)arg1 ;
-(BOOL)shouldDismissWholePresentationHierarchy;
@end

