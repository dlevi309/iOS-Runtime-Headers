/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIInputViewSetPlacementOwner.h>
#import <UIKit/UISplitKeyboardSource.h>
#import <UIKitCore/_UIRemoteKeyboardViewSource.h>
#import <UIKit/UIInputViewSetPlacementDelegate.h>
#import <UIKitCore/_UIRemoteKeyboardDistributedViewSource.h>

@protocol _UIRemoteKeyboardControllerDelegate, UIInputViewSetPlacementApplicator;
@class UIInputViewSetPlacement, UIInputViewSet, UIView, UIViewController, UISplitKeyboardSupport, UIScrollToDismissSupport, NSLayoutConstraint, NSMutableDictionary, UISystemKeyboardDockController, UIInputWindowControllerHosting, UIKBInputBackdropView, UIInputSetHostView, UIInputWindowController, NSString;

@interface UIInputWindowControllerHostingItem : NSObject <UIInputViewSetPlacementOwner, UISplitKeyboardSource, _UIRemoteKeyboardViewSource, UIInputViewSetPlacementDelegate, _UIRemoteKeyboardDistributedViewSource> {

	UISplitKeyboardSupport* _cachedSplitKeyboardController;
	UIScrollToDismissSupport* _cachedScrollDismissController;
	/*^block*/id _interactiveTransitionCleanupBlock;
	double _backdropHeightDelta;
	NSLayoutConstraint* _inputViewHeightConstraint;
	NSLayoutConstraint* _assistantViewHeightConstraint;
	NSLayoutConstraint* _accessoryViewHeightConstraint;
	NSLayoutConstraint* _emptyHeightConstraint;
	NSMutableDictionary* _inputViewEdgeConstraints;
	NSMutableDictionary* _assistantViewEdgeConstraints;
	NSMutableDictionary* _accessoryViewEdgeConstraints;
	NSMutableDictionary* _inputBackdropViewEdgeConstraints;
	NSMutableDictionary* _inputBackdropBackgroundViewEdgeConstraints;
	NSMutableDictionary* _inputDockViewEdgeConstraints;
	NSMutableDictionary* _assistantBackdropViewEdgeConstraints;
	NSMutableDictionary* _accessoryBackdropViewEdgeConstraints;
	UIView* _inputBackdropBackgroundView;
	UISystemKeyboardDockController* _dockViewController;
	BOOL _scrolling;
	UIInputViewSetPlacement* _cachedPlacement;
	BOOL _supportsDockViewController;
	UIInputWindowControllerHosting* _container;
	UIKBInputBackdropView* _inputBackdropView;
	UIKBInputBackdropView* _inputAssistantBackdropView;
	UIKBInputBackdropView* _inputAccessoryBackdropView;
	id<_UIRemoteKeyboardControllerDelegate> _controllerDelegate;
	UIInputSetHostView* _hostView;
	id<UIInputViewSetPlacementApplicator> _applicator;
	UIView* _floatingKeyboardMaskView;

}

