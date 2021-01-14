/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKViewController.h>
#import <libobjc.A.dylib/CKTranscriptCollectionViewControllerDelegate.h>

@class CKConversation, CKTranscriptCollectionView, NSString;

@interface CKTranscriptPreviewController : CKViewController <CKTranscriptCollectionViewControllerDelegate> {

	BOOL _isInitialLayout;
	CKConversation* _conversation;
	CKTranscriptCollectionView* _collectionView;
	double _transcriptWidth;
	UIEdgeInsets _layoutMargins;

}

@property (nonatomic,retain) CKTranscriptCollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) CKConversation * conversation;                            //@synthesize conversation=_conversation - In the implementation block
@property (assign,nonatomic) double transcriptWidth;                                   //@synthesize transcriptWidth=_transcriptWidth - In the implementation block
@property (assign,nonatomic) UIEdgeInsets layoutMargins;                               //@synthesize layoutMargins=_layoutMargins - In the implementation block
@property (assign,nonatomic) BOOL isInitialLayout;                                     //@synthesize isInitialLayout=_isInitialLayout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCollectionView:(CKTranscriptCollectionView *)arg1 ;
-(void)setTranscriptWidth:(double)arg1 ;
-(BOOL)isInitialLayout;
-(void)setIsInitialLayout:(BOOL)arg1 ;
-(double)transcriptWidth;
-(void)transcriptCollectionViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(void)transcriptCollectionViewControllerDidInset:(id)arg1 ;
-(void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 tappedForChatItem:(id)arg3 ;
-(void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 longPressedForItemWithIndexPath:(id)arg3 ;
-(void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 doubleTappedItemAtIndexPath:(id)arg3 ;
-(void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 selectedItemAtIndexPath:(id)arg3 ;
-(void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 showInlineReplyForItemWithIndexPath:(id)arg3 ;
-(void)transcriptCollectionViewController:(id)arg1 didTapAttributionButtonForChatItem:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg1 didTapPluginStatusButtonForChatItem:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg1 balloonViewTitleTappedForItemWithIndexPath:(id)arg2 ;
-(void)transcriptCollectionViewControllerWillInset:(id)arg1 targetContentInset:(inout UIEdgeInsets*)arg2 ;
-(BOOL)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 shouldSelectChatItem:(id)arg3 ;
-(BOOL)transcriptCollectionViewControllerShouldPlayAudio:(id)arg1 ;
-(void)transcriptCollectionViewControllerChatItemsDidChange:(id)arg1 ;
-(void)transcriptCollectionViewControllerPlayingAudioDidChange:(id)arg1 ;
-(void)transcriptCollectionViewController:(id)arg1 collectionViewContentSizeDidChange:(CGSize)arg2 ;
-(void)transcriptCollectionViewControllerRestingStateDidChange:(id)arg1 ;
-(void)transcriptCollectionViewControllerWillScrollToBottom:(id)arg1 ;
-(id)initWithConversation:(id)arg1 transcriptWidth:(double)arg2 layoutMargins:(UIEdgeInsets)arg3 ;
-(void)transcriptCollectionViewControllerReportSpamButtonTapped:(id)arg1 ;
-(void)transcriptCollectionViewControllerDisplaySMSSpamReporting:(id)arg1 ;
-(void)transcriptCollectionViewControllerWillDisplayLastBalloon:(id)arg1 ;
-(void)transcriptCollectionViewControllerDidInsertAssociatedChatItem:(id)arg1 ;
-(id)traitCollectionForTranscriptCollectionViewController:(id)arg1 ;
-(double)transcriptCollectionViewController:(id)arg1 targetAlphaForChatItem:(id)arg2 ;
-(BOOL)transcriptCollectionViewControllerPlaybackForOutgoingEffectsIsAllowed:(id)arg1 ;
-(BOOL)transcriptCollectionViewController:(id)arg1 shouldSetupFullscreenEffectUI:(id)arg2 ;
-(BOOL)transcriptCollectionViewControllerShouldLayoutFullscreenEffects:(id)arg1 ;
-(BOOL)transcriptCollectionViewController:(id)arg1 shouldCleanupFullscreenEffectUI:(id)arg2 ;
-(id)transcriptCollectionViewControllerAdditionalFullscreenEffectViews:(id)arg1 ;
-(void)transcriptCollectionViewController:(id)arg1 willBeginImpactEffectAnimationWithSendAnimationContext:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg1 didEndImpactEffectAnimationWithSendAnimationContext:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg1 balloonViewDidRequestPresentationStyle:(unsigned long long)arg2 forChatItem:(id)arg3 allowAllStyles:(BOOL)arg4 ;
-(BOOL)transcriptCollectionViewController:(id)arg1 balloonViewDidRequestCommitPayload:(id)arg2 forPlugin:(id)arg3 allowAllCommits:(BOOL)arg4 error:(id*)arg5 ;
-(void)transcriptCollectionViewController:(id)arg1 balloonViewDidRequestStartEditingPayload:(id)arg2 forPlugin:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)transcriptCollectionViewController:(id)arg1 balloonViewDidRequestCommitSticker:(id)arg2 forPlugin:(id)arg3 allowAllCommits:(BOOL)arg4 error:(id*)arg5 ;
-(CKTranscriptCollectionView *)collectionView;
-(void)setConversation:(CKConversation *)arg1 ;
-(UIEdgeInsets)layoutMargins;
-(void)setLayoutMargins:(UIEdgeInsets)arg1 ;
-(CKConversation *)conversation;
-(id)textInputContextIdentifier;
-(void)loadView;
-(void)viewDidLayoutSubviews;
@end

