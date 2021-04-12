/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKitCore/UIView.h>
#import <TSReading/TSWPTextMagnifier.h>
#import <TSReading/TSWPTextMagnifierRendererDelegate.h>

@class TSWPRep, TSWPTextMagnifierTimeWeightedPoint, TSWPTextMagnifierRenderer, NSString;

@interface TSWPTextMagnifierCaret : UIView <TSWPTextMagnifier, TSWPTextMagnifierRendererDelegate> {

	TSWPRep* _target;
	CGPoint _magnificationPoint;
	CGPoint _offset;
	TSWPTextMagnifierTimeWeightedPoint* _weightedPoint;
	double _yOffset;
	TSWPTextMagnifierRenderer* _magnifierRenderer;

}

@property (assign,nonatomic) double yOffset;                                   //@synthesize yOffset=_yOffset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TSWPRep * target;                                 //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) CGPoint terminalPoint; 
@property (nonatomic,readonly) BOOL terminalPointPlacedCarefully; 
@property (assign,nonatomic) CGPoint magnificationPoint; 
@property (assign,nonatomic) CGPoint offset;                                   //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) CGPoint animationPoint;                           //@synthesize magnificationPoint=_magnificationPoint - In the implementation block
@property (nonatomic,readonly) NSString * underlayImageName; 
@property (nonatomic,readonly) NSString * overlayImageName; 
@property (nonatomic,readonly) NSString * maskImageName; 
+(id)sharedCaretMagnifier;
-(void)dealloc;
-(void)setTarget:(TSWPRep *)arg1 ;
-(TSWPRep *)target;
-(void)remove;
-(void)setOffset:(CGPoint)arg1 ;
-(CGPoint)offset;
-(void)setFrame:(CGRect)arg1 ;
-(void)setNeedsDisplay;
-(double)yOffset;
-(void)setYOffset:(double)arg1 ;
-(void)setMagnificationPoint:(CGPoint)arg1 ;
-(void)stopMagnifying:(BOOL)arg1 ;
-(CGPoint)terminalPoint;
-(void)updateFrameAndOffset;
-(void)zoomDownAnimation;
-(void)zoomUpAnimation;
-(CGPoint)magnificationPoint;
-(BOOL)terminalPointPlacedCarefully;
-(void)postAutoscrollPoint:(CGPoint)arg1 ;
-(void)setAutoscrollDirections:(int)arg1 ;
-(void)autoscrollWillNotStart;
-(CGPoint)animationPoint;
-(void)setAnimationPoint:(CGPoint)arg1 ;
-(id)initWithDefaultFrame;
-(void)beginMagnifyingTarget:(id)arg1 magnificationPoint:(CGPoint)arg2 offset:(CGPoint)arg3 animated:(BOOL)arg4 ;
-(void)drawMagnifierClippedCanvasLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(BOOL)shouldHideCanvasLayer;
-(NSString *)underlayImageName;
-(NSString *)overlayImageName;
-(NSString *)maskImageName;
@end

