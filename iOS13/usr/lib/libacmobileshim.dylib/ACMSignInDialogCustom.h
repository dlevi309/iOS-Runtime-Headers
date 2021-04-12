/*
* Generated on Monday, March 1, 2021 at 2:35:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

#import <libacmobileshim.dylib/libacmobileshim.dylib-Structs.h>
#import <libacmobileshim.dylib/ACMSignInDialog.h>
#import <libobjc.A.dylib/ACMSignInDialogCustomProtocol.h>
#import <libobjc.A.dylib/ACMSignInWidgetDelegate.h>

@protocol ACMSignInWidgetProtocol;
@class UIColor, NSString, UIButton, UIBarButtonItem;

@interface ACMSignInDialogCustom : ACMSignInDialog <ACMSignInDialogCustomProtocol, ACMSignInWidgetDelegate> {

	id<ACMSignInWidgetProtocol> _widget;
	UIButton* _signInButton;
	UIButton* _cancelButton;
	UIBarButtonItem* _signInBarButton;
	UIBarButtonItem* _cancelBarButton;
	BOOL _userNameFieldEditable;
	Class _widgetClass;
	NSString* _widgetAccountLabel;
	long long _widgetPasswordReturnKeyType;
	CGPoint _widgetPosition;

}

@property (nonatomic,retain,readonly) id<ACMSignInWidgetProtocol> widget;              //@synthesize widget=_widget - In the implementation block
@property (nonatomic,readonly) BOOL standardViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) id<ACMSignInDialogDelegate> delegate; 
@property (nonatomic,retain) NSString * requestedUserName; 
@property (readonly) NSString * userNameString; 
@property (assign) NSString * passwordString; 
@property (nonatomic,retain) Class widgetClass;                                        //@synthesize widgetClass=_widgetClass - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor; 
@property (assign,nonatomic) BOOL userNameFieldEditable;                               //@synthesize userNameFieldEditable=_userNameFieldEditable - In the implementation block
@property (assign,nonatomic) BOOL shouldAuthenticateOnUserInput; 
@property (assign,nonatomic) CGPoint widgetPosition;                                   //@synthesize widgetPosition=_widgetPosition - In the implementation block
@property (assign,nonatomic) NSString * widgetAccountLabel;                            //@synthesize widgetAccountLabel=_widgetAccountLabel - In the implementation block
@property (assign,nonatomic) long long widgetPasswordReturnKeyType;                    //@synthesize widgetPasswordReturnKeyType=_widgetPasswordReturnKeyType - In the implementation block
@property (nonatomic,retain) UIButton * signInButton;                                  //@synthesize signInButton=_signInButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * signInBarButton;                        //@synthesize signInBarButton=_signInBarButton - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                                  //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * cancelBarButton;                        //@synthesize cancelBarButton=_cancelBarButton - In the implementation block
-(void)dealloc;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)loadView;
-(UIButton *)cancelButton;
-(void)setCancelButton:(UIButton *)arg1 ;
-(UIBarButtonItem *)cancelBarButton;
-(UIButton *)signInButton;
-(void)setSignInButton:(UIButton *)arg1 ;
-(id<ACMSignInWidgetProtocol>)widget;
-(void)checkFields;
-(void)setupCustomView;
-(BOOL)canSignIn;
-(UIBarButtonItem *)signInBarButton;
-(BOOL)standardViewController;
-(void)setWidgetPosition:(CGPoint)arg1 ;
-(void)setWidgetAccountLabel:(NSString *)arg1 ;
-(void)setWidgetPasswordReturnKeyType:(long long)arg1 ;
-(void)setShouldAuthenticateOnUserInput:(BOOL)arg1 ;
-(void)setUserNameFieldEditable:(BOOL)arg1 ;
-(BOOL)userNameFieldEditable;
-(void)disableControls:(BOOL)arg1 ;
-(Class)widgetClass;
-(void)setWidgetClass:(Class)arg1 ;
-(CGPoint)widgetPosition;
-(long long)widgetPasswordReturnKeyType;
-(NSString *)widgetAccountLabel;
-(void)setSignInBarButton:(UIBarButtonItem *)arg1 ;
-(BOOL)shouldAuthenticateOnUserInput;
-(void)setCancelBarButton:(UIBarButtonItem *)arg1 ;
-(void)setRequestedUserName:(NSString *)arg1 ;
-(void)showWithParentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)hideWithParentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)onIForgot:(id)arg1 ;
-(void)onSignIn:(id)arg1 ;
@end

