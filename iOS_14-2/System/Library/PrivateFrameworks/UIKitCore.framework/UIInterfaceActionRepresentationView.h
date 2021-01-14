/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIFocusEnvironment.h>
#import <UIKit/UISpringLoadedInteractionSupporting.h>
#import <UIKit/UIInterfaceActionDisplayPropertyObserver.h>

@protocol UIInterfaceActionVisualBackgroundDisplaying;
@class NSArray, UIView, NSString, UIInterfaceAction, NSLayoutConstraint, UISpringLoadedInteraction, UIInterfaceActionVisualStyle;

@interface UIInterfaceActionRepresentationView : UIView <UIFocusEnvironment, UISpringLoadedInteractionSupporting, UIInterfaceActionDisplayPropertyObserver> {

	BOOL _hasLoadedBackgroundView;
	BOOL _canKeepContentsInHierarchy;
	BOOL _hasLoadedContentFirstTime;
	BOOL _enforcedCanRemoveContentFromHierarchyWhenNotVisible;
	BOOL _enforcedCanRemoveContentFromHierarchyWhenNotVisibleValue;
	BOOL _contentsInsertedIntoViewHierarchy;
	BOOL _ownsActionContent;
	BOOL _highlighted;
	BOOL _pressed;
	BOOL _canRemoveContentFromHierarchyWhenNotVisible;
	UIInterfaceAction* _action;
	unsigned long long _visualCornerPosition;
	id _actionViewStateContext;
	UIView*<UIInterfaceActionVisualBackgroundDisplaying> _backgroundHighlightView;
	NSLayoutConstraint* _minimumWidthConstraint;
	NSLayoutConstraint* _minimumHeightConstraint;
	NSArray* _viewsToDisappearWhenHighlighted;
	NSString* _sectionID;
	UISpringLoadedInteraction* _interactionForSpringLoading;

}

