/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	UIAlertController* _recentInputsAlert;
	NSString* _keyplaneBeforeDictation;
	long long _selectedKeyBeforeDictation;
	UIWindow* _focusWindow;

}

@property (nonatomic,readonly) UIKBTree * currentKey; 
@property (nonatomic,retain) UIAlertController * recentInputsAlert;              //@synthesize recentInputsAlert=_recentInputsAlert - In the implementation block
@property (nonatomic,retain) NSString * keyplaneBeforeDictation;                 //@synthesize keyplaneBeforeDictation=_keyplaneBeforeDictation - In the implementation block
@property (assign,nonatomic) long long selectedKeyBeforeDictation;               //@synthesize selectedKeyBeforeDictation=_selectedKeyBeforeDictation - In the implementation block
@property (nonatomic,retain) UIWindow * focusWindow;                             //@synthesize focusWindow=_focusWindow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)carKeyboardNameForKeyboard:(id)arg1 screenTraits:(id)arg2 ;
+(CGSize)keyboardSizeForInputMode:(id)arg1 screenTraits:(id)arg2 keyboardType:(long long)arg3 ;
-(void)dealloc;
-(UIKBTree *)currentKey;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setRenderConfig:(id)arg1 ;
-(void)setKeyboardAppearance:(long long)arg1 ;
-(void)_moveWithEvent:(id)arg1 ;
-(void)setRecentInputs:(id)arg1 ;
-(unsigned long long)cursorLocation;
-(void)setCursorLocation:(unsigned long long)arg1 ;
-(BOOL)usesAutoShift;
-(BOOL)isAlphabeticPlane;
-(BOOL)isKanaPlane;
-(BOOL)diacriticForwardCompose;
-(BOOL)supportsContinuousPath;
-(id)keyViewAnimator;
-(void)alertDidDismiss;
-(void)deactivateKey:(id)arg1 ;
-(void)setSelectedKeyIndex:(long long)arg1 ;
-(void)configureChildCollectionViewCellsIfNeeded;
-(void)showKeyboardWithInputTraits:(id)arg1 screenTraits:(id)arg2 splitTraits:(id)arg3 ;
-(void)selectInitialKeyIfNecessary;
-(void)setKeyboardName:(id)arg1 appearance:(long long)arg2 ;
-(void)updateDictationHelpString;
-(id)cacheTokenForKeyplane:(id)arg1 ;
-(void)setKeyplaneName:(id)arg1 ;
-(int)enabledStateForKey:(id)arg1 ;
-(int)activeStateForKey:(id)arg1 ;
-(long long)selectedKeyBeforeDictation;
-(void)setSelectedKeyBeforeDictation:(long long)arg1 ;
-(void)updateRecentInputsKeyIfNecessary;
-(void)updateKeyplaneSwitchEdgeBiases;
-(void)updateStatesForGridSelection;
-(BOOL)refreshSelectedCellIfNecessaryForKey:(id)arg1 ;
-(void)didSelectRecentInputString:(id)arg1 ;
-(void)setRecentInputsAlert:(UIAlertController *)arg1 ;
-(UIAlertController *)recentInputsAlert;
-(id)_keyplaneForKeyplaneProperties;
-(BOOL)isKeyplaneDisabledWithName:(id)arg1 ;
-(int)stateForKeyplaneSwitchKey:(id)arg1 ;
-(void)longPressAction;
-(unsigned long long)downActionFlagsForKey:(id)arg1 ;
-(unsigned long long)variantCountForKey:(id)arg1 ;
-(long long)targetKeyIndexAtOffset:(CGPoint)arg1 fromKey:(id)arg2 ;
-(void)setHighlightedVariantIndex:(long long)arg1 key:(id)arg2 ;
-(CGRect)selectionFrameForKeyIndex:(long long)arg1 ;
-(id)keyHitTestInSameRowAsCenter:(CGPoint)arg1 size:(CGSize)arg2 ;
-(BOOL)canHandleEvent:(id)arg1 ;
-(BOOL)_handleMoveWithEvent:(id)arg1 ;
-(BOOL)_handleWheelChangedWithEvent:(id)arg1 ;
-(BOOL)_handleRemoteControlReceivedWithEvent:(id)arg1 ;
-(BOOL)_handlePhysicalButtonEvent:(id)arg1 ;
-(void)runWithSuppressedActions:(/*^block*/id)arg1 ;
-(void)showRecentInputsAlert;
-(BOOL)handleVisualDirectionalInput:(int)arg1 ;
-(void)clearVariantStateForKey:(id)arg1 ;
-(BOOL)canMultitap;
-(BOOL)handleLinearDirectionalInput:(int)arg1 ;
-(void)handleVariantDeleteIfNecessaryForKey:(id)arg1 ;
-(void)takeKeyAction:(id)arg1 ;
-(BOOL)shouldToggleKeyplaneWithName:(id)arg1 ;
-(void)setKeyplaneBeforeDictation:(NSString *)arg1 ;
-(NSString *)keyplaneBeforeDictation;
-(void)setFocusWindow:(UIWindow *)arg1 ;
-(UIWindow *)focusWindow;
-(void)switchToDictationKeyplaneWithActivationIdentifier:(id)arg1 ;
-(BOOL)_menuTapShouldExitVariants;
-(void)returnToKeyplaneAfterDictation;
-(BOOL)_isDirectionalHeading:(unsigned long long)arg1 ;
-(void)flushKeyCache:(id)arg1 ;
-(BOOL)shouldAllowCurrentKeyplaneReload;
-(BOOL)shouldMatchCaseForDomainKeys;
-(void)acceptRecentInputIfNecessary;
-(BOOL)shouldPreventInputManagerHitTestingForKey:(id)arg1 ;
-(BOOL)shouldRetestKey:(id)arg1 withKeyplane:(id)arg2 ;
-(unsigned char)getHandRestRecognizerState;
-(BOOL)supportsEmoji;
-(BOOL)shouldUseDefaultShiftStateFromLayout;
-(BOOL)ignoresShiftState;
-(void)setDisableTouchInput:(BOOL)arg1 ;
-(unsigned long long)targetEdgesForScreenGestureRecognition;
-(BOOL)shouldMergeKey:(id)arg1 ;
-(int)stateForCandidateListKey:(id)arg1 ;
-(long long)defaultSelectedVariantIndexForKey:(id)arg1 withActions:(unsigned long long)arg2 ;
-(void)endMultitapForKey:(id)arg1 ;
-(BOOL)shouldDeactivateWithoutWindow;
-(void)remoteControlReceivedWithEvent:(id)arg1 ;
-(void)_wheelChangedWithEvent:(id)arg1 ;
@end

