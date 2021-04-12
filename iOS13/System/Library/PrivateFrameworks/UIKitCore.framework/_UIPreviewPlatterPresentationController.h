/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIPresentationController.h>
#import <UIKitCore/_UIContextMenuActionsListViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKitCore/_UIPreviewPlatterPanControllerDelegate.h>

@class UIView, UIVisualEffectView, _UIPreviewPlatterView, _UIContextMenuActionsListView, NSArray, _UIContextMenuLayoutArbiterOutput, _UIFulfilledContextMenuConfiguration, UITapGestureRecognizer, UIPanGestureRecognizer, UITargetedPreview, _UIPreviewPlatterPanController, _UIContextMenuLayoutArbiter, _UIContextMenuStyle, NSString;

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
	UIPanGestureRecognizer* _actionScrubbingHandoffGestureRecognizer;
	UITargetedPreview* _sourcePreview;
	_UIPreviewPlatterPanController* _platterPanController;
	_UIContextMenuLayoutArbiter* _layoutArbiter;
	_UIContextMenuStyle* _currentStyle;
	CGSize _platterContentSize;

}

@property (nonatomic,retain) UITapGestureRecognizer * platterActionTapGestureRecognizer;                       //@synthesize platterActionTapGestureRecognizer=_platterActionTapGestureRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * dismissalTapGestureRecognizer;                           //@synthesize dismissalTapGestureRecognizer=_dismissalTapGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * actionScrubbingHandoffGestureRecognizer;                 //@synthesize actionScrubbingHandoffGestureRecognizer=_actionScrubbingHandoffGestureRecognizer - In the implementation block
@property (nonatomic,retain) _UIFulfilledContextMenuConfiguration * displayedConfiguration;                    //@synthesize displayedConfiguration=_displayedConfiguration - In the implementation block
@property (nonatomic,retain) UITargetedPreview * sourcePreview;                                                //@synthesize sourcePreview=_sourcePreview - In the implementation block
@property (nonatomic,retain) _UIPreviewPlatterPanController * platterPanController;                            //@synthesize platterPanController=_platterPanController - In the implementation block
@property (nonatomic,retain) _UIContextMenuLayoutArbiter * layoutArbiter;                                      //@synthesize layoutArbiter=_layoutArbiter - In the implementation block
@property (nonatomic,copy) _UIContextMenuStyle * currentStyle;                                                 //@synthesize currentStyle=_currentStyle - In the implementation block
@property (assign,nonatomic) CGSize platterContentSize;                                                        //@synthesize platterContentSize=_platterContentSize - In the implementation block
@property (assign,nonatomic) BOOL platterContentSizeDidChange;                                                 //@synthesize platterContentSizeDidChange=_platterContentSizeDidChange - In the implementation block
@property (assign,nonatomic,__weak) id<_UIPreviewPlatterPresentationControllerDelegate> delegate; 
@property (nonatomic,readonly) UIView * platterTransitionView;                                                 //@synthesize platterTransitionView=_platterTransitionView - In the implementation block
@property (nonatomic,readonly) UIView * platterContainerView;                                                  //@synthesize platterContainerView=_platterContainerView - In the implementation block
@property (nonatomic,readonly) UIVisualEffectView * backgroundEffectView;                                      //@synthesize backgroundEffectView=_backgroundEffectView - In the implementation block
@property (nonatomic,readonly) _UIPreviewPlatterView * contentPlatterView;                                     //@synthesize contentPlatterView=_contentPlatterView - In the implementation block
@property (nonatomic,readonly) _UIContextMenuActionsListView * actionsView;                                    //@synthesize actionsView=_actionsView - In the implementation block
@property (assign,nonatomic) BOOL isAnimatingPresentation;                                                     //@synthesize isAnimatingPresentation=_isAnimatingPresentation - In the implementation block
@property (nonatomic,readonly) NSArray * accessoryViews;                                                       //@synthesize accessoryViews=_accessoryViews - In the implementation block
@property (nonatomic,readonly) _UIContextMenuLayoutArbiterOutput * currentLayout;                              //@synthesize currentLayout=_currentLayout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(long long)presentationStyle;
-(void)previewActionsView:(id)arg1 didSelectAction:(id)arg2 ;
-(void)_testing_tapAnAction;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)presentationTransitionWillBegin;
-(BOOL)_shouldOccludeDuringPresentation;
-(void)setSourcePreview:(UITargetedPreview *)arg1 ;
-(UITargetedPreview *)sourcePreview;
-(id)_traitCollectionForChildEnvironment:(id)arg1 ;
-(_UIContextMenuLayoutArbiterOutput *)currentLayout;
-(UIEdgeInsets)_baseContentInsetsWithLeftMargin:(double*)arg1 rightMargin:(double*)arg2 ;
-(CGRect)frameOfPresentedViewInContainerView;
-(void)dismissalTransitionWillBegin;
-(_UIContextMenuActionsListView *)actionsView;
-(void)platterPanInteractionEnded:(id)arg1 ;
-(void)platterPanControllerDidSwipeDown:(id)arg1 ;
-(void)platterPanInteractionBegan:(id)arg1 ;
-(void)platterPanControllerDidTearOff:(id)arg1 ;
-(NSArray *)accessoryViews;
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
-(BOOL)_shouldKeepCurrentFirstResponder;
-(BOOL)_shouldDisableInteractionDuringTransitions;
-(void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1 ;
-(BOOL)_shouldRestoreFirstResponder;
-(BOOL)_shouldPreserveFirstResponder;
-(void)_updatePresentedViewFrame;
-(UIView *)platterContainerView;
-(UIView *)platterTransitionView;
-(void)setCurrentStyle:(_UIContextMenuStyle *)arg1 ;
-(_UIContextMenuStyle *)currentStyle;
-(UIVisualEffectView *)backgroundEffectView;
-(void)setIsAnimatingPresentation:(BOOL)arg1 ;
-(_UIPreviewPlatterView *)contentPlatterView;
-(id)_actionsOnlyViewControllerForSourcePreview:(id)arg1 ;
-(void)setDisplayedConfiguration:(_UIFulfilledContextMenuConfiguration *)arg1 ;
-(CGSize)platterContentSize;
-(void)_createActionsViewIfNecessary;
-(void)setPlatterPanController:(_UIPreviewPlatterPanController *)arg1 ;
-(_UIPreviewPlatterPanController *)platterPanController;
-(void)_handleDismissalTapGesture:(id)arg1 ;
-(void)setDismissalTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)_handleActionHandoffGesture:(id)arg1 ;
-(void)setActionScrubbingHandoffGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(void)_updatePlatterContentSizeWithPreferredContentSize:(CGSize)arg1 ;
-(void)_updatePlatterContainerViewTraitCollection;
-(void)setLayoutArbiter:(_UIContextMenuLayoutArbiter *)arg1 ;
-(void)_handlePlatterActionTapGesture:(id)arg1 ;
-(void)setPlatterActionTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)platterActionTapGestureRecognizer;
-(void)_preDismissalTasks;
-(UITapGestureRecognizer *)dismissalTapGestureRecognizer;
-(UIPanGestureRecognizer *)actionScrubbingHandoffGestureRecognizer;
-(void)_updatePlatterAndActionViewLayoutForce:(BOOL)arg1 updateAttachment:(BOOL)arg2 ;
-(void)_updateLayoutAndAttachment:(BOOL)arg1 ;
-(_UIContextMenuLayoutArbiter *)layoutArbiter;
-(void)_updateActionsViewReversesOrderForAttachment:(unsigned long long)arg1 ;
-(void)setPlatterContentSize:(CGSize)arg1 ;
-(void)setPlatterContentSizeDidChange:(BOOL)arg1 ;
-(BOOL)platterContentSizeDidChange;
-(BOOL)isAnimatingPresentation;
-(_UIFulfilledContextMenuConfiguration *)displayedConfiguration;
-(void)setDisplayedMenu:(id)arg1 withAnimationStyle:(unsigned long long)arg2 ;
-(id)initWithPresentingViewController:(id)arg1 configuration:(id)arg2 sourcePreview:(id)arg3 style:(id)arg4 ;
-(void)tearOffForDraggingWithDragContainerView:(id)arg1 ;
-(void)_testing_dismissByTappingOutside;
@end

