/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface OITSUBezierPath : NSObject <NSCopying, NSCoding> {

	long long sfr_elementCount;
	long long sfr_elementMax;
	PATHSEGMENT* sfr_head;
	double* sfr_elementLength;
	double sfr_totalLength;
	long long sfr_lastSubpathIndex;
	void* sfr_extraSegments;
	double sfr_lineWidth;
	CGRect sfr_controlPointBounds;
	double sfr_miterLimit;
	double sfr_flatness;
	double* sfr_dashedLinePattern;
	unsigned long long sfr_dashedLineCount;
	double sfr_dashedLinePhase;
	void* sfr_path;
	long long sfr_extraSegmentCount;
	long long sfr_extraSegmentMax;
	struct {
		unsigned sfr_flags : 8;
		unsigned sfr_pathState : 2;
		unsigned sfr_calculatedLengths : 1;
		unsigned sfr_unused : 21;
	}  sfr_bpFlags;

}
+(void)initialize;
+(void)setLineWidth:(double)arg1 ;
+(double)lineWidth;
+(id)bezierPathWithRoundedRect:(CGRect)arg1 cornerRadius:(double)arg2 ;
+(id)bezierPathWithOvalInRect:(CGRect)arg1 ;
+(id)bezierPathWithRect:(CGRect)arg1 ;
+(id)bezierPathWithCGPath:(CGPathRef)arg1 ;
+(id)bezierPath;
+(void)fillRect:(CGRect)arg1 ;
+(void)strokeRect:(CGRect)arg1 ;
+(unsigned long long)lineCapStyle;
+(void)setLineCapStyle:(unsigned long long)arg1 ;
+(unsigned long long)lineJoinStyle;
+(void)setLineJoinStyle:(unsigned long long)arg1 ;
+(double)miterLimit;
+(void)setMiterLimit:(double)arg1 ;
+(double)flatness;
+(void)setFlatness:(double)arg1 ;
+(unsigned long long)windingRule;
+(void)setWindingRule:(unsigned long long)arg1 ;
+(id)bezierPathWithStart:(CGPoint)arg1 end:(CGPoint)arg2 ;
+(void)clipRect:(CGRect)arg1 ;
+(void)strokeLineFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 ;
+(void)setDefaultMiterLimit:(double)arg1 ;
+(double)defaultMiterLimit;
+(void)setDefaultFlatness:(double)arg1 ;
+(double)defaultFlatness;
+(void)setDefaultWindingRule:(unsigned long long)arg1 ;
+(unsigned long long)defaultWindingRule;
+(void)setDefaultLineCapStyle:(unsigned long long)arg1 ;
+(unsigned long long)defaultLineCapStyle;
+(void)setDefaultLineJoinStyle:(unsigned long long)arg1 ;
+(unsigned long long)defaultLineJoinStyle;
+(void)setDefaultLineWidth:(double)arg1 ;
+(double)defaultLineWidth;
-(id)init;
-(void)dealloc;
-(double)length;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(const char*)cString;
-(id)initWithCString:(const char*)arg1 ;
-(CGRect)bounds;
-(long long)elementAtIndex:(long long)arg1 ;
-(void)setLineWidth:(double)arg1 ;
-(double)lineWidth;
-(BOOL)containsPoint:(CGPoint)arg1 ;
-(CGPathRef)CGPath;
-(void)stroke;
-(void)fill;
-(void)moveToPoint:(CGPoint)arg1 ;
-(void)closePath;
-(void)setLineDash:(const double*)arg1 count:(long long)arg2 phase:(double)arg3 ;
-(void)appendBezierPathWithRect:(CGRect)arg1 ;
-(void)appendBezierPath:(id)arg1 ;
-(void)lineToPoint:(CGPoint)arg1 ;
-(void)addClip;
-(void)removeAllPoints;
-(id)bezierPathByReversingPath;
-(CGPoint)currentPoint;
-(void)getLineDash:(double*)arg1 count:(long long*)arg2 phase:(double*)arg3 ;
-(void)appendBezierPathWithOvalInRect:(CGRect)arg1 ;
-(void)appendBezierPathWithArcWithCenter:(CGPoint)arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4 clockwise:(BOOL)arg5 ;
-(unsigned long long)lineCapStyle;
-(void)setLineCapStyle:(unsigned long long)arg1 ;
-(unsigned long long)lineJoinStyle;
-(void)setLineJoinStyle:(unsigned long long)arg1 ;
-(double)miterLimit;
-(void)setMiterLimit:(double)arg1 ;
-(double)flatness;
-(void)setFlatness:(double)arg1 ;
-(long long)elementCount;
-(BOOL)isCircular;
-(unsigned long long)windingRule;
-(void)setWindingRule:(unsigned long long)arg1 ;
-(BOOL)isRectangular;
-(void)_deviceMoveToPoint:(CGPoint)arg1 ;
-(void)_deviceLineToPoint:(CGPoint)arg1 ;
-(void)_deviceCurveToPoint:(CGPoint)arg1 controlPoint1:(CGPoint)arg2 controlPoint2:(CGPoint)arg3 ;
-(void)_deviceClosePath;
-(void)subdivideBezierWithFlatness:(double)arg1 startPoint:(CGPoint)arg2 controlPoint1:(CGPoint)arg3 controlPoint2:(CGPoint)arg4 endPoint:(CGPoint)arg5 ;
-(void)flattenIntoPath:(id)arg1 ;
-(void)curveToPoint:(CGPoint)arg1 controlPoint1:(CGPoint)arg2 controlPoint2:(CGPoint)arg3 ;
-(void)_doPath;
-(CGRect)controlPointBounds;
-(long long)elementAtIndex:(long long)arg1 associatedPoints:(CGPoint*)arg2 ;
-(long long)elementAtIndex:(long long)arg1 allPoints:(CGPoint*)arg2 ;
-(double)calculateLengthOfElement:(long long)arg1 ;
-(void)calculateLengths;
-(void)appendBezierPathWithArcWithCenter:(CGPoint)arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4 ;
-(void)transformUsingAffineTransform:(CGAffineTransform)arg1 ;
-(void)_appendArcSegmentWithCenter:(CGPoint)arg1 radius:(double)arg2 angle1:(double)arg3 angle2:(double)arg4 ;
-(void)relativeMoveToPoint:(CGPoint)arg1 ;
-(void)relativeLineToPoint:(CGPoint)arg1 ;
-(void)relativeCurveToPoint:(CGPoint)arg1 controlPoint1:(CGPoint)arg2 controlPoint2:(CGPoint)arg3 ;
-(id)bezierPathByFlatteningPath;
-(id)_copyFlattenedPath;
-(BOOL)isFlat;
-(BOOL)isClockwise;
-(double)lengthOfElement:(long long)arg1 ;
-(double)lengthToElement:(long long)arg1 ;
-(void)setAssociatedPoints:(CGPoint*)arg1 atIndex:(long long)arg2 ;
-(void)appendBezierPathWithPoints:(CGPoint*)arg1 count:(long long)arg2 ;
-(void)appendBezierPathWithArcFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 radius:(double)arg3 ;
-(void)_addPathSegment:(long long)arg1 point:(CGPoint)arg2 ;
-(id)bezierPathByRemovingRedundantElements;
-(BOOL)isTriangular;
-(BOOL)isDiamond;
-(void)appendBezierPathWithArcWithEllipseBounds:(CGRect)arg1 startAngle:(double)arg2 swingAngle:(double)arg3 angleType:(int)arg4 startNewPath:(BOOL)arg5 ;
-(void)appendBezierPathWithArcWithEllipseBounds:(CGRect)arg1 startRadialVector:(CGPoint)arg2 endRadialVector:(CGPoint)arg3 angleSign:(int)arg4 startNewPath:(BOOL)arg5 ;
-(void)copyPathAttributesTo:(id)arg1 ;
-(BOOL)_isValid:(double)arg1 ;
-(CGPoint)_checkPointForValidity:(CGPoint)arg1 ;
-(void)flattenIntoPath:(id)arg1 flatness:(double)arg2 ;
-(id)bezierPathByFlatteningPathWithFlatness:(double)arg1 ;
-(id)p_bezierPathByRemovingRedundantElementAndSubregionsSmallerThanThreshold:(double)arg1 ;
-(void)_appendToPath:(id)arg1 skippingInitialMoveIfPossible:(BOOL)arg2 ;
-(void)appendBezierPath:(id)arg1 skippingInitialMoveIfPossible:(BOOL)arg2 ;
-(id)bezierPathByRemovingSmallSubpathsForInteriorWrapsForInset:(double)arg1 ;
-(void)attachBezierPath:(id)arg1 ;
@end

