/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSSThemeAsset.h>
#import <TSReading/TSDPathPainter.h>
#import <TSReading/TSDMixing.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class TSUColor, TSDStrokePattern, NSString;

@interface TSDStroke : NSObject <TSSThemeAsset, TSDPathPainter, TSDMixing, NSCopying, NSMutableCopying> {

	TSUColor* mColor;
	double mWidth;
	double mActualWidth;
	int mCap;
	int mJoin;
	TSDStrokePattern* mPattern;
	double mMiterLimit;

}

@property (nonatomic,readonly) BOOL dontClearBackground; 
@property (nonatomic,readonly) BOOL empty; 
@property (nonatomic,readonly) BOOL solid; 
@property (nonatomic,retain) TSUColor * color; 
@property (assign,nonatomic) double width; 
@property (assign,nonatomic) double actualWidth; 
@property (assign,nonatomic) int cap; 
@property (assign,nonatomic) int join; 
@property (assign,nonatomic) double miterLimit; 
@property (nonatomic,retain) TSDStrokePattern * pattern; 
@property (nonatomic,readonly) BOOL isNullStroke; 
@property (nonatomic,readonly) BOOL isDash; 
@property (nonatomic,readonly) BOOL isRoundDash; 
@property (nonatomic,readonly) BOOL shouldRender; 
@property (nonatomic,readonly) BOOL supportsPattern; 
@property (nonatomic,readonly) BOOL supportsWidth; 
@property (nonatomic,readonly) BOOL supportsColor; 
@property (nonatomic,readonly) BOOL supportsLineOptions; 
@property (nonatomic,readonly) double suggestedMinimumLineWidth; 
@property (nonatomic,readonly) BOOL isFrame; 
@property (nonatomic,readonly) BOOL isNearlyWhite; 
@property (nonatomic,readonly) double dashSpacing; 
@property (nonatomic,readonly) BOOL drawsOutsideStrokeBounds; 
@property (nonatomic,readonly) TSDStrokeOutsets outsets; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)stroke;
+(Class)mutableClass;
+(BOOL)canMixWithNilObjects;
+(id)p_newStroke;
+(id)p_newEmptyStroke;
+(id)emptyStroke;
+(id)strokeWithColor:(id)arg1 width:(double)arg2 ;
+(id)strokeWithColor:(id)arg1 width:(double)arg2 pattern:(id)arg3 ;
+(id)strokeWithColor:(id)arg1 width:(double)arg2 pattern:(id)arg3 miterLimit:(double)arg4 ;
+(id)strokeWithColor:(id)arg1 width:(double)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5 ;
+(id)strokeWithColor:(id)arg1 width:(double)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5 miterLimit:(double)arg6 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(TSDStrokePattern *)pattern;
-(double)width;
-(TSUColor *)color;
-(void)setWidth:(double)arg1 ;
-(void)setColor:(TSUColor *)arg1 ;
-(BOOL)empty;
-(double)miterLimit;
-(void)setMiterLimit:(double)arg1 ;
-(BOOL)supportsColor;
-(BOOL)shouldRender;
-(void)setPattern:(TSDStrokePattern *)arg1 ;
-(double)dashSpacing;
-(void)paintLineEnd:(id)arg1 atPoint:(CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(CGContextRef)arg5 useFastDrawing:(BOOL)arg6 ;
-(id)strokeLineEnd:(id)arg1 ;
-(int)join;
-(void)paintLineEnd:(id)arg1 atPoint:(CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(CGContextRef)arg5 ;
-(void)setJoin:(int)arg1 ;
-(double)actualWidth;
-(BOOL)isThemeEquivalent:(id)arg1 ;
-(SEL)mapThemeAssetSelector;
-(void)drawSwatchInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(long long)mixingTypeWithObject:(id)arg1 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(void)paintPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(void)paintRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(BOOL)isRoundDash;
-(BOOL)isDash;
-(id)initWithColor:(id)arg1 width:(double)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5 ;
-(id)initWithColor:(id)arg1 width:(double)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5 miterLimit:(double)arg6 ;
-(int)cap;
-(BOOL)supportsWidth;
-(BOOL)supportsLineOptions;
-(BOOL)supportsPattern;
-(BOOL)isFrame;
-(void)setCap:(int)arg1 ;
-(void)setActualWidth:(double)arg1 ;
-(void)applyToContext:(CGContextRef)arg1 insideStroke:(BOOL)arg2 ;
-(id)colorForCGContext:(CGContextRef)arg1 ;
-(void)paintRect:(CGRect)arg1 wantsInteriorStroke:(BOOL)arg2 inContext:(CGContextRef)arg3 ;
-(void)paintPath:(CGPathRef)arg1 wantsInteriorStroke:(BOOL)arg2 inContext:(CGContextRef)arg3 ;
-(void)paintPath:(CGPathRef)arg1 wantsInteriorStroke:(BOOL)arg2 inContext:(CGContextRef)arg3 useFastDrawing:(BOOL)arg4 ;
-(BOOL)isNullStroke;
-(BOOL)isNearlyWhite;
-(BOOL)canApplyDirectlyToRepCALayer;
-(BOOL)canApplyToCAShapeLayer;
-(void)applyToCAShapeLayer:(id)arg1 insideStroke:(BOOL)arg2 withScale:(double)arg3 ;
-(BOOL)drawsOutsideStrokeBounds;
-(BOOL)needsToExtendJoinsForBoundsCalculation;
-(CGRect)boundsForPath:(id)arg1 ;
-(TSDStrokeOutsets)outsets;
-(void)p_setPropertiesFromStroke:(id)arg1 ;
-(void)p_setPatternPropertiesFromStroke:(id)arg1 ;
-(void)applyToContext:(CGContextRef)arg1 ;
-(void)applyInteriorWrapPropertiesToContext:(CGContextRef)arg1 insideStroke:(BOOL)arg2 ;
-(double)lineEndInsetAdjustment;
-(void)paintPathWithNormalClip:(CGPathRef)arg1 wantsInteriorStroke:(BOOL)arg2 inContext:(CGContextRef)arg3 ;
-(CGRect)boundsForLineEnd:(id)arg1 atPoint:(CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 transform:(CGAffineTransform)arg5 ;
-(id)pathForLineEnd:(id)arg1 wrapPath:(BOOL)arg2 atPoint:(CGPoint)arg3 atAngle:(double)arg4 withScale:(double)arg5 ;
-(double)suggestedMinimumLineWidth;
-(void)applyToRepCALayer:(id)arg1 withScale:(double)arg2 ;
-(BOOL)prefersToApplyToCAShapeLayerDuringManipulation;
-(void)applyToCAShapeLayer:(id)arg1 withScale:(double)arg2 ;
-(BOOL)drawsInOneStep;
-(BOOL)shouldAntialiasDefeat;
-(id)strokeByTransformingByTransform:(CGAffineTransform)arg1 ;
-(BOOL)dontClearBackground;
-(BOOL)solid;
-(BOOL)isEqualToStroke:(id)arg1 ;
@end

