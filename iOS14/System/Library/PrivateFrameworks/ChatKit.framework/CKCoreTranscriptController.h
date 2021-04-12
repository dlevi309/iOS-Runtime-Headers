/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKViewController.h>
#import <libobjc.A.dylib/CKTranscriptModelDelegate.h>
#import <libobjc.A.dylib/CKTranscriptCollectionViewDelegate.h>
#import <libobjc.A.dylib/CKBalloonViewDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/CKCoreTranscriptControllerProtocol.h>
#import <libobjc.A.dylib/CKSendAnimationManagerDelegate.h>

@protocol CKTranscriptCollectionViewControllerDelegate, CKGradientReferenceView, OS_dispatch_group, UIDragInteractionDelegate;
@class CKConversation, UIView, CKFullScreenEffectManager, NSIndexSet, CKImpactEffectManager, NSObject, NSString, UITapGestureRecognizer, CKTranscriptModel, UICollectionViewDiffableDataSource, UICollectionViewCompositionalLayout, IMChat, CKTranscriptCollectionView, NSArray;

@interface CKCoreTranscriptController : CKViewController <CKTranscriptModelDelegate, CKTranscriptCollectionViewDelegate, CKBalloonViewDelegate, UICollectionViewDelegate, CKCoreTranscriptControllerProtocol, CKSendAnimationManagerDelegate> {

	BOOL _initialLoad;
	BOOL _shouldLoadDefaultConversationViewingMessageCountOnAppear;
	BOOL _allowsPluginPlayback;
	BOOL _transcriptUpdateAnimated;
	BOOL _transitionedFromComposing;
	BOOL _transitioningFromComposing;
	BOOL _shouldUseOpaqueMask;
	id<CKTranscriptCollectionViewControllerDelegate> _delegate;
	CKConversation* _conversation;
	double _balloonMaxWidth;
	UIView*<CKGradientReferenceView> _gradientReferenceView;
	CKFullScreenEffectManager* _fullscreenEffectManager;
	NSIndexSet* _hiddenBalloonViews;
	NSIndexSet* _hiddenItems;
	NSIndexSet* _hiddenAssociatedItems;
	CKImpactEffectManager* _impactEffectManager;
	NSObject*<OS_dispatch_group> _updateAnimationGroup;
	NSString* ___CurrentTestName;
	double _pluginPlaybackDelay;
	long long _contentAnimationPauseReasons;
	id<UIDragInteractionDelegate> _dragInteractionDelegate;
	UITapGestureRecognizer* _loggingTapGestureRecognizer;
	NSString* _transcriptIdentifier;
	CKTranscriptModel* _model;
	UICollectionViewDiffableDataSource* _collectionViewDatasource;
	UICollectionViewCompositionalLayout* _collectionViewLayout;
	UIEdgeInsets _marginInsets;

}

