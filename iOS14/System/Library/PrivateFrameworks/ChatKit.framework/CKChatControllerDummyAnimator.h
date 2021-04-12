/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <libobjc.A.dylib/CAAnimationDelegate.h>
#import <libobjc.A.dylib/CKImpactEffectAnimationProvider.h>

@protocol CKSendAnimationManager, OS_dispatch_group;
@class CAEmitterLayer, NSObject, NSString;

@interface CKChatControllerDummyAnimator : NSObject <CAAnimationDelegate, CKImpactEffectAnimationProvider> {

	id<CKSendAnimationManager> _animationDelegate;
	CAEmitterLayer* _dustEmitter;
	NSObject*<OS_dispatch_group> _throwAnimationGroup;

}

@property (nonatomic,retain) CAEmitterLayer * dustEmitter;                                     //@synthesize dustEmitter=_dustEmitter - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> throwAnimationGroup;                 //@synthesize throwAnimationGroup=_throwAnimationGroup - In the implementation block
@property (assign,nonatomic,__weak) id<CKSendAnimationManager> animationDelegate;              //@synthesize animationDelegate=_animationDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)beginAnimationWithSendAnimationContext:(id)arg1 ;
-(void)setAnimationDelegate:(id<CKSendAnimationManager>)arg1 ;
-(NSObject*<OS_dispatch_group>)throwAnimationGroup;
-(void)setDustEmitter:(CAEmitterLayer *)arg1 ;
-(void)_beginImpactAnimationWithContext:(id)arg1 ;
-(void)_beginGentleAnimationWithContext:(id)arg1 ;
-(void)_beginLoudAnimationsWithContext:(id)arg1 ;
-(void)_beginFocusAnimationWithContext:(id)arg1 ;
-(void)setThrowAnimationGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)_beginThrowAnimationWithContext:(id)arg1 ;
-(id<CKSendAnimationManager>)animationDelegate;
-(CAEmitterLayer *)dustEmitter;
-(void)stopAnimationWithSendAnimationContext:(id)arg1 ;
@end