@property (nonatomic,readonly) UIView*<UIInterfaceActionVisualBackgroundDisplaying> backgroundHighlightView;                     //@synthesize backgroundHighlightView=_backgroundHighlightView - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * minimumWidthConstraint;                                                      //@synthesize minimumWidthConstraint=_minimumWidthConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * minimumHeightConstraint;                                                     //@synthesize minimumHeightConstraint=_minimumHeightConstraint - In the implementation block
@property (nonatomic,retain) NSArray * viewsToDisappearWhenHighlighted;                                                          //@synthesize viewsToDisappearWhenHighlighted=_viewsToDisappearWhenHighlighted - In the implementation block
@property (assign,nonatomic) BOOL canRemoveContentFromHierarchyWhenNotVisible;                                                   //@synthesize canRemoveContentFromHierarchyWhenNotVisible=_canRemoveContentFromHierarchyWhenNotVisible - In the implementation block
@property (nonatomic,retain) NSString * sectionID;                                                                               //@synthesize sectionID=_sectionID - In the implementation block
@property (assign,setter=_setContentsInsertedIntoViewHierarchy:,nonatomic) BOOL _contentsInsertedIntoViewHierarchy;              //@synthesize contentsInsertedIntoViewHierarchy=_contentsInsertedIntoViewHierarchy - In the implementation block
@property (nonatomic,retain) UISpringLoadedInteraction * interactionForSpringLoading;                                            //@synthesize interactionForSpringLoading=_interactionForSpringLoading - In the implementation block
@property (nonatomic,readonly) UIInterfaceAction * action;                                                                       //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) UIInterfaceActionVisualStyle * visualStyle; 
@property (assign,nonatomic) BOOL ownsActionContent;                                                                             //@synthesize ownsActionContent=_ownsActionContent - In the implementation block
@property (assign,nonatomic) unsigned long long visualCornerPosition;                                                            //@synthesize visualCornerPosition=_visualCornerPosition - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;                                                              //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,getter=isPressed,nonatomic) BOOL pressed;                                                                      //@synthesize pressed=_pressed - In the implementation block
@property (nonatomic,retain) id actionViewStateContext;                                                                          //@synthesize actionViewStateContext=_actionViewStateContext - In the implementation block
@property (nonatomic,copy,readonly) NSArray * preferredFocusEnvironments; 
@property (nonatomic,__weak,readonly) id<UIFocusEnvironment> parentFocusEnvironment; 
@property (nonatomic,readonly) id<UIFocusItemContainer> focusItemContainer; 
@property (nonatomic,__weak,readonly) UIView * preferredFocusedView; 
@property (nonatomic,copy,readonly) NSString * focusGroupIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isSpringLoaded,nonatomic) BOOL springLoaded; 
-(BOOL)canBecomeFocused;
-(UIInterfaceActionVisualStyle *)visualStyle;
-(void)setSectionID:(NSString *)arg1 ;
-(void)layoutMarginsDidChange;
-(void)_enforceActionRepresentationViewsCanRemoveContentFromHierarchyWhenNotVisible:(BOOL)arg1 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(BOOL)_fittingContentViewHasItsOwnActiveMinimumSizeConstraintsWithSize:(CGSize)arg1 ;
-(void)setPressed:(BOOL)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)_updateLoadedContentsHierarchyByInsertingOrRemovingIfNecessary;
-(CGSize)intrinsicContentSize;
-(NSString *)sectionID;
-(unsigned long long)visualCornerPosition;
-(void)_setHorizontalMargins:(UIEdgeInsets)arg1 preservesSuperviewLayoutMargins:(BOOL)arg2 ;
-(void)_applyVisualStyleToBackgroundViewAndHighlighting;
-(void)_removeLoadedContentsFromHierarchyIfNotVisible;
-(void)_applyVisualStyleToMinimumSizeConstraints;
-(BOOL)_shouldShowPressFeedbackForEventWithPresses:(id)arg1 ;
-(id)_systemDefaultFocusGroupDescriptor;
-(id)actionViewStateContext;
-(BOOL)canRemoveContentFromHierarchyWhenNotVisible;
-(void)setCanRemoveContentFromHierarchyWhenNotVisible:(BOOL)arg1 ;
-(void)_loadContentsIntoHierarchyAndPrepareIfNecessary;
-(void)_updateFittingContentSizingViewToFitSize;
-(id)initWithAction:(id)arg1 ;
-(CGSize)_fittingContentSizeWithFittingViewSize:(CGSize)arg1 ;
-(CGRect)_fittingContentSizingViewFrameInBounds:(CGRect)arg1 ;
-(UIInterfaceAction *)action;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(id)__fittingContentSizingViewAllowingSelf;
-(BOOL)_handleVisualFeedbackForPress:(id)arg1 pressed:(BOOL)arg2 ;
-(void)_addLoadedContentsToHierarchyFirstTime;
-(void)_addLoadedContentsToHierarchyIfAllowed;
-(void)_setContentsInsertedIntoViewHierarchy:(BOOL)arg1 ;
-(void)_updateHighlightAndPressedFeedback;
-(BOOL)_contentsInsertedIntoViewHierarchy;
-(UIEdgeInsets)_fittingContentSizingViewMargins;
-(void)_didScroll;
-(void)_applyVisualStyleToLayoutMargins;
-(id)__fittingContentSizingViewIfNotSelf;
-(BOOL)_isVisibleWithinContainmentAncestor;
-(void)_initializeHorizontalMarginsForAction;
-(void)setViewsToDisappearWhenHighlighted:(NSArray *)arg1 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)isFocused;
-(NSString *)description;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)loadContents;
-(id)_fittingContentSizingView;
-(void)_showVisualFeedbackForPressed:(BOOL)arg1 ;
-(void)_reloadBackgroundHighlightView;
-(void)interfaceAction:(id)arg1 reloadDisplayedContentActionProperties:(id)arg2 ;
-(void)setInteractionForSpringLoading:(UISpringLoadedInteraction *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSArray *)viewsToDisappearWhenHighlighted;
-(void)invalidateIntrinsicContentSize;
-(BOOL)_canLoadContentsIntoHierarchy;
-(BOOL)isHighlighted;
-(BOOL)isPressed;
-(BOOL)isSpringLoaded;
-(UISpringLoadedInteraction *)interactionForSpringLoading;
-(void)setSpringLoaded:(BOOL)arg1 ;
-(id)_viewDisplayingBackground;
-(id)_actionViewState;
-(void)_clearBackgroundPressedState;
-(BOOL)hasLayoutHeightConstraintsIdenticalToRepresentationView:(id)arg1 ;
-(void)setOwnsActionContent:(BOOL)arg1 ;
-(BOOL)ownsActionContent;
-(void)setActionViewStateContext:(id)arg1 ;
-(void)interfaceAction:(id)arg1 reloadDisplayedContentVisualStyle:(id)arg2 ;
-(void)invokeInterfaceAction;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)_showsFocusForFocusedView:(id)arg1 ;
-(void)_applyVisualStyle;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)updateContentsInsertedIntoHierarchy;
-(void)setVisualCornerPosition:(unsigned long long)arg1 ;
-(UIView*<UIInterfaceActionVisualBackgroundDisplaying>)backgroundHighlightView;
-(NSLayoutConstraint *)minimumWidthConstraint;
-(void)dealloc;
-(void)setHighlighted:(BOOL)arg1 ;
-(NSLayoutConstraint *)minimumHeightConstraint;
@end

