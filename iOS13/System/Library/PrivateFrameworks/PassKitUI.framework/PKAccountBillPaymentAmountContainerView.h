/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class PKEnterCurrencyAmountView;

@interface PKAccountBillPaymentAmountContainerView : UIView {

	unsigned long long _screenType;
	BOOL _showAmount;
	PKEnterCurrencyAmountView* _enterCurrencyAmountView;

}

@property (nonatomic,retain) PKEnterCurrencyAmountView * enterCurrencyAmountView;              //@synthesize enterCurrencyAmountView=_enterCurrencyAmountView - In the implementation block
@property (assign,nonatomic) BOOL showAmount;                                                  //@synthesize showAmount=_showAmount - In the implementation block
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(PKEnterCurrencyAmountView *)enterCurrencyAmountView;
-(void)setShowAmount:(BOOL)arg1 ;
-(double)_amountLabelFontSize;
-(id)initWithCurrencyCode:(id)arg1 minimumAmount:(id)arg2 ;
-(void)setEnterCurrencyAmountView:(PKEnterCurrencyAmountView *)arg1 ;
-(BOOL)showAmount;
@end

