/*
* Generated on Thursday, January 14, 2021 at 2:21:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

@class NSString, CKConversation, IMChat, CKTranscriptCollectionView, NSArray, NSIndexSet, CKImpactEffectManager, CKFullScreenEffectManager, UITapGestureRecognizer;


@protocol CKCoreTranscriptControllerProtocol <NSObject>
@property (nonatomic,readonly) NSString * transcriptIdentifier; 
@property (nonatomic,readonly) CKConversation * conversation; 
@property (nonatomic,readonly) IMChat * chat; 
@property (nonatomic,readonly) CKTranscriptCollectionView * collectionView; 
@property (nonatomic,copy,readonly) NSArray * chatItems; 
@property (nonatomic,copy,readonly) NSArray * associatedChatItems; 
@property (nonatomic,readonly) UIEdgeInsets marginInsets; 
@property (nonatomic,readonly) double balloonMaxWidth; 
@property (assign,nonatomic,__weak) id<CKTranscriptCollectionViewControllerDelegate> delegate; 
@property (nonatomic,retain) UIView*<CKGradientReferenceView> gradientReferenceView; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_group> updateAnimationGroup; 
@property (nonatomic,copy) NSIndexSet * hiddenItems; 
@property (nonatomic,copy) NSIndexSet * hiddenAssociatedItems; 
@property (nonatomic,copy) NSIndexSet * hiddenBalloonViews; 
@property (assign,getter=isInitialLoad,nonatomic) BOOL initialLoad; 
@property (assign,nonatomic) BOOL shouldLoadDefaultConversationViewingMessageCountOnAppear; 
@property (nonatomic,retain) CKImpactEffectManager * impactEffectManager; 
@property (nonatomic,retain) CKFullScreenEffectManager * fullscreenEffectManager; 
@property (assign,nonatomic) BOOL transitionedFromComposing; 
@property (assign,nonatomic) BOOL transitioningFromComposing; 
@property (assign,getter=isTranscriptUpdateAnimated,nonatomic) BOOL transcriptUpdateAnimated; 
@property (assign,nonatomic) BOOL allowsPluginPlayback; 
@property (assign,nonatomic) double pluginPlaybackDelay; 
@property (setter=__setCurrentTestName:,nonatomic,retain) NSString * __CurrentTestName; 
@property (assign,nonatomic) long long contentAnimationPauseReasons; 
@property (assign,nonatomic,__weak) id<UIDragInteractionDelegate> dragInteractionDelegate; 
@property (nonatomic,retain) UITapGestureRecognizer * loggingTapGestureRecognizer; 
@required
-(BOOL)isInitialLoad;
-(IMChat *)chat;
-(id)initWithConversation:(id)arg1 delegate:(id)arg2 balloonMaxWidth:(double)arg3 marginInsets:(UIEdgeInsets)arg4;
-(void)setShouldLoadDefaultConversationViewingMessageCountOnAppear:(BOOL)arg1;
-(void)balloonViewTextViewDidChangeSelection:(id)arg1 selectedText:(id)arg2 textView:(id)arg3;
-(id<CKTranscriptCollectionViewControllerDelegate>)delegate;
-(CKTranscriptCollectionView *)collectionView;
-(id)cellForChatItem:(id)arg1;
-(void)setDragInteractionDelegate:(id)arg1;
-(double)balloonMaxWidth;
-(id)selectedItems;
-(void)setSelectedItems:(id)arg1;
-(NSObject*<OS_dispatch_group>)updateAnimationGroup;
-(CKImpactEffectManager *)impactEffectManager;
-(void)sizeFullTranscriptIfNecessary;
-(void)highlightItemAtIndexPathWhenDisplayed:(id)arg1 autoDismiss:(BOOL)arg2;
-(void)raiseGestureRecognized:(id)arg1;
-(BOOL)isVisiblePlugin:(id)arg1;
-(BOOL)hasRecentTouchForSendingPlugin:(id)arg1;
-(void)clearRecentPluginTouch;
-(void)setScrollAnchor:(double)arg1;
-(NSArray *)chatItems;
-(BOOL)canRaiseToTalk;
-(void)setAllowsPluginPlayback:(BOOL)arg1;
-(void)stopPluginPlayback;
-(void)setTranscriptUpdateAnimated:(BOOL)arg1;
-(void)startPluginPlaybackAfterDelay:(double)arg1;
-(void)stopPlayingAudio;
-(void)deselectAllBalloons;
-(BOOL)canRaiseToListen;
-(void)addContentAnimationPauseReasons:(long long)arg1;
-(void)removeContentAnimationPauseReasons:(long long)arg1;
-(CKFullScreenEffectManager *)fullscreenEffectManager;
-(void)selectChatItem:(id)arg1;
-(id)cellForAssociatedChatItem:(id)arg1;
-(void)setHiddenBalloonViews:(id)arg1;
-(void)verticallyScrollTranscriptByAmount:(double)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)setGradientReferenceView:(id)arg1;
-(void)setDelegate:(id)arg1;
-(void)setHiddenItems:(id)arg1;
-(CKConversation *)conversation;
-(void)setHiddenAssociatedItems:(id)arg1;
-(id)associatedChatItemForGUID:(id)arg1;
-(id)chatItemForGUID:(id)arg1;
-(void)updateTargetAlphaForVisibleChatItems;
-(UIView*<CKGradientReferenceView>)gradientReferenceView;
-(void)reloadData;
-(void)setInitialLoad:(BOOL)arg1;
-(NSIndexSet *)hiddenItems;
-(id)initWithConversation:(id)arg1 delegate:(id)arg2 notifications:(id)arg3 balloonMaxWidth:(double)arg4 marginInsets:(UIEdgeInsets)arg5;
-(void)configureCell:(id)arg1 forItemAtIndexPath:(id)arg2;
-(NSString *)transcriptIdentifier;
-(id)balloonViewForChatItem:(id)arg1;
-(void)deleteSelectedItems:(id)arg1;
-(void)updateTranscript:(/*^block*/id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(NSArray *)associatedChatItems;
-(UITapGestureRecognizer *)loggingTapGestureRecognizer;
-(void)setLoggingTapGestureRecognizer:(id)arg1;
-(BOOL)shouldLoadDefaultConversationViewingMessageCountOnAppear;
-(void)updateEffectViewMessageRects;
-(double)pluginPlaybackDelay;
-(void)setImpactEffectManager:(id)arg1;
-(void)setTransitioningFromComposing:(BOOL)arg1;
-(UIEdgeInsets)marginInsets;
-(id)chatItemForCell:(id)arg1;
-(BOOL)allowsPluginPlayback;
-(id)indexPathForBalloonView:(id)arg1;
-(id)balloonViewForIndexPath:(id)arg1;
-(NSString *)__CurrentTestName;
-(id<UIDragInteractionDelegate>)dragInteractionDelegate;
-(long long)contentAnimationPauseReasons;
-(BOOL)transitioningFromComposing;
-(NSIndexSet *)hiddenBalloonViews;
-(id)lastMessagePartChatItem;
-(BOOL)transitionedFromComposing;
-(BOOL)isTranscriptUpdateAnimated;
-(NSIndexSet *)hiddenAssociatedItems;
-(void)setPluginPlaybackDelay:(double)arg1;
-(void)endHoldingUpdatesAfterQuicklookCancelsDismiss;
-(void)setFullscreenEffectManager:(id)arg1;
-(void)setTransitionedFromComposing:(BOOL)arg1;
-(void)__setCurrentTestName:(id)arg1;
-(void)setContentAnimationPauseReasons:(long long)arg1;
-(void)invalidateChatItemLayoutWithBalloonMaxWidth:(double)arg1 marginInsets:(UIEdgeInsets)arg2 traitCollection:(id)arg3;

@end

