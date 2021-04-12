/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegatePrivate.h>
#import <UIKitCore/_UIInterfaceActionPresenting.h>
#import <UIKit/UIInterfaceActionGroupDisplayPropertyObserver.h>
#import <UIKit/UIInterfaceActionGroupDisplaying.h>
#import <UIKit/UISpringLoadedInteractionSupporting.h>

@protocol UIInterfaceActionVisualStyleProviding, UIInterfaceActionHandlerInvocationDelegate, UISeparatorDisplaying;
@class UIInterfaceActionVisualStyle, NSString, UIInterfaceActionSelectionTrackingController, UIInterfaceActionGroup, NSArray, _UIContentConstraintsLayoutGuide, UIView, NSMutableArray, NSLayoutConstraint, NSPointerArray, _UIInterfaceActionRepresentationsSequenceView, UILongPressGestureRecognizer, UIInterfaceActionRepresentationView, UIInterfaceActionHighlightAttributes, UIInterfaceActionSeparatorAttributes, UIFont;

@interface UIInterfaceActionGroupView : UIView <UIScrollViewDelegate, UIGestureRecognizerDelegatePrivate, _UIInterfaceActionPresenting, UIInterfaceActionGroupDisplayPropertyObserver, UIInterfaceActionGroupDisplaying, UISpringLoadedInteractionSupporting> {

	BOOL _needsUpdateTopLevelViewsArrangement;
	BOOL _needsUpdateActionSequenceViewArrangement;
	BOOL _needsInitialViewLoading;
	BOOL _isSettingVisualStyle;
	UIInterfaceActionVisualStyle* _activeTestingVisualStyle;
	NSString* _cachedSizeCategory;
	BOOL _springLoaded;
	BOOL _showsSeparatorAboveActions;
	BOOL _scrubbingEnabled;
	BOOL _drawsBackground;
	BOOL _alignActionSeparatorLeadingEdgeWithContent;
	id<UIInterfaceActionVisualStyleProviding> _visualStyleProvider;
	UIInterfaceActionSelectionTrackingController* _actionSelectionController;
	UIInterfaceActionGroup* _actionGroup;
	id<UIInterfaceActionHandlerInvocationDelegate> _actionHandlerInvocationDelegate;
	long long _presentationStyle;
	NSArray* _allowedActionLayoutAxisByPriority;
	long long _actionLayoutAxis;
	UIInterfaceActionVisualStyle* _visualStyle;
	UIInterfaceActionVisualStyle* _appliedVisualStyle;
	_UIContentConstraintsLayoutGuide* _contentGuide;
	UIView* _backgroundView;
	UIView* _topLevelItemsView;
	NSArray* _topLevelViewArrangementConstraints;
	NSMutableArray* _arrangedScrollableHeaderViews;
	UIView*<UISeparatorDisplaying> _actionSequenceTopSeparatorView;
	NSLayoutConstraint* _actionSequenceViewWidthAnchoredToConstantConstraint;
	NSLayoutConstraint* _actionSequenceViewWidthAnchoredToContentGuideConstraint;
	NSPointerArray* _weakSimultaneouslyPresentedGroupViews;
	_UIInterfaceActionRepresentationsSequenceView* _actionSequenceView;
	UILongPressGestureRecognizer* _actionSelectionGestureRecognizer;
	double _requiredActionRepresentationWidth;
	UIInterfaceActionRepresentationView* _preferredActionRepresentation;
	UIInterfaceActionHighlightAttributes* _visualStyleOverrideActionHighlightAttributes;
	UIInterfaceActionSeparatorAttributes* _visualStyleOverrideSeparatorAttributes;
	UIFont* _visualStyleOverrideTitleLabelFont;
	double _selectionHighlightContinuousCornerRadius;

}

