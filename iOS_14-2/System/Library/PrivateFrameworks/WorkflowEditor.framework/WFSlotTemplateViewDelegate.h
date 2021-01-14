/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/


@protocol WFSlotTemplateViewDelegate <NSObject>
@optional
-(void)slotTemplateView:(id)arg1 didEndTypingInSlotWithIdentifier:(id)arg2;
-(BOOL)slotTemplateView:(id)arg1 shouldChangeText:(id)arg2 forSlotWithIdentifier:(id)arg3;
-(void)slotTemplateViewDidInvalidateSize:(id)arg1;
-(void)slotTemplateView:(id)arg1 didChangeText:(id)arg2 forSlotWithIdentifier:(id)arg3;
-(void)slotTemplateView:(id)arg1 willBeginTypingInSlotWithIdentifier:(id)arg2 usingTextEntry:(id)arg3 allowMultipleLines:(BOOL*)arg4;
-(void)slotTemplateView:(id)arg1 didTapTextAttachment:(id)arg2 inSlotWithIdentifier:(id)arg3;
-(BOOL)slotTemplateView:(id)arg1 shouldTapTextAttachment:(id)arg2 inSlotWithIdentifier:(id)arg3;
-(void)slotTemplateView:(id)arg1 didLongPressSlotWithIdentifier:(id)arg2 sourceRect:(CGRect)arg3 textAttachmentToSelect:(id)arg4;
-(BOOL)slotTemplateView:(id)arg1 shouldLongPressSlotWithIdentifier:(id)arg2;
-(void)slotTemplateView:(id)arg1 typingDidPasteWithOriginalBlock:(/*^block*/id)arg2;
-(void)slotTemplateView:(id)arg1 typingDidCopyWithOriginalBlock:(/*^block*/id)arg2;
-(void)slotTemplateView:(id)arg1 typingDidCutWithOriginalBlock:(/*^block*/id)arg2;
-(void)slotTemplateView:(id)arg1 deletePressedOnUnpopulatedSlotWithIdentifier:(id)arg2;
-(void)slotTemplateView:(id)arg1 didDeselectSlotWithIdentifier:(id)arg2;
-(void)slotTemplateView:(id)arg1 didSelectSlotWithIdentifier:(id)arg2 sourceRect:(CGRect)arg3;

@end

