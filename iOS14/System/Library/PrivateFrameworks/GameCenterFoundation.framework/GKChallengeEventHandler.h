/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/


@protocol GKChallengeEventHandlerDelegate, GKChallengeEventHandlerUIDelegate;
@class GKChallengeInternal;

@interface GKChallengeEventHandler : NSObject {

	id<GKChallengeEventHandlerDelegate> _delegate;
	id<GKChallengeEventHandlerUIDelegate> _uiDelegate;
	GKChallengeInternal* _pendingReceivedChallenge;
	GKChallengeInternal* _pendingCompletedChallenge;

}

@property (nonatomic,retain) GKChallengeInternal * pendingReceivedChallenge;                   //@synthesize pendingReceivedChallenge=_pendingReceivedChallenge - In the implementation block
@property (nonatomic,retain) GKChallengeInternal * pendingCompletedChallenge;                  //@synthesize pendingCompletedChallenge=_pendingCompletedChallenge - In the implementation block
@property (nonatomic,retain) id<GKChallengeEventHandlerUIDelegate> uiDelegate;                 //@synthesize uiDelegate=_uiDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<GKChallengeEventHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(Class)uiDelegateClass;
+(id)challengeEventHandler;
-(void)challengeReceived:(id)arg1 ;
-(void)completedChallengeSelected:(id)arg1 ;
-(id<GKChallengeEventHandlerDelegate>)delegate;
-(id<GKChallengeEventHandlerUIDelegate>)uiDelegate;
-(void)setDelegate:(id<GKChallengeEventHandlerDelegate>)arg1 ;
-(void)receivedChallengeSelected:(id)arg1 ;
-(void)challengeCompleted:(id)arg1 ;
-(void)setUiDelegate:(id<GKChallengeEventHandlerUIDelegate>)arg1 ;
-(void)setPendingReceivedChallenge:(GKChallengeInternal *)arg1 ;
-(void)setPendingCompletedChallenge:(GKChallengeInternal *)arg1 ;
-(void)showBannerForChallenge:(id)arg1 complete:(/*^block*/id)arg2 ;
-(GKChallengeInternal *)pendingReceivedChallenge;
-(GKChallengeInternal *)pendingCompletedChallenge;
@end

