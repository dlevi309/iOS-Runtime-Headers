/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKFullScreenBalloonViewControllerDelegate <NSObject>
@optional
-(void)fullScreenBalloonViewController:(id)arg1 willAppearAnimated:(BOOL)arg2;
-(void)fullScreenBalloonViewController:(id)arg1 willDisappearWithSendAnimation:(BOOL)arg2;
-(void)fullScreenBalloonViewControllerDidDisappear:(id)arg1;
-(void)fullScreenBalloonViewController:(id)arg1 didAppearAnimated:(BOOL)arg2;
-(void)fullScreenBalloonViewControllerHandleDismissTap:(id)arg1;
-(void)fullScreenBalloonViewController:(id)arg1 verticallyScrollTranscriptByAmount:(double)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(void)fullScreenBalloonViewController:(id)arg1 stickerPackTappedWithAdamID:(id)arg2;
-(void)fullScreenBalloonViewController:(id)arg1 deleteStickerWithTransferGUID:(id)arg2;

@required
-(CGRect*)fullScreenBalloonViewController:(id)arg1 balloonFrameForChatItem:(id)arg2;
-(void)fullScreenBalloonViewController:(id)arg1 sendMessageAcknowledgment:(long long)arg2 forChatItem:(id)arg3;

@end

