/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/

#import <UIKitCore/UIViewController.h>

@class AKAppleIDAuthenticationInAppContext, UIStackView, UIButton, UIView, OBPrivacyLinkController;

@interface AKBasicLoginOptionsViewController : UIViewController {

	/*^block*/id _createIDAction;
	/*^block*/id _forgotAction;
	AKAppleIDAuthenticationInAppContext* _context;
	UIStackView* _optionsStack;
	UIButton* _forgotButton;
	UIButton* _createButton;
	UIView* _privacyView;
	OBPrivacyLinkController* _privacyController;

}

@property (assign,nonatomic,__weak) AKAppleIDAuthenticationInAppContext * context;              //@synthesize context=_context - In the implementation block
@property (retain) UIStackView * optionsStack;                                                  //@synthesize optionsStack=_optionsStack - In the implementation block
@property (retain) UIButton * forgotButton;                                                     //@synthesize forgotButton=_forgotButton - In the implementation block
@property (retain) UIButton * createButton;                                                     //@synthesize createButton=_createButton - In the implementation block
@property (retain) UIView * privacyView;                                                        //@synthesize privacyView=_privacyView - In the implementation block
@property (retain) OBPrivacyLinkController * privacyController;                                 //@synthesize privacyController=_privacyController - In the implementation block
@property (nonatomic,copy) id createIDAction;                                                   //@synthesize createIDAction=_createIDAction - In the implementation block
@property (nonatomic,copy) id forgotAction;                                                     //@synthesize forgotAction=_forgotAction - In the implementation block
-(id)init;
-(AKAppleIDAuthenticationInAppContext *)context;
-(void)setContext:(AKAppleIDAuthenticationInAppContext *)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(void)viewDidLoad;
-(UIButton *)createButton;
-(UIButton *)forgotButton;
-(void)_configureButtonForFontAdjustment:(id)arg1 ;
-(void)_configureOptionsStack;
-(void)setPrivacyController:(OBPrivacyLinkController *)arg1 ;
-(OBPrivacyLinkController *)privacyController;
-(void)_addPrivacyView:(id)arg1 ;
-(id)forgotAction;
-(id)createIDAction;
-(UIView *)privacyView;
-(UIStackView *)optionsStack;
-(void)forgotPressed:(id)arg1 ;
-(void)createPressed:(id)arg1 ;
-(void)setCreateIDAction:(id)arg1 ;
-(void)setForgotAction:(id)arg1 ;
-(void)setOptionsStack:(UIStackView *)arg1 ;
-(void)setForgotButton:(UIButton *)arg1 ;
-(void)setCreateButton:(UIButton *)arg1 ;
-(void)setPrivacyView:(UIView *)arg1 ;
@end

