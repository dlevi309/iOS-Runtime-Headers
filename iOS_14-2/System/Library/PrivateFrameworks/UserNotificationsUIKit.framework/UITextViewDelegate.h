/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/


@protocol UITextViewDelegate <NSObject,UIScrollViewDelegate>
@optional
-(void)textViewDidBeginEditing:(id)arg1;
-(BOOL)textView:(id)arg1 shouldInteractWithTextAttachment:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4;
-(BOOL)textViewShouldBeginEditing:(id)arg1;
-(void)textViewDidEndEditing:(id)arg1;
-(BOOL)textViewShouldEndEditing:(id)arg1;
-(void)textViewDidChange:(id)arg1;
-(void)textViewDidChangeSelection:(id)arg1;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3;
-(BOOL)textView:(id)arg1 shouldInteractWithTextAttachment:(id)arg2 inRange:(NSRange)arg3;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3;

@end

