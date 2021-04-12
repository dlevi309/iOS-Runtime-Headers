/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

@class TSWPRep;


@protocol TSWPTextMagnifier <NSObject>
@property (nonatomic,retain) TSWPRep * target; 
@property (nonatomic,readonly) CGPoint terminalPoint; 
@property (nonatomic,readonly) BOOL terminalPointPlacedCarefully; 
@property (assign,nonatomic) CGPoint magnificationPoint; 
@property (assign,nonatomic) CGPoint offset; 
@property (assign,nonatomic) CGPoint animationPoint; 
@required
-(void)setTarget:(id)arg1;
-(TSWPRep *)target;
-(void)setOffset:(CGPoint)arg1;
-(CGPoint)offset;
-(void)setMagnificationPoint:(CGPoint)arg1;
-(void)stopMagnifying:(BOOL)arg1;
-(CGPoint)terminalPoint;
-(CGPoint)magnificationPoint;
-(BOOL)terminalPointPlacedCarefully;
-(void)postAutoscrollPoint:(CGPoint)arg1;
-(void)setAutoscrollDirections:(int)arg1;
-(void)autoscrollWillNotStart;
-(CGPoint)animationPoint;
-(void)setAnimationPoint:(CGPoint)arg1;
-(void)beginMagnifyingTarget:(id)arg1 magnificationPoint:(CGPoint)arg2 offset:(CGPoint)arg3 animated:(BOOL)arg4;

@end

