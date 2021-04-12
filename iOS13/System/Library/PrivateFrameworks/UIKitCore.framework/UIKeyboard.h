/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIKBFocusGuideDelegate.h>
#import <UIKit/UIKeyboardImplGeometryDelegate.h>

@class UIView, UITextInputTraits, NSMutableDictionary, NSString;

@interface UIKeyboard : UIView <UIKBFocusGuideDelegate, UIKeyboardImplGeometryDelegate> {

	UIView* m_snapshot;
	UITextInputTraits* m_defaultTraits;
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
	BOOL _hasImpendingCursorLocation;
	unsigned long long _impendingCursorLocation;
	unsigned long long _requestedInteractionModel;

}

@property (assign,nonatomic) BOOL hasImpendingCursorLocation;                           //@synthesize hasImpendingCursorLocation=_hasImpendingCursorLocation - In the implementation block
@property (assign,nonatomic) unsigned long long impendingCursorLocation;                //@synthesize impendingCursorLocation=_impendingCursorLocation - In the implementation block
@property (assign,nonatomic) unsigned long long requestedInteractionModel;              //@synthesize requestedInteractionModel=_requestedInteractionModel - In the implementation block
@property (assign,nonatomic) BOOL caretBlinks; 
@property (assign,nonatomic) BOOL caretVisible; 
@property (assign,nonatomic) long long keyboardIdiom; 
@property (assign,nonatomic) BOOL typingEnabled; 
@property (assign,getter=isMinimized,nonatomic) BOOL minimized; 
@property (assign,nonatomic) BOOL showsCandidatesInline; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)defaultSize;
+(id)activeKeyboard;
+(CGSize)sizeForInterfaceOrientation:(long long)arg1 ;
+(CGRect)defaultFrameForInterfaceOrientation:(long long)arg1 ;
+(BOOL)isOnScreen;
+(id)activeKeyboardForScreen:(id)arg1 ;
+(CGSize)defaultSizeForInterfaceOrientation:(long long)arg1 ;
+(BOOL)isInHardwareKeyboardMode;
+(CGSize)sizeForInterfaceOrientation:(long long)arg1 ignoreInputView:(BOOL)arg2 ;
+(void)clearActiveForScreen:(id)arg1 ;
+(void)removeAllDynamicDictionaries;
+(CGSize)keyboardSizeForInterfaceOrientation:(long long)arg1 ;
+(void)makeKeyboardActive:(id)arg1 forScreen:(id)arg2 ;
+(void)_clearActiveKeyboard;
+(void)initImplementationNow;
+(BOOL)respondsToProxGesture;
+(BOOL)shouldMinimizeForHardwareKeyboard;
+(id)suppressionPolicyDelegate;
+(void)setSuppressionPolicyDelegate:(id)arg1 ;
+(BOOL)splitKeyboardEnabled;
+(id)homeGestureExclusionZones;
+(double)predictionViewHeightForCurrentInputMode;
+(UIEdgeInsets)keyplanePadding;
+(id)snapshotViewForPredictionViewTransition;
+(BOOL)predictionViewPrewarmsPredictiveCandidates;
+(void)setPredictionViewPrewarmsPredictiveCandidates:(BOOL)arg1 ;
+(BOOL)candidateDisplayIsExtended;
-(void)dealloc;
-(id)delegate;
-(BOOL)isActive;
-(void)setOrientation:(long long)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)interfaceOrientation;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)syncMinimizedStateToHardwareKeyboardAttachedState;
-(void)_setRenderConfig:(id)arg1 ;
-(BOOL)isMinimized;
-(void)didMoveToWindow;
-(void)activate;
-(void)displayLayer:(id)arg1 ;
-(void)setNeedsDisplay;
-(void)willMoveToWindow:(id)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)updateLayout;
-(long long)_focusTouchSensitivityStyle;
-(void)_deactivateForBackgrounding;
-(void)deactivate;
-(long long)_focusedSound;
-(void)minimize;
-(void)maximize;
-(void)takeSnapshot;
-(BOOL)_mayRemainFocused;
-(BOOL)_touchesInsideShouldHideCalloutBar;
-(int)textEffectsVisibilityLevel;
-(void)_didChangeKeyplaneWithContext:(id)arg1 ;
-(void)setCaretBlinks:(BOOL)arg1 ;
-(void)prepareForGeometryChange;
-(void)geometryChangeDone:(BOOL)arg1 ;
-(void)setRequestedInteractionModel:(unsigned long long)arg1 ;
-(id)initLazily;
-(void)_setDisableTouchInput:(BOOL)arg1 ;
-(unsigned long long)requestedInteractionModel;
-(void)setDisableInteraction:(BOOL)arg1 ;
-(unsigned long long)cursorLocation;
-(void)setCursorLocation:(unsigned long long)arg1 ;
-(UIEdgeInsets)unfocusedFocusGuideOutsets;
-(void)setUnfocusedFocusGuideOutsets:(UIEdgeInsets)arg1 fromView:(id)arg2 ;
-(void)_setUseRecentsAlert:(BOOL)arg1 ;
-(void)setUnfocusedFocusGuideOutsets:(UIEdgeInsets)arg1 ;
-(void)acceptAutocorrection;
-(BOOL)_useRecentsAlert;
-(BOOL)canHandleEvent:(id)arg1 ;
-(BOOL)disableInteraction;
-(void)remoteControlReceivedWithEvent:(id)arg1 ;
-(void)_wheelChangedWithEvent:(id)arg1 ;
-(BOOL)_disableTouchInput;
-(void)setTypingEnabled:(BOOL)arg1 ;
-(BOOL)returnKeyEnabled;
-(BOOL)caretVisible;
-(void)setMinimized:(BOOL)arg1 ;
-(BOOL)isAutomatic;
-(id)_initWithFrame:(CGRect)arg1 lazily:(BOOL)arg2 ;
-(void)clearActivePerScreenIfNeeded;
-(BOOL)isActivePerScreen;
-(void)setupKeyFocusGuides;
-(void)autoAdjustOrientation;
-(BOOL)caretBlinks;
-(void)setCaretVisible:(BOOL)arg1 ;
-(void)activateIfNeeded;
-(void)setReturnKeyEnabled:(BOOL)arg1 ;
-(void)setDefaultTextInputTraits:(id)arg1 ;
-(void)clearSnapshot;
-(void)setHasImpendingCursorLocation:(BOOL)arg1 ;
-(BOOL)hasImpendingCursorLocation;
-(unsigned long long)impendingCursorLocation;
-(void)updateFocusMarginsUpToView:(id)arg1 ;
-(void)updateKeyFocusGuides;
-(BOOL)allowExternalChangeForFocusHeading:(unsigned long long)arg1 cursorLocation:(unsigned long long)arg2 ;
-(void)setImpendingCursorLocation:(unsigned long long)arg1 ;
-(void)_showAutofillExtras;
-(void)setCorrectionLearningAllowed:(BOOL)arg1 ;
-(void)responseContextDidChange;
-(UIPeripheralAnimationGeometry)geometryForMinimize:(BOOL)arg1 ;
-(void)keyboardMinMaximized:(BOOL)arg1 ;
-(UIPeripheralAnimationGeometry)geometryForImplHeightDelta:(double)arg1 ;
-(void)didFocusGuideWithHeading:(unsigned long long)arg1 ;
-(void)prepareForImplBoundsHeightChange:(double)arg1 suppressNotification:(BOOL)arg2 ;
-(void)implBoundsHeightChangeDone:(double)arg1 suppressNotification:(BOOL)arg2 ;
-(BOOL)shouldSaveMinimizationState;
-(BOOL)canDismiss;
-(id)initWithDefaultSize;
-(id)initWithRequestedInteractionModel:(unsigned long long)arg1 ;
-(BOOL)_isAutomaticKeyboard;
-(void)removeAutocorrectPrompt;
-(BOOL)hasAutocorrectPrompt;
-(id)defaultTextInputTraits;
-(BOOL)typingEnabled;
-(void)_setPreferredHeight:(double)arg1 ;
-(BOOL)showPredictionBar;
-(void)textInputTraitsDidChange;
-(id)targetWindow;
-(void)_setPasscodeOutlineAlpha:(double)arg1 ;
-(BOOL)showsCandidatesInline;
-(void)setShowsCandidatesInline:(BOOL)arg1 ;
-(void)_didChangeCandidateList;
-(long long)keyboardIdiom;
-(void)setKeyboardIdiom:(long long)arg1 ;
-(void)manualKeyboardWillBeOrderedIn;
-(void)manualKeyboardWasOrderedIn;
-(void)manualKeyboardWillBeOrderedOut;
-(void)manualKeyboardWasOrderedOut;
-(id)_getCurrentKeyplaneName;
-(id)_getCurrentKeyboardName;
-(id)_getLocalizedInputMode;
-(void)_setAutocorrects:(BOOL)arg1 ;
-(id)_getAutocorrection;
-(BOOL)_hasCandidates;
-(long long)_positionInCandidateList:(id)arg1 ;
-(id)_baseKeyForRepresentedString:(id)arg1 ;
-(id)_keyplaneForKey:(id)arg1 ;
-(id)_keyplaneNamed:(id)arg1 ;
-(void)_changeToKeyplane:(id)arg1 ;
-(void)_setUndocked:(BOOL)arg1 ;
-(void)_setSplit:(BOOL)arg1 ;
-(id)_touchPoint:(CGPoint)arg1 ;
-(id)_typeCharacter:(id)arg1 withError:(CGPoint)arg2 shouldTypeVariants:(BOOL)arg3 baseKeyForVariants:(BOOL)arg4 ;
-(void)_setInputMode:(id)arg1 ;
-(void)_acceptCurrentCandidate;
-(CGRect)_floatingKeyboardDraggableRect;
@end

