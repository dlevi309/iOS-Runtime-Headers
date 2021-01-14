/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PKEnterCurrencyAmountPassViewDelegate;
@class UIImageView, PKEnterCurrencyAmountView, PKEnterValueNewBalanceView, PKPass;

@interface PKEnterCurrencyAmountPassView : UIView {

	UIImageView* _passView;
	BOOL _loadingSnapshot;
	id<PKEnterCurrencyAmountPassViewDelegate> _delegate;
	PKEnterCurrencyAmountView* _enterCurrencyAmountView;
	PKEnterValueNewBalanceView* _balanceView;
	PKPass* _pass;

}

@property (nonatomic,retain) PKPass * pass;                                                          //@synthesize pass=_pass - In the implementation block
@property (assign,nonatomic,__weak) id<PKEnterCurrencyAmountPassViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) PKEnterCurrencyAmountView * enterCurrencyAmountView;                  //@synthesize enterCurrencyAmountView=_enterCurrencyAmountView - In the implementation block
@property (nonatomic,readonly) PKEnterValueNewBalanceView * balanceView;                             //@synthesize balanceView=_balanceView - In the implementation block
-(double)_topPadding;
-(void)setPass:(PKPass *)arg1 ;
-(id<PKEnterCurrencyAmountPassViewDelegate>)delegate;
-(void)setDelegate:(id<PKEnterCurrencyAmountPassViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithCurrenyAmount:(id)arg1 pass:(id)arg2 ;
-(CGSize)_passViewSize;
-(id)initWithCurrenyAmount:(id)arg1 ;
-(void)shakePassView;
-(PKEnterCurrencyAmountView *)enterCurrencyAmountView;
-(PKEnterValueNewBalanceView *)balanceView;
-(PKPass *)pass;
@end

