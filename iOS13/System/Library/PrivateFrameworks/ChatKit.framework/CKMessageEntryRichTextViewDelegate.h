/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKMessageEntryRichTextViewDelegate <UITextViewDelegate>
@required
-(void)messageEntryRichTextViewDidTapHandwritingKey:(id)arg1;
-(double)maxWidthForPreviewImagesInMessageEntryRichTextView:(id)arg1;
-(BOOL)messageEntryRichTextView:(id)arg1 shouldRecognizeGesture:(id)arg2;
-(void)messageEntryRichTextViewWasTapped:(id)arg1 isLongPress:(BOOL)arg2;
-(void)messageEntryRichTextView:(id)arg1 didTapMediaObject:(id)arg2;
-(BOOL)messageEntryRichTextView:(id)arg1 shouldPasteMediaObjects:(id)arg2;
-(void)messageEntryRichTextView:(id)arg1 pastedURL:(id)arg2;

@end

