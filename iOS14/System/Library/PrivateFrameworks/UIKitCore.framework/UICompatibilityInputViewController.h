/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIInputViewController.h>
#import <UIKitCore/_UIKBDelegateAwareInputController.h>

@protocol UITextCursorAssertion;
@class UIKeyboardInputMode, UIKeyboard, UILayoutGuide, UIViewController, NSArray, NSString;

@interface UICompatibilityInputViewController : UIInputViewController <_UIKBDelegateAwareInputController> {

	UIKeyboardInputMode* _inputMode;
	UIKeyboard* _deferredSystemView;
	UIKeyboardInputMode* _incomingExtensionInputMode;
	double _incomingExtensionInputModeTime;
	double _lastSuspendedTime;
	double _currentResumeTime;
	BOOL _shouldRegenerateSizingConstraints;
	BOOL _shouldSuppressRemoteInputController;
	BOOL _tearingDownInputController;
	double _resetInputModeTime;
	unsigned long long _latestDelayTime;
	UILayoutGuide* _focusSafeAreaLayoutGuide;
	UIViewController* _inputController;
	NSArray* _internalEdgeMatchConstraints;
	id<UITextCursorAssertion> _blinkAssertion;

}

@property (nonatomic,retain) UIViewController * inputController;                      //@synthesize inputController=_inputController - In the implementation block
@property (nonatomic,retain) NSArray * internalEdgeMatchConstraints;                  //@synthesize internalEdgeMatchConstraints=_internalEdgeMatchConstraints - In the implementation block
@property (nonatomic,retain) id<UITextCursorAssertion> blinkAssertion;                //@synthesize blinkAssertion=_blinkAssertion - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * focusSafeAreaLayoutGuide; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)applicationDidReceiveMemoryWarning:(id)arg1 ;
+(BOOL)_requiresProxyInterface;
+(id)inputSnapshotViewForInputMode:(id)arg1 orientation:(long long)arg2 ;
+(id)inputViewControllerWithView:(id)arg1 ;
+(id)deferredInputModeControllerWithKeyboard:(id)arg1 ;
-(void)willResume:(id)arg1 ;
-(void)didSuspend:(id)arg1 ;
-(void)setInputMode:(id)arg1 ;
-(id)preferredFocusedView;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)rebuildChildConstraints;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(id)_keyboard;
-(void)addSnapshotViewForInputMode:(id)arg1 ;
-(void)willBeginTranslation;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)resetInputMode;
-(id)childCompatibilityController;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)_compatibilityController;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(id)_initAsDeferredController;
-(void)_tvUpdateAppearanceForUserInterfaceStyle;
-(id<UITextCursorAssertion>)blinkAssertion;
-(void)setTearingDownInputController;
-(void)isHosted:(id)arg1 ;
-(void)keyboardWillChangeFromDelegate:(id)arg1 toDelegate:(id)arg2 ;
-(void)shouldUpdateInputMode:(id)arg1 ;
-(void)finishSplitTransition:(BOOL)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(id)_systemViewControllerForInputMode:(id)arg1 ;
-(id)_keyboardForThisViewController;
-(void)setBlinkAssertion:(id<UITextCursorAssertion>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)takeSnapshotView;
-(UILayoutGuide *)focusSafeAreaLayoutGuide;
-(void)killIncomingExtension;
-(void)removeSnapshotView;
-(void)setInternalEdgeMatchConstraints:(NSArray *)arg1 ;
-(void)didFinishTranslation;
-(void)generateCompatibleSizeConstraintsIfNecessary;
-(void)resetInputModeInMainThread;
-(void)assertCurrentInputModeIfNecessary;
-(NSArray *)internalEdgeMatchConstraints;
-(void)loadView;
-(void)validateInputModeIsDisplayed;
-(id)_compatView;
-(void)setDeferredSystemView:(id)arg1 ;
-(void)tearDownInputController;
-(void)setInputController:(UIViewController *)arg1 ;
-(void)viewDidLayoutSubviews;
-(UIViewController *)inputController;
-(void)dealloc;
@end

