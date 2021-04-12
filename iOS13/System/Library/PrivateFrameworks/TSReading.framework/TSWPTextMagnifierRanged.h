/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKitCore/UIView.h>
#import <TSReading/TSWPTextMagnifier.h>
#import <TSReading/TSWPTextMagnifierRendererDelegate.h>

@class TSWPRep, NSString, TSWPTextMagnifierTimeWeightedPoint, TSWPTextMagnifierRenderer;

@interface TSWPTextMagnifierRanged : UIView <TSWPTextMagnifier, TSWPTextMagnifierRendererDelegate> {

	TSWPRep* _target;
	CGPoint _magnificationPoint;
	CGPoint _offset;
	CGPoint _animationPoint;
	TSWPTextMagnifierTimeWeightedPoint* _weightedPoint;
	TSWPTextMagnifierRenderer* _magnifierRenderer;
	BOOL _inPlace;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TSWPRep * target;                                 //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) CGPoint terminalPoint; 
@property (nonatomic,readonly) BOOL terminalPointPlacedCarefully; 
@property (assign,nonatomic) CGPoint magnificationPoint; 
@property (assign,nonatomic) CGPoint offset;                                   //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) CGPoint animationPoint;                           //@synthesize animationPoint=_animationPoint - In the implementation block
@property (nonatomic,readonly) NSString * underlayImageName; 
@property (nonatomic,readonly) NSString * overlayImageName; 
@property (nonatomic,readonly) NSString * maskImageName; 
-(void)dealloc;
-(void)setTarget:(TSWPRep *)arg1 ;
-(TSWPRep *)target;
-(void)setOffset:(CGPoint)arg1 ;
-(CGPoint)offset;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)currentOffset;
-(void)setNeedsDisplay;
-(void)setMagnificationPoint:(CGPoint)arg1 ;
-(void)stopMagnifying:(BOOL)arg1 ;
-(CGPoint)terminalPoint;
-(CGPoint)magnificationPoint;
-(BOOL)terminalPointPlacedCarefully;
-(void)postAutoscrollPoint:(CGPoint)arg1 ;
-(void)setAutoscrollDirections:(int)arg1 ;
-(void)autoscrollWillNotStart;
-(CGPoint)animationPoint;
-(void)setAnimationPoint:(CGPoint)arg1 ;
-(double)horizontalMovementAtTime:(double)arg1 ;
-(BOOL)wasPlacedCarefullyAtTime:(double)arg1 ;
-(double)horizontalMovement;
-(void)updateFrame;
-(void)beginMagnifyingTarget:(id)arg1 magnificationPoint:(CGPoint)arg2 offset:(CGPoint)arg3 animated:(BOOL)arg4 ;
-(void)canvasNeedsDisplay;
-(void)drawMagnifierClippedCanvasLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(BOOL)shouldHideCanvasLayer;
-(NSString *)underlayImageName;
-(NSString *)overlayImageName;
-(NSString *)maskImageName;
@end

