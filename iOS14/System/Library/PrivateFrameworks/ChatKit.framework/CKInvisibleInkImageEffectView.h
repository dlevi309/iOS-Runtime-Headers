/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKInvisibleInkEffectView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class CALayer, CAEmitterLayer, NSString;

@interface CKInvisibleInkImageEffectView : CKInvisibleInkEffectView <CAAnimationDelegate> {

	CALayer* _blurredImageLayer;
	CALayer* _blurredImageContainerLayer;
	CALayer* _drawEmitterContainerLayer;
	CAEmitterLayer* _drawEmitterLayer;
	CALayer* _dustEmitterContainerLayer;
	CAEmitterLayer* _dustEmitterLayer;

}

@property (nonatomic,retain) CALayer * blurredImageLayer;                       //@synthesize blurredImageLayer=_blurredImageLayer - In the implementation block
@property (nonatomic,retain) CALayer * blurredImageContainerLayer;              //@synthesize blurredImageContainerLayer=_blurredImageContainerLayer - In the implementation block
@property (nonatomic,retain) CALayer * drawEmitterContainerLayer;               //@synthesize drawEmitterContainerLayer=_drawEmitterContainerLayer - In the implementation block
@property (nonatomic,retain) CAEmitterLayer * drawEmitterLayer;                 //@synthesize drawEmitterLayer=_drawEmitterLayer - In the implementation block
@property (nonatomic,retain) CALayer * dustEmitterContainerLayer;               //@synthesize dustEmitterContainerLayer=_dustEmitterContainerLayer - In the implementation block
@property (nonatomic,retain) CAEmitterLayer * dustEmitterLayer;                 //@synthesize dustEmitterLayer=_dustEmitterLayer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)setImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSuspended:(BOOL)arg1 ;
-(void)setBlurredImageContainerLayer:(CALayer *)arg1 ;
-(void)setBlurredImageLayer:(CALayer *)arg1 ;
-(CALayer *)blurredImageLayer;
-(void)setupDrawEmitter;
-(void)setupDustEmitter;
-(CALayer *)blurredImageContainerLayer;
-(CALayer *)drawEmitterContainerLayer;
-(void)setDrawEmitterContainerLayer:(CALayer *)arg1 ;
-(void)endDustEmitterFingerEffects;
-(void)addDustRandomEmitterAnimationsWithSize:(CGSize)arg1 ;
-(void)setRandomAttractorsEnabled:(BOOL)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)setPaused:(BOOL)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(CAEmitterLayer *)drawEmitterLayer;
-(CAEmitterLayer *)dustEmitterLayer;
-(void)setDustEmitterLayer:(CAEmitterLayer *)arg1 ;
-(void)setDrawEmitterLayer:(CAEmitterLayer *)arg1 ;
-(void)disableBlending;
-(void)endDrawEmitterEffects;
-(void)moveEmittersForTouchesBegan:(id)arg1 ;
-(void)enableBlending;
-(void)moveEmittersWithTouches:(id)arg1 ;
-(void)moveEmittersForTouchesMoved:(id)arg1 ;
-(void)endEmittersForTouchesEnded:(id)arg1 ;
-(void)endEmittersForTouchesCancelled:(id)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)setDustEmitterContainerLayer:(CALayer *)arg1 ;
-(CALayer *)dustEmitterContainerLayer;
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
@end

