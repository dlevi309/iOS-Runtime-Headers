/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)layoutSubviews;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIImageView *)iconImageView;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(void)setAuthKitSignInView:(UIView *)arg1 ;
-(void)setPrivacyLinkView:(UIView *)arg1 ;
-(void)setSigningIn:(BOOL)arg1 ;
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
@end

