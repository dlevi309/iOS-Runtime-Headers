/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RapportUI.framework/RapportUI
*/

#import <UIKitCore/UIViewController.h>

@class NSString, UIButton, UILabel;

@interface RPPairingShowViewController : UIViewController {

	/*^block*/id _dismissHandler;
	NSString* _password;
	UIButton* _cancelButton;
	UILabel* _titleLabel;
	UILabel* _subTitleLabel;
	UILabel* _verificationCodeLabel;

}

@property (nonatomic,retain) UIButton * cancelButton;                      //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subTitleLabel;                      //@synthesize subTitleLabel=_subTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * verificationCodeLabel;              //@synthesize verificationCodeLabel=_verificationCodeLabel - In the implementation block
@property (nonatomic,copy) id dismissHandler;                              //@synthesize dismissHandler=_dismissHandler - In the implementation block
@property (nonatomic,copy) NSString * password;                            //@synthesize password=_password - In the implementation block
+(id)instantiateViewController;
-(UILabel *)titleLabel;
-(UIButton *)cancelButton;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setCancelButton:(UIButton *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UILabel *)subTitleLabel;
-(void)setSubTitleLabel:(UILabel *)arg1 ;
-(void)setDismissHandler:(id)arg1 ;
-(NSString *)password;
-(id)dismissHandler;
-(void)setPassword:(NSString *)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)handleCancelButton:(id)arg1 ;
-(void)_updatePasswordUI;
-(UILabel *)verificationCodeLabel;
-(void)setVerificationCodeLabel:(UILabel *)arg1 ;
@end