@property (nonatomic,retain) id<UIInputViewSetPlacementApplicator> applicator;                                                       //@synthesize applicator=_applicator - In the implementation block
@property (nonatomic,__weak,readonly) UIInputWindowController * owner; 
@property (nonatomic,__weak,readonly) UIInputWindowControllerHosting * container;                                                    //@synthesize container=_container - In the implementation block
@property (nonatomic,retain) UIView * floatingKeyboardMaskView;                                                                      //@synthesize floatingKeyboardMaskView=_floatingKeyboardMaskView - In the implementation block
@property (setter=setInputBackdropView:,nonatomic,retain) UIKBInputBackdropView * _inputBackdropView;                                //@synthesize inputBackdropView=_inputBackdropView - In the implementation block
@property (setter=setInputAssistantBackdropView:,nonatomic,retain) UIKBInputBackdropView * _inputAssistantBackdropView;              //@synthesize inputAssistantBackdropView=_inputAssistantBackdropView - In the implementation block
@property (setter=setInputAccessoryBackdropView:,nonatomic,retain) UIKBInputBackdropView * _inputAccessoryBackdropView;              //@synthesize inputAccessoryBackdropView=_inputAccessoryBackdropView - In the implementation block
@property (nonatomic,retain) UIInputSetHostView * hostView;                                                                          //@synthesize hostView=_hostView - In the implementation block
@property (assign,nonatomic) UIView * inputView; 
@property (assign,nonatomic) UIView * inputAccessoryView; 
@property (assign,nonatomic) UIView * inputAssistantView; 
@property (nonatomic,readonly) UIView * dockView; 
@property (nonatomic,retain,readonly) UISplitKeyboardSupport * splitKeyboardController;                                              //@synthesize cachedSplitKeyboardController=_cachedSplitKeyboardController - In the implementation block
@property (nonatomic,readonly) BOOL scrollKeyboardActive;                                                                            //@synthesize scrolling=_scrolling - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BOOL keyboardController; 
@property (retain,readonly) UIInputViewSetPlacement * placement; 
@property (retain,readonly) UIInputViewSet * inputViewSet; 
@property (retain,readonly) UIView * containerView; 
@property (assign) BOOL hideInputViewBackdrops; 
@property (readonly) long long inputViewBackdropStyle; 
@property (nonatomic,retain) id<_UIRemoteKeyboardControllerDelegate> controllerDelegate;                                             //@synthesize controllerDelegate=_controllerDelegate - In the implementation block
@property (nonatomic,readonly) BOOL isOnScreenRotating; 
@property (assign,nonatomic) BOOL dontDismissReachability; 
@property (nonatomic,retain,readonly) UIView * view; 
@property (nonatomic,readonly) BOOL isChangingPlacement; 
@property (nonatomic,readonly) CGPoint positionConstraintConstant; 
@property (nonatomic,retain,readonly) UIViewController * _inputViewController; 
-(void)dealloc;
-(UIInputWindowControllerHosting *)container;
-(UIInputWindowController *)owner;
-(UIView *)view;
-(UIView *)containerView;
-(UIView *)inputAccessoryView;
-(UIView *)inputView;
-(id)inputViewController;
-(UIView *)inputAssistantView;
-(void)setInputView:(UIView *)arg1 ;
-(void)setInputAssistantView:(UIView *)arg1 ;
-(void)setInputAccessoryView:(UIView *)arg1 ;
-(void)setAccessoryViewVisible:(BOOL)arg1 delay:(double)arg2 ;
-(UIViewController *)_inputViewController;
-(void)transitionDidFinish:(BOOL)arg1 ;
-(void)updateViewConstraints;
-(UIInputViewSetPlacement *)placement;
-(CGRect)visibleFrame;
-(UIInputViewSet *)inputViewSet;
-(id)inputAccessoryViewController;
-(void)setPlacement:(UIInputViewSetPlacement *)arg1 ;
-(void)extendKeyboardBackdropHeight:(double)arg1 withDuration:(double)arg2 ;
-(void)updateViewSizingConstraints;
-(void)checkPlaceholdersForRemoteKeyboards;
-(void)updateForKeyplaneChangeWithContext:(id)arg1 ;
-(id<_UIRemoteKeyboardControllerDelegate>)controllerDelegate;
-(void)setControllerDelegate:(id<_UIRemoteKeyboardControllerDelegate>)arg1 ;
-(BOOL)isOnScreenRotating;
-(BOOL)dontDismissReachability;
-(void)setDontDismissReachability:(BOOL)arg1 ;
-(void)willBeginTranslation;
-(void)finishSplitTransition:(BOOL)arg1 ;
-(void)didFinishTranslation;
-(void)updateKeyboardDockViewVisibility;
-(void)setInterfaceAutorotationDisabled:(BOOL)arg1 ;
-(void)prepareForSplitTransition;
-(void)finishSplitTransition;
-(UIInputSetHostView *)hostView;
-(void)placementNeedsUpdate:(id)arg1 ;
-(id<UIInputViewSetPlacementApplicator>)applicator;
-(BOOL)keyboardController;
-(void)setHideInputViewBackdrops:(BOOL)arg1 ;
-(long long)inputViewBackdropStyle;
-(void)updateSupportsDockViewController;
-(void)updateVisibilityConstraintsForPlacement:(id)arg1 ;
-(void)updateConstraintInsets;
-(void)someViewDidLayoutSubviews;
-(void)refreshApplicator;
-(void)clearInputViewEdgeConstraints;
-(void)resetBackdropHeight;
-(void)_updateBackdropViews;
-(void)clearInteractiveTransitionStateIfNecessary;
-(void)prepareTranslationFromPlacement:(id)arg1 to:(id)arg2 ;
-(void)willBeginTranslationFromPlacement:(id)arg1 to:(id)arg2 ;
-(void)didFinishTranslationFromPlacement:(id)arg1 to:(id)arg2 ;
-(UISplitKeyboardSupport *)splitKeyboardController;
-(void)setPlacement:(id)arg1 quietly:(BOOL)arg2 animated:(BOOL)arg3 generateSplitNotification:(BOOL)arg4 ;
-(void)clearInputAssistantViewEdgeConstraints;
-(void)clearInputAccessoryViewEdgeConstraints;
-(void)disableViewSizingConstraints:(unsigned long long)arg1 forNewView:(id)arg2 ;
-(void)updateInputAssistantBackdropView;
-(void)initializeTranslateGestureRecognizerIfNecessary;
-(void)updateInputBackdropView;
-(void)updateInputBackdropViewVisibility;
-(void)updateInputAccessoryBackdropView;
-(void)updateEmptyHeightConstraint;
-(UIView *)dockView;
-(BOOL)scrollKeyboardActive;
-(BOOL)isChangingPlacement;
-(id)initWithContainer:(id)arg1 ;
-(void)resetPlacement;
-(void)setPlacement;
-(UIKBInputBackdropView *)_inputAccessoryBackdropView;
-(void)configureSplitKeyboardController:(BOOL)arg1 ;
-(void)configureScrollDismissController:(BOOL)arg1 ;
-(UIView *)floatingKeyboardMaskView;
-(void)setFloatingKeyboardMaskView:(UIView *)arg1 ;
-(UIEdgeInsets)_aligningInsetsForChildInputViewController:(id)arg1 includeSceneBounds:(BOOL)arg2 ;
-(id)inputAssistantViewController;
-(id)viewMatchingConstraintForAttribute:(long long)arg1 primaryView:(id)arg2 secondaryView:(id)arg3 ;
-(id)_updateOrCreateConstraintInDict:(id)arg1 key:(id)arg2 fromView:(id)arg3 toView:(id)arg4 tracker:(id)arg5 creator:(/*^block*/id)arg6 ;
-(void)updateViewSizingConstraints:(id)arg1 ;
-(void)rebuildConstraints:(id)arg1 forView:(id)arg2 toMatchView:(id)arg3 tracker:(id)arg4 ;
-(UIKBInputBackdropView *)_inputBackdropView;
-(void)setInputBackdropView:(id)arg1 ;
-(void)setInputAccessoryBackdropView:(id)arg1 ;
-(UIKBInputBackdropView *)_inputAssistantBackdropView;
-(void)setInputAssistantBackdropView:(id)arg1 ;
-(void)configureDockViewController:(BOOL)arg1 ;
-(BOOL)_shouldShowInputDockView;
-(void)resetVerticalConstraint;
-(void)_fillInNotificationInfo:(id)arg1 forDismissMode:(unsigned long long)arg2 ;
-(void)updateTransition:(id)arg1 withInfo:(id)arg2 ;
-(BOOL)_isForSelf:(id)arg1 ;
-(void)updateProgress:(double)arg1 startHeight:(double)arg2 endHeight:(double)arg3 ;
-(void)finishScrollViewTransition;
-(BOOL)_isForSplitKeyboard;
-(BOOL)_isForDragToDismiss;
-(BOOL)hideInputViewBackdrops;
-(id)constructNotificationInfoForScrollWithMode:(unsigned long long)arg1 ;
-(CGPoint)positionConstraintConstant;
-(void)startTransition:(id)arg1 withInfo:(id)arg2 ;
-(void)completeTransition:(id)arg1 withInfo:(id)arg2 ;
-(void)enumerateBoundingRects:(/*^block*/id)arg1 ;
-(void)setHostView:(UIInputSetHostView *)arg1 ;
-(void)setApplicator:(id<UIInputViewSetPlacementApplicator>)arg1 ;
@end

