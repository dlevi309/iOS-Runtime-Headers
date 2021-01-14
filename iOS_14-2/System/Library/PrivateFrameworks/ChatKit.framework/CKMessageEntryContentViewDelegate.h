/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKMessageEntryContentViewDelegate <UIScrollViewDelegate>
@required
-(void)messageEntryContentViewDidReturn:(id)arg1;
-(void)messageEntryContentViewDidChange:(id)arg1;
-(void)messageEntryContentViewDidChangeSelection:(id)arg1;
-(void)messageEntryContentViewShelfDidChange:(id)arg1;
-(BOOL)messageEntryContentViewShouldBeginEditing:(id)arg1;
-(void)messageEntryContentViewDidBeginEditing:(id)arg1 wasAlreadyActive:(BOOL)arg2;
-(void)messageEntryContentViewDidEndEditing:(id)arg1;
-(BOOL)messageEntryContentView:(id)arg1 shouldInsertMediaObjects:(id)arg2;
-(CGSize*)messageEntryContentViewMaxShelfPluginViewSize:(id)arg1;
-(void)messageEntryContentView:(id)arg1 didTapMediaObject:(id)arg2;
-(void)messageEntryContentViewWasTapped:(id)arg1 isLongPress:(BOOL)arg2;
-(void)messageEntryContentView:(id)arg1 didPasteURL:(id)arg2;
-(void)messageEntryContentViewDidTapHandwritingKey:(id)arg1;
-(void)messageEntryContentViewCancelWasTapped:(id)arg1 shelfPluginPayload:(id)arg2;
-(void)messageEntryContentView:(id)arg1 didStagePluginPayload:(id)arg2;
-(void)messageEntryContentViewDidTapMention:(id)arg1 characterIndex:(double)arg2;
-(BOOL)messageEntryContentViewWillChangeText:(id)arg1 inRange:(NSRange)arg2 withReplacementText:(id)arg3;

@end