@property (nonatomic,retain) NSString * transcriptIdentifier;                                               //@synthesize transcriptIdentifier=_transcriptIdentifier - In the implementation block
@property (nonatomic,retain) CKConversation * conversation;                                                 //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,retain) CKTranscriptModel * model;                                                     //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) double balloonMaxWidth;                                                        //@synthesize balloonMaxWidth=_balloonMaxWidth - In the implementation block
@property (assign,nonatomic) UIEdgeInsets marginInsets;                                                     //@synthesize marginInsets=_marginInsets - In the implementation block
@property (nonatomic,retain) UICollectionViewDiffableDataSource * collectionViewDatasource;                 //@synthesize collectionViewDatasource=_collectionViewDatasource - In the implementation block
@property (nonatomic,retain) UICollectionViewCompositionalLayout * collectionViewLayout;                    //@synthesize collectionViewLayout=_collectionViewLayout - In the implementation block
@property (assign,nonatomic) BOOL shouldUseOpaqueMask;                                                      //@synthesize shouldUseOpaqueMask=_shouldUseOpaqueMask - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> updateAnimationGroup;                             //@synthesize updateAnimationGroup=_updateAnimationGroup - In the implementation block
@property (assign,nonatomic,__weak) id<CKTranscriptCollectionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IMChat * chat; 
@property (nonatomic,readonly) CKTranscriptCollectionView * collectionView; 
@property (nonatomic,retain) UIView*<CKGradientReferenceView> gradientReferenceView;                        //@synthesize gradientReferenceView=_gradientReferenceView - In the implementation block
@property (assign,getter=isInitialLoad,nonatomic) BOOL initialLoad;                                         //@synthesize initialLoad=_initialLoad - In the implementation block
@property (assign,nonatomic) BOOL shouldLoadDefaultConversationViewingMessageCountOnAppear;                 //@synthesize shouldLoadDefaultConversationViewingMessageCountOnAppear=_shouldLoadDefaultConversationViewingMessageCountOnAppear - In the implementation block
@property (assign,nonatomic) BOOL allowsPluginPlayback;                                                     //@synthesize allowsPluginPlayback=_allowsPluginPlayback - In the implementation block
@property (nonatomic,retain) CKFullScreenEffectManager * fullscreenEffectManager;                           //@synthesize fullscreenEffectManager=_fullscreenEffectManager - In the implementation block
@property (nonatomic,copy) NSIndexSet * hiddenBalloonViews;                                                 //@synthesize hiddenBalloonViews=_hiddenBalloonViews - In the implementation block
@property (nonatomic,copy) NSIndexSet * hiddenItems;                                                        //@synthesize hiddenItems=_hiddenItems - In the implementation block
@property (nonatomic,copy) NSIndexSet * hiddenAssociatedItems;                                              //@synthesize hiddenAssociatedItems=_hiddenAssociatedItems - In the implementation block
@property (nonatomic,retain) CKImpactEffectManager * impactEffectManager;                                   //@synthesize impactEffectManager=_impactEffectManager - In the implementation block
@property (assign,getter=isTranscriptUpdateAnimated,nonatomic) BOOL transcriptUpdateAnimated;               //@synthesize transcriptUpdateAnimated=_transcriptUpdateAnimated - In the implementation block
@property (assign,nonatomic) BOOL transitionedFromComposing;                                                //@synthesize transitionedFromComposing=_transitionedFromComposing - In the implementation block
@property (assign,nonatomic) BOOL transitioningFromComposing;                                               //@synthesize transitioningFromComposing=_transitioningFromComposing - In the implementation block
@property (setter=__setCurrentTestName:,nonatomic,retain) NSString * __CurrentTestName;                     //@synthesize __CurrentTestName=___CurrentTestName - In the implementation block
@property (assign,nonatomic) double pluginPlaybackDelay;                                                    //@synthesize pluginPlaybackDelay=_pluginPlaybackDelay - In the implementation block
@property (assign,nonatomic) long long contentAnimationPauseReasons;                                        //@synthesize contentAnimationPauseReasons=_contentAnimationPauseReasons - In the implementation block
@property (assign,nonatomic,__weak) id<UIDragInteractionDelegate> dragInteractionDelegate;                  //@synthesize dragInteractionDelegate=_dragInteractionDelegate - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * loggingTapGestureRecognizer;                          //@synthesize loggingTapGestureRecognizer=_loggingTapGestureRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * chatItems; 
@property (nonatomic,copy,readonly) NSArray * associatedChatItems; 
-(BOOL)isInitialLoad;
-(IMChat *)chat;
-(CKTranscriptModel *)model;
-(void)balloonViewLongTouched:(id)arg1 ;
-(void)balloonViewShowInlineReply:(id)arg1 ;
-(void)balloonViewTapped:(id)arg1 withModifierFlags:(long long)arg2 selectedText:(id)arg3 ;
-(void)balloonViewDoubleTapped:(id)arg1 ;
-(BOOL)_canUseOpaqueMask;
-(id)initWithConversation:(id)arg1 delegate:(id)arg2 balloonMaxWidth:(double)arg3 marginInsets:(UIEdgeInsets)arg4 ;
-(void)setShouldLoadDefaultConversationViewingMessageCountOnAppear:(BOOL)arg1 ;
-(void)balloonViewSelected:(id)arg1 withModifierFlags:(long long)arg2 selectedText:(id)arg3 ;
-(void)balloonViewTextViewDidChangeSelection:(id)arg1 selectedText:(id)arg2 textView:(id)arg3 ;
-(void)liveBalloonTouched:(id)arg1 ;
-(void)interactionStartedFromPreviewItemControllerInBalloonView:(id)arg1 ;
-(void)balloonView:(id)arg1 userDidDragOutsideBalloonWithPoint:(CGPoint)arg2 ;
-(void)interactionStoppedFromPreviewItemControllerInBalloonView:(id)arg1 ;
-(void)balloonViewShouldCopyToPasteboard:(id)arg1 ;
-(void)balloonView:(id)arg1 willInsertPluginViewAsSubview:(id)arg2 ;
-(id<CKTranscriptCollectionViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(CKTranscriptCollectionView *)collectionView;
-(id)cellForChatItem:(id)arg1 ;
-(void)setDragInteractionDelegate:(id<UIDragInteractionDelegate>)arg1 ;
-(void)setConversation:(CKConversation *)arg1 ;
-(double)balloonMaxWidth;
-(id)selectedItems;
-(void)setSelectedItems:(id)arg1 ;
-(NSObject*<OS_dispatch_group>)updateAnimationGroup;
-(CKImpactEffectManager *)impactEffectManager;
-(void)sizeFullTranscriptIfNecessary;
-(void)highlightItemAtIndexPathWhenDisplayed:(id)arg1 autoDismiss:(BOOL)arg2 ;
-(void)raiseGestureRecognized:(id)arg1 ;
-(BOOL)isVisiblePlugin:(id)arg1 ;
-(BOOL)hasRecentTouchForSendingPlugin:(id)arg1 ;
-(void)clearRecentPluginTouch;
-(void)setScrollAnchor:(double)arg1 ;
-(void)setTranscriptIdentifier:(NSString *)arg1 ;
-(void)_registerCells;
-(NSArray *)chatItems;
-(BOOL)canRaiseToTalk;
-(void)setAllowsPluginPlayback:(BOOL)arg1 ;
-(void)stopPluginPlayback;
-(void)setTranscriptUpdateAnimated:(BOOL)arg1 ;
-(void)startPluginPlaybackAfterDelay:(double)arg1 ;
-(void)stopPlayingAudio;
-(void)deselectAllBalloons;
-(BOOL)canRaiseToListen;
-(void)addContentAnimationPauseReasons:(long long)arg1 ;
-(id)layoutSectionForSection:(long long)arg1 withEnvironment:(id)arg2 ;
-(UICollectionViewDiffableDataSource *)collectionViewDatasource;
-(id)cellForSupplementaryItemInCollectionView:(id)arg1 atIndexPath:(id)arg2 forSupplementaryViewKind:(id)arg3 ;
-(void)setCollectionViewDatasource:(UICollectionViewDiffableDataSource *)arg1 ;
-(void)_configureBalloonCellIfNecessary:(id)arg1 ;
-(void)transcriptModelDidChange:(id)arg1 ;
-(void)highlightItemAtIndexPathWhenDisplayed:(id)arg1 ;
-(void)balloonViewSelected:(id)arg1 keyModifierFlags:(long long)arg2 selectedText:(id)arg3 ;
-(void)removeContentAnimationPauseReasons:(long long)arg1 ;
-(CKFullScreenEffectManager *)fullscreenEffectManager;
-(void)selectChatItem:(id)arg1 ;
-(id)cellForAssociatedChatItem:(id)arg1 ;
-(void)setHiddenBalloonViews:(NSIndexSet *)arg1 ;
-(void)verticallyScrollTranscriptByAmount:(double)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setGradientReferenceView:(UIView*<CKGradientReferenceView>)arg1 ;
-(void)setDelegate:(id<CKTranscriptCollectionViewControllerDelegate>)arg1 ;
-(void)setHiddenItems:(NSIndexSet *)arg1 ;
-(CKConversation *)conversation;
-(void)setHiddenAssociatedItems:(NSIndexSet *)arg1 ;
-(id)associatedChatItemForGUID:(id)arg1 ;
-(id)chatItemForGUID:(id)arg1 ;
-(void)updateTargetAlphaForVisibleChatItems;
-(void)setModel:(CKTranscriptModel *)arg1 ;
-(UIView*<CKGradientReferenceView>)gradientReferenceView;
-(void)reloadData;
-(void)setInitialLoad:(BOOL)arg1 ;
-(NSIndexSet *)hiddenItems;
-(id)initWithConversation:(id)arg1 delegate:(id)arg2 notifications:(id)arg3 balloonMaxWidth:(double)arg4 marginInsets:(UIEdgeInsets)arg5 ;
-(void)configureCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(NSString *)transcriptIdentifier;
-(id)balloonViewForChatItem:(id)arg1 ;
-(void)deleteSelectedItems:(id)arg1 ;
-(id)cellForItemInCollectionView:(id)arg1 atIndexPath:(id)arg2 withIdentifier:(id)arg3 ;
-(void)updateTranscript:(/*^block*/id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(NSArray *)associatedChatItems;
-(UITapGestureRecognizer *)loggingTapGestureRecognizer;
-(void)setLoggingTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setCollectionViewLayout:(UICollectionViewCompositionalLayout *)arg1 ;
-(id)chatForSendAnimationManager:(id)arg1 ;
-(id)collectionViewControllerForImpactEffectManager:(id)arg1 ;
-(void)sendAnimationManagerWillStartAnimation:(id)arg1 context:(id)arg2 ;
-(void)sendAnimationManagerDidStopAnimation:(id)arg1 context:(id)arg2 ;
-(BOOL)shouldLoadDefaultConversationViewingMessageCountOnAppear;
-(void)updateEffectViewMessageRects;
-(double)pluginPlaybackDelay;
-(void)setBalloonMaxWidth:(double)arg1 ;
-(void)setShouldUseOpaqueMask:(BOOL)arg1 ;
-(void)setUpdateAnimationGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setImpactEffectManager:(CKImpactEffectManager *)arg1 ;
-(void)setTransitioningFromComposing:(BOOL)arg1 ;
-(UIEdgeInsets)marginInsets;
-(id)chatItemForCell:(id)arg1 ;
-(BOOL)allowsPluginPlayback;
-(UICollectionViewCompositionalLayout *)collectionViewLayout;
-(id)indexPathForBalloonView:(id)arg1 ;
-(id)balloonViewForIndexPath:(id)arg1 ;
-(NSString *)__CurrentTestName;
-(BOOL)shouldUseOpaqueMask;
-(id<UIDragInteractionDelegate>)dragInteractionDelegate;
-(long long)contentAnimationPauseReasons;
-(BOOL)transitioningFromComposing;
-(NSIndexSet *)hiddenBalloonViews;
-(void)loadView;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
-(id)lastMessagePartChatItem;
-(BOOL)transitionedFromComposing;
-(BOOL)isTranscriptUpdateAnimated;
-(NSIndexSet *)hiddenAssociatedItems;
-(void)collectionViewDidInset:(id)arg1 ;
-(void)tuConversationBalloonJoinButtonTapped:(id)arg1 ;
-(BOOL)collectionView:(id)arg1 isEditableItemAtIndexPath:(id)arg2 ;
-(void)collectionViewWillScroll:(id)arg1 targetContentOffset:(inout CGPoint*)arg2 ;
-(void)collectionViewWillProgrammaticallyScroll:(id)arg1 animated:(BOOL)arg2 ;
-(void)collectionViewWillInset:(id)arg1 targetContentInset:(inout UIEdgeInsets*)arg2 ;
-(void)setPluginPlaybackDelay:(double)arg1 ;
-(void)endHoldingUpdatesAfterQuicklookCancelsDismiss;
-(void)setFullscreenEffectManager:(CKFullScreenEffectManager *)arg1 ;
-(void)setTransitionedFromComposing:(BOOL)arg1 ;
-(void)__setCurrentTestName:(id)arg1 ;
-(void)setContentAnimationPauseReasons:(long long)arg1 ;
-(id)traitCollectionForModel:(id)arg1 ;
-(double)itemMaxWidthForModel:(id)arg1 ;
-(double)balloonMaxWidthForModel:(id)arg1 ;
-(void)invalidateChatItemLayoutWithBalloonMaxWidth:(double)arg1 marginInsets:(UIEdgeInsets)arg2 traitCollection:(id)arg3 ;
@end

