/*
* Generated on Thursday, January 14, 2021 at 2:21:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKBalloonViewDelegate <NSObject>
@optional
-(void)balloonView:(id)arg1 willInsertPluginViewAsSubview:(id)arg2;
-(void)tuConversationBalloonJoinButtonTapped:(id)arg1;

@required
-(void)balloonViewLongTouched:(id)arg1;
-(void)balloonViewShowInlineReply:(id)arg1;
-(void)balloonViewTapped:(id)arg1 withModifierFlags:(long long)arg2 selectedText:(id)arg3;
-(void)balloonViewDoubleTapped:(id)arg1;
-(void)balloonViewSelected:(id)arg1 withModifierFlags:(long long)arg2 selectedText:(id)arg3;
-(void)balloonViewTextViewDidChangeSelection:(id)arg1 selectedText:(id)arg2 textView:(id)arg3;
-(void)liveBalloonTouched:(id)arg1;
-(void)interactionStartedFromPreviewItemControllerInBalloonView:(id)arg1;
-(void)balloonView:(id)arg1 userDidDragOutsideBalloonWithPoint:(CGPoint)arg2;
-(void)interactionStoppedFromPreviewItemControllerInBalloonView:(id)arg1;
-(void)balloonViewShouldCopyToPasteboard:(id)arg1;

@end

