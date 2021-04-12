/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)_hasRenderLayerSubclass;
-(void)mt_applyVisualStying:(id)arg1 ;
-(void)_colorSpaceDidChange;
-(void)setLineWidth:(double)arg1 ;
-(void)setFillColor:(CGColorRef)arg1 ;
-(CGColorRef)strokeColor;
-(double)lineWidth;
-(id)implicitAnimationForKeyPath:(id)arg1 ;
-(unsigned)_renderLayerPropertyAnimationFlags:(unsigned)arg1 ;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(BOOL)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(CGColorRef)fillColor;
-(NSString *)lineCap;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)setPath:(const CGPathRef)arg1 ;
-(const CGPathRef)path;
-(void)setLineCap:(NSString *)arg1 ;
-(void)setMiterLimit:(double)arg1 ;
-(NSString *)fillRule;
-(NSString *)lineJoin;
-(double)strokeEnd;
-(void)setFillRule:(NSString *)arg1 ;
-(double)miterLimit;
-(void)_renderForegroundInContext:(CGContextRef)arg1 ;
-(void)setStrokeColor:(CGColorRef)arg1 ;
-(double)strokeStart;
-(void)setStrokeStart:(double)arg1 ;
-(NSArray *)lineDashPattern;
-(double)lineDashPhase;
-(void)setLineDashPhase:(double)arg1 ;
-(void)setLineJoin:(NSString *)arg1 ;
-(void)setLineDashPattern:(NSArray *)arg1 ;
-(void)setStrokeEnd:(double)arg1 ;
@end

