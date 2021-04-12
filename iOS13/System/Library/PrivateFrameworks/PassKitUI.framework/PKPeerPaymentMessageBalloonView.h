/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UIView.h>

@class PKPeerPaymentBubbleView, CKTranscriptPluginBalloonView;

@interface PKPeerPaymentMessageBalloonView : UIView {

	PKPeerPaymentBubbleView* _bubbleView;
	long long _peerPaymentType;
	CKTranscriptPluginBalloonView* _balloonView;

}

@property (nonatomic,retain) CKTranscriptPluginBalloonView * balloonView;              //@synthesize balloonView=_balloonView - In the implementation block
@property (nonatomic,readonly) PKPeerPaymentBubbleView * bubbleView;                   //@synthesize bubbleView=_bubbleView - In the implementation block
@property (nonatomic,readonly) long long peerPaymentType;                              //@synthesize peerPaymentType=_peerPaymentType - In the implementation block
-(void)layoutSubviews;
-(CKTranscriptPluginBalloonView *)balloonView;
-(void)setBalloonView:(CKTranscriptPluginBalloonView *)arg1 ;
-(long long)peerPaymentType;
-(void)_updateTailOrientation;
-(id)initWithBubbleView:(id)arg1 peerPaymentType:(long long)arg2 ;
-(PKPeerPaymentBubbleView *)bubbleView;
@end

