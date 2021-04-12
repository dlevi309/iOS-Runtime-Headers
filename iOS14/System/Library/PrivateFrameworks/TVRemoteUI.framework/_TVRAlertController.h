/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
*/

#import <TVRemoteUI/TVRemoteUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <TVRemoteUI/_TVRAlertViewDelegate.h>
#import <TVRemoteUI/_TVRKeyboardViewDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@protocol _TVRAlertControllerDelegate;
@class NSString, TVRCKeyboardAttributes, _TVRAlertView, _TVRKeyboardView, UIView;

@interface _TVRAlertController : UIViewController <_TVRAlertViewDelegate, _TVRKeyboardViewDelegate, UIViewControllerTransitioningDelegate> {

	NSString* _text;
	TVRCKeyboardAttributes* _keyboardAttributes;
	unsigned long long _type;
	id<_TVRAlertControllerDelegate> _delegate;
	_TVRAlertView* _alertView;
	_TVRKeyboardView* _keyboardView;
	UIView* _dimmingView;
	CGRect _previousKeyboardFrame;

}

@property (nonatomic,retain) _TVRAlertView * alertView;                                    //@synthesize alertView=_alertView - In the implementation block
@property (nonatomic,retain) _TVRKeyboardView * keyboardView;                              //@synthesize keyboardView=_keyboardView - In the implementation block
@property (nonatomic,retain) UIView * dimmingView;                                         //@synthesize dimmingView=_dimmingView - In the implementation block
@property (assign,nonatomic) CGRect previousKeyboardFrame;                                 //@synthesize previousKeyboardFrame=_previousKeyboardFrame - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * text;                                                //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) TVRCKeyboardAttributes * keyboardAttributes;                    //@synthesize keyboardAttributes=_keyboardAttributes - In the implementation block
@property (assign,nonatomic,__weak) id<_TVRAlertControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id<_TVRAlertControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setDimmingView:(UIView *)arg1 ;
-(_TVRKeyboardView *)keyboardView;
-(void)setDelegate:(id<_TVRAlertControllerDelegate>)arg1 ;
-(void)_cancel;
-(BOOL)_canShowWhileLocked;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(NSString *)text;
-(void)setKeyboardView:(_TVRKeyboardView *)arg1 ;
-(unsigned long long)type;
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(UIView *)dimmingView;
-(void)_keyboardChanged:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(_TVRAlertView *)alertView;
-(void)setAlertView:(_TVRAlertView *)arg1 ;
-(void)keyboardViewDidHitReturnKey:(id)arg1 ;
-(void)keyboardView:(id)arg1 didUpdateText:(id)arg2 ;
-(void)keyboardView:(id)arg1 generatedTextInputPayload:(id)arg2 ;
-(void)keyboardViewDidCancel:(id)arg1 ;
-(void)keyboardViewPressedDictationButton:(id)arg1 ;
-(void)keyboardViewReleasedDictationButton:(id)arg1 ;
-(void)enableDictationButton:(BOOL)arg1 ;
-(id)initWithTitle:(id)arg1 keyboardAttributes:(id)arg2 ;
-(id)initWithTitle:(id)arg1 PINEntryAttributes:(id)arg2 ;
-(void)_observeKeyboardNotifications;
-(id)initWithTitle:(id)arg1 passcodeSize:(long long)arg2 ;
-(void)_layoutForKeyboardFrame:(CGRect)arg1 ;
-(id)_contentViewBasedOnType;
-(void)alertView:(id)arg1 didUpdateText:(id)arg2 ;
-(void)alertViewDidCancel:(id)arg1 ;
-(id)initWithKeyboardAttributes:(id)arg1 ;
-(id)initForTextPasswordType:(id)arg1 ;
-(void)setKeyboardAttributes:(TVRCKeyboardAttributes *)arg1 ;
-(TVRCKeyboardAttributes *)keyboardAttributes;
-(CGRect)previousKeyboardFrame;
-(void)setPreviousKeyboardFrame:(CGRect)arg1 ;
@end

