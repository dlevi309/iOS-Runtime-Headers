/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(double)_bottomPadding;
-(id)initWithCurrenyAmount:(id)arg1 pass:(id)arg2 ;
-(id)initWithCurrenyAmount:(id)arg1 ;
-(PKEnterCurrencyAmountPassView *)amountPassView;
@end

