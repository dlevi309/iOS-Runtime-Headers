/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIInputViewControllerNeedSceneSize.h>

@protocol BSInvalidatable;
@class _SFPasswordViewController, NSString;

@interface UIKeyboardHiddenViewController : UIViewController <UIViewControllerTransitioningDelegate, UIInputViewControllerNeedSceneSize> {

	_SFPasswordViewController* _autofillVC;
	BOOL _presentedAutofill;
	BOOL _focusWasDeferredBeforeDeactivation;
	BOOL _isFocusDeferred;
	unsigned _deferredContextID;
	NSString* _deferredDisplayUUID;
	id<BSInvalidatable> _eventFocusDeferralToken;
	BOOL _processingSceneDidChange;

}

@property (nonatomic,retain) _SFPasswordViewController * autofillVC;              //@synthesize autofillVC=_autofillVC - In the implementation block
@property (assign,nonatomic) BOOL presentedAutofill;                              //@synthesize presentedAutofill=_presentedAutofill - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(BOOL)_formSheetObeysContentContainerSize;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)presentViewController:(BOOL)arg1 ;
-(void)_sceneDidChange;
-(void)_setDeferred:(BOOL)arg1 forDisplayUUID:(id)arg2 ;
-(void)_applicationWillDeactivate:(id)arg1 ;
-(void)_deviceWillLock:(id)arg1 ;
-(void)passwordViewControllerDidFinish:(id)arg1 ;
-(id)_deferredTargetForClientContext:(unsigned)arg1 ;
-(void)presentAutofillVCWithAnimation:(BOOL)arg1 ;
-(void)presentSelfWithAnimation:(BOOL)arg1 ;
-(BOOL)shouldPresentAsPopover;
-(void)_localAuthenticationUIPresented;
-(void)_localAuthenticationUIDismissed;
-(void)_willChangeToFirstResponder:(id)arg1 ;
-(_SFPasswordViewController *)autofillVC;
-(void)setAutofillVC:(_SFPasswordViewController *)arg1 ;
-(BOOL)presentedAutofill;
-(void)setPresentedAutofill:(BOOL)arg1 ;
@end

