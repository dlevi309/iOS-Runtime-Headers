/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (readonly) BOOL keyboardController; 
@property (retain,readonly) UIInputViewSetPlacement * placement; 
@property (retain,readonly) UIInputViewSet * inputViewSet; 
@property (retain,readonly) UIView * containerView; 
@property (assign) BOOL hideInputViewBackdrops; 
@property (readonly) long long inputViewBackdropStyle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) UIView * view; 
@property (nonatomic,readonly) BOOL isChangingPlacement; 
@property (nonatomic,readonly) CGPoint positionConstraintConstant; 
@property (nonatomic,retain,readonly) UIViewController * _inputViewController; 
@property (nonatomic,retain) id<_UIRemoteKeyboardControllerDelegate> controllerDelegate;                                             //@synthesize controllerDelegate=_controllerDelegate - In the implementation block
@property (nonatomic,readonly) BOOL isOnScreenRotating; 
@property (assign,nonatomic) BOOL dontDismissReachability; 
-(void)resetBackdropHeight;
-(UIViewController *)_inputViewController;
-(UIInputViewSet *)inputViewSet;
-(BOOL)dontDismissReachability;
-(CGRect)visibleFrame;
-(void)extendKeyboardBackdropHeight:(double)arg1 withDuration:(double)arg2 ;
-(void)updateViewConstraints;
-(UIView *)inputAccessoryView;
-(void)startTransition:(id)arg1 withInfo:(id)arg2 ;
-(void)setInputAssistantView:(UIView *)arg1 ;
-(void)clearInputAssistantViewEdgeConstraints;
-(id)initWithContainer:(id)arg1 ;
-(UISplitKeyboardSupport *)splitKeyboardController;
-(UIInputViewSetPlacement *)placement;
-(void)setPlacement;
-(void)setInputBackdropView:(id)arg1 ;
-(void)resetPlacement;
-(void)updateForKeyplaneChangeWithContext:(id)arg1 ;
-(void)enumerateBoundingRects:(/*^block*/id)arg1 ;
-(void)updateInputAccessoryBackdropView;
-(void)willBeginTranslation;
-(void)setPlacement:(id)arg1 quietly:(BOOL)arg2 animated:(BOOL)arg3 generateSplitNotification:(BOOL)arg4 ;
-(void)updateEmptyHeightConstraint;
-(UIInputWindowController *)owner;
-(void)clearVisibilityConstraints;
-(void)willBeginTranslationFromPlacement:(id)arg1 to:(id)arg2 ;
-(void)setInputView:(UIView *)arg1 ;
-(void)updateVisibilityConstraintsForPlacement:(id)arg1 ;
-(void)clearInteractiveTransitionStateIfNecessary;
-(id<UIInputViewSetPlacementApplicator>)applicator;
-(void)setPlacement:(UIInputViewSetPlacement *)arg1 ;
-(BOOL)_shouldShowInputDockView;
-(void)prepareForSplitTransition;
-(id)_updateOrCreateConstraintInDict:(id)arg1 key:(id)arg2 fromView:(id)arg3 toView:(id)arg4 tracker:(id)arg5 creator:(/*^block*/id)arg6 ;
-(void)setHideInputViewBackdrops:(BOOL)arg1 ;
-(UIView *)inputAssistantView;
-(void)updateInputAssistantBackdropView;
-(BOOL)hideInputViewBackdrops;
-(void)updateInputBackdropViewVisibility;
-(void)updateTransition:(id)arg1 withInfo:(id)arg2 ;
-(void)prepareTranslationFromPlacement:(id)arg1 to:(id)arg2 ;
-(BOOL)_isForDragToDismiss;
-(UIView *)inputView;
-(void)clearInputAccessoryViewEdgeConstraints;
-(void)setControllerDelegate:(id<_UIRemoteKeyboardControllerDelegate>)arg1 ;
-(void)setInputAssistantBackdropView:(id)arg1 ;
-(void)finishSplitTransition:(BOOL)arg1 ;
-(void)configureScrollDismissController:(BOOL)arg1 ;
-(void)setHostView:(UIInputSetHostView *)arg1 ;
-(void)setFloatingKeyboardMaskView:(UIView *)arg1 ;
-(void)finishScrollViewTransition;
-(BOOL)scrollKeyboardActive;
-(UIKBInputBackdropView *)_inputAccessoryBackdropView;
-(UIKBInputBackdropView *)_inputAssistantBackdropView;
-(UIView *)view;
-(UIView *)containerView;
-(void)configureDockViewController:(BOOL)arg1 ;
-(void)disableViewSizingConstraints:(unsigned long long)arg1 forNewView:(id)arg2 ;
-(UIEdgeInsets)_aligningInsetsForChildInputViewController:(id)arg1 includeSceneBounds:(BOOL)arg2 ;
-(void)updateViewSizingConstraints:(id)arg1 ;
-(UIView *)dockView;
-(void)resetVerticalConstraint;
-(id)constructNotificationInfoForScrollWithMode:(unsigned long long)arg1 ;
-(void)updateProgress:(double)arg1 startHeight:(double)arg2 endHeight:(double)arg3 ;
-(void)initializeTranslateGestureRecognizerIfNecessary;
-(BOOL)keyboardController;
-(void)checkPlaceholdersForRemoteKeyboards;
-(void)_fillInNotificationInfo:(id)arg1 forDismissMode:(unsigned long long)arg2 ;
-(BOOL)isChangingPlacement;
-(void)finishSplitTransition;
-(void)setDontDismissReachability:(BOOL)arg1 ;
-(void)didFinishTranslation;
-(void)configureSplitKeyboardController:(BOOL)arg1 ;
-(void)setApplicator:(id<UIInputViewSetPlacementApplicator>)arg1 ;
-(UIInputSetHostView *)hostView;
-(void)setInputAccessoryBackdropView:(id)arg1 ;
-(void)transitionDidFinish:(BOOL)arg1 ;
-(void)updateInputBackdropView;
-(BOOL)isOnScreenRotating;
-(BOOL)_isForSplitKeyboard;
-(id<_UIRemoteKeyboardControllerDelegate>)controllerDelegate;
-(void)completeTransition:(id)arg1 withInfo:(id)arg2 ;
-(void)someViewDidLayoutSubviews;
-(UIKBInputBackdropView *)_inputBackdropView;
-(long long)inputViewBackdropStyle;
-(void)setAccessoryViewVisible:(BOOL)arg1 delay:(double)arg2 ;
-(void)updateKeyboardDockViewVisibility;
-(id)inputAccessoryViewController;
-(void)_updateBackdropViews;
-(void)placementNeedsUpdate:(id)arg1 ;
-(void)updateSupportsDockViewController;
-(UIInputWindowControllerHosting *)container;
-(void)updateViewSizingConstraints;
-(BOOL)_isForSelf:(id)arg1 ;
-(void)rebuildConstraints:(id)arg1 forView:(id)arg2 toMatchView:(id)arg3 tracker:(id)arg4 ;
-(void)updateConstraintInsets;
-(id)inputViewController;
-(void)setInputAccessoryView:(UIView *)arg1 ;
-(UIView *)floatingKeyboardMaskView;
-(void)setInterfaceAutorotationDisabled:(BOOL)arg1 ;
-(id)viewMatchingConstraintForAttribute:(long long)arg1 primaryView:(id)arg2 secondaryView:(id)arg3 ;
-(id)inputAssistantViewController;
-(void)clearInputViewEdgeConstraints;
-(void)dealloc;
-(void)refreshApplicator;
-(CGPoint)positionConstraintConstant;
-(void)didFinishTranslationFromPlacement:(id)arg1 to:(id)arg2 ;
@end

