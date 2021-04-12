/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIImageView.h>

@class UIView, PKPeerPaymentBubbleView, UILabel;

@interface PKPeerPaymentHeroBubbleView : UIImageView {

	UIView* _pluginBalloonView;
	PKPeerPaymentBubbleView* _peerPaymentBubbleView;
	unsigned long long _bubbleState;
	UILabel* _bubbleAmountLabel;

}

@property (nonatomic,readonly) UILabel * bubbleAmountLabel;              //@synthesize bubbleAmountLabel=_bubbleAmountLabel - In the implementation block
@property (nonatomic,readonly) UIView * pluginBalloonView;               //@synthesize pluginBalloonView=_pluginBalloonView - In the implementation block
-(unsigned long long)_bubbleStateForRegistrationState:(unsigned long long)arg1 ;
-(id)_bubbleAmountLabelTextWithAmount:(id)arg1 ;
-(id)_bubbleAmountLabelTextAttributes;
-(id)initWithCurrencyAmount:(id)arg1 regitrationFlowState:(unsigned long long)arg2 ;
-(UILabel *)bubbleAmountLabel;
-(UIView *)pluginBalloonView;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

