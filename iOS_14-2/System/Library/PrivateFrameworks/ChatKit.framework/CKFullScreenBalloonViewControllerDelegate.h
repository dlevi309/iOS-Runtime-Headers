/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKFullScreenBalloonViewControllerDelegate <NSObject>
@optional
-(CGRect*)fullScreenBalloonViewControllerSafeAreaLayoutFrame:(id)arg1;
-(void)fullScreenBalloonViewController:(id)arg1 willAppearAnimated:(BOOL)arg2;
-(void)fullScreenBalloonViewController:(id)arg1 willDisappearWithSendAnimation:(BOOL)arg2;
-(void)fullScreenBalloonViewControllerDidDisappear:(id)arg1;
-(void)fullScreenBalloonViewController:(id)arg1 didAppearAnimated:(BOOL)arg2;
-(void)fullScreenBalloonViewControllerHandleDismissTap:(id)arg1;
-(void)fullScreenBalloonViewController:(id)arg1 verticallyScrollTranscriptByAmount:(double)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(void)fullScreenBalloonViewController:(id)arg1 stickerPackTappedWithAdamID:(id)arg2;
-(void)fullScreenBalloonViewController:(id)arg1 deleteStickerWithTransferGUID:(id)arg2;
-(void)fullScreenBalloonViewController:(id)arg1 replyButtonPressedForChatItem:(id)arg2;
-(BOOL)fullScreenBalloonViewControllerShouldShowReplyButton:(id)arg1;

@required
-(CGRect*)fullScreenBalloonViewController:(id)arg1 balloonFrameForChatItem:(id)arg2;
-(void)fullScreenBalloonViewController:(id)arg1 sendMessageAcknowledgment:(long long)arg2 forChatItem:(id)arg3;

@end

