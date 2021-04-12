/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <libobjc.A.dylib/CKSendAnimationManager.h>

@protocol CKSendAnimationManagerDelegate, CKSendAnimationBalloonProvider, CKThrowAnimationManagerDelegate;
@class CKSendAnimationContext, CKSendAnimationWindow, CKChatControllerDummyAnimator, CKTranscriptTypingIndicatorCell, NSString;

@interface CKThrowAnimationManager : NSObject <CKSendAnimationManager> {

	id<CKSendAnimationManagerDelegate> _sendAnimationManagerDelegate;
	id<CKSendAnimationBalloonProvider> _sendAnimationBalloonProvider;
	id<CKThrowAnimationManagerDelegate> _throwManagerDelegate;
	CKSendAnimationContext* _currentContext;
	CKSendAnimationWindow* _sendAnimationWindow;
	CKChatControllerDummyAnimator* _animator;
	CKTranscriptTypingIndicatorCell* _fakeTypingIndicatorCell;

}

@property (nonatomic,retain) CKSendAnimationContext * currentContext;                                             //@synthesize currentContext=_currentContext - In the implementation block
@property (nonatomic,retain) CKSendAnimationWindow * sendAnimationWindow;                                         //@synthesize sendAnimationWindow=_sendAnimationWindow - In the implementation block
@property (nonatomic,retain) CKChatControllerDummyAnimator * animator;                                            //@synthesize animator=_animator - In the implementation block
@property (nonatomic,retain) CKTranscriptTypingIndicatorCell * fakeTypingIndicatorCell;                           //@synthesize fakeTypingIndicatorCell=_fakeTypingIndicatorCell - In the implementation block
@property (assign,nonatomic,__weak) id<CKThrowAnimationManagerDelegate> throwManagerDelegate;                     //@synthesize throwManagerDelegate=_throwManagerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CKSendAnimationManagerDelegate> sendAnimationManagerDelegate;              //@synthesize sendAnimationManagerDelegate=_sendAnimationManagerDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CKSendAnimationBalloonProvider> sendAnimationBalloonProvider;              //@synthesize sendAnimationBalloonProvider=_sendAnimationBalloonProvider - In the implementation block
-(id)init;
-(CKSendAnimationContext *)currentContext;
-(void)setCurrentContext:(CKSendAnimationContext *)arg1 ;
-(void)setAnimator:(CKChatControllerDummyAnimator *)arg1 ;
-(id)_collectionViewController;
-(CKChatControllerDummyAnimator *)animator;
-(void)_removeAllAnimations;
-(void)setThrowManagerDelegate:(id<CKThrowAnimationManagerDelegate>)arg1 ;
-(void)setSendAnimationManagerDelegate:(id<CKSendAnimationManagerDelegate>)arg1 ;
-(void)setSendAnimationBalloonProvider:(id<CKSendAnimationBalloonProvider>)arg1 ;
-(void)animateMessages:(id)arg1 ;
-(id)_entryView;
-(void)animationWillBeginWithContext:(id)arg1 ;
-(void)animationDidFinishWithContext:(id)arg1 ;
-(id<CKSendAnimationManagerDelegate>)sendAnimationManagerDelegate;
-(id<CKSendAnimationBalloonProvider>)sendAnimationBalloonProvider;
-(CKSendAnimationWindow *)sendAnimationWindow;
-(CKTranscriptTypingIndicatorCell *)fakeTypingIndicatorCell;
-(void)setFakeTypingIndicatorCell:(CKTranscriptTypingIndicatorCell *)arg1 ;
-(id<CKThrowAnimationManagerDelegate>)throwManagerDelegate;
-(void)_setupFakeTypingIndicatorIfNecessary;
-(void)_snapshotLiveBubbleIfNecessary;
-(void)_sendMessageAndPinTranscript;
-(void)_removeFakeTypingIndicatorIfNecessary;
-(void)_setupThrowBalloonViews;
-(void)_setupThrowFrames;
-(void)_shiftFakeTypingIndicator;
-(void)_hideAddedChatItems;
-(CGPoint)bestVisibleOffsetForBubbleAtIndex:(long long)arg1 ;
-(BOOL)_transcriptWillShiftDueToThrowAnimation;
-(double)_changeInEntryViewHeight;
-(void)setSendAnimationWindow:(CKSendAnimationWindow *)arg1 ;
@end

