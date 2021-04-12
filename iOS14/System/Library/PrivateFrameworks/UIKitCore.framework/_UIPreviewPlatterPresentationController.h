/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIPresentationController.h>
#import <UIKitCore/_UIContextMenuActionsListViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKitCore/_UIPreviewPlatterPanControllerDelegate.h>

@class UIView, UIVisualEffectView, _UIPreviewPlatterView, _UIContextMenuActionsListView, NSArray, _UIContextMenuLayoutArbiterOutput, _UIFulfilledContextMenuConfiguration, UITapGestureRecognizer, _UIContextMenuActionScrubbingHandoffGestureRecognizer, UITargetedPreview, _UIPreviewPlatterPanController, _UIContextMenuLayoutArbiter, _UIContextMenuStyle, NSString;

@interface _UIPreviewPlatterPresentationController : UIPresentationController <_UIContextMenuActionsListViewDelegate, UIGestureRecognizerDelegate, _UIPreviewPlatterPanControllerDelegate> {

	BOOL _isAnimatingPresentation;
	BOOL _platterContentSizeDidChange;
	UIView* _platterContainerView;
	UIView* _platterTransitionView;
	UIVisualEffectView* _backgroundEffectView;
	_UIPreviewPlatterView* _contentPlatterView;
	_UIContextMenuActionsListView* _actionsView;
	NSArray* _accessoryViews;
	_UIContextMenuLayoutArbiterOutput* _currentLayout;
	_UIFulfilledContextMenuConfiguration* _displayedConfiguration;
	UITapGestureRecognizer* _platterActionTapGestureRecognizer;
	UITapGestureRecognizer* _dismissalTapGestureRecognizer;
	_UIContextMenuActionScrubbingHandoffGestureRecognizer* _actionScrubbingHandoffGestureRecognizer;
	UITargetedPreview* _sourcePreview;
	_UIPreviewPlatterPanController* _platterPanController;
	_UIContextMenuLayoutArbiter* _layoutArbiter;
	_UIContextMenuStyle* _currentStyle;
	CGSize _platterContentSize;

}

