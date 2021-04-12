/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
*/

#import <IMSharedUI/IMSharedUI-Structs.h>
#import <QuartzCore/CALayer.h>
#import <IMSharedUI/IMTypingIndicatorLayerProtocol.h>

@class UIColor, UITraitCollection, CALayer, CAReplicatorLayer, NSString;

@interface IMTypingIndicatorLayer : CALayer <IMTypingIndicatorLayerProtocol> {

	BOOL _hasDarkBackground;
	id _iconImage;
	UIColor* _bubbleColor;
	UIColor* _thinkingDotColor;
	UITraitCollection* _traitCollection;
	double _bubbleOpacity;
	double _thinkingDotOpacity;
	UIColor* _customBubbleColor;
	CALayer* _bubbleContainer;
	CALayer* _smallBubble;
	CALayer* _mediumBubble;
	CALayer* _largeBubble;
	CALayer* _thinkingDotContainer;
	CALayer* _thinkingDot;
	CAReplicatorLayer* _thinkingDots;
	CALayer* _iconImageLayer;

}

@property (nonatomic,retain) CALayer * bubbleContainer;                        //@synthesize bubbleContainer=_bubbleContainer - In the implementation block
@property (nonatomic,retain) CALayer * smallBubble;                            //@synthesize smallBubble=_smallBubble - In the implementation block
@property (nonatomic,retain) CALayer * mediumBubble;                           //@synthesize mediumBubble=_mediumBubble - In the implementation block
@property (nonatomic,retain) CALayer * largeBubble;                            //@synthesize largeBubble=_largeBubble - In the implementation block
@property (nonatomic,retain) CALayer * thinkingDotContainer;                   //@synthesize thinkingDotContainer=_thinkingDotContainer - In the implementation block
@property (nonatomic,retain) CALayer * thinkingDot;                            //@synthesize thinkingDot=_thinkingDot - In the implementation block
@property (nonatomic,retain) CAReplicatorLayer * thinkingDots;                 //@synthesize thinkingDots=_thinkingDots - In the implementation block
@property (nonatomic,retain) CALayer * iconImageLayer;                         //@synthesize iconImageLayer=_iconImageLayer - In the implementation block
@property (nonatomic,retain) id iconImage;                                     //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,copy) UIColor * bubbleColor;                              //@synthesize bubbleColor=_bubbleColor - In the implementation block
@property (nonatomic,copy) UIColor * thinkingDotColor;                         //@synthesize thinkingDotColor=_thinkingDotColor - In the implementation block
@property (nonatomic,retain) UITraitCollection * traitCollection;              //@synthesize traitCollection=_traitCollection - In the implementation block
@property (assign,nonatomic) double bubbleOpacity;                             //@synthesize bubbleOpacity=_bubbleOpacity - In the implementation block
@property (assign,nonatomic) double thinkingDotOpacity;                        //@synthesize thinkingDotOpacity=_thinkingDotOpacity - In the implementation block
@property (nonatomic,copy) UIColor * customBubbleColor;                        //@synthesize customBubbleColor=_customBubbleColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasDarkBackground;                           //@synthesize hasDarkBackground=_hasDarkBackground - In the implementation block
+(CGSize)defaultSize;
+(CGRect)largeBubbleFrame;
+(BOOL)supportsTypingIndicatorAnimation;
+(CGRect)iconImageFrame;
+(id)defaultThinkingDotColor;
+(id)defaultBubbleColor;
+(double)defaultThinkingDotOpacity;
+(double)defaultBubbleOpacity;
+(CGRect)smallBubbleFrame;
+(CGRect)mediumBubbleFrame;
+(double)thinkingDotDiameter;
+(CGPoint)thinkingDotsOffset;
+(double)iconImageTrailingSpace;
+(double)thinkingDotSpace;
+(CGPoint)smallBubbleGrowOffset;
+(CGPoint)mediumBubbleGrowOffset;
+(CGPoint)largeBubbleGrowOffset;
-(id)init;
-(void)_setup;
-(UITraitCollection *)traitCollection;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(void)stopAnimation;
-(id)iconImage;
-(void)setIconImage:(id)arg1 ;
-(void)startPulseAnimation;
-(void)startGrowAnimation;
-(void)stopPulseAnimation;
-(void)startShrinkAnimationWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_updateBubbleColors;
-(void)_updateBubbleOpacity;
-(id)resolvedColor:(id)arg1 forTraitCollection:(id)arg2 ;
-(UIColor *)thinkingDotColor;
-(void)_updateForImage;
-(CALayer *)largeBubble;
-(void)_buildIconImage;
-(void)_buildThinkingDots;
-(CALayer *)iconImageLayer;
-(void)setIconImageLayer:(CALayer *)arg1 ;
-(double)thinkingDotOpacity;
-(UIColor *)bubbleColor;
-(CALayer *)mediumBubble;
-(CALayer *)smallBubble;
-(double)bubbleOpacity;
-(double)convertedCurrentMediaTime;
-(id)_smallBubbleGrowAnimationsWithSpeed:(double)arg1 offset:(CGPoint)arg2 ;
-(id)_mediumBubbleGrowAnimationsWithSpeed:(double)arg1 offset:(CGPoint)arg2 ;
-(id)_largeBubbleGrowAnimationsWithSpeed:(double)arg1 offset:(CGPoint)arg2 ;
-(void)startGrowAnimationWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)_smallBubblePulseAnimationWithSpeed:(double)arg1 delay:(double)arg2 ;
-(id)_mediumBubblePulseAnimationWithSpeed:(double)arg1 delay:(double)arg2 ;
-(id)_largeBubblePulseAnimationWithSpeed:(double)arg1 delay:(double)arg2 ;
-(BOOL)hasDarkBackground;
-(void)setHasDarkBackground:(BOOL)arg1 ;
-(void)setBubbleColor:(UIColor *)arg1 ;
-(void)setBubbleOpacity:(double)arg1 ;
-(void)setThinkingDotColor:(UIColor *)arg1 ;
-(void)setThinkingDotOpacity:(double)arg1 ;
-(UIColor *)customBubbleColor;
-(void)setCustomBubbleColor:(UIColor *)arg1 ;
-(CALayer *)bubbleContainer;
-(void)setBubbleContainer:(CALayer *)arg1 ;
-(void)setSmallBubble:(CALayer *)arg1 ;
-(void)setMediumBubble:(CALayer *)arg1 ;
-(void)setLargeBubble:(CALayer *)arg1 ;
-(CALayer *)thinkingDotContainer;
-(void)setThinkingDotContainer:(CALayer *)arg1 ;
-(CALayer *)thinkingDot;
-(void)setThinkingDot:(CALayer *)arg1 ;
-(CAReplicatorLayer *)thinkingDots;
-(void)setThinkingDots:(CAReplicatorLayer *)arg1 ;
@end

