/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIInputViewController.h>
#import <UIKitCore/_UIKBDelegateAwareInputController.h>

@class UIKeyboardInputMode, UIKeyboard, UIViewController, NSArray, NSString;

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
	UIViewController* _inputController;
	NSArray* _internalEdgeMatchConstraints;

}

@property (nonatomic,retain) UIViewController * inputController;                  //@synthesize inputController=_inputController - In the implementation block
@property (nonatomic,retain) NSArray * internalEdgeMatchConstraints;              //@synthesize internalEdgeMatchConstraints=_internalEdgeMatchConstraints - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)deferredInputModeControllerWithKeyboard:(id)arg1 ;
+(id)inputViewControllerWithView:(id)arg1 ;
+(BOOL)_requiresProxyInterface;
+(id)inputSnapshotViewForInputMode:(id)arg1 orientation:(long long)arg2 ;
+(void)applicationDidReceiveMemoryWarning:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(id)preferredFocusedView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)didMoveToParentViewController:(id)arg1 ;
-(id)_keyboard;
-(void)viewDidLayoutSubviews;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(id)_compatibilityController;
-(void)willResume:(id)arg1 ;
-(void)setInputMode:(id)arg1 ;
-(void)setTearingDownInputController;
-(void)rebuildChildConstraints;
-(void)generateCompatibleSizeConstraintsIfNecessary;
-(id)_initAsDeferredController;
-(void)tearDownInputController;
-(void)didSuspend:(id)arg1 ;
-(void)shouldUpdateInputMode:(id)arg1 ;
-(void)killIncomingExtension;
-(UIViewController *)inputController;
-(NSArray *)internalEdgeMatchConstraints;
-(void)setInternalEdgeMatchConstraints:(NSArray *)arg1 ;
-(id)_compatView;
-(void)setInputController:(UIViewController *)arg1 ;
-(void)resetInputModeInMainThread;
-(void)resetInputMode;
-(void)addSnapshotViewForInputMode:(id)arg1 ;
-(void)removeSnapshotView;
-(void)takeSnapshotView;
-(id)_systemViewControllerForInputMode:(id)arg1 ;
-(void)keyboardWillChangeFromDelegate:(id)arg1 toDelegate:(id)arg2 ;
-(id)childCompatibilityController;
-(id)_keyboardForThisViewController;
-(void)setDeferredSystemView:(id)arg1 ;
-(void)assertCurrentInputModeIfNecessary;
-(void)willBeginTranslation;
-(void)finishSplitTransition:(BOOL)arg1 ;
-(void)didFinishTranslation;
-(void)_tvUpdateAppearanceForUserInterfaceStyle;
@end

