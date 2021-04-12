/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <QuartzCore/CAShapeLayer.h>

@class CAGradientLayer, CAShapeLayer, NSArray, NSString;

@interface TSKGradientShapeLayer : CAShapeLayer {

	CAGradientLayer* _gradient;
	CAShapeLayer* _shapeMask;

}

@property (nonatomic,retain) CAGradientLayer * gradient;              //@synthesize gradient=_gradient - In the implementation block
@property (nonatomic,retain) CAShapeLayer * shapeMask;                //@synthesize shapeMask=_shapeMask - In the implementation block
@property (copy) NSArray * colors; 
@property (copy) NSArray * locations; 
@property (assign) CGPoint startPoint; 
@property (assign) CGPoint endPoint; 
@property (copy) NSString * type; 
-(void)dealloc;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)setPath:(CGPathRef)arg1 ;
-(void)setLineWidth:(double)arg1 ;
-(void)setColors:(NSArray *)arg1 ;
-(void)setStartPoint:(CGPoint)arg1 ;
-(void)setEndPoint:(CGPoint)arg1 ;
-(void)setLocations:(NSArray *)arg1 ;
-(void)setFillColor:(CGColorRef)arg1 ;
-(CGPoint)startPoint;
-(void)setStrokeColor:(CGColorRef)arg1 ;
-(void)setLineCap:(id)arg1 ;
-(void)setStrokeEnd:(double)arg1 ;
-(void)setMiterLimit:(double)arg1 ;
-(void)setFillRule:(id)arg1 ;
-(void)setGradient:(CAGradientLayer *)arg1 ;
-(CAGradientLayer *)gradient;
-(NSArray *)colors;
-(void)setLineJoin:(id)arg1 ;
-(void)setLineDashPattern:(id)arg1 ;
-(NSArray *)locations;
-(void)setStrokeStart:(double)arg1 ;
-(void)setLineDashPhase:(double)arg1 ;
-(CGPoint)endPoint;
-(CAShapeLayer *)shapeMask;
-(void)setShapeMask:(CAShapeLayer *)arg1 ;
-(BOOL)isGradientTree;
-(void)p_flatten;
-(void)p_createGradientTreeIfNeeded;
@end

