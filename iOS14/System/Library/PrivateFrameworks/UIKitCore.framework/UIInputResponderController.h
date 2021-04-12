/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UISceneComponentProviding.h>
#import <UIKit/UITextInputSessionActionAnalyticsDelegateSource.h>

@class UITextEffectsWindow, UIResponder, UIInputViewSet, NSMutableDictionary, NSMutableArray, NSHashTable, UIInputViewPostPinningReloadState, NSMutableSet, NSDate, UITextFormattingCoordinator, UISystemInputAssistantViewController, UITextInputSessionActionAnalytics, UIScene, UIKBRenderConfig, UIInputWindowController, UIView, UIWindowScene, NSString;

@interface UIInputResponderController : NSObject <_UISceneComponentProviding, UITextInputSessionActionAnalyticsDelegateSource> {

	unsigned long long _hostedUseCount;
	UITextEffectsWindow* _containerWindow;
	UIResponder* _responder;
	UIResponder* _responderWithoutAutomaticAppearanceEnabled;
	UIResponder* _selfHostingTrigger;
	UIInputViewSet* _inputViewSet;
	UIInputViewSet* _transientInputViewSet;
	NSMutableDictionary* _preservedViewSets;
	NSMutableArray* _animationStyleStack;
	NSHashTable* _visibilityObservers;
	NSMutableDictionary* _keyboardSnapshots;
	UIInputViewPostPinningReloadState* _postPinningReloadState;
	NSMutableSet* _pinningResponders;
	NSMutableDictionary* _persistentInputAccessoryResponders;
	NSMutableArray* _persistentInputAccessoryResponderOrder;
	NSDate* _transitionStartTime;
	UITextFormattingCoordinator* _textFormattingCoordinator;
	UISystemInputAssistantViewController* _systemInputAssistantViewController;
	UITextInputSessionActionAnalytics* _sessionAnalytics;
	int _ignoringReloadInputViews;
	int _ignoredReloads;
	int _disableAnimationsCount;
	BOOL _ignoresPinning;
	BOOL _interfaceAutorotationDisabled;
	BOOL _automaticAppearanceEnabled;
	BOOL _automaticAppearanceEnabledInternal;
	BOOL _dontNeedAssistantBar;
	BOOL _allowNilResponderReload;
	BOOL _reloadInputViewsForcedIsAllowed;
	BOOL _blockedReloadInputViewsForDictation;
	id _keyForPreservingInputViews;
	id _keyForRestoringInputViews;
	BOOL _hasCustomAnimationProperties;
	double _nextAutomaticOrderInDuration;
	int _nextAutomaticOrderInDirection;
	BOOL _shouldSuppressInputAssistantUpdates;
	BOOL _hideSystemInputAssistantView;
	UIScene* _scene;
	long long _currentState;
	UIKBRenderConfig* _restorableRenderConfig;
	unsigned long long _deactivationCount;

}

