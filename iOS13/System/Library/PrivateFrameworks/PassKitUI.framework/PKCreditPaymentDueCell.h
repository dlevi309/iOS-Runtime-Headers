/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDashboardCollectionViewCell.h>

@protocol PKCreditPaymentDueCellDelegate;
@class PKDashboardCreditAccountItem, UILabel, PKContinuousButton, UIColor, UIFont, UIImage, NSString;

@interface PKCreditPaymentDueCell : PKDashboardCollectionViewCell {

	BOOL _usingCircleButton;
	BOOL _isCompactUI;
	BOOL _isTemplateLayout;
	BOOL _useAccssibilityLayout;
	id<PKCreditPaymentDueCellDelegate> _delegate;
	PKDashboardCreditAccountItem* _item;
	UILabel* _labelPaymentDue;
	UILabel* _labelDate;
	UILabel* _labelDetail;
	PKContinuousButton* _payButton;
	UIColor* _payButtonTintColor;
	UIColor* _payButtonTitleColor;
	UIFont* _payButtonFont;
	UIImage* _payButtonImage;
	NSString* _fallbackButtonTitle;

}

@property (assign,nonatomic,__weak) id<PKCreditPaymentDueCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PKDashboardCreditAccountItem * item;                             //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) UILabel * labelPaymentDue;                                     //@synthesize labelPaymentDue=_labelPaymentDue - In the implementation block
@property (nonatomic,readonly) UILabel * labelDate;                                           //@synthesize labelDate=_labelDate - In the implementation block
@property (nonatomic,readonly) UILabel * labelDetail;                                         //@synthesize labelDetail=_labelDetail - In the implementation block
@property (nonatomic,readonly) PKContinuousButton * payButton;                                //@synthesize payButton=_payButton - In the implementation block
@property (nonatomic,copy) UIColor * payButtonTintColor;                                      //@synthesize payButtonTintColor=_payButtonTintColor - In the implementation block
@property (nonatomic,copy) UIColor * payButtonTitleColor;                                     //@synthesize payButtonTitleColor=_payButtonTitleColor - In the implementation block
@property (nonatomic,copy) UIFont * payButtonFont;                                            //@synthesize payButtonFont=_payButtonFont - In the implementation block
@property (assign,nonatomic) BOOL useAccssibilityLayout;                                      //@synthesize useAccssibilityLayout=_useAccssibilityLayout - In the implementation block
@property (nonatomic,retain) UIImage * payButtonImage;                                        //@synthesize payButtonImage=_payButtonImage - In the implementation block
@property (nonatomic,copy) NSString * fallbackButtonTitle;                                    //@synthesize fallbackButtonTitle=_fallbackButtonTitle - In the implementation block
-(id<PKCreditPaymentDueCellDelegate>)delegate;
-(void)setDelegate:(id<PKCreditPaymentDueCellDelegate>)arg1 ;
-(PKDashboardCreditAccountItem *)item;
-(void)setItem:(PKDashboardCreditAccountItem *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setButtonTitle:(id)arg1 ;
-(void)_buttonTapped:(id)arg1 ;
-(CGSize)_layoutWithBounds:(CGRect)arg1 ;
-(BOOL)useAccssibilityLayout;
-(void)setUseAccssibilityLayout:(BOOL)arg1 ;
-(UILabel *)labelPaymentDue;
-(UILabel *)labelDate;
-(UILabel *)labelDetail;
-(void)setPayButtonImage:(UIImage *)arg1 ;
-(void)setFallbackButtonTitle:(NSString *)arg1 ;
-(PKContinuousButton *)payButton;
-(void)setPayButtonTitleColor:(UIColor *)arg1 ;
-(void)setPayButtonTintColor:(UIColor *)arg1 ;
-(void)setPayButtonFont:(UIFont *)arg1 ;
-(void)createSubviews;
-(id)_payButtonWithCircleLayout:(BOOL)arg1 ;
-(void)_updateButtonImage:(id)arg1 ;
-(UIColor *)payButtonTintColor;
-(UIColor *)payButtonTitleColor;
-(UIFont *)payButtonFont;
-(UIImage *)payButtonImage;
-(NSString *)fallbackButtonTitle;
@end

