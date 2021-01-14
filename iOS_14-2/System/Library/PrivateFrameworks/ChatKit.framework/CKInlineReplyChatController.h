/*
* Generated on Thursday, January 14, 2021 at 2:21:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKChatController.h>

@protocol CKInlineReplyInteractionDelegate;
@class NSString, IMMessageItem, CKInlineReplyTransitionContext, UIVisualEffectView, UINavigationBarAppearance, CKInlineReplyCollectionViewController;

@interface CKInlineReplyChatController : CKChatController {

	BOOL _animatingIn;
	BOOL _animatingOut;
	BOOL _isInitialLoad;
	BOOL _isInitialSizing;
	BOOL _showNavbarKeyline;
	NSString* _threadIdentifier;
	IMMessageItem* _threadOriginator;
	CKInlineReplyTransitionContext* _transitionContext;
	id<CKInlineReplyInteractionDelegate> _interactionDelegate;
	UIVisualEffectView* _blurView;
	UINavigationBarAppearance* _navBarAppearance;

}

@property (nonatomic,readonly) CKInlineReplyCollectionViewController * inlineCollectionViewController; 
@property (assign,nonatomic) BOOL isInitialLoad;                                                                    //@synthesize isInitialLoad=_isInitialLoad - In the implementation block
@property (assign,nonatomic) BOOL isInitialSizing;                                                                  //@synthesize isInitialSizing=_isInitialSizing - In the implementation block
@property (assign,nonatomic) BOOL animatingIn;                                                                      //@synthesize animatingIn=_animatingIn - In the implementation block
@property (assign,nonatomic) BOOL animatingOut;                                                                     //@synthesize animatingOut=_animatingOut - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * blurView;                                                         //@synthesize blurView=_blurView - In the implementation block
@property (nonatomic,copy) NSString * threadIdentifier;                                                             //@synthesize threadIdentifier=_threadIdentifier - In the implementation block
@property (nonatomic,retain) IMMessageItem * threadOriginator;                                                      //@synthesize threadOriginator=_threadOriginator - In the implementation block
@property (nonatomic,retain) CKInlineReplyTransitionContext * transitionContext;                                    //@synthesize transitionContext=_transitionContext - In the implementation block
@property (assign,nonatomic) BOOL showNavbarKeyline;                                                                //@synthesize showNavbarKeyline=_showNavbarKeyline - In the implementation block
@property (nonatomic,retain) UINavigationBarAppearance * navBarAppearance;                                          //@synthesize navBarAppearance=_navBarAppearance - In the implementation block
@property (assign,nonatomic,__weak) id<CKInlineReplyInteractionDelegate> interactionDelegate;                       //@synthesize interactionDelegate=_interactionDelegate - In the implementation block
+(Class)transcriptControllerClass;
+(Class)_gradientReferenceViewClass;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)isInitialLoad;
-(id)inputAccessoryView;
-(NSString *)threadIdentifier;
-(void)setIsInitialLoad:(BOOL)arg1 ;
-(BOOL)becomeFirstResponder;
-(void)setBlurView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)blurView;
-(void)setThreadIdentifier:(NSString *)arg1 ;
-(void)setInteractionDelegate:(id<CKInlineReplyInteractionDelegate>)arg1 ;
-(void)setTransitionContext:(CKInlineReplyTransitionContext *)arg1 ;
-(id<CKInlineReplyInteractionDelegate>)interactionDelegate;
-(void)transcriptCollectionViewControllerChatItemsDidChange:(id)arg1 ;
-(void)transcriptCollectionViewController:(id)arg1 collectionViewContentSizeDidChange:(CGSize)arg2 ;
-(void)transcriptCollectionViewControllerRestingStateDidChange:(id)arg1 ;
-(void)transcriptCollectionViewController:(id)arg1 didScroll:(CGPoint)arg2 ;
-(double)transcriptCollectionViewController:(id)arg1 targetAlphaForChatItem:(id)arg2 ;
-(CKInlineReplyTransitionContext *)transitionContext;
-(void)setTargetFirstResponder:(long long)arg1 ;
-(void)updateScrollGeometry;
-(void)_updateNavigationUI;
-(long long)targetFirstResponder;
-(void)_restoreDraftState;
-(void)_saveDraftState;
-(void)reloadEntryViewIfNeeded;
-(void)sendMessage:(id)arg1 forConversation:(id)arg2 newComposition:(BOOL)arg3 ;
-(void)_didSendCompositionInConversation:(id)arg1 ;
-(void)cleanUpDarkEffectStyle;
-(BOOL)animatingOut;
-(double)accessoryViewHeight;
-(id)_defaultTranscriptNavBarAppearance;
-(void)setUpStyleForDarkEffect;
-(void)sendMessage:(id)arg1 forConversation:(id)arg2 onService:(id)arg3 newComposition:(BOOL)arg4 ;
-(id)initWithConversation:(id)arg1 threadIdentifier:(id)arg2 threadOriginator:(id)arg3 transitionContext:(id)arg4 ;
-(void)dismissController;
-(CGRect)gradientFrameWithInsets:(UIEdgeInsets)arg1 ;
-(void)_animateIn;
-(void)stageAssetArchive:(id)arg1 skipShelf:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)shouldListParticipantsInTitle;
-(BOOL)isInline;
-(void)viewDidLoad;
-(void)setAnimatingOut:(BOOL)arg1 ;
-(void)setIsShowingPreview:(BOOL)arg1 ;
-(void)setAnimatingIn:(BOOL)arg1 ;
-(void)tapGestureRecognized:(id)arg1 ;
-(void)_animateOut;
-(BOOL)animatingIn;
-(id)_visibleGUIDs;
-(BOOL)getContainerWidth:(double*)arg1 offset:(double*)arg2 ;
-(IMMessageItem *)threadOriginator;
-(void)_requestDismissal;
-(void)setIsInitialSizing:(BOOL)arg1 ;
-(void)setThreadOriginator:(IMMessageItem *)arg1 ;
-(BOOL)isInitialSizing;
-(UIEdgeInsets)_contentInsetForSendAnimation;
-(id)_imMessageForIMMessageItem:(id)arg1 ;
-(id)_navigationBarAppearanceWithKeyline:(BOOL)arg1 ;
-(CKInlineReplyCollectionViewController *)inlineCollectionViewController;
-(void)_setInitialScrollPositionIfNecessary;
-(void)setShowNavbarKeyline:(BOOL)arg1 ;
-(BOOL)showNavbarKeyline;
-(CGSize)contentSizeForPinning;
-(UINavigationBarAppearance *)navBarAppearance;
-(UIEdgeInsets)navigationBarInsetsWithoutPalette;
-(double)throwAnimationFinalFrameOffset:(id)arg1 ;
-(double)throwAnimationManagerTopHeaderHeight:(id)arg1 ;
-(CGRect)_initialFrameForCollectionView;
-(void)setNavBarAppearance:(UINavigationBarAppearance *)arg1 ;
-(void)messageEntryViewDidBeginEditing:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)inputViewController;
-(void)reloadInputViews;
-(id)inputController;
@end

