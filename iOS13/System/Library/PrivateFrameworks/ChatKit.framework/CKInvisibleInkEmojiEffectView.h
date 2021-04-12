/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKInvisibleInkEffectView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class UITextView, CALayer, CAEmitterLayer, NSString;

@interface CKInvisibleInkEmojiEffectView : CKInvisibleInkEffectView <CAAnimationDelegate> {

	BOOL _blendingEnabled;
	UITextView* _textView;
	CALayer* _emojiContainerLayer;
	CALayer* _emojiLayer;
	CAEmitterLayer* _drawEmitterLayer;
	CALayer* _dustContainerLayer;
	CAEmitterLayer* _dustEmitterLayer;
	CALayer* _blurredEmojiLayer;
	CALayer* _maskLayer;

}

@property (nonatomic,retain) UITextView * textView;                          //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) CALayer * emojiContainerLayer;                  //@synthesize emojiContainerLayer=_emojiContainerLayer - In the implementation block
@property (nonatomic,retain) CALayer * emojiLayer;                           //@synthesize emojiLayer=_emojiLayer - In the implementation block
@property (nonatomic,retain) CAEmitterLayer * drawEmitterLayer;              //@synthesize drawEmitterLayer=_drawEmitterLayer - In the implementation block
@property (nonatomic,retain) CALayer * dustContainerLayer;                   //@synthesize dustContainerLayer=_dustContainerLayer - In the implementation block
@property (nonatomic,retain) CAEmitterLayer * dustEmitterLayer;              //@synthesize dustEmitterLayer=_dustEmitterLayer - In the implementation block
@property (nonatomic,retain) CALayer * blurredEmojiLayer;                    //@synthesize blurredEmojiLayer=_blurredEmojiLayer - In the implementation block
@property (nonatomic,retain) CALayer * maskLayer;                            //@synthesize maskLayer=_maskLayer - In the implementation block
@property (assign,nonatomic) BOOL blendingEnabled;                           //@synthesize blendingEnabled=_blendingEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSuspended:(BOOL)arg1 ;
-(void)reset;
-(void)setPaused:(BOOL)arg1 ;
-(UITextView *)textView;
-(void)setTextView:(UITextView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)displayLayer:(id)arg1 ;
-(void)setBlendingEnabled:(BOOL)arg1 ;
-(CALayer *)maskLayer;
-(void)setMaskLayer:(CALayer *)arg1 ;
-(void)createDrawEmitter;
-(void)setEmojiContainerLayer:(CALayer *)arg1 ;
-(CALayer *)emojiContainerLayer;
-(void)setEmojiLayer:(CALayer *)arg1 ;
-(CALayer *)emojiLayer;
-(CAEmitterLayer *)drawEmitterLayer;
-(void)createDustEmitter;
-(void)setDustContainerLayer:(CALayer *)arg1 ;
-(void)setBlurredEmojiLayer:(CALayer *)arg1 ;
-(CALayer *)blurredEmojiLayer;
-(CAEmitterLayer *)dustEmitterLayer;
-(CALayer *)dustContainerLayer;
-(void)setDustEmitterLayer:(CAEmitterLayer *)arg1 ;
-(void)endDustEmitterLayerFingerEffects;
-(void)setDrawEmitterLayer:(CAEmitterLayer *)arg1 ;
-(void)disableBlending;
-(void)endDrawEmitterEffects;
-(void)enableBlending;
-(void)moveEmittersWithTouches:(id)arg1 ;
-(void)endTouches;
-(void)attachToBalloonView:(id)arg1 ;
-(void)detachFromBalloonView;
-(BOOL)blendingEnabled;
@end