@property (assign,nonatomic) BOOL useHostedInstance; 
@property (nonatomic,readonly) UITextEffectsWindow * containerWindow; 
@property (nonatomic,readonly) UITextEffectsWindow * existingContainerWindow; 
@property (nonatomic,readonly) UIInputWindowController * containerRootController; 
@property (nonatomic,readonly) UIInputWindowController * existingContainerRootController; 
@property (nonatomic,readonly) UISystemInputAssistantViewController * systemInputAssistantViewController; 
@property (nonatomic,readonly) UIView * containerView; 
@property (assign,nonatomic) BOOL hideSystemInputAssistantView;                                                        //@synthesize hideSystemInputAssistantView=_hideSystemInputAssistantView - In the implementation block
@property (nonatomic,readonly) UIInputViewSet * inputViews; 
@property (nonatomic,readonly) UIInputViewSet * transientInputViews; 
@property (nonatomic,readonly) long long currentState;                                                                 //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,retain) UIKBRenderConfig * restorableRenderConfig;                                                //@synthesize restorableRenderConfig=_restorableRenderConfig - In the implementation block
@property (nonatomic,readonly) BOOL deactivated; 
@property (assign,nonatomic) unsigned long long deactivationCount;                                                     //@synthesize deactivationCount=_deactivationCount - In the implementation block
@property (assign,nonatomic) BOOL automaticAppearanceInternalEnabled; 
@property (nonatomic,readonly) BOOL automaticAppearanceReallyEnabled; 
@property (nonatomic,readonly) NSDate * _transitionStartTime; 
@property (nonatomic,readonly) UITextFormattingCoordinator * textFormattingCoordinator; 
@property (getter=_isIgnoringReloadInputViews,nonatomic,readonly) BOOL ignoringReloadInputViews; 
@property (assign,nonatomic) BOOL ignoresPinning;                                                                      //@synthesize ignoresPinning=_ignoresPinning - In the implementation block
@property (nonatomic,readonly) UIWindowScene * scene; 
@property (nonatomic,readonly) UIResponder * responder;                                                                //@synthesize responder=_responder - In the implementation block
@property (nonatomic,readonly) BOOL isOnScreen; 
@property (assign,nonatomic) BOOL automaticAppearanceEnabled;                                                          //@synthesize automaticAppearanceEnabled=_automaticAppearanceEnabled - In the implementation block
@property (assign,nonatomic) BOOL shouldSuppressInputAssistantUpdates;                                                 //@synthesize shouldSuppressInputAssistantUpdates=_shouldSuppressInputAssistantUpdates - In the implementation block
@property (assign,setter=_setScene:,getter=_scene,nonatomic,__weak) UIScene * _scene;                                  //@synthesize scene=_scene - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)activeInputResponderController;
+(void)setInterfaceOrientation:(long long)arg1 ;
+(void)logInterfaceOrientation:(long long)arg1 withDescription:(id)arg2 ;
+(long long)interfaceOrientation;
+(void)_pinInputViewsForInputResponderController:(id)arg1 onBehalfOfResponder:(id)arg2 duringBlock:(/*^block*/id)arg3 ;
+(id)applicationConnectedWindowScenes;
+(void)performOnControllers:(/*^block*/id)arg1 ;
-(id)_renderConfigForResponder:(id)arg1 ;
-(UIInputViewSet *)inputViews;
-(BOOL)maximize;
-(void)_clearPinningResponders;
-(UIInputWindowController *)containerRootController;
-(id)nextAnimationStyle:(BOOL)arg1 ;
-(void)pushAnimationStyle:(id)arg1 ;
-(void)popAnimationStyle;
-(id)passthroughViews;
-(void)_beginDisablingAnimations;
-(id)nextAnimationStyle;
-(UIScene *)_scene;
-(BOOL)minimize;
-(void)setTextEffectsWindowLevelForInputView:(id)arg1 responder:(id)arg2 ;
-(void)setInputViews:(id)arg1 animated:(BOOL)arg2 ;
-(void)orderOutWithAnimationStyle:(id)arg1 ;
-(void)_updateContainerWindowLevel;
-(BOOL)animationsEnabled;
-(BOOL)_restoreInputViewsWithId:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)isUndocked;
-(int)_endIgnoringReloadInputViews;
-(BOOL)hasDictationKeyboard;
-(UIWindowScene *)scene;
-(void)_setScene:(id)arg1 ;
-(UITextEffectsWindow *)existingContainerWindow;
-(BOOL)useHostedInstance;
-(BOOL)isOnScreen;
-(BOOL)_isTrackingResponder:(id)arg1 ;
-(void)_reloadInputViewsForKeyWindowSceneResponder:(id)arg1 ;
-(void)setUseHostedInstance:(BOOL)arg1 ;
-(id)_delegateAsResponder;
-(void)_updateTextInputSession;
-(void)_beginPersistingInputAccessoryViewForResponder:(id)arg1 withId:(id)arg2 ;
-(void)inputModeChangedForRenderConfig:(id)arg1 ;
-(void)setRestorableRenderConfig:(UIKBRenderConfig *)arg1 ;
-(long long)currentState;
-(void)setKeyWindowSceneInputViews:(id)arg1 animationStyle:(id)arg2 ;
-(void)setNextAutomaticOrderInDirection:(int)arg1 duration:(double)arg2 ;
-(void)forceOrderOutAutomaticExceptAccessoryView;
-(id)initWithScene:(id)arg1 ;
-(BOOL)maximizeWithAnimationStyle:(id)arg1 ;
-(BOOL)automaticAppearanceEnabled;
-(void)_clearMultiDocumentTokenIfNecessary:(id)arg1 withId:(id)arg2 ;
-(void)forceOrderInAutomaticAnimated:(BOOL)arg1 ;
-(void)updateRenderConfigForCurrentResponder;
-(void)setShouldSuppressInputAssistantUpdates:(BOOL)arg1 ;
-(void)clearAnimationStyleForUserDrivenPresentation;
-(void)forceOrderOutAutomaticAnimated:(BOOL)arg1 ;
-(void)orderInWithAnimationStyle:(id)arg1 ;
-(void)forceOrderInAutomaticFromDirection:(int)arg1 withDuration:(double)arg2 ;
-(BOOL)_isIgnoringReloadInputViews;
-(BOOL)minimizeWithAnimationStyle:(id)arg1 force:(BOOL)arg2 ;
-(id)_windowScene;
-(BOOL)ignoresPinning;
-(id)_placementForDeactivatedKeyboard:(BOOL)arg1 currentPlacement:(id)arg2 ;
-(void)_clearPreservedInputViewsWithRestorableResponder:(id)arg1 ;
-(void)_setReloadInputViewsForcedIsAllowed:(BOOL)arg1 ;
-(UIInputWindowController *)existingContainerRootController;
-(void)_preserveInputViewsWithId:(id)arg1 animated:(BOOL)arg2 ;
-(UIResponder *)responder;
-(UISystemInputAssistantViewController *)systemInputAssistantViewController;
-(void)setHideSystemInputAssistantView:(BOOL)arg1 ;
-(void)forceReloadInputViews;
-(void)setAutomaticAppearanceEnabled:(BOOL)arg1 ;
-(void)refreshWithLocalMinimumKeyboardHeight:(double)arg1 ;
-(void)_stopPinningInputViewsOnBehalfOfResponder:(id)arg1 ;
-(UIView *)containerView;
-(BOOL)_restoreMultiDocumentTokenIfNecessary:(id)arg1 withId:(id)arg2 ;
-(BOOL)deactivated;
-(void)_restoreInputAccessoryViewOverrideWithId:(id)arg1 ;
-(UITextFormattingCoordinator *)textFormattingCoordinator;
-(void)performWithAllowingNilResponderReload:(/*^block*/id)arg1 ;
-(void)traitCollectionDidChange;
-(void)_setIgnoresPinning:(BOOL)arg1 allowImmediateReload:(BOOL)arg2 ;
-(NSDate *)_transitionStartTime;
-(void)setInputViews:(UIInputViewSet *)arg1 ;
-(BOOL)minimizeWithAnimationStyle:(id)arg1 ;
-(void)_preserveInputViewsWithId:(id)arg1 ;
-(CGRect)visibleInputViewFrameInView:(id)arg1 ;
-(BOOL)maximizeWithAnimation:(BOOL)arg1 ;
-(void)updateRenderConfigForResponder:(id)arg1 ;
-(void)setIgnoresPinning:(BOOL)arg1 ;
-(BOOL)_hasPostPinningReloadState;
-(void)prepareForAlongsideTransitionWithContext:(id)arg1 ;
-(void)_clearPreservedInputViewsWithId:(id)arg1 clearKeyboard:(BOOL)arg2 ;
-(void)setDeactivationCount:(unsigned long long)arg1 ;
-(BOOL)_showKeyboardWindowForInputViewSet:(id)arg1 placement:(id)arg2 windowScene:(id)arg3 ;
-(void)_reloadInputViewsForWindowSceneResponder:(id)arg1 ;
-(void)_beginPinningInputViewsOnBehalfOfResponder:(id)arg1 ;
-(void)_updateVisibilityObserversWithVisibility:(BOOL)arg1 reset:(BOOL)arg2 ;
-(BOOL)shouldSuppressInputAssistantUpdates;
-(void)_reloadInputViewsForResponder:(id)arg1 ;
-(id)_textInputSessionAnalytics;
-(id)_inputViewsForResponder:(id)arg1 withAutomaticKeyboard:(BOOL)arg2 ;
-(void)performMultipleOperations:(/*^block*/id)arg1 withAnimationStyle:(id)arg2 ;
-(CGRect)visibleFrameInView:(id)arg1 ;
-(void)_scene:(id)arg1 willTransitionToActivationState:(long long)arg2 withReasonsMask:(unsigned long long)arg3 ;
-(void)_beginIgnoringReloadInputViews;
-(BOOL)automaticAppearanceInternalEnabled;
-(void)createAutomaticKeyboardIfNeeded;
-(BOOL)maximizeWithAnimationStyle:(id)arg1 force:(BOOL)arg2 ;
-(void)_preserveInputViewsWithId:(id)arg1 animated:(BOOL)arg2 reset:(BOOL)arg3 ;
-(void)setInputViews:(id)arg1 animationStyle:(id)arg2 ;
-(BOOL)hideSystemInputAssistantView;
-(BOOL)pinningPreventsInputViews:(id)arg1 ;
-(long long)_preferredAppearanceForResponder:(id)arg1 ;
-(void)inputResponderControllerWillResume:(id)arg1 ;
-(void)_endDisablingAnimations;
-(BOOL)_preserveMultiDocumentTokenIfNecessary:(id)arg1 withId:(id)arg2 reset:(BOOL)arg3 ;
-(void)prepareToMoveKeyboardForInputViewSet:(id)arg1 animationStyle:(id)arg2 ;
-(id)getKeyboardSnapshotInWindow:(long long)arg1 ;
-(unsigned long long)deactivationCount;
-(void)removeVisibilityObserver:(id)arg1 ;
-(id)systemInputAssistantViewControllerForResponder:(id)arg1 ;
-(void)_removePreservedInputViewSetForInputView:(id)arg1 ;
-(UIKBRenderConfig *)restorableRenderConfig;
-(id)_inputViewsForResponder:(id)arg1 ;
-(void)_endPersistingInputAccessoryViewWithId:(id)arg1 ;
-(void)addVisibilityObserver:(id)arg1 ;
-(UIInputViewSet *)transientInputViews;
-(id)windowForKeyboardPopover;
-(void)disableInterfaceAutorotation:(BOOL)arg1 ;
-(BOOL)_isPinningInputViewsOnBehalfOfResponder:(id)arg1 ;
-(BOOL)automaticAppearanceReallyEnabled;
-(void)setKeyboardSnapshot:(id)arg1 inWindow:(long long)arg2 ;
-(double)verticalOverlapForView:(id)arg1 usingKeyboardInfo:(id)arg2 ;
-(void)setAutomaticAppearanceInternalEnabled:(BOOL)arg1 ;
-(UITextEffectsWindow *)containerWindow;
-(void)forceOrderOutAutomaticToDirection:(int)arg1 withDuration:(double)arg2 ;
-(void)dealloc;
-(void)reloadPlacement;
-(void)setWindowSceneInputViews:(id)arg1 animationStyle:(id)arg2 ;
-(BOOL)_isPreservedRestorableResponder:(id)arg1 ;
-(void)destroyWindowForKeyboardPopoverIfNecessary;
@end

