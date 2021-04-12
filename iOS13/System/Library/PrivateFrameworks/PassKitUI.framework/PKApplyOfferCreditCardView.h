/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UILabel, UIButton;

@interface PKApplyOfferCreditCardView : UIView {

	UIView* _dividerLeft;
	UIView* _dividerRight;
	UILabel* _creditLimitTitleLabel;
	UILabel* _aprForPurchaseTitleLabel;
	UILabel* _feeTitleLabel;
	UILabel* _creditLimitLabel;
	UILabel* _aprForPurchaseLabel;
	UILabel* _feeLabel;
	UILabel* _bodyLabel;
	UIButton* _termsLinkButton;

}

@property (nonatomic,retain) UILabel * creditLimitTitleLabel;                 //@synthesize creditLimitTitleLabel=_creditLimitTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * aprForPurchaseTitleLabel;              //@synthesize aprForPurchaseTitleLabel=_aprForPurchaseTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * feeTitleLabel;                         //@synthesize feeTitleLabel=_feeTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * creditLimitLabel;                      //@synthesize creditLimitLabel=_creditLimitLabel - In the implementation block
@property (nonatomic,retain) UILabel * aprForPurchaseLabel;                   //@synthesize aprForPurchaseLabel=_aprForPurchaseLabel - In the implementation block
@property (nonatomic,retain) UILabel * feeLabel;                              //@synthesize feeLabel=_feeLabel - In the implementation block
@property (nonatomic,retain) UILabel * bodyLabel;                             //@synthesize bodyLabel=_bodyLabel - In the implementation block
@property (nonatomic,retain) UIButton * termsLinkButton;                      //@synthesize termsLinkButton=_termsLinkButton - In the implementation block
-(id)init;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UILabel *)bodyLabel;
-(void)setBodyLabel:(UILabel *)arg1 ;
-(UILabel *)creditLimitTitleLabel;
-(UILabel *)creditLimitLabel;
-(UILabel *)aprForPurchaseTitleLabel;
-(UILabel *)aprForPurchaseLabel;
-(UILabel *)feeTitleLabel;
-(UILabel *)feeLabel;
-(UIButton *)termsLinkButton;
-(BOOL)showSchumerBox;
-(void)setCreditLimitTitleLabel:(UILabel *)arg1 ;
-(void)setAprForPurchaseTitleLabel:(UILabel *)arg1 ;
-(void)setFeeTitleLabel:(UILabel *)arg1 ;
-(void)setCreditLimitLabel:(UILabel *)arg1 ;
-(void)setAprForPurchaseLabel:(UILabel *)arg1 ;
-(void)setFeeLabel:(UILabel *)arg1 ;
-(void)setTermsLinkButton:(UIButton *)arg1 ;
@end

