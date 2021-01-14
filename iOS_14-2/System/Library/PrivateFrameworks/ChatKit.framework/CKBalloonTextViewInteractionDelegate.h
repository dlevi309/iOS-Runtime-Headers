/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKBalloonTextViewInteractionDelegate <NSObject>
@optional
-(void)interactionStartedLongPressInTextView:(id)arg1;
-(void)interactionTextView:(id)arg1 userDidDragOutsideViewWithPoint:(CGPoint)arg2;
-(void)interactionStartedTapInTextView:(id)arg1 withModifierFlags:(long long)arg2 selectedText:(id)arg3;
-(void)interactionTextViewShouldCopyToPasteboard:(id)arg1;

@required
-(void)interactionStartedFromPreviewItemControllerInTextView:(id)arg1;
-(void)interactionStoppedFromPreviewItemControllerInTextView:(id)arg1;

@end

