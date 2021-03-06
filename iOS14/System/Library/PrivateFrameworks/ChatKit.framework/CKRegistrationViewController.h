/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/AKTapToSignInViewControllerDelegate.h>

@class AKTapToSignInViewController, OBPrivacyLinkController, NSString;

@interface CKRegistrationViewController : UIViewController <AKTapToSignInViewControllerDelegate> {

	/*^block*/id _completionBlock;
	AKTapToSignInViewController* _akSignInVC;
	OBPrivacyLinkController* _privacyLinkController;

}

@property (nonatomic,retain) AKTapToSignInViewController * akSignInVC;                     //@synthesize akSignInVC=_akSignInVC - In the implementation block
@property (nonatomic,retain) OBPrivacyLinkController * privacyLinkController;              //@synthesize privacyLinkController=_privacyLinkController - In the implementation block
@property (nonatomic,copy) id completionBlock;                                             //@synthesize completionBlock=_completionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldShowAuthKitSignIn;
+(id)_inProgressRegisteringNonPhoneAccount;
+(BOOL)shouldShowRegistration;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)keyboardDidShow:(id)arg1 ;
-(void)viewDidLoad;
-(AKTapToSignInViewController *)akSignInVC;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(id)accountRegistrar;
-(void)_handleRegistrarCompletion:(BOOL)arg1 errorAlertController:(id)arg2 ;
-(void)updateInsetsForKeyboardFrame:(CGRect)arg1 ;
-(void)setPrivacyLinkController:(OBPrivacyLinkController *)arg1 ;
-(void)setErrorPresentationViewController:(id)arg1 ;
-(OBPrivacyLinkController *)privacyLinkController;
-(void)setAkSignInVC:(AKTapToSignInViewController *)arg1 ;
-(void)tapToSignInViewController:(id)arg1 didAuthenticateWithResults:(id)arg2 error:(id)arg3 ;
-(void)dealloc;
@end

