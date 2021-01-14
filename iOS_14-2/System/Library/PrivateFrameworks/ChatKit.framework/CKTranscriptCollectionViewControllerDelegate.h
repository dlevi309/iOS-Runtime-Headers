/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKTranscriptCollectionViewControllerDelegate <NSObject>
@optional
-(void)transcriptCollectionViewController:(id)arg1 didScroll:(CGPoint)arg2;
-(void)transcriptCollectionViewController:(id)arg1 willDisplayBalloonForGUID:(id)arg2;
-(BOOL)transcriptCollectionViewControllerShouldForceOpaqueMask:(id)arg1;
-(void)transcriptCollectionViewController:(id)arg1 didTapReplyCountStatusButtonForChatItem:(id)arg2;
-(BOOL)transcriptCollectionViewShouldBeginMultipleSelectionInteractionAtIndexPath:(id)arg1;
-(void)transcriptCollectionViewDidBeginMultipleSelectionInteractionAtIndexPath:(id)arg1;
-(id)transcriptCollectionViewController:(id)arg1 previewForHighlightingContextMenuWithConfiguration:(id)arg2;
-(id)transcriptCollectionViewController:(id)arg1 contextMenuConfigurationForItemAtIndexPath:(id)arg2 point:(CGPoint)arg3 interaction:(id)arg4;
-(void)transcriptCollectionViewController:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;
-(id)transcriptCollectionViewController:(id)arg1 previewForDismissingContextMenuWithConfiguration:(id)arg2;
-(id)transcriptCollectionViewController:(id)arg1 accessoriesForContextMenuWithConfiguration:(id)arg2 layoutAnchor:(SCD_Struct_CK6)arg3;
-(id)transcriptCollectionViewController:(id)arg1 styleForContextMenuWithConfiguration:(id)arg2;
-(void)transcriptCollectionViewController:(id)arg1 willEndContextMenuInteractionWithConfiguration:(id)arg2 animator:(id)arg3;
-(void)transcriptCollectionViewController:(id)arg1 willDisplayContextMenuWithConfiguration:(id)arg2 animator:(id)arg3;

@required
-(void)transcriptCollectionViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
-(void)transcriptCollectionViewController:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
-(void)transcriptCollectionViewControllerDidInset:(id)arg1;
-(void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 tappedForChatItem:(id)arg3;
-(void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 longPressedForItemWithIndexPath:(id)arg3;
-(void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 doubleTappedItemAtIndexPath:(id)arg3;
-(void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 selectedItemAtIndexPath:(id)arg3;
-(void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 showInlineReplyForItemWithIndexPath:(id)arg3;
-(void)transcriptCollectionViewController:(id)arg1 didTapAttributionButtonForChatItem:(id)arg2;
-(void)transcriptCollectionViewController:(id)arg1 didTapPluginStatusButtonForChatItem:(id)arg2;
-(void)transcriptCollectionViewController:(id)arg1 balloonViewTitleTappedForItemWithIndexPath:(id)arg2;
-(void)transcriptCollectionViewControllerWillInset:(id)arg1 targetContentInset:(inout UIEdgeInsets*)arg2;
-(BOOL)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 shouldSelectChatItem:(id)arg3;
-(BOOL)transcriptCollectionViewControllerShouldPlayAudio:(id)arg1;
-(void)transcriptCollectionViewControllerChatItemsDidChange:(id)arg1;
-(void)transcriptCollectionViewControllerPlayingAudioDidChange:(id)arg1;
-(void)transcriptCollectionViewController:(id)arg1 collectionViewContentSizeDidChange:(CGSize)arg2;
-(void)transcriptCollectionViewControllerRestingStateDidChange:(id)arg1;
-(void)transcriptCollectionViewControllerWillScrollToBottom:(id)arg1;
-(void)transcriptCollectionViewControllerReportSpamButtonTapped:(id)arg1;
-(void)transcriptCollectionViewControllerDisplaySMSSpamReporting:(id)arg1;
-(void)transcriptCollectionViewControllerWillDisplayLastBalloon:(id)arg1;
-(void)transcriptCollectionViewControllerDidInsertAssociatedChatItem:(id)arg1;
-(id)traitCollectionForTranscriptCollectionViewController:(id)arg1;
-(double)transcriptCollectionViewController:(id)arg1 targetAlphaForChatItem:(id)arg2;
-(BOOL)transcriptCollectionViewControllerPlaybackForOutgoingEffectsIsAllowed:(id)arg1;
-(BOOL)transcriptCollectionViewController:(id)arg1 shouldSetupFullscreenEffectUI:(id)arg2;
-(BOOL)transcriptCollectionViewControllerShouldLayoutFullscreenEffects:(id)arg1;
-(BOOL)transcriptCollectionViewController:(id)arg1 shouldCleanupFullscreenEffectUI:(id)arg2;
-(id)transcriptCollectionViewControllerAdditionalFullscreenEffectViews:(id)arg1;
-(void)transcriptCollectionViewController:(id)arg1 willBeginImpactEffectAnimationWithSendAnimationContext:(id)arg2;
-(void)transcriptCollectionViewController:(id)arg1 didEndImpactEffectAnimationWithSendAnimationContext:(id)arg2;
-(void)transcriptCollectionViewController:(id)arg1 balloonViewDidRequestPresentationStyle:(unsigned long long)arg2 forChatItem:(id)arg3 allowAllStyles:(BOOL)arg4;
-(BOOL)transcriptCollectionViewController:(id)arg1 balloonViewDidRequestCommitPayload:(id)arg2 forPlugin:(id)arg3 allowAllCommits:(BOOL)arg4 error:(id*)arg5;
-(void)transcriptCollectionViewController:(id)arg1 balloonViewDidRequestStartEditingPayload:(id)arg2 forPlugin:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(BOOL)transcriptCollectionViewController:(id)arg1 balloonViewDidRequestCommitSticker:(id)arg2 forPlugin:(id)arg3 allowAllCommits:(BOOL)arg4 error:(id*)arg5;

@end

