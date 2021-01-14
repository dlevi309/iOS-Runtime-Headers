/*
* Generated on Thursday, January 14, 2021 at 2:29:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

#import <libacmobileshim.dylib/libacmobileshim.dylib-Structs.h>
#import <libacmobileshim.dylib/ACMDialog.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <libobjc.A.dylib/ACMSignInDialogProtocol.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol ACMSignInDialogDelegate;
@class NSString, UITextField;

@interface ACMSignInDialog : ACMDialog <UIAlertViewDelegate, ACMSignInDialogProtocol, UITextFieldDelegate> {

	id<ACMSignInDialogDelegate> _delegate;
	long long _signInDialogState;
	UITextField* _accountNameField;
	UITextField* _passwordField;
	BOOL _userHasBegunEditingText;
	NSString* _requestedUserName;
	unsigned long long _stateChangeCounter;

}

@property (assign,nonatomic) long long signInDialogState;                        //@synthesize signInDialogState=_signInDialogState - In the implementation block
@property (assign,nonatomic) BOOL userHasBegunEditingText;                       //@synthesize userHasBegunEditingText=_userHasBegunEditingText - In the implementation block
@property (assign,nonatomic) unsigned long long stateChangeCounter;              //@synthesize stateChangeCounter=_stateChangeCounter - In the implementation block
@property (nonatomic,retain) UITextField * accountNameField;                     //@synthesize accountNameField=_accountNameField - In the implementation block
@property (nonatomic,retain) UITextField * passwordField;                        //@synthesize passwordField=_passwordField - In the implementation block
@property (assign) NSString * passwordString; 
@property (readonly) NSString * userNameString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) id<ACMSignInDialogDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * requestedUserName;                       //@synthesize requestedUserName=_requestedUserName - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)canSignIn;
-(id<ACMSignInDialogDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(UITextField *)passwordField;
-(void)setDelegate:(id<ACMSignInDialogDelegate>)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(NSString *)userNameString;
-(void)setPasswordField:(UITextField *)arg1 ;
-(unsigned long long)stateChangeCounter;
-(long long)signInDialogState;
-(void)setSignInDialogState:(long long)arg1 ;
-(void)setStateChangeCounter:(unsigned long long)arg1 ;
-(BOOL)userHasBegunEditingText;
-(void)setUserHasBegunEditingText:(BOOL)arg1 ;
-(void)setAccountNameField:(UITextField *)arg1 ;
-(NSString *)requestedUserName;
-(UITextField *)accountNameField;
-(void)controlsWillChangeState:(BOOL)arg1 ;
-(void)controlsDidChangeState:(BOOL)arg1 ;
-(void)disableControls:(BOOL)arg1 ;
-(NSString *)passwordString;
-(void)setPasswordString:(NSString *)arg1 ;
-(BOOL)shouldAuthenticateOnUserInput;
-(void)setRequestedUserName:(NSString *)arg1 ;
-(void)onIForgot:(id)arg1 ;
-(void)onSignIn:(id)arg1 ;
-(void)onSignInCancel:(id)arg1 ;
@end

