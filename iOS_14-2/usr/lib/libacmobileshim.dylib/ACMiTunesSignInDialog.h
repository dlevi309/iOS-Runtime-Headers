/*
* Generated on Thursday, January 14, 2021 at 2:29:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

#import <libacmobileshim.dylib/libacmobileshim.dylib-Structs.h>
#import <libacmobileshim.dylib/ACMSignInDialog.h>
#import <libobjc.A.dylib/ACMiTunesSignInDialogProtocol.h>
#import <UIKit/UIAlertViewDelegate.h>

@class NSString, UIAlertView;

@interface ACMiTunesSignInDialog : ACMSignInDialog <ACMiTunesSignInDialogProtocol, UIAlertViewDelegate> {

	BOOL _isShown;
	NSString* _titleField;
	BOOL _isUserNameEditable;
	long long _previousInterfaceOrientation;
	CGSize _titleStringSize;
	NSString* _alertViewPrompt;
	CGRect _userNameFrame;
	CGRect _passwordFrame;

}

@property (retain) NSString * titleField;                                         //@synthesize titleField=_titleField - In the implementation block
@property (nonatomic,readonly) UIAlertView * signInDialog; 
@property (assign) BOOL isShown;                                                  //@synthesize isShown=_isShown - In the implementation block
@property (readonly) BOOL isPortraitMode; 
@property (readonly) CGRect userNameFrame;                                        //@synthesize userNameFrame=_userNameFrame - In the implementation block
@property (readonly) CGRect passwordFrame;                                        //@synthesize passwordFrame=_passwordFrame - In the implementation block
@property (assign,nonatomic) long long previousInterfaceOrientation;              //@synthesize previousInterfaceOrientation=_previousInterfaceOrientation - In the implementation block
@property (assign,nonatomic) CGSize titleStringSize;                              //@synthesize titleStringSize=_titleStringSize - In the implementation block
@property (assign,nonatomic) BOOL isUserNameEditable;                             //@synthesize isUserNameEditable=_isUserNameEditable - In the implementation block
@property (nonatomic,retain) NSString * alertViewPrompt;                          //@synthesize alertViewPrompt=_alertViewPrompt - In the implementation block
@property (assign) id<ACMSignInDialogDelegate> delegate; 
@property (nonatomic,retain) NSString * requestedUserName; 
@property (readonly) NSString * userNameString; 
@property (assign) NSString * passwordString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isShown;
-(void)didRotate:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)setTitleField:(NSString *)arg1 ;
-(NSString *)titleField;
-(void)viewDidLoad;
-(void)setPreviousInterfaceOrientation:(long long)arg1 ;
-(void)didPresentAlertView:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(long long)statusBarStyle;
-(void)loadView;
-(long long)previousInterfaceOrientation;
-(void)cancel;
-(void)dealloc;
-(NSString *)userNameString;
-(void)handleRotation;
-(void)setIsShown:(BOOL)arg1 ;
-(NSString *)alertViewPrompt;
-(void)setAlertViewPrompt:(NSString *)arg1 ;
-(BOOL)isUserNameEditable;
-(BOOL)shouldPasswordTextFieldReturnOnSignInDisallowed;
-(UIAlertView *)signInDialog;
-(void)disableControls:(BOOL)arg1 ;
-(NSString *)passwordString;
-(void)setIsUserNameEditable:(BOOL)arg1 ;
-(void)showWithParentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)hideWithParentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)dialogTitle;
-(void)setTitleStringSize:(CGSize)arg1 ;
-(BOOL)isPortraitMode;
-(CGSize)titleStringSize;
-(BOOL)changeTitleStringIfNeeded;
-(CGRect)userNameFrame;
-(CGRect)passwordFrame;
-(void)handleTextFieldShouldReturnOnNonPasswordField;
@end

