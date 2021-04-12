/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
*/

#import <IMSharedUI/IMSharedUI-Structs.h>
#import <QuartzCore/CALayer.h>
#import <IMSharedUI/IMTypingIndicatorLayerProtocol.h>

@class UIColor, UITraitCollection, CALayer, CAReplicatorLayer, NSString;

@interface IMTypingIndicatorLayer : CALayer <IMTypingIndicatorLayerProtocol> {

	BOOL _hasDarkBackground;
	BOOL _highlighted;
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

@property (nonatomic,readonly) UIColor * defaultBubbleColor; 
@property (nonatomic,readonly) UIColor * defaultThinkingDotColor; 
@property (nonatomic,readonly) double defaultBubbleOpacity; 
@property (nonatomic,readonly) double defaultThinkingDotOpacity; 
@property (nonatomic,retain) CALayer * bubbleContainer;                            //@synthesize bubbleContainer=_bubbleContainer - In the implementation block
@property (nonatomic,retain) CALayer * smallBubble;                                //@synthesize smallBubble=_smallBubble - In the implementation block
@property (nonatomic,retain) CALayer * mediumBubble;                               //@synthesize mediumBubble=_mediumBubble - In the implementation block
@property (nonatomic,retain) CALayer * largeBubble;                                //@synthesize largeBubble=_largeBubble - In the implementation block
@property (nonatomic,retain) CALayer * thinkingDotContainer;                       //@synthesize thinkingDotContainer=_thinkingDotContainer - In the implementation block
@property (nonatomic,retain) CALayer * thinkingDot;                                //@synthesize thinkingDot=_thinkingDot - In the implementation block
@property (nonatomic,retain) CAReplicatorLayer * thinkingDots;                     //@synthesize thinkingDots=_thinkingDots - In the implementation block
@property (nonatomic,retain) CALayer * iconImageLayer;                             //@synthesize iconImageLayer=_iconImageLayer - In the implementation block
@property (getter=isHighlighted,nonatomic,readonly) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
@property (nonatomic,retain) id iconImage;                                         //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,copy) UIColor * bubbleColor;                                  //@synthesize bubbleColor=_bubbleColor - In the implementation block
@property (nonatomic,copy) UIColor * thinkingDotColor;                             //@synthesize thinkingDotColor=_thinkingDotColor - In the implementation block
@property (nonatomic,retain) UITraitCollection * traitCollection;                  //@synthesize traitCollection=_traitCollection - In the implementation block
@property (assign,nonatomic) double bubbleOpacity;                                 //@synthesize bubbleOpacity=_bubbleOpacity - In the implementation block
@property (assign,nonatomic) double thinkingDotOpacity;                            //@synthesize thinkingDotOpacity=_thinkingDotOpacity - In the implementation block
@property (nonatomic,copy) UIColor * customBubbleColor;                            //@synthesize customBubbleColor=_customBubbleColor - In the implementation block
@property (assign,nonatomic) BOOL hasDarkBackground;                               //@synthesize hasDarkBackground=_hasDarkBackground - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGRect)iconImageFrame;
+(CGSize)defaultSize;
+(BOOL)supportsTypingIndicatorAnimation;
+(double)thinkingDotDiameter;
+(double)thinkingDotSpace;
+(CGRect)largeBubbleFrame;
+(CGRect)smallBubbleFrame;
+(CGRect)mediumBubbleFrame;
+(CGPoint)thinkingDotsOffset;
+(double)iconImageTrailingSpace;
+(CGPoint)smallBubbleGrowOffset;
+(CGPoint)mediumBubbleGrowOffset;
+(CGPoint)largeBubbleGrowOffset;
-(UITraitCollection *)traitCollection;
-(void)_setup;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(id)init;
-(id)iconImage;
-(void)stopPulseAnimation;
-(void)startPulseAnimation;
-(id)initHighlighted:(BOOL)arg1 ;
-(void)startGrowAnimationWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)startShrinkAnimationWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)startGrowAnimation;
-(void)stopAnimation;
-(BOOL)isHighlighted;
-(void)setIconImage:(id)arg1 ;
-(CALayer *)thinkingDot;
-(CAReplicatorLayer *)thinkingDots;
-(double)thinkingDotOpacity;
-(CALayer *)thinkingDotContainer;
-(UIColor *)thinkingDotColor;
-(void)setThinkingDotContainer:(CALayer *)arg1 ;
-(void)setThinkingDot:(CALayer *)arg1 ;
-(void)setThinkingDots:(CAReplicatorLayer *)arg1 ;
-(UIColor *)defaultBubbleColor;
-(UIColor *)defaultThinkingDotColor;
-(void)_updateBubbleColors;
-(void)_updateBubbleOpacity;
-(id)resolvedColor:(id)arg1 forTraitCollection:(id)arg2 ;
-(void)_updateForImage;
-(double)defaultThinkingDotOpacity;
-(double)defaultBubbleOpacity;
-(CALayer *)largeBubble;
-(void)_buildIconImage;
-(void)_buildThinkingDots;
-(CALayer *)iconImageLayer;
-(void)setIconImageLayer:(CALayer *)arg1 ;
-(UIColor *)bubbleColor;
-(CALayer *)mediumBubble;
-(CALayer *)smallBubble;
-(double)bubbleOpacity;
-(double)convertedCurrentMediaTime;
-(id)_smallBubbleGrowAnimationsWithSpeed:(double)arg1 offset:(CGPoint)arg2 ;
-(id)_mediumBubbleGrowAnimationsWithSpeed:(double)arg1 offset:(CGPoint)arg2 ;
-(id)_largeBubbleGrowAnimationsWithSpeed:(double)arg1 offset:(CGPoint)arg2 ;
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
@end
