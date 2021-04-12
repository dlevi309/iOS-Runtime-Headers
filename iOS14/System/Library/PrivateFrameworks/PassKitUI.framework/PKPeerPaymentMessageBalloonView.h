/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(PKPeerPaymentBubbleView *)bubbleView;
-(void)_updateTailOrientation;
-(id)initWithBubbleView:(id)arg1 peerPaymentType:(long long)arg2 ;
-(void)layoutSubviews;
-(CKTranscriptPluginBalloonView *)balloonView;
-(void)setBalloonView:(CKTranscriptPluginBalloonView *)arg1 ;
-(long long)peerPaymentType;
@end

