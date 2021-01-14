/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, PKPeerPaymentHeroBubbleView, PKPeerPaymentCredential;

@interface PKPeerPaymentSetupFlowHeroView : UIView {

	UIImageView* _passSnapshotView;
	PKPeerPaymentHeroBubbleView* _bubbleView;
	PKPeerPaymentCredential* _credential;
	long long _animationState;

}
-(void)startAnimation;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_updateImageViewDynamicColors;
-(id)initWithPeerPaymentPassSnapShot:(id)arg1 peerPaymentCredential:(id)arg2 ;
-(BOOL)_shouldShowBubbleView;
-(id)_defaultCurrencyAmount;
-(BOOL)_bubbleIsOnLeftSide;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)startAnimationWithCompletion:(/*^block*/id)arg1 ;
@end