@property (nonatomic,retain) UIInterfaceActionVisualStyle * visualStyle;                                                                                                                                                   //@synthesize visualStyle=_visualStyle - In the implementation block
@property (nonatomic,retain) UIInterfaceActionVisualStyle * appliedVisualStyle;                                                                                                                                            //@synthesize appliedVisualStyle=_appliedVisualStyle - In the implementation block
@property (nonatomic,readonly) _UIContentConstraintsLayoutGuide * contentGuide;                                                                                                                                            //@synthesize contentGuide=_contentGuide - In the implementation block
@property (nonatomic,readonly) UIView * backgroundView;                                                                                                                                                                    //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) UIView * topLevelItemsView;                                                                                                                                                                 //@synthesize topLevelItemsView=_topLevelItemsView - In the implementation block
@property (nonatomic,readonly) NSArray * topLevelViewArrangementConstraints;                                                                                                                                               //@synthesize topLevelViewArrangementConstraints=_topLevelViewArrangementConstraints - In the implementation block
@property (nonatomic,readonly) NSMutableArray * arrangedScrollableHeaderViews;                                                                                                                                             //@synthesize arrangedScrollableHeaderViews=_arrangedScrollableHeaderViews - In the implementation block
@property (nonatomic,readonly) UIView*<UISeparatorDisplaying> actionSequenceTopSeparatorView;                                                                                                                              //@synthesize actionSequenceTopSeparatorView=_actionSequenceTopSeparatorView - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * actionSequenceViewWidthAnchoredToConstantConstraint;                                                                                                                   //@synthesize actionSequenceViewWidthAnchoredToConstantConstraint=_actionSequenceViewWidthAnchoredToConstantConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * actionSequenceViewWidthAnchoredToContentGuideConstraint;                                                                                                               //@synthesize actionSequenceViewWidthAnchoredToContentGuideConstraint=_actionSequenceViewWidthAnchoredToContentGuideConstraint - In the implementation block
@property (nonatomic,readonly) NSPointerArray * weakSimultaneouslyPresentedGroupViews;                                                                                                                                     //@synthesize weakSimultaneouslyPresentedGroupViews=_weakSimultaneouslyPresentedGroupViews - In the implementation block
@property (assign,nonatomic) BOOL showsSeparatorAboveActions;                                                                                                                                                              //@synthesize showsSeparatorAboveActions=_showsSeparatorAboveActions - In the implementation block
@property (nonatomic,readonly) _UIInterfaceActionRepresentationsSequenceView * actionSequenceView;                                                                                                                         //@synthesize actionSequenceView=_actionSequenceView - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * actionSelectionGestureRecognizer;                                                                                                                              //@synthesize actionSelectionGestureRecognizer=_actionSelectionGestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL scrubbingEnabled;                                                                                                                                                                        //@synthesize scrubbingEnabled=_scrubbingEnabled - In the implementation block
@property (assign,nonatomic) double requiredActionRepresentationWidth;                                                                                                                                                     //@synthesize requiredActionRepresentationWidth=_requiredActionRepresentationWidth - In the implementation block
@property (nonatomic,retain) UIInterfaceActionRepresentationView * preferredActionRepresentation;                                                                                                                          //@synthesize preferredActionRepresentation=_preferredActionRepresentation - In the implementation block
@property (nonatomic,readonly) UIInterfaceActionSelectionTrackingController * actionSelectionController;                                                                                                                   //@synthesize actionSelectionController=_actionSelectionController - In the implementation block
@property (setter=_setVisualStyleOverrideActionHighlightAttributes:,nonatomic,retain) UIInterfaceActionHighlightAttributes * visualStyleOverrideActionHighlightAttributes;                                                 //@synthesize visualStyleOverrideActionHighlightAttributes=_visualStyleOverrideActionHighlightAttributes - In the implementation block
@property (setter=_setVisualStyleOverrideSeparatorAttributes:,getter=_visualStyleOverrideSeparatorAttributes,nonatomic,retain) UIInterfaceActionSeparatorAttributes * visualStyleOverrideSeparatorAttributes;              //@synthesize visualStyleOverrideSeparatorAttributes=_visualStyleOverrideSeparatorAttributes - In the implementation block
@property (setter=_setVisualStyleOverrideTitleLabelFont:,getter=_visualStyleOverrideTitleLabelFont,nonatomic,retain) UIFont * visualStyleOverrideTitleLabelFont;                                                           //@synthesize visualStyleOverrideTitleLabelFont=_visualStyleOverrideTitleLabelFont - In the implementation block
@property (assign,setter=_setDrawsBackground:,getter=_drawsBackground,nonatomic) BOOL drawsBackground;                                                                                                                     //@synthesize drawsBackground=_drawsBackground - In the implementation block
@property (assign,setter=_setSelectionHighlightContinuousCornerRadius:,getter=_selectionHighlightContinuousCornerRadius,nonatomic) double selectionHighlightContinuousCornerRadius;                                        //@synthesize selectionHighlightContinuousCornerRadius=_selectionHighlightContinuousCornerRadius - In the implementation block
@property (assign,setter=_setAlignActionSeparatorLeadingEdgeWithContent:,getter=_alignActionSeparatorLeadingEdgeWithContent,nonatomic) BOOL alignActionSeparatorLeadingEdgeWithContent;                                    //@synthesize alignActionSeparatorLeadingEdgeWithContent=_alignActionSeparatorLeadingEdgeWithContent - In the implementation block
@property (nonatomic,readonly) UIInterfaceActionGroup * actionGroup;                                                                                                                                                       //@synthesize actionGroup=_actionGroup - In the implementation block
@property (assign,nonatomic,__weak) id<UIInterfaceActionHandlerInvocationDelegate> actionHandlerInvocationDelegate;                                                                                                        //@synthesize actionHandlerInvocationDelegate=_actionHandlerInvocationDelegate - In the implementation block
@property (assign,nonatomic) long long presentationStyle;                                                                                                                                                                  //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (nonatomic,retain) NSArray * allowedActionLayoutAxisByPriority;                                                                                                                                                  //@synthesize allowedActionLayoutAxisByPriority=_allowedActionLayoutAxisByPriority - In the implementation block
@property (nonatomic,readonly) long long actionLayoutAxis;                                                                                                                                                                 //@synthesize actionLayoutAxis=_actionLayoutAxis - In the implementation block
@property (nonatomic,readonly) NSArray * arrangedHeaderViews; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<UIInterfaceActionVisualStyleProviding> visualStyleProvider;                                                                                                                         //@synthesize visualStyleProvider=_visualStyleProvider - In the implementation block
@property (assign,getter=isSpringLoaded,nonatomic) BOOL springLoaded;                                                                                                                                                      //@synthesize springLoaded=_springLoaded - In the implementation block
-(UIInterfaceActionVisualStyle *)visualStyle;
-(long long)presentationStyle;
-(void)setVisualStyle:(UIInterfaceActionVisualStyle *)arg1 ;
-(void)_commonInitWithActionGroup:(id)arg1 visualStyleProvider:(id)arg2 actionHandlerInvocationDelegate:(id)arg3 ;
-(id)_initWithActionGroup:(id)arg1 visualStyleProvider:(id)arg2 actionHandlerInvocationDelegate:(id)arg3 ;
-(id)preferredFocusedView;
-(void)interfaceActionGroup:(id)arg1 reloadDisplayedContentActionGroupProperties:(id)arg2 ;
-(id)_visualStyleByApplyingOurTraitsToVisualStyle:(id)arg1 traitCollection:(id)arg2 ;
-(void)_associateWeakSimultaneouslyPresentedGroupViews:(id)arg1 bidirectional:(BOOL)arg2 ;
-(id)_alertController;
-(void)_removeConstraintToActiveTopLevelViewArrangementConstraints:(id)arg1 ;
-(void)interfaceActionGroup:(id)arg1 reloadDisplayedContentVisualStyle:(id)arg2 ;
-(NSLayoutConstraint *)actionSequenceViewWidthAnchoredToContentGuideConstraint;
-(void)_scrollActionRepresentationViewToVisibleForAction:(id)arg1 animated:(BOOL)arg2 ;
-(void)_addConstraintToActiveTopLevelViewArrangementConstraints:(id)arg1 ;
-(void)_scrollPreferredActionRepresentationViewToVisibleAnimated:(BOOL)arg1 ;
-(void)_setVisualStyleOverrideActionHighlightAttributes:(id)arg1 ;
-(void)_removeUsAsThePresentingViewControllerForAllActions;
-(id)initWithActionGroup:(id)arg1 actionHandlerInvocationDelegate:(id)arg2 ;
-(NSLayoutConstraint *)actionSequenceViewWidthAnchoredToConstantConstraint;
-(id)_widthAnchoredToContentGuideConstraintForTopLevelView:(id)arg1 ;
-(void)setPresentationStyle:(long long)arg1 ;
-(void)_updateRequiredActionRepresentationSizeConstraints;
-(BOOL)_shouldAllowPassthroughToLayersBehindUsForTouches:(id)arg1 ;
-(CGRect)_actionSequenceVisibleRectForMakingCenteredAction:(id)arg1 ;
-(void)_setUsAsThePresentingViewControllerForAllActions;
-(void)_updateActionSequenceViewDebugLayoutIdentifier;
-(void)configureForPresentAlongsideTransitionCoordinator:(id)arg1 ;
-(void)configureForDismissAlongsideTransitionCoordinator:(id)arg1 ;
-(void)_updateActionSequenceViewActionLayoutAxis;
-(double)_selectionHighlightContinuousCornerRadius;
-(void)_setNeedsUpdateActionSequenceViewArrangement;
-(BOOL)_shouldShowSeparatorAboveActionsSequenceView;
-(BOOL)_actionLayoutAxisUnknownDisallowedIsVertical;
-(UIInterfaceActionHighlightAttributes *)visualStyleOverrideActionHighlightAttributes;
-(void)insertArrangedHeaderView:(id)arg1 atIndex:(unsigned long long)arg2 scrollable:(BOOL)arg3 ;
-(UIView *)backgroundView;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)interfaceAction:(id)arg1 invokeActionHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_alignActionSeparatorLeadingEdgeWithContent;
-(void)_setAlignActionSeparatorLeadingEdgeWithContent:(BOOL)arg1 ;
-(void)_setVisualStyleOverrideSeparatorAttributes:(id)arg1 ;
-(void)_applyVisualStyleToActionsViewScrollView;
-(void)_applyVisualStyleToBackgroundViewDisplay;
-(id)_constraintsToPinView:(id)arg1 toObject:(id)arg2 identifier:(id)arg3 ;
-(void)_setNeedsUpdateTopLevelViewsArrangement;
-(void)_arrangeActionViewsInActionSequenceView;
-(void)_updateRoundedCornerPositionForSubviews;
-(BOOL)_shouldInstallContentGuideConstraints;
-(void)_actionSequenceViewContentSizeDidChange;
-(id)_visualStyleOverrideSeparatorAttributes;
-(id)_defaultOrderingForActionRepresentationViews:(id)arg1 ;
-(id)_newSeparatorViewForSeparatingTitleAndButtons;
-(void)_setSelectionHighlightContinuousCornerRadius:(double)arg1 ;
-(void)setActionSelectionGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(void)_setVisualStyleOverrideTitleLabelFont:(id)arg1 ;
-(UIEdgeInsets)_buttonEdgeInsetsFromGroupViewEdge;
-(void)_updateActionSequenceScrollability;
-(id)_visualStyleOverrideTitleLabelFont;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(NSArray *)topLevelViewArrangementConstraints;
-(void)_reloadStackViewContentsIfNeeded;
-(id)_viewDisplayingRoundedBackground;
-(UILongPressGestureRecognizer *)actionSelectionGestureRecognizer;
-(id)_actionRepresentationViewForAction:(id)arg1 ;
-(id)_loadVisualStyleForTraitCollection:(id)arg1 ;
-(void)setActionHandlerInvocationDelegate:(id<UIInterfaceActionHandlerInvocationDelegate>)arg1 ;
-(void)setAllowedActionLayoutAxisByPriority:(NSArray *)arg1 ;
-(void)setRequiredActionRepresentationWidth:(double)arg1 ;
-(void)setSimultaneouslyPresentedGroupViews:(id)arg1 ;
-(NSPointerArray *)weakSimultaneouslyPresentedGroupViews;
-(NSArray *)allowedActionLayoutAxisByPriority;
-(void)_addBackgroudViewToViewHierarchy:(id)arg1 ;
-(long long)_actionLayoutAxisUnknowDisallowed;
-(void)scrollToCenterForInterfaceAction:(id)arg1 ;
-(double)requiredActionRepresentationWidth;
-(void)setPreferredActionRepresentation:(UIInterfaceActionRepresentationView *)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(UIInterfaceActionGroup *)actionGroup;
-(_UIContentConstraintsLayoutGuide *)contentGuide;
-(void)layoutSubviews;
-(void)updateConstraints;
-(id)_interfaceActionGroupViewState;
-(void)setFrame:(CGRect)arg1 ;
-(void)_setDrawsBackground:(BOOL)arg1 ;
-(UIView*<UISeparatorDisplaying>)actionSequenceTopSeparatorView;
-(void)setShowsSeparatorAboveActions:(BOOL)arg1 ;
-(void)_installContentGuideConstraints;
-(id<UIInterfaceActionHandlerInvocationDelegate>)actionHandlerInvocationDelegate;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setActionLayoutAxis:(long long)arg1 ;
-(UIInterfaceActionRepresentationView *)preferredActionRepresentation;
-(NSMutableArray *)arrangedScrollableHeaderViews;
-(void)_applyVisualStyleCornerRadius;
-(BOOL)_isCornerRadiusDisplayEnabled;
-(id)_newActionGroupBackgroundView;
-(BOOL)scrubbingEnabled;
-(id)_allActionViews;
-(void)setActionGroup:(UIInterfaceActionGroup *)arg1 ;
-(BOOL)isSpringLoaded;
-(void)removeArrangedHeaderView:(id)arg1 ;
-(id)_currentlyFocusedActionView;
-(UIInterfaceActionSelectionTrackingController *)actionSelectionController;
-(void)_setAndApplyVisualStyle:(id)arg1 ;
-(BOOL)_drawsBackground;
-(BOOL)_hasLoadedStackViewContents;
-(void)setSpringLoaded:(BOOL)arg1 ;
-(id)_viewContainingTopLevelItems;
-(void)setActiveTestingVisualStyle:(id)arg1 ;
-(id)_interfaceActionOfFocusedRepresentationView;
-(void)reloadVisualStyle;
-(CGRect)_contentEdgeFrame;
-(UIView *)topLevelItemsView;
-(void)_arrangeTopLevelViews;
-(id)_orderedTopLevelViews;
-(double)_topLevelItemsMargin;
-(void)_determineActualLayoutAxis;
-(BOOL)showsSeparatorAboveActions;
-(void)_applyVisualStyle;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setScrubbingEnabled:(BOOL)arg1 ;
-(void)_loadTopLevelItemsView;
-(void)setAppliedVisualStyle:(UIInterfaceActionVisualStyle *)arg1 ;
-(long long)actionLayoutAxis;
-(NSArray *)arrangedHeaderViews;
-(id<UIInterfaceActionVisualStyleProviding>)visualStyleProvider;
-(_UIInterfaceActionRepresentationsSequenceView *)actionSequenceView;
-(void)_loadViewsIfNeeded;
-(UIInterfaceActionVisualStyle *)appliedVisualStyle;
-(id)defaultVisualStyleForTraitCollection:(id)arg1 presentationStyle:(long long)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_loadActionSequenceView;
-(void)setVisualStyleProvider:(id<UIInterfaceActionVisualStyleProviding>)arg1 ;
-(void)_reloadTopSeparatorView;
-(void)dealloc;
-(void)beginTrackingSessionByTakingOverForSystemProvidedGestureRecognizer:(id)arg1 ;
-(void)_setLayoutDebuggingIdentifier:(id)arg1 ;
@end

