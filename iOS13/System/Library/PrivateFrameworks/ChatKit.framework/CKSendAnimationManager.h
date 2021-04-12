/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKSendAnimationManager <NSObject>
@property (assign,nonatomic,__weak) id<CKSendAnimationManagerDelegate> sendAnimationManagerDelegate; 
@property (assign,nonatomic,__weak) id<CKSendAnimationBalloonProvider> sendAnimationBalloonProvider; 
@required
-(void)setSendAnimationManagerDelegate:(id)arg1;
-(void)setSendAnimationBalloonProvider:(id)arg1;
-(void)animateMessages:(id)arg1;
-(void)animationWillBeginWithContext:(id)arg1;
-(void)animationDidFinishWithContext:(id)arg1;
-(id<CKSendAnimationManagerDelegate>)sendAnimationManagerDelegate;
-(id<CKSendAnimationBalloonProvider>)sendAnimationBalloonProvider;

@end