@property (nonatomic,retain) UITapGestureRecognizer * platterActionTapGestureRecognizer;                                                   //@synthesize platterActionTapGestureRecognizer=_platterActionTapGestureRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * dismissalTapGestureRecognizer;                                                       //@synthesize dismissalTapGestureRecognizer=_dismissalTapGestureRecognizer - In the implementation block
@property (nonatomic,retain) _UIContextMenuActionScrubbingHandoffGestureRecognizer * actionScrubbingHandoffGestureRecognizer;              //@synthesize actionScrubbingHandoffGestureRecognizer=_actionScrubbingHandoffGestureRecognizer - In the implementation block
@property (nonatomic,retain) _UIFulfilledContextMenuConfiguration * displayedConfiguration;                                                //@synthesize displayedConfiguration=_displayedConfiguration - In the implementation block
@property (nonatomic,retain) UITargetedPreview * sourcePreview;                                                                            //@synthesize sourcePreview=_sourcePreview - In the implementation block
@property (nonatomic,retain) _UIPreviewPlatterPanController * platterPanController;                                                        //@synthesize platterPanController=_platterPanController - In the implementation block
@property (nonatomic,retain) _UIContextMenuLayoutArbiter * layoutArbiter;                                                                  //@synthesize layoutArbiter=_layoutArbiter - In the implementation block
@property (nonatomic,copy) _UIContextMenuStyle * currentStyle;                                                                             //@synthesize currentStyle=_currentStyle - In the implementation block
@property (assign,nonatomic) CGSize platterContentSize;                                                                                    //@synthesize platterContentSize=_platterContentSize - In the implementation block
@property (assign,nonatomic) BOOL platterContentSizeDidChange;                                                                             //@synthesize platterContentSizeDidChange=_platterContentSizeDidChange - In the implementation block
@property (assign,nonatomic,__weak) id<_UIPreviewPlatterPresentationControllerDelegate> delegate; 
@property (nonatomic,readonly) UIView * platterTransitionView;                                                                             //@synthesize platterTransitionView=_platterTransitionView - In the implementation block
@property (nonatomic,readonly) UIView * platterContainerView;                                                                              //@synthesize platterContainerView=_platterContainerView - In the implementation block
@property (nonatomic,readonly) UIVisualEffectView * backgroundEffectView;                                                                  //@synthesize backgroundEffectView=_backgroundEffectView - In the implementation block
@property (nonatomic,readonly) _UIPreviewPlatterView * contentPlatterView;                                                                 //@synthesize contentPlatterView=_contentPlatterView - In the implementation block
@property (nonatomic,readonly) _UIContextMenuActionsListView * actionsView;                                                                //@synthesize actionsView=_actionsView - In the implementation block
@property (assign,nonatomic) BOOL isAnimatingPresentation;                                                                                 //@synthesize isAnimatingPresentation=_isAnimatingPresentation - In the implementation block
@property (nonatomic,readonly) NSArray * accessoryViews;                                                                                   //@synthesize accessoryViews=_accessoryViews - In the implementation block
@property (nonatomic,readonly) _UIContextMenuLayoutArbiterOutput * currentLayout;                                                          //@synthesize currentLayout=_currentLayout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_actionsOnlyViewControllerForSourcePreview:(id)arg1 ;
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
-(CGRect)frameOfPresentedViewInContainerView;
-(void)_applicationWillResignActive:(id)arg1 ;
-(id)_traitCollectionForChildEnvironment:(id)arg1 ;
-(long long)presentationStyle;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)dismissalTransitionWillBegin;
-(id)_parentTraitEnvironment;
-(_UIContextMenuLayoutArbiterOutput *)currentLayout;
-(UIView *)platterContainerView;
-(UIView *)platterTransitionView;
-(BOOL)_shouldDisableInteractionDuringTransitions;
-(void)setIsAnimatingPresentation:(BOOL)arg1 ;
-(_UIPreviewPlatterView *)contentPlatterView;
-(BOOL)_shouldKeepCurrentFirstResponder;
-(id)contextMenuListView:(id)arg1 willDisplayMenu:(id)arg2 ;
-(void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)contextMenuListView:(id)arg1 didSelectElement:(id)arg2 ;
-(_UIContextMenuStyle *)currentStyle;
-(void)_updatePresentedViewFrame;
-(void)_keyboardWillShow:(id)arg1 ;
-(UIEdgeInsets)_baseContentInsetsWithLeftMargin:(double*)arg1 rightMargin:(double*)arg2 ;
-(_UIContextMenuActionsListView *)actionsView;
-(BOOL)_shouldRestoreFirstResponder;
-(void)platterPanInteractionEnded:(id)arg1 ;
-(void)platterPanControllerDidSwipeDown:(id)arg1 ;
-(void)platterPanInteractionBegan:(id)arg1 ;
-(void)platterPanControllerDidTearOff:(id)arg1 ;
-(BOOL)_shouldOccludeDuringPresentation;
-(BOOL)_shouldPreserveFirstResponder;
-(UITargetedPreview *)sourcePreview;
-(void)_keyboardWillHide:(id)arg1 ;
-(_UIContextMenuLayoutArbiter *)layoutArbiter;
-(CGSize)platterContentSize;
-(NSArray *)accessoryViews;
-(void)setDisplayedConfiguration:(_UIFulfilledContextMenuConfiguration *)arg1 ;
-(void)_createActionsViewIfNecessary;
-(void)setPlatterPanController:(_UIPreviewPlatterPanController *)arg1 ;
-(_UIPreviewPlatterPanController *)platterPanController;
-(void)_preDismissalTasks;
-(void)_handleDismissalTapGesture:(id)arg1 ;
-(void)setDismissalTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)_handleActionHandoffGesture:(id)arg1 ;
-(void)setActionScrubbingHandoffGestureRecognizer:(_UIContextMenuActionScrubbingHandoffGestureRecognizer *)arg1 ;
-(void)_updatePlatterContentSizeWithPreferredContentSize:(CGSize)arg1 ;
-(void)setLayoutArbiter:(_UIContextMenuLayoutArbiter *)arg1 ;
-(void)_updatePlatterContainerViewTraitCollection;
-(UITapGestureRecognizer *)dismissalTapGestureRecognizer;
-(void)_handlePlatterActionTapGesture:(id)arg1 ;
-(void)setPlatterActionTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)platterActionTapGestureRecognizer;
-(_UIFulfilledContextMenuConfiguration *)displayedConfiguration;
-(_UIContextMenuActionScrubbingHandoffGestureRecognizer *)actionScrubbingHandoffGestureRecognizer;
-(BOOL)_needsToAvoidKeyboard;
-(void)_updatePlatterAndActionViewLayoutForce:(BOOL)arg1 updateAttachment:(BOOL)arg2 ;
-(void)_updateLayoutAndAttachment:(BOOL)arg1 ;
-(void)setPlatterContentSizeDidChange:(BOOL)arg1 ;
-(void)_updateActionsViewReversesOrderForAttachment:(unsigned long long)arg1 ;
-(void)setPlatterContentSize:(CGSize)arg1 ;
-(BOOL)platterContentSizeDidChange;
-(BOOL)isAnimatingPresentation;
-(void)setDisplayedMenu:(id)arg1 withAnimationStyle:(unsigned long long)arg2 ;
-(void)_testing_dismissByTappingOutside;
-(id)initWithPresentingViewController:(id)arg1 configuration:(id)arg2 sourcePreview:(id)arg3 style:(id)arg4 ;
-(void)tearOffForDraggingWithDragContainerView:(id)arg1 ;
-(void)presentationTransitionWillBegin;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_testing_tapAnAction;
-(void)setSourcePreview:(UITargetedPreview *)arg1 ;
-(UIVisualEffectView *)backgroundEffectView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)dealloc;
-(void)setCurrentStyle:(_UIContextMenuStyle *)arg1 ;
@end

