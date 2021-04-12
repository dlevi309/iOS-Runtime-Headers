/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSString, NSArray;

@interface CAShapeLayer : CALayer

@property (assign) const CGPathRef path; 
@property (assign) CGColorRef fillColor; 
@property (copy) NSString * fillRule; 
@property (assign) CGColorRef strokeColor; 
@property (assign) double strokeStart; 
@property (assign) double strokeEnd; 
@property (assign) double lineWidth; 
@property (assign) double miterLimit; 
@property (copy) NSString * lineCap; 
@property (copy) NSString * lineJoin; 
@property (assign) double lineDashPhase; 
@property (copy) NSArray * lineDashPattern; 
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)_hasRenderLayerSubclass;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
-(void)mt_applyVisualStying:(id)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(const CGPathRef)path;
-(void)setPath:(const CGPathRef)arg1 ;
-(void)setLineWidth:(double)arg1 ;
-(double)lineWidth;
-(CGColorRef)fillColor;
-(id)implicitAnimationForKeyPath:(id)arg1 ;
-(void)setFillColor:(CGColorRef)arg1 ;
-(void)setStrokeColor:(CGColorRef)arg1 ;
-(void)setLineCap:(NSString *)arg1 ;
-(void)setStrokeEnd:(double)arg1 ;
-(double)miterLimit;
-(void)setMiterLimit:(double)arg1 ;
-(void)setFillRule:(NSString *)arg1 ;
-(CGColorRef)strokeColor;
-(void)setLineJoin:(NSString *)arg1 ;
-(void)setLineDashPattern:(NSArray *)arg1 ;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(void)_colorSpaceDidChange;
-(BOOL)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(unsigned)_renderLayerPropertyAnimationFlags:(unsigned)arg1 ;
-(void)_renderForegroundInContext:(CGContextRef)arg1 ;
-(NSString *)fillRule;
-(double)strokeStart;
-(void)setStrokeStart:(double)arg1 ;
-(double)strokeEnd;
-(NSString *)lineJoin;
-(NSString *)lineCap;
-(NSArray *)lineDashPattern;
-(double)lineDashPhase;
-(void)setLineDashPhase:(double)arg1 ;
@end

