/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKeyboardLayoutStar.h>
#import <UIKit/UIKBAlertControllerDelegate.h>

@class UIKBTree, UIView, NSArray, UILexicon, UILabel, UIAlertController, NSString, UIWindow;

@interface UIKeyboardLayoutCursor : UIKeyboardLayoutStar <UIKBAlertControllerDelegate> {

	UIKBTree* _indirectKeyboard;
	UIView* _selectionView;
	NSArray* _keyplaneKeys;
	long long _selectedKeyIndex;
	BOOL _ignoreEventsUntilPressEnds;
	UILexicon* _recentInputs;
	BOOL _disableTouchInput;
	BOOL _suppressOperations;
	UIKBTree* _cachedMultitapKeyplane;
	BOOL _cachedCanMultitap;
	UILabel* _dictationHelpLabel;
	BOOL _didVariantDelete;
	BOOL _isForwardingEvent;
	BOOL _overrideInitialKey;
	int _overridenSelectedKeyType;
	BOOL _shouldConfigureFloatingContentView;
	BOOL _shouldToggleLetterCaseNext;
	CGPoint _keyplaneSwitchSelectedKeyFrameCenter;
	BOOL _selectInitialKey;
	UIAlertController* _recentInputsAlert;
	NSString* _keyplaneBeforeDictation;
	long long _selectedKeyBeforeDictation;
	UIWindow* _focusWindow;

}

