/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKInvisibleInkEffectView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class CKTextBalloonView, UITextView, CAEmitterLayer, CALayer, NSArray, NSString;

@interface CKInvisibleInkTextEffectView : CKInvisibleInkEffectView <CAAnimationDelegate> {

	BOOL _blendingEnabled;
	CKTextBalloonView* _balloonView;
	UITextView* _textView;
	CAEmitterLayer* _textDrawEmitterLayer;
	CALayer* _dustEmitterContainerLayer;
	NSArray* _dustEmitterLayers;
	CAEmitterLayer* _dustDrawEmitterLayer;

}

@property (assign,nonatomic,__weak) CKTextBalloonView * balloonView;              //@synthesize balloonView=_balloonView - In the implementation block
@property (nonatomic,retain) UITextView * textView;                               //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) CAEmitterLayer * textDrawEmitterLayer;               //@synthesize textDrawEmitterLayer=_textDrawEmitterLayer - In the implementation block
@property (nonatomic,retain) CALayer * dustEmitterContainerLayer;                 //@synthesize dustEmitterContainerLayer=_dustEmitterContainerLayer - In the implementation block
@property (nonatomic,retain) NSArray * dustEmitterLayers;                         //@synthesize dustEmitterLayers=_dustEmitterLayers - In the implementation block
@property (nonatomic,retain) CAEmitterLayer * dustDrawEmitterLayer;               //@synthesize dustDrawEmitterLayer=_dustDrawEmitterLayer - In the implementation block
@property (assign,nonatomic) BOOL blendingEnabled;                                //@synthesize blendingEnabled=_blendingEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UITextView *)textView;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSuspended:(BOOL)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)setTextView:(UITextView *)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)endTouches;
-(id)createDrawEmitter;
-(void)endDrawEmitterEffects;
-(void)moveEmittersForTouchesBegan:(id)arg1 ;
-(void)moveEmittersWithTouches:(id)arg1 ;
-(void)moveEmittersForTouchesMoved:(id)arg1 ;
-(void)endEmittersForTouchesEnded:(id)arg1 ;
-(void)attachToBalloonView:(id)arg1 ;
-(void)endEmittersForTouchesCancelled:(id)arg1 ;
-(void)detachFromBalloonView;
-(BOOL)blendingEnabled;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CKTextBalloonView *)balloonView;
-(void)didMoveToWindow;
-(void)setDustEmitterContainerLayer:(CALayer *)arg1 ;
-(CALayer *)dustEmitterContainerLayer;
-(void)setTextDrawEmitterLayer:(CAEmitterLayer *)arg1 ;
-(void)setDustDrawEmitterLayer:(CAEmitterLayer *)arg1 ;
-(CAEmitterLayer *)dustDrawEmitterLayer;
-(void)endDustEmitterLayerFingerEffects:(id)arg1 ;
-(NSArray *)dustEmitterLayers;
-(CAEmitterLayer *)textDrawEmitterLayer;
-(id)dustEmitter;
-(void)setDustEmitterLayers:(NSArray *)arg1 ;
-(void)setBalloonView:(CKTextBalloonView *)arg1 ;
-(void)updateDustCellColor;
-(void)cullSubviewsWithVisibleBounds:(CGRect)arg1 ;
-(void)setBlendingEnabled:(BOOL)arg1 ;
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
@end

