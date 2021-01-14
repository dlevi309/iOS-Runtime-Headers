/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class PKEnterCurrencyAmountView;

@interface PKAccountBillPaymentAmountContainerView : UIView {

	BOOL _showAmount;
	PKEnterCurrencyAmountView* _enterCurrencyAmountView;

}

@property (nonatomic,retain) PKEnterCurrencyAmountView * enterCurrencyAmountView;              //@synthesize enterCurrencyAmountView=_enterCurrencyAmountView - In the implementation block
@property (assign,nonatomic) BOOL showAmount;                                                  //@synthesize showAmount=_showAmount - In the implementation block
-(BOOL)showAmount;
-(void)setShowAmount:(BOOL)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)_amountLabelFontSize;
-(id)initWithCurrencyCode:(id)arg1 minimumAmount:(id)arg2 ;
-(PKEnterCurrencyAmountView *)enterCurrencyAmountView;
-(void)setEnterCurrencyAmountView:(PKEnterCurrencyAmountView *)arg1 ;
@end

