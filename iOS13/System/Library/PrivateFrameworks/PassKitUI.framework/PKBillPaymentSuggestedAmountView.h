/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CABackdropLayer, PKBillPaymentSuggestedAmount;

@interface PKBillPaymentSuggestedAmountView : UIView {

	CABackdropLayer* _background;
	PKBillPaymentSuggestedAmount* _suggestedAmount;

}

@property (nonatomic,readonly) PKBillPaymentSuggestedAmount * suggestedAmount;              //@synthesize suggestedAmount=_suggestedAmount - In the implementation block
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithSuggestedAmount:(id)arg1 ;
-(PKBillPaymentSuggestedAmount *)suggestedAmount;
@end

