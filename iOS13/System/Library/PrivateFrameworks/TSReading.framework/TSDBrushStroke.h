/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDSmartStroke.h>

@interface TSDBrushStroke : TSDSmartStroke
+(id)sharedContext;
+(void)applicationDidBecomeActive;
+(void)applicationWillResignActive;
+(id)cacheDirectory;
+(void)loadLineEndsForBrush:(id)arg1 inSVGDoc:(xmlDoc*)arg2 ;
+(void)loadSectionsForBrush:(id)arg1 inSVGDoc:(xmlDoc*)arg2 ;
+(void)loadBrush:(id)arg1 ;
+(Class)mutableClass;
+(id)renderQueue;
+(void)loadLineEndTextureForBrush:(id)arg1 lineEnd:(id)arg2 path:(CGPathRef)arg3 andBounds:(CGRect)arg4 ;
+(id)loadImageForBrush:(id)arg1 ;
+(id)brushProgram;
+(CGImageRef)newCGImageFromGL;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)brushPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(void)paintLineEnd:(id)arg1 atPoint:(CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(CGContextRef)arg5 useFastDrawing:(BOOL)arg6 ;
-(id)strokeLineEnd:(id)arg1 ;
-(id)brushPathsForId:(id)arg1 ;
-(id)brushBoundsForId:(id)arg1 ;
-(void)brushSection:(id)arg1 sectionIndex:(unsigned long long)arg2 ontoPath:(id)arg3 withScaling:(CGPoint)arg4 inElementRange:(NSRange)arg5 into:(void*)arg6 viewScale:(double)arg7 ;
-(void)brushPath:(id)arg1 withScaling:(CGPoint)arg2 inElementRange:(NSRange)arg3 into:(void*)arg4 sectionIndex:(unsigned long long*)arg5 viewScale:(double)arg6 ;
-(int)cap;
-(BOOL)supportsPattern;
-(void)paintPath:(CGPathRef)arg1 wantsInteriorStroke:(BOOL)arg2 inContext:(CGContextRef)arg3 useFastDrawing:(BOOL)arg4 ;
-(BOOL)canApplyToCAShapeLayer;
-(BOOL)needsToExtendJoinsForBoundsCalculation;
-(double)lineEndInsetAdjustment;
-(double)suggestedMinimumLineWidth;
-(BOOL)prefersToApplyToCAShapeLayerDuringManipulation;
-(BOOL)drawsInOneStep;
-(CGImageRef)maskForId:(id)arg1 ;
-(id)brushTextureForId:(id)arg1 ;
-(void)glBrushPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(void)renderOpenGLSection:(id)arg1 sectionIndex:(unsigned long long)arg2 ontoPath:(id)arg3 withScaling:(CGPoint)arg4 inElementRange:(NSRange)arg5 into:(vector<TSDBrushVertexData, std::__1::allocator<TSDBrushVertexData> >*)arg6 viewScale:(double)arg7 ;
-(void)finishOpenGLRenderInContext:(CGContextRef)arg1 pathVertexData:(vector<TSDBrushVertexData, std::__1::allocator<TSDBrushVertexData> >*)arg2 ;
@end

