/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic,__weak) id<CKSendAnimationManagerDelegate> sendAnimationManagerDelegate;              //@synthesize sendAnimationManagerDelegate=_sendAnimationManagerDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CKSendAnimationBalloonProvider> sendAnimationBalloonProvider;              //@synthesize sendAnimationBalloonProvider=_sendAnimationBalloonProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CKChatControllerDummyAnimator *)animator;
-(void)setAnimator:(CKChatControllerDummyAnimator *)arg1 ;
-(void)_removeAllAnimations;
-(id)init;
-(void)animationWillBeginWithContext:(id)arg1 ;
-(void)animationDidFinishWithContext:(id)arg1 ;
-(id<CKSendAnimationManagerDelegate>)sendAnimationManagerDelegate;
-(id<CKSendAnimationBalloonProvider>)sendAnimationBalloonProvider;
-(void)_setupThrowFrames;
-(CKSendAnimationWindow *)sendAnimationWindow;
-(id<CKThrowAnimationManagerDelegate>)throwManagerDelegate;
-(CKTranscriptTypingIndicatorCell *)fakeTypingIndicatorCell;
-(void)setFakeTypingIndicatorCell:(CKTranscriptTypingIndicatorCell *)arg1 ;
-(void)_snapshotLiveBubbleIfNecessary;
-(void)_setupFakeTypingIndicatorIfNecessary;
-(void)_sendMessageAndPinTranscript;
-(void)_removeFakeTypingIndicatorIfNecessary;
-(void)_setupThrowBalloonViews;
-(void)_shiftFakeTypingIndicator;
-(void)_hideAddedChatItems;
-(CGPoint)bestVisibleOffsetForBubbleAtIndex:(long long)arg1 ;
-(BOOL)_transcriptWillShiftDueToThrowAnimation;
-(double)_changeInEntryViewHeight;
-(void)setSendAnimationWindow:(CKSendAnimationWindow *)arg1 ;
-(void)animateMessages:(id)arg1 ;
-(void)setThrowManagerDelegate:(id<CKThrowAnimationManagerDelegate>)arg1 ;
-(void)setSendAnimationManagerDelegate:(id<CKSendAnimationManagerDelegate>)arg1 ;
-(void)setSendAnimationBalloonProvider:(id<CKSendAnimationBalloonProvider>)arg1 ;
-(id)_entryView;
-(CKSendAnimationContext *)currentContext;
-(void)setCurrentContext:(CKSendAnimationContext *)arg1 ;
-(id)_collectionViewController;
@end

