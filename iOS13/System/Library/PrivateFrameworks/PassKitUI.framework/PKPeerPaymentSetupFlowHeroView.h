/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)startAnimation;
-(void)_dynamicUserInterfaceTraitDidChange;
-(id)initWithPeerPaymentPassSnapShot:(id)arg1 peerPaymentCredential:(id)arg2 ;
-(void)_updateImageViewDynamicColors;
-(BOOL)_shouldShowBubbleView;
-(id)_defaultCurrencyAmount;
-(BOOL)_bubbleIsOnLeftSide;
-(void)startAnimationWithCompletion:(/*^block*/id)arg1 ;
@end

