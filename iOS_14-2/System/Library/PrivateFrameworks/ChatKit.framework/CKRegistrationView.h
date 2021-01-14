/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIScrollView.h>

@class UIImageView, UILabel, UIActivityIndicatorView, UIButton, UIView;

@interface CKRegistrationView : UIScrollView {

	UIImageView* _iconImageView;
	UILabel* _titleLabel;
	UILabel* _verbiageLabel;
	UILabel* _signingInLabel;
	UIActivityIndicatorView* _signingInSpinner;
	UIButton* _learnMoreButton;
	UIView* _authKitSignInView;
	UIView* _privacyLinkView;

}

@property (nonatomic,retain) UIImageView * iconImageView;                             //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * verbiageLabel;                                 //@synthesize verbiageLabel=_verbiageLabel - In the implementation block
@property (nonatomic,retain) UILabel * signingInLabel;                                //@synthesize signingInLabel=_signingInLabel - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * signingInSpinner;              //@synthesize signingInSpinner=_signingInSpinner - In the implementation block
@property (nonatomic,retain) UIButton * learnMoreButton;                              //@synthesize learnMoreButton=_learnMoreButton - In the implementation block
@property (nonatomic,retain) UIView * authKitSignInView;                              //@synthesize authKitSignInView=_authKitSignInView - In the implementation block
@property (nonatomic,retain) UIView * privacyLinkView;                                //@synthesize privacyLinkView=_privacyLinkView - In the implementation block
-(UILabel *)titleLabel;
-(UIImageView *)iconImageView;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)layoutSubviews;
-(UILabel *)signingInLabel;
-(UIActivityIndicatorView *)signingInSpinner;
-(void)_learnMorePressed:(id)arg1 ;
-(UILabel *)verbiageLabel;
-(UIButton *)learnMoreButton;
-(CGSize)manualSizeToFitForAuthKitSignInView;
-(UIView *)privacyLinkView;
-(void)setVerbiageLabel:(UILabel *)arg1 ;
-(void)setSigningInLabel:(UILabel *)arg1 ;
-(void)setSigningInSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)setLearnMoreButton:(UIButton *)arg1 ;
-(UIView *)authKitSignInView;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(void)setAuthKitSignInView:(UIView *)arg1 ;
-(void)setPrivacyLinkView:(UIView *)arg1 ;
-(void)setSigningIn:(BOOL)arg1 ;
@end

