/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKSendAnimationManager <NSObject>
@property (assign,nonatomic,__weak) id<CKSendAnimationManagerDelegate> sendAnimationManagerDelegate; 
@property (assign,nonatomic,__weak) id<CKSendAnimationBalloonProvider> sendAnimationBalloonProvider; 
@required
-(void)animationWillBeginWithContext:(id)arg1;
-(void)animationDidFinishWithContext:(id)arg1;
-(id<CKSendAnimationManagerDelegate>)sendAnimationManagerDelegate;
-(id<CKSendAnimationBalloonProvider>)sendAnimationBalloonProvider;
-(void)animateMessages:(id)arg1;
-(void)setSendAnimationManagerDelegate:(id)arg1;
-(void)setSendAnimationBalloonProvider:(id)arg1;

@end

