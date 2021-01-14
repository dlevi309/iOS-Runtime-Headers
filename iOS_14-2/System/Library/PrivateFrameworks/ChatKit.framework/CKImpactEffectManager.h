/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <libobjc.A.dylib/CKSendAnimationManager.h>

@protocol CKSendAnimationManagerDelegate, CKSendAnimationBalloonProvider;
@class NSString, UIWindow, CKBalloonView, UIScrollView, CABackdropLayer;

@interface CKImpactEffectManager : NSObject <CKSendAnimationManager> {

	BOOL _isAnimating;
	BOOL _isDisabled;
	id<CKSendAnimationManagerDelegate> sendAnimationManagerDelegate;
	id<CKSendAnimationBalloonProvider> sendAnimationBalloonProvider;
	id<CKSendAnimationManagerDelegate> _delegate;
	NSString* _animatingIdentifier;
	UIWindow* _expressiveSendAnimationWindow;
	CKBalloonView* _expressiveSendAnimationBalloon;
	CKBalloonView* _originalBalloonView;
	UIScrollView* _expressiveSendScrollView;
	CABackdropLayer* _expressiveSendAnimationBackdrop;

}

@property (nonatomic,retain) UIWindow * expressiveSendAnimationWindow;                                            //@synthesize expressiveSendAnimationWindow=_expressiveSendAnimationWindow - In the implementation block
@property (nonatomic,retain) CKBalloonView * expressiveSendAnimationBalloon;                                      //@synthesize expressiveSendAnimationBalloon=_expressiveSendAnimationBalloon - In the implementation block
@property (nonatomic,retain) CKBalloonView * originalBalloonView;                                                 //@synthesize originalBalloonView=_originalBalloonView - In the implementation block
@property (nonatomic,retain) UIScrollView * expressiveSendScrollView;                                             //@synthesize expressiveSendScrollView=_expressiveSendScrollView - In the implementation block
@property (nonatomic,retain) CABackdropLayer * expressiveSendAnimationBackdrop;                                   //@synthesize expressiveSendAnimationBackdrop=_expressiveSendAnimationBackdrop - In the implementation block
@property (assign,nonatomic) BOOL isAnimating;                                                                    //@synthesize isAnimating=_isAnimating - In the implementation block
@property (assign,nonatomic,__weak) id<CKSendAnimationManagerDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * animatingIdentifier;                                                    //@synthesize animatingIdentifier=_animatingIdentifier - In the implementation block
@property (assign,nonatomic) BOOL isDisabled;                                                                     //@synthesize isDisabled=_isDisabled - In the implementation block
@property (assign,nonatomic,__weak) id<CKSendAnimationManagerDelegate> sendAnimationManagerDelegate; 
@property (assign,nonatomic,__weak) id<CKSendAnimationBalloonProvider> sendAnimationBalloonProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)maskingStringForID:(id)arg1 ;
+(id)localizedEffectNameForEffectWithIdentifier:(id)arg1 ;
+(BOOL)identifierIsAnimatedImpactEffect:(id)arg1 ;
+(BOOL)identifierIsValidImpactEffect:(id)arg1 ;
+(BOOL)identifierShouldPlayInWindow:(id)arg1 ;
+(id)effectIdentifiers;
-(id)init;
-(void)_animateLastMessage:(id)arg1 ;
-(UIWindow *)expressiveSendAnimationWindow;
-(void)setExpressiveSendScrollView:(UIScrollView *)arg1 ;
-(void)setExpressiveSendAnimationBackdrop:(CABackdropLayer *)arg1 ;
-(void)setExpressiveSendAnimationWindow:(UIWindow *)arg1 ;
-(void)_sizeAnimationWindow;
-(id)_sendAnimationContextForIdentifier:(id)arg1 message:(id)arg2 isSender:(BOOL)arg3 ;
-(CABackdropLayer *)expressiveSendAnimationBackdrop;
-(void)setOriginalBalloonView:(CKBalloonView *)arg1 ;
-(UIScrollView *)expressiveSendScrollView;
-(void)_cleanupExpressiveSendComponents;
-(void)_visibleCells:(id*)arg1 aboveItem:(id)arg2 ;
-(CKBalloonView *)expressiveSendAnimationBalloon;
-(id)cloneBalloonForAnimationWithChatItem:(id)arg1 ;
-(void)setExpressiveSendAnimationBalloon:(CKBalloonView *)arg1 ;
-(CKBalloonView *)originalBalloonView;
-(void)animationWillBeginWithContext:(id)arg1 ;
-(void)animationDidFinishWithContext:(id)arg1 ;
-(id<CKSendAnimationManagerDelegate>)sendAnimationManagerDelegate;
-(id<CKSendAnimationManagerDelegate>)delegate;
-(id<CKSendAnimationBalloonProvider>)sendAnimationBalloonProvider;
-(void)setIsAnimating:(BOOL)arg1 ;
-(void)animateMessages:(id)arg1 ;
-(void)setSendAnimationManagerDelegate:(id<CKSendAnimationManagerDelegate>)arg1 ;
-(void)setSendAnimationBalloonProvider:(id<CKSendAnimationBalloonProvider>)arg1 ;
-(BOOL)isDisabled;
-(void)setDelegate:(id<CKSendAnimationManagerDelegate>)arg1 ;
-(void)stopAllEffects;
-(void)matchScrollViewOffset:(id)arg1 ;
-(NSString *)animatingIdentifier;
-(void)setIsDisabled:(BOOL)arg1 ;
-(BOOL)isAnimating;
@end

