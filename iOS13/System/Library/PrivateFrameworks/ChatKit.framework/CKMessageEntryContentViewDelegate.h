/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKMessageEntryContentViewDelegate <UIScrollViewDelegate>
@required
-(void)messageEntryContentViewDidReturn:(id)arg1;
-(void)messageEntryContentViewDidChange:(id)arg1;
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

@end

