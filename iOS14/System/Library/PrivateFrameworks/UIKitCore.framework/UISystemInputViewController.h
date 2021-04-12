/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIRecentsInputViewControllerDelegate.h>

@protocol UITraitEnvironment, UISystemInputViewControllerDelegate, UITextInput;
@class NSMutableDictionary, UIResponder, UIKeyboard, NSArray, UICompatibilityInputViewController, UIKBSystemLayoutViewController, UIButton, UIViewController, UIRecentsInputViewController, UITextInputTraits, UILexicon, UILabel, UIView, NSString;

@interface UISystemInputViewController : UIViewController <UIRecentsInputViewControllerDelegate> {

	NSMutableDictionary* _accessoryViewControllers;
	NSMutableDictionary* _accessoryConstraints;
	BOOL _needsSetupAgain;
	BOOL _isVisible;
	UIResponder*<UITraitEnvironment> _containingResponder;
	BOOL _supportsTouchInput;
	BOOL _supportsRecentInputsIntegration;
	BOOL _isAutomaticResponderTransition;
	BOOL _willPresentFullscreen;
	BOOL _willUpdateBackgroundEffectOnInputModeChange;
	BOOL _didDisplayRecents;
	id<UISystemInputViewControllerDelegate> _systemInputViewControllerDelegate;
	UIResponder*<UITextInput> _persistentDelegate;
	UIKeyboard* _keyboard;
	NSArray* _keyboardConstraints;
	UICompatibilityInputViewController* _keyboardVC;
	NSArray* _editorConstraints;
	UIKBSystemLayoutViewController* _editorVC;
	UIButton* _doneButton;
	UIViewController* _inputVC;
	UIRecentsInputViewController* _recentsVC;
	NSArray* _verticalAlignments;
	NSArray* _horizontalAlignments;
	UIResponder*<UITextInput> _nextInputDelegate;
	UITextInputTraits* _textInputTraits;
	UILexicon* _cachedRecents;
	UILabel* _promptLabel;
	unsigned long long _requestedInteractionModel;
	UIView* _containingView;
	UIView* _contentLayoutView;
	long long _blurEffectStyle;

}

