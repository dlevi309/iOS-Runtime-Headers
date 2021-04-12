/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithSuggestedAmount:(id)arg1 ;
-(PKBillPaymentSuggestedAmount *)suggestedAmount;
@end

