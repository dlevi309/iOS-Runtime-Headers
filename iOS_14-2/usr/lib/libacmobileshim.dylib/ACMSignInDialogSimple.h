/*
* Generated on Thursday, January 14, 2021 at 2:29:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

#import <libacmobileshim.dylib/ACMSignInDialog.h>
#import <libobjc.A.dylib/ACMSignInDialogSimpleProtocol.h>

@class UIImage, UIColor, NSString, UIButton, UITextView, UIView;

@interface ACMSignInDialogSimple : ACMSignInDialog <ACMSignInDialogSimpleProtocol> {

	UIButton* _loginButton;
	UIButton* _cancelButton;
	UIImage* _logo;
	UITextView* _licenseTextField;
	UIColor* _backgroundColor;
	NSString* _accountNameFieldPlaceholder;
	UIView* _backgroudView;
	UIColor* _licenseTextColor;

}

@property (retain) UIColor * licenseTextColor;                                    //@synthesize licenseTextColor=_licenseTextColor - In the implementation block
@property (nonatomic,retain) UIView * backgroudView;                              //@synthesize backgroudView=_backgroudView - In the implementation block
@property (nonatomic,readonly) unsigned long long verticalShift; 
@property (nonatomic,readonly) UIButton * loginButton;                            //@synthesize loginButton=_loginButton - In the implementation block
@property (nonatomic,readonly) UIButton * cancelButton;                           //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UIImage * logo;                                      //@synthesize logo=_logo - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                           //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) NSString * accountNameFieldPlaceholder;              //@synthesize accountNameFieldPlaceholder=_accountNameFieldPlaceholder - In the implementation block
@property (assign) id<ACMSignInDialogDelegate> delegate; 
@property (nonatomic,retain) NSString * requestedUserName; 
@property (readonly) NSString * userNameString; 
@property (assign) NSString * passwordString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIButton *)cancelButton;
-(void)focus;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(UIImage *)logo;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setLogo:(UIImage *)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(long long)statusBarStyle;
-(void)loadView;
-(void)dealloc;
-(UIButton *)loginButton;
-(NSString *)userNameString;
-(void)checkFields;
-(void)setAccountNameFieldPlaceholder:(NSString *)arg1 ;
-(void)disableControls:(BOOL)arg1 ;
-(NSString *)passwordString;
-(NSString *)accountNameFieldPlaceholder;
-(unsigned long long)verticalShift;
-(UIView *)backgroudView;
-(void)setBackgroudView:(UIView *)arg1 ;
-(UIColor *)licenseTextColor;
-(void)setLicenseTextColor:(UIColor *)arg1 ;
@end