@property (nonatomic,retain) UIAlertController * recentInputsAlert;                                  //@synthesize recentInputsAlert=_recentInputsAlert - In the implementation block
@property (nonatomic,retain) NSString * keyplaneBeforeDictation;                                     //@synthesize keyplaneBeforeDictation=_keyplaneBeforeDictation - In the implementation block
@property (assign,nonatomic) long long selectedKeyBeforeDictation;                                   //@synthesize selectedKeyBeforeDictation=_selectedKeyBeforeDictation - In the implementation block
@property (getter=isSlimLinearKeyboardTV,nonatomic,readonly) BOOL slimLinearKeyboardTV; 
@property (nonatomic,retain) UIWindow * focusWindow;                                                 //@synthesize focusWindow=_focusWindow - In the implementation block
@property (nonatomic,readonly) UIKBTree * currentKey; 
@property (nonatomic,readonly) CGRect globalFrameForCurrentKey; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)keyboardSizeForInputMode:(id)arg1 screenTraits:(id)arg2 keyboardType:(long long)arg3 ;
+(id)carKeyboardNameForKeyboard:(id)arg1 screenTraits:(id)arg2 ;
-(int)stateForCandidateListKey:(id)arg1 ;
-(void)acceptRecentInputIfNecessary;
-(void)setKeyboardAppearance:(long long)arg1 ;
-(id)cacheTokenForKeyplane:(id)arg1 ;
-(void)remoteControlReceivedWithEvent:(id)arg1 ;
-(BOOL)shouldPreventInputManagerHitTestingForKey:(id)arg1 ;
-(void)setKeyplaneName:(id)arg1 ;
-(void)setShift:(BOOL)arg1 ;
-(void)setDisableTouchInput:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIAlertController *)recentInputsAlert;
-(BOOL)canHandleEvent:(id)arg1 ;
-(BOOL)_handleRemoteControlReceivedWithEvent:(id)arg1 ;
-(BOOL)_handleMoveWithEvent:(id)arg1 ;
-(BOOL)shouldRetestKey:(id)arg1 slidOffKey:(id)arg2 withKeyplane:(id)arg3 ;
-(void)updateStatesForGridSelection;
-(void)longPressAction;
-(void)updateDictationHelpString;
-(void)configureFloatingContentViewsIfNeeded;
-(BOOL)handleVisualDirectionalInput:(int)arg1 ;
-(BOOL)diacriticForwardCompose;
-(void)flushKeyCache:(id)arg1 ;
-(void)updateKeyplaneSwitchEdgeBiases;
-(void)setFocusWindow:(UIWindow *)arg1 ;
-(void)_configureFloatingContentViewsForTV;
-(void)updateRecentInputsKeyIfNecessary;
-(CGRect)globalFrameForCurrentKey;
-(UIWindow *)focusWindow;
-(BOOL)shouldMergeKey:(id)arg1 ;
-(BOOL)isPossibleToTypeFast;
-(BOOL)shouldAllowCurrentKeyplaneReload;
-(BOOL)_handlePhysicalButtonEvent:(id)arg1 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)isSlimLinearKeyboardTV;
-(BOOL)usesAutoShift;
-(BOOL)isKanaPlane;
-(unsigned long long)variantCountForKey:(id)arg1 ;
-(BOOL)_handleWheelChangedWithEvent:(id)arg1 ;
-(unsigned long long)targetEdgesForScreenGestureRecognition;
-(BOOL)ignoresShiftState;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setKeyplaneBeforeDictation:(NSString *)arg1 ;
-(BOOL)shouldMatchCaseForDomainKeys;
-(unsigned long long)downActionFlagsForKey:(id)arg1 ;
-(long long)targetKeyIndexAtOffset:(CGPoint)arg1 fromKey:(id)arg2 ;
-(void)_wheelChangedWithEvent:(id)arg1 ;
-(void)showRecentInputsAlert;
-(void)setSelectedKeyBeforeDictation:(long long)arg1 ;
-(int)activeStateForKey:(id)arg1 ;
-(void)clearVariantStateForKey:(id)arg1 ;
-(long long)defaultSelectedVariantIndexForKey:(id)arg1 withActions:(unsigned long long)arg2 ;
-(BOOL)canMultitap;
-(id)_keyplaneForKeyplaneProperties;
-(void)setSelectedKeyIndex:(long long)arg1 ;
-(id)keyViewAnimator;
-(void)willMoveToWindow:(id)arg1 ;
-(unsigned long long)_indexOfFirstKeyOfInteractionType:(int)arg1 ;
-(void)endMultitapForKey:(id)arg1 ;
-(void)deactivateKey:(id)arg1 ;
-(BOOL)_isDirectionalHeading:(unsigned long long)arg1 ;
-(BOOL)refreshSelectedCellIfNecessaryForKey:(id)arg1 ;
-(void)setKeyboardName:(id)arg1 appearance:(long long)arg2 ;
-(void)didSelectRecentInputString:(id)arg1 ;
-(void)alertDidDismiss;
-(void)_accessibilityBoldTextChanged:(id)arg1 ;
-(void)takeKeyAction:(id)arg1 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)keyHitTestInSameRowAsCenter:(CGPoint)arg1 size:(CGSize)arg2 ;
-(void)selectInitialKeyIfNecessary;
-(BOOL)supportsEmoji;
-(void)handleVariantDeleteIfNecessaryForKey:(id)arg1 ;
-(void)setCursorLocation:(unsigned long long)arg1 ;
-(int)stateForKeyplaneSwitchKey:(id)arg1 ;
-(void)setRenderConfig:(id)arg1 ;
-(void)returnToKeyplaneAfterDictation;
-(void)runWithSuppressedActions:(/*^block*/id)arg1 ;
-(void)setRecentInputsAlert:(UIAlertController *)arg1 ;
-(void)restoreFocusFromEntryPoint:(CGPoint)arg1 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)showKeyboardWithInputTraits:(id)arg1 screenTraits:(id)arg2 splitTraits:(id)arg3 ;
-(BOOL)handleLinearDirectionalInput:(int)arg1 ;
-(BOOL)_menuTapShouldExitVariants;
-(UIKBTree *)currentKey;
-(int)enabledStateForKey:(id)arg1 ;
-(BOOL)shouldToggleKeyplaneWithName:(id)arg1 ;
-(long long)selectedKeyBeforeDictation;
-(void)_moveWithEvent:(id)arg1 ;
-(void)_reducedTransparencyDidChange:(id)arg1 ;
-(void)setRecentInputs:(id)arg1 ;
-(unsigned long long)getNextKeyplaneIndex:(unsigned long long)arg1 ;
-(CGRect)selectionFrameForKeyIndex:(long long)arg1 ;
-(unsigned long long)cursorLocation;
-(BOOL)supportsContinuousPath;
-(void)showPopupKeyplaneSwitcher;
-(BOOL)isKeyplaneDisabledWithName:(id)arg1 ;
-(BOOL)_isKeyboardReverseOfSystemLanguageCharacterDirection;
-(void)setHighlightedVariantIndex:(long long)arg1 key:(id)arg2 ;
-(BOOL)isAlphabeticPlane;
-(long long)targetKeyIndexFromPoint:(CGPoint)arg1 inKeys:(id)arg2 ;
-(NSString *)keyplaneBeforeDictation;
-(void)dealloc;
-(unsigned char)getHandRestRecognizerState;
-(long long)targetKeyIndexFromPoint:(CGPoint)arg1 ;
-(void)switchToDictationKeyplaneWithActivationIdentifier:(id)arg1 ;
-(BOOL)shouldDeactivateWithoutWindow;
@end

