/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface UIBezierPath : NSObject <NSCopying, NSSecureCoding> {

	CGPathRef _path;
	double* _lineDashPattern;
	unsigned long long _lineDashPatternCount;
	double _lineWidth;
	double _miterLimit;
	double _flatness;
	double _lineDashPhase;
	int _lineCapStyle;
	int _lineJoinStyle;
	BOOL _usesEvenOddFillRule;
	CGPathRef _immutablePath;
	BOOL _immutablePathIsValid;

}

@property (assign,nonatomic) const CGPathRef CGPath; 
@property (getter=isEmpty,readonly) BOOL empty; 
@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) CGPoint currentPoint; 
@property (assign,nonatomic) double lineWidth;                      //@synthesize lineWidth=_lineWidth - In the implementation block
@property (assign,nonatomic) int lineCapStyle;                      //@synthesize lineCapStyle=_lineCapStyle - In the implementation block
@property (assign,nonatomic) int lineJoinStyle;                     //@synthesize lineJoinStyle=_lineJoinStyle - In the implementation block
@property (assign,nonatomic) double miterLimit;                     //@synthesize miterLimit=_miterLimit - In the implementation block
@property (assign,nonatomic) double flatness;                       //@synthesize flatness=_flatness - In the implementation block
@property (assign,nonatomic) BOOL usesEvenOddFillRule;              //@synthesize usesEvenOddFillRule=_usesEvenOddFillRule - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_roundedRectBezierPath:(CGRect)arg1 withRoundedCorners:(unsigned long long)arg2 cornerRadius:(double)arg3 segments:(int)arg4 legacyCorners:(BOOL)arg5 ;
+(id)_continuousRoundedRectBezierPath:(CGRect)arg1 withRoundedCorners:(unsigned long long)arg2 cornerRadii:(id)arg3 segments:(int)arg4 smoothPillShapes:(BOOL)arg5 ;
+(id)_continuousRoundedRectBezierPath:(CGRect)arg1 withRoundedCorners:(unsigned long long)arg2 cornerRadius:(CGSize)arg3 segments:(int)arg4 ;
+(id)roundedRectBezierPath:(CGRect)arg1 withTopCornerRadius:(double)arg2 withBottomCornerRadius:(double)arg3 ;
+(id)_roundedRectBezierPath:(CGRect)arg1 withRoundedCorners:(unsigned long long)arg2 cornerRadius:(double)arg3 segments:(int)arg4 ;
+(id)roundedRectBezierPath:(CGRect)arg1 withRoundedCorners:(unsigned long long)arg2 withCornerRadius:(double)arg3 ;
+(id)bezierPathWithRoundedRect:(CGRect)arg1 byRoundingCorners:(unsigned long long)arg2 cornerRadii:(CGSize)arg3 ;
+(id)bezierPathWithArcCenter:(CGPoint)arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4 clockwise:(BOOL)arg5 ;
+(id)bezierPathWithRoundedRect:(CGRect)arg1 cornerRadius:(double)arg2 ;
+(id)_bezierPathWithRoundedRect:(CGRect)arg1 byRoundingCorners:(unsigned long long)arg2 cornerRadius:(double)arg3 ;
+(id)roundedRectBezierPath:(CGRect)arg1 withRoundedEdges:(unsigned long long)arg2 ;
+(id)shadowBezierPath:(CGRect)arg1 withRoundedEdges:(unsigned long long)arg2 ;
+(id)_bezierPathWithPillRect:(CGRect)arg1 cornerRadius:(double)arg2 ;
+(id)bezierPath;
+(id)roundedRectBezierPath:(CGRect)arg1 withRoundedCorners:(unsigned long long)arg2 withCornerRadii:(id)arg3 ;
+(id)bezierPathWithCGPath:(CGPathRef)arg1 ;
+(id)bezierPathWithRect:(CGRect)arg1 ;
+(id)bezierPathWithOvalInRect:(CGRect)arg1 ;
+(id)_bezierPathWithArcRoundedRect:(CGRect)arg1 cornerRadius:(double)arg2 ;
-(void)setLineWidth:(double)arg1 ;
-(void)fill;
-(void)clip;
-(double)lineWidth;
-(CGRect)bounds;
-(const CGPathRef)CGPath;
-(void)_addRoundedCornerWithTrueCorner:(CGPoint)arg1 radius:(CGSize)arg2 corner:(unsigned long long)arg3 clockwise:(BOOL)arg4 leadInIsContinuous:(BOOL)arg5 leadOutIsContinuous:(BOOL)arg6 ;
-(void)stroke;
-(void)addClip;
-(void)appendBezierPathWithArcWithCenter:(CGPoint)arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4 clockwise:(BOOL)arg5 ;
-(id)init;
-(void)_addRoundedCornerWithTrueCorner:(CGPoint)arg1 radius:(CGSize)arg2 corner:(unsigned long long)arg3 clockwise:(BOOL)arg4 ;
-(BOOL)usesEvenOddFillRule;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setLineDash:(const double*)arg1 count:(long long)arg2 phase:(double)arg3 ;
-(CGPathRef)_pathRef;
-(double)flatness;
-(CGPathRef)_mutablePath;
-(void)closePath;
-(void)removeAllPoints;
-(CGPathRef)_createMutablePathByDecodingData:(id)arg1 ;
-(id)_initWithCGMutablePath:(CGPathRef)arg1 ;
-(void)addQuadCurveToPoint:(CGPoint)arg1 controlPoint:(CGPoint)arg2 ;
-(id)bezierPathByReversingPath;
-(void)addCurveToPoint:(CGPoint)arg1 controlPoint1:(CGPoint)arg2 controlPoint2:(CGPoint)arg3 ;
-(void)setMiterLimit:(double)arg1 ;
-(void)setLineJoinStyle:(int)arg1 ;
-(void)getLineDash:(double*)arg1 count:(long long*)arg2 phase:(double*)arg3 ;
-(void)fillWithBlendMode:(int)arg1 alpha:(double)arg2 ;
-(void)strokeWithBlendMode:(int)arg1 alpha:(double)arg2 ;
-(void)appendBezierPathWithOvalInRect:(CGRect)arg1 ;
-(void)appendBezierPathWithOvalInRect:(CGRect)arg1 transform:(CGAffineTransform)arg2 ;
-(void)setLineCapStyle:(int)arg1 ;
-(void)setUsesEvenOddFillRule:(BOOL)arg1 ;
-(CGPoint)currentPoint;
-(id)description;
-(void)moveToPoint:(CGPoint)arg1 ;
-(void)addLineToPoint:(CGPoint)arg1 ;
-(void)appendPath:(id)arg1 ;
-(void)addArcWithCenter:(CGPoint)arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4 clockwise:(BOOL)arg5 ;
-(void)lineToPoint:(CGPoint)arg1 ;
-(void)appendBezierPathWithRect:(CGRect)arg1 ;
-(void)appendBezierPath:(id)arg1 ;
-(void)setCGPath:(const CGPathRef)arg1 ;
-(double)miterLimit;
-(id)initWithCoder:(id)arg1 ;
-(void)applyTransform:(CGAffineTransform)arg1 ;
-(BOOL)isEmpty;
-(int)lineCapStyle;
-(void)setFlatness:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)lineJoinStyle;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(BOOL)containsPoint:(CGPoint)arg1 ;
@end