@property (assign,nonatomic) BOOL supportsTouchInput;                                                                //@synthesize supportsTouchInput=_supportsTouchInput - In the implementation block
@property (assign,nonatomic) BOOL isAutomaticResponderTransition;                                                    //@synthesize isAutomaticResponderTransition=_isAutomaticResponderTransition - In the implementation block
@property (assign,nonatomic) BOOL willPresentFullscreen;                                                             //@synthesize willPresentFullscreen=_willPresentFullscreen - In the implementation block
@property (assign,nonatomic) BOOL willUpdateBackgroundEffectOnInputModeChange;                                       //@synthesize willUpdateBackgroundEffectOnInputModeChange=_willUpdateBackgroundEffectOnInputModeChange - In the implementation block
@property (assign,nonatomic) BOOL didDisplayRecents;                                                                 //@synthesize didDisplayRecents=_didDisplayRecents - In the implementation block
@property (nonatomic,retain) UIView * containingView;                                                                //@synthesize containingView=_containingView - In the implementation block
@property (nonatomic,retain) UIView * contentLayoutView;                                                             //@synthesize contentLayoutView=_contentLayoutView - In the implementation block
@property (assign,nonatomic) long long blurEffectStyle;                                                              //@synthesize blurEffectStyle=_blurEffectStyle - In the implementation block
@property (nonatomic,retain) UIKeyboard * keyboard;                                                                  //@synthesize keyboard=_keyboard - In the implementation block
@property (nonatomic,retain) NSArray * keyboardConstraints;                                                          //@synthesize keyboardConstraints=_keyboardConstraints - In the implementation block
@property (nonatomic,retain) UICompatibilityInputViewController * keyboardVC;                                        //@synthesize keyboardVC=_keyboardVC - In the implementation block
@property (nonatomic,retain) NSArray * editorConstraints;                                                            //@synthesize editorConstraints=_editorConstraints - In the implementation block
@property (nonatomic,retain) UIKBSystemLayoutViewController * editorVC;                                              //@synthesize editorVC=_editorVC - In the implementation block
@property (nonatomic,retain) UIButton * doneButton;                                                                  //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) UIViewController * inputVC;                                                             //@synthesize inputVC=_inputVC - In the implementation block
@property (nonatomic,retain) UIRecentsInputViewController * recentsVC;                                               //@synthesize recentsVC=_recentsVC - In the implementation block
@property (nonatomic,retain) NSArray * verticalAlignments;                                                           //@synthesize verticalAlignments=_verticalAlignments - In the implementation block
@property (nonatomic,retain) NSArray * horizontalAlignments;                                                         //@synthesize horizontalAlignments=_horizontalAlignments - In the implementation block
@property (nonatomic,retain) UIResponder*<UITextInput> nextInputDelegate;                                            //@synthesize nextInputDelegate=_nextInputDelegate - In the implementation block
@property (nonatomic,retain) UITextInputTraits * textInputTraits;                                                    //@synthesize textInputTraits=_textInputTraits - In the implementation block
@property (nonatomic,retain) UILexicon * cachedRecents;                                                              //@synthesize cachedRecents=_cachedRecents - In the implementation block
@property (nonatomic,retain) UILabel * _promptLabel;                                                                 //@synthesize promptLabel=_promptLabel - In the implementation block
@property (nonatomic,retain) UIResponder*<UITextInput> persistentDelegate;                                           //@synthesize persistentDelegate=_persistentDelegate - In the implementation block
@property (assign,nonatomic) UIEdgeInsets unfocusedFocusGuideOutsets; 
@property (assign,nonatomic) BOOL supportsRecentInputsIntegration;                                                   //@synthesize supportsRecentInputsIntegration=_supportsRecentInputsIntegration - In the implementation block
@property (assign,nonatomic) id<UISystemInputViewControllerDelegate> systemInputViewControllerDelegate;              //@synthesize systemInputViewControllerDelegate=_systemInputViewControllerDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long requestedInteractionModel;                                           //@synthesize requestedInteractionModel=_requestedInteractionModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_canonicalTraitsForResponder:(id)arg1 ;
+(BOOL)canUseSystemInputViewControllerForResponder:(id)arg1 ;
+(void)setKeyboardInteractionModel:(unsigned long long)arg1 ;
+(id)systemInputViewControllerForResponder:(id)arg1 editorView:(id)arg2 ;
+(id)_tvOS_systemInputViewControllerForResponder:(id)arg1 editorView:(id)arg2 containingResponder:(id)arg3 traitCollection:(id)arg4 ;
+(id)_carPlay_systemInputViewControllerForResponder:(id)arg1 editorView:(id)arg2 containingResponder:(id)arg3 traitCollection:(id)arg4 ;
+(id)systemInputViewControllerForResponder:(id)arg1 editorView:(id)arg2 containingResponder:(id)arg3 ;
+(id)_iOS_systemInputViewControllerForResponder:(id)arg1 editorView:(id)arg2 containingResponder:(id)arg3 traitCollection:(id)arg4 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_windowDidBecomeKey:(id)arg1 ;
-(void)setRequestedInteractionModel:(unsigned long long)arg1 ;
-(UIButton *)doneButton;
-(void)updateViewConstraints;
-(UITextInputTraits *)textInputTraits;
-(void)setDoneButton:(UIButton *)arg1 ;
-(void)viewWillLayoutSubviews;
-(id)traitCollection;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(BOOL)_disableAutomaticKeyboardBehavior;
-(UIViewController *)inputVC;
-(void)notifyDelegateWithAccessoryVisibility:(BOOL)arg1 ;
-(BOOL)willShowRecentsList;
-(void)setDidDisplayRecents:(BOOL)arg1 ;
-(UIResponder*<UITextInput>)nextInputDelegate;
-(void)_windowWillBecomeKey:(id)arg1 ;
-(void)_dismissSystemInputViewController;
-(UIEdgeInsets)unfocusedFocusGuideOutsets;
-(void)setNextInputDelegate:(UIResponder*<UITextInput>)arg1 ;
-(BOOL)willUpdateBackgroundEffectOnInputModeChange;
-(void)setCachedRecents:(UILexicon *)arg1 ;
-(BOOL)supportsRecentInputsIntegration;
-(NSArray *)keyboardConstraints;
-(void)setKeyboardConstraints:(NSArray *)arg1 ;
-(NSArray *)editorConstraints;
-(id)constraintFromView:(id)arg1 attribute:(long long)arg2 toView:(id)arg3 attribute:(long long)arg4 ;
-(void)setEditorConstraints:(NSArray *)arg1 ;
-(void)setConstraints:(id)arg1 forEdge:(long long)arg2 ;
-(id)constraintsForEdge:(long long)arg1 ;
-(unsigned long long)_verticalLayoutTypeForEdge:(long long)arg1 ;
-(void)_resetDelegate;
-(unsigned long long)_horizontalLayoutTypeForEdge:(long long)arg1 ;
-(NSArray *)horizontalAlignments;
-(NSArray *)verticalAlignments;
-(void)setHorizontalAlignments:(NSArray *)arg1 ;
-(void)setVerticalAlignments:(NSArray *)arg1 ;
-(void)_clearCursorLocationIfNotFirstResponder;
-(void)setSupportsRecentInputsIntegration:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setSystemInputViewControllerDelegate:(id<UISystemInputViewControllerDelegate>)arg1 ;
-(void)reloadInputViewsForPersistentDelegate;
-(id)accessoryViewControllerForEdge:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setAlignmentConstraintArray:(id)arg1 forAxis:(long long)arg2 ;
-(void)_willResume:(id)arg1 ;
-(void)_didSuspend:(id)arg1 ;
-(UIKBSystemLayoutViewController *)editorVC;
-(UIKeyboard *)keyboard;
-(void)inputModeDidChange:(id)arg1 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(long long)blurEffectStyle;
-(UIRecentsInputViewController *)recentsVC;
-(BOOL)supportsTouchInput;
-(id)alignmentConstraintArrayForAxis:(long long)arg1 ;
-(void)setAlignmentConstraint:(id)arg1 forAxis:(long long)arg2 ;
-(void)setUnfocusedFocusGuideOutsets:(UIEdgeInsets)arg1 ;
-(UIView *)containingView;
-(id)alignmentConstraintForAxis:(long long)arg1 ;
-(UILabel *)_promptLabel;
-(void)resetContainingResponder;
-(BOOL)isAutomaticResponderTransition;
-(void)prepareForRelease;
-(UICompatibilityInputViewController *)keyboardVC;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setInputVC:(UIViewController *)arg1 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setEditorVC:(UIKBSystemLayoutViewController *)arg1 ;
-(void)setKeyboard:(UIKeyboard *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setTextInputTraits:(UITextInputTraits *)arg1 ;
-(void)setBlurEffectStyle:(long long)arg1 ;
-(void)didSelectRecentInput;
-(void)switchToKeyboard;
-(void)setSupportsTouchInput:(BOOL)arg1 ;
-(void)setPersistentDelegate:(UIResponder*<UITextInput>)arg1 ;
-(void)setIsAutomaticResponderTransition:(BOOL)arg1 ;
-(void)dealloc;
-(void)setWillUpdateBackgroundEffectOnInputModeChange:(BOOL)arg1 ;
-(void)setRecentsVC:(UIRecentsInputViewController *)arg1 ;
-(unsigned long long)requestedInteractionModel;
-(void)setContainingView:(UIView *)arg1 ;
-(void)populateCoreHierarchy;
-(UIView *)contentLayoutView;
-(void)setAccessoryViewController:(id)arg1 forEdge:(long long)arg2 ;
-(void)setWillPresentFullscreen:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)findNextInputDelegate;
-(id)doneButtonStringForCurrentInputDelegate;
-(void)_returnButtonPressed;
-(id)_accessoryViewControllerForEdge:(long long)arg1 ;
-(UILexicon *)cachedRecents;
-(void)setupKeyboard;
-(void)set_promptLabel:(UILabel *)arg1 ;
-(void)setContentLayoutView:(UIView *)arg1 ;
-(void)_addChildInputViewController;
-(void)_addAccessoryViewController:(id)arg1 ;
-(BOOL)willPresentFullscreen;
-(void)updateAlignmentConstraints;
-(id)_traitCollectionForUserInterfaceStyle;
-(void)_setNonInputViewVisibility:(BOOL)arg1 ;
-(void)_createKeyboardIfNecessary;
-(void)_updateRemoteTextEditingSession;
-(void)setKeyboardVC:(UICompatibilityInputViewController *)arg1 ;
-(UIResponder*<UITextInput>)persistentDelegate;
-(void)_restoreKeyboardIfNecessary;
-(void)_removeAccessoryViewController:(id)arg1 ;
-(void)configureRecentsVCIfNecessary;
-(id<UISystemInputViewControllerDelegate>)systemInputViewControllerDelegate;
-(BOOL)didDisplayRecents;
@end

