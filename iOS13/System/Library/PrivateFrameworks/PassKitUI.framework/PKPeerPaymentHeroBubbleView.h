/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(unsigned long long)_bubbleStateForRegistrationState:(unsigned long long)arg1 ;
-(id)_bubbleAmountLabelTextWithAmount:(id)arg1 ;
-(id)_bubbleAmountLabelTextAttributes;
-(id)initWithCurrencyAmount:(id)arg1 regitrationFlowState:(unsigned long long)arg2 ;
-(UILabel *)bubbleAmountLabel;
-(UIView *)pluginBalloonView;
@end

