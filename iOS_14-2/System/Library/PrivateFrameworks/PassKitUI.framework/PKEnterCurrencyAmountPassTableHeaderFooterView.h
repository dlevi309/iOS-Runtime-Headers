/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UITableViewHeaderFooterView.h>

@protocol PKEnterCurrencyAmountPassViewDelegate;
@class PKEnterCurrencyAmountPassView;

@interface PKEnterCurrencyAmountPassTableHeaderFooterView : UITableViewHeaderFooterView {

	id<PKEnterCurrencyAmountPassViewDelegate> _delegate;
	PKEnterCurrencyAmountPassView* _amountPassView;

}

@property (assign,nonatomic,__weak) id<PKEnterCurrencyAmountPassViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) PKEnterCurrencyAmountPassView * amountPassView;                       //@synthesize amountPassView=_amountPassView - In the implementation block
-(id<PKEnterCurrencyAmountPassViewDelegate>)delegate;
-(void)setDelegate:(id<PKEnterCurrencyAmountPassViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(double)_bottomPadding;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithCurrenyAmount:(id)arg1 pass:(id)arg2 ;
-(id)initWithCurrenyAmount:(id)arg1 ;
-(PKEnterCurrencyAmountPassView *)amountPassView;
@end

