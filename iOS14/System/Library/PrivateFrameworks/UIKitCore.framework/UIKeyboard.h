/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIKBFocusGuideDelegate.h>
#import <UIKit/UIKeyboardImplGeometryDelegate.h>

@class UIView, UITextInputTraits, NSMutableDictionary, _UIKeyboardPasscodeObscuringInteraction, UITextCursorAssertionController, NSString;

@interface UIKeyboard : UIView <UIKBFocusGuideDelegate, UIKeyboardImplGeometryDelegate> {

	UIView* m_snapshot;
	UITextInputTraits* m_defaultTraits;
	UITextInputTraits* m_overrideTraits;
	BOOL m_typingDisabled;
	BOOL m_minimized;
	BOOL m_respondingToImplGeometryChange;
	long long m_orientation;
	long long m_idiom;
	BOOL m_hasExplicitOrientation;
	BOOL m_disableTouchInput;
	BOOL m_useRecentsAlert;
	NSMutableDictionary* m_focusGuides;
	UIEdgeInsets m_unfocusedFocusGuideOutsets;
	_UIKeyboardPasscodeObscuringInteraction* _passcodeObscuringInteraction;
	CGRect _forcedFrame;
	BOOL _hasImpendingCursorLocation;
	unsigned long long _impendingCursorLocation;
	unsigned long long _requestedInteractionModel;

}

