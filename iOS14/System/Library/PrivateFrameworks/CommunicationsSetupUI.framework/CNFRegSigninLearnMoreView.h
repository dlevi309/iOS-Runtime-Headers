/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class PSSpecifier, UILabel, UIActivityIndicatorView, CNFRegSplashSignInController, UIImageView, UIButton, UIView;

@interface CNFRegSigninLearnMoreView : UIView <PSHeaderFooterView> {

	long long _serviceType;
	PSSpecifier* _specifier;
	UILabel* _signingInLabel;
	UIActivityIndicatorView* _signingInSpinner;
	CNFRegSplashSignInController* _controller;
	UIImageView* _splashImageView;
	UILabel* _titleLabel;
	UILabel* _verbiageLabel;
	UIButton* _learnMoreButton;
	UIView* _authKitSignInView;

}

@property (nonatomic,retain) UIImageView * splashImageView;                          //@synthesize splashImageView=_splashImageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * verbiageLabel;                                //@synthesize verbiageLabel=_verbiageLabel - In the implementation block
@property (nonatomic,retain) UIButton * learnMoreButton;                             //@synthesize learnMoreButton=_learnMoreButton - In the implementation block
@property (nonatomic,retain) UIView * authKitSignInView;                             //@synthesize authKitSignInView=_authKitSignInView - In the implementation block
@property (assign,nonatomic) long long serviceType;                                  //@synthesize serviceType=_serviceType - In the implementation block
@property (assign,nonatomic) CNFRegSplashSignInController * controller;              //@synthesize controller=_controller - In the implementation block
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithSpecifier:(id)arg1 ;
-(void)setServiceType:(long long)arg1 ;
-(void)setController:(CNFRegSplashSignInController *)arg1 ;
-(void)layoutSubviews;
-(id)signingInLabel;
-(id)signingInSpinner;
-(void)_learnMorePressed:(id)arg1 ;
-(UILabel *)verbiageLabel;
-(UIButton *)learnMoreButton;
-(void)setVerbiageLabel:(UILabel *)arg1 ;
-(void)setLearnMoreButton:(UIButton *)arg1 ;
-(UIView *)authKitSignInView;
-(void)setAuthKitSignInView:(UIView *)arg1 ;
-(void)setSigningIn:(BOOL)arg1 ;
-(long long)serviceType;
-(CNFRegSplashSignInController *)controller;
-(double)preferredHeightForWidth:(double)arg1 ;
-(id)_splashImage;
-(UIImageView *)splashImageView;
-(void)setSplashImageView:(UIImageView *)arg1 ;
@end