@property (assign,nonatomic) BOOL hasImpendingCursorLocation;                                             //@synthesize hasImpendingCursorLocation=_hasImpendingCursorLocation - In the implementation block
@property (assign,nonatomic) unsigned long long impendingCursorLocation;                                  //@synthesize impendingCursorLocation=_impendingCursorLocation - In the implementation block
@property (assign,nonatomic) unsigned long long requestedInteractionModel;                                //@synthesize requestedInteractionModel=_requestedInteractionModel - In the implementation block
@property (assign,nonatomic) BOOL caretBlinks; 
@property (assign,nonatomic) BOOL caretVisible; 
@property (nonatomic,readonly) UITextCursorAssertionController * _activeAssertionController; 
@property (assign,nonatomic) long long keyboardIdiom; 
@property (assign,nonatomic) BOOL typingEnabled; 
@property (assign,getter=isMinimized,nonatomic) BOOL minimized; 
@property (assign,nonatomic) BOOL showsCandidatesInline; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)hasInputOrAssistantViewsOnScreen;
+(BOOL)isOnScreen;
+(CGSize)sizeForInterfaceOrientation:(long long)arg1 ;
+(void)_clearActiveKeyboard;
+(BOOL)isInHardwareKeyboardMode;
+(BOOL)respondsToProxGesture;
+(void)initImplementationNow;
+(BOOL)shouldMinimizeForHardwareKeyboard;
+(void)setSuppressionPolicyDelegate:(id)arg1 ;
+(BOOL)shouldSuppressSoftwareKeyboardForResponder:(id)arg1 ;
+(BOOL)splitKeyboardEnabled;
+(id)homeGestureExclusionZones;
+(BOOL)candidateDisplayIsExtended;
+(double)predictionViewHeightForCurrentInputMode;
+(UIEdgeInsets)keyplanePadding;
+(id)snapshotViewForPredictionViewTransition;
+(BOOL)predictionViewPrewarmsPredictiveCandidates;
+(void)setPredictionViewPrewarmsPredictiveCandidates:(BOOL)arg1 ;
+(CGSize)defaultSize;
+(CGSize)defaultSizeForInterfaceOrientation:(long long)arg1 ;
+(id)activeKeyboard;
+(id)activeKeyboardForScreen:(id)arg1 ;
+(id)suppressionPolicyDelegate;
+(CGSize)sizeForInterfaceOrientation:(long long)arg1 ignoreInputView:(BOOL)arg2 ;
+(CGRect)defaultFrameForInterfaceOrientation:(long long)arg1 ;
+(UIEdgeInsets)_keyboardFocusGuideMargins;
+(CGSize)keyboardSizeForInterfaceOrientation:(long long)arg1 ;
+(void)removeAllDynamicDictionaries;
+(void)clearActiveForScreen:(id)arg1 ;
+(void)makeKeyboardActive:(id)arg1 forScreen:(id)arg2 ;
-(void)setCaretBlinks:(BOOL)arg1 ;
-(id)_getCurrentKeyplaneName;
-(void)setRequestedInteractionModel:(unsigned long long)arg1 ;
-(BOOL)caretVisible;
-(void)maximize;
-(BOOL)canBecomeFocused;
-(void)geometryChangeDone:(BOOL)arg1 ;
-(void)_setRenderConfig:(id)arg1 ;
-(void)_showAutofillExtras;
-(void)updateLayout;
-(void)minimize;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(void)remoteControlReceivedWithEvent:(id)arg1 ;
-(UITextCursorAssertionController *)_activeAssertionController;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(CGSize)intrinsicContentSize;
-(int)textEffectsVisibilityLevel;
-(id)_getLocalizedInputMode;
-(void)syncMinimizedStateToHardwareKeyboardAttachedState;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)canHandleEvent:(id)arg1 ;
-(BOOL)disableInteraction;
-(UIEdgeInsets)unfocusedFocusGuideOutsets;
-(void)setUnfocusedFocusGuideOutsets:(UIEdgeInsets)arg1 fromView:(id)arg2 ;
-(id)delegate;
-(UIPeripheralAnimationGeometry)geometryForMinimize:(BOOL)arg1 ;
-(void)keyboardMinMaximized:(BOOL)arg1 ;
-(void)_setUseRecentsAlert:(BOOL)arg1 ;
-(UIPeripheralAnimationGeometry)geometryForImplHeightDelta:(double)arg1 ;
-(BOOL)typingEnabled;
-(void)didFocusGuideWithHeading:(unsigned long long)arg1 ;
-(BOOL)shouldSaveMinimizationState;
-(BOOL)canDismiss;
-(id)initWithDefaultSize;
-(id)initWithRequestedInteractionModel:(unsigned long long)arg1 ;
-(BOOL)hasAutocorrectPrompt;
-(id)_overrideTextInputTraits;
-(BOOL)showPredictionBar;
-(BOOL)isAutomatic;
-(void)set_overrideTextInputTraits:(id)arg1 ;
-(void)_didChangeCursorLocation;
-(BOOL)_hasCandidates;
-(void)_setPreferredHeight:(double)arg1 ;
-(void)textInputTraitsDidChange;
-(void)setKeyboardIdiom:(long long)arg1 ;
-(void)_setPasscodeOutlineAlpha:(double)arg1 ;
-(void)setShowsCandidatesInline:(BOOL)arg1 ;
-(void)_setDisableUpdateMaskForSecureTextEntry:(BOOL)arg1 ;
-(BOOL)showsCandidatesInline;
-(void)_didChangeCandidateList;
-(void)manualKeyboardWillBeOrderedIn;
-(void)manualKeyboardWasOrderedIn;
-(void)manualKeyboardWillBeOrderedOut;
-(BOOL)pointInside:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)manualKeyboardWasOrderedOut;
-(id)_baseKeyForRepresentedString:(id)arg1 ;
-(id)_keyplaneForKey:(id)arg1 ;
-(id)_keyplaneNamed:(id)arg1 ;
-(void)_changeToKeyplane:(id)arg1 ;
-(id)_touchPoint:(CGPoint)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)_setUndocked:(BOOL)arg1 ;
-(void)_setInputMode:(id)arg1 ;
-(void)_acceptCurrentCandidate;
-(void)setNeedsDisplay;
-(id)_typeCharacter:(id)arg1 withError:(CGPoint)arg2 shouldTypeVariants:(BOOL)arg3 baseKeyForVariants:(BOOL)arg4 ;
-(CGRect)_floatingKeyboardDraggableRect;
-(BOOL)isActive;
-(BOOL)returnKeyEnabled;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_setAutocorrects:(BOOL)arg1 ;
-(long long)_positionInCandidateList:(id)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)responseContextDidChange;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)_isAutomaticKeyboard;
-(void)deactivate;
-(void)setCaretVisible:(BOOL)arg1 ;
-(void)activate;
-(void)takeSnapshot;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(id)_getCurrentKeyboardName;
-(void)didMoveToWindow;
-(void)setDisableInteraction:(BOOL)arg1 ;
-(void)_wheelChangedWithEvent:(id)arg1 ;
-(id)defaultTextInputTraits;
-(void)setMinimized:(BOOL)arg1 ;
-(long long)interfaceOrientation;
-(BOOL)_touchesInsideShouldHideCalloutBar;
-(void)setUnfocusedFocusGuideOutsets:(UIEdgeInsets)arg1 ;
-(CGRect)_globalFocusCastingFrameForHeading:(unsigned long long)arg1 ;
-(void)setCorrectionLearningAllowed:(BOOL)arg1 ;
-(BOOL)isMinimized;
-(void)willMoveToWindow:(id)arg1 ;
-(void)displayLayer:(id)arg1 ;
-(void)prepareForGeometryChange;
-(void)_didChangeKeyplaneWithContext:(id)arg1 ;
-(void)removeAutocorrectPrompt;
-(id)initLazily;
-(void)setDefaultTextInputTraits:(id)arg1 ;
-(void)acceptAutocorrection;
-(long long)_focusTouchSensitivityStyle;
-(BOOL)caretBlinks;
-(void)_setSplit:(BOOL)arg1 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)_deactivateForBackgrounding;
-(void)setCursorLocation:(unsigned long long)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)prepareForImplBoundsHeightChange:(double)arg1 suppressNotification:(BOOL)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setReturnKeyEnabled:(BOOL)arg1 ;
-(void)implBoundsHeightChangeDone:(double)arg1 suppressNotification:(BOOL)arg2 ;
-(BOOL)_useRecentsAlert;
-(BOOL)_mayRemainFocused;
-(BOOL)_disableTouchInput;
-(long long)_focusedSound;
-(void)setTypingEnabled:(BOOL)arg1 ;
-(id)targetWindow;
-(unsigned long long)cursorLocation;
-(void)activateIfNeeded;
-(id)_getAutocorrection;
-(void)dealloc;
-(unsigned long long)requestedInteractionModel;
-(void)setOrientation:(long long)arg1 ;
-(id)_initWithFrame:(CGRect)arg1 lazily:(BOOL)arg2 ;
-(void)clearActivePerScreenIfNeeded;
-(BOOL)isActivePerScreen;
-(void)clearSnapshot;
-(void)setupKeyFocusGuides;
-(void)autoAdjustOrientation;
-(void)updateKeyFocusGuides;
-(void)setHasImpendingCursorLocation:(BOOL)arg1 ;
-(BOOL)hasImpendingCursorLocation;
-(unsigned long long)impendingCursorLocation;
-(void)updateFocusMarginsUpToView:(id)arg1 ;
-(BOOL)allowExternalChangeForFocusHeading:(unsigned long long)arg1 cursorLocation:(unsigned long long)arg2 ;
-(void)_setDisableTouchInput:(BOOL)arg1 ;
-(void)setImpendingCursorLocation:(unsigned long long)arg1 ;
-(long long)keyboardIdiom;
@end

