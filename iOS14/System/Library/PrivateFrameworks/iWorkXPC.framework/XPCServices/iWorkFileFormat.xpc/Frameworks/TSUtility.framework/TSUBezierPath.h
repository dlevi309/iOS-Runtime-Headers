/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/

#import <TSUtility/TSUtility-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSUBezierPath : NSObject <NSCopying> {

	long long sfr_elementCount;
	long long sfr_elementMax;
	PATHSEGMENT* sfr_head;
	double* sfr_elementLength;
	double sfr_totalLength;
	long long sfr_lastSubpathIndex;
	void* sfr_extraSegments;
	double sfr_lineWidth;
	CGRect sfr_bounds;
	CGRect sfr_controlPointBounds;
	double sfr_miterLimit;
	double sfr_flatness;
	double* sfr_dashedLinePattern;
	unsigned long long sfr_dashedLineCount;
	double sfr_dashedLinePhase;
	CGPathRef sfr_path;
	long long sfr_extraSegmentCount;
	long long sfr_extraSegmentMax;
	struct {
		unsigned sfr_flags : 8;
		unsigned sfr_pathState : 2;
		unsigned sfr_calculatedLengths : 1;
		unsigned sfr_unused : 21;
	}  sfr_bpFlags;

}

@property (assign,nonatomic) double flatness; 
@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) BOOL containsClosePathElement; 
+(void)setLineWidth:(double)arg1 ;
+(double)lineWidth;
+(void)initialize;
+(double)flatness;
+(void)strokeRect:(CGRect)arg1 ;
+(void)fillRect:(CGRect)arg1 ;
+(void)setMiterLimit:(double)arg1 ;
+(void)setLineJoinStyle:(unsigned long long)arg1 ;
+(void)setLineCapStyle:(unsigned long long)arg1 ;
+(id)bezierPath;
+(double)miterLimit;
+(id)bezierPathWithCGPath:(CGPathRef)arg1 ;
+(id)bezierPathWithRect:(CGRect)arg1 ;
+(unsigned long long)lineCapStyle;
+(void)setFlatness:(double)arg1 ;
+(id)bezierPathWithOvalInRect:(CGRect)arg1 ;
+(unsigned long long)lineJoinStyle;
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
+(id)bezierPathWithRoundedRect:(CGRect)arg1 upperRightRadius:(double)arg2 lowerRightRadius:(double)arg3 lowerLeftRadius:(double)arg4 upperLeftRadius:(double)arg5 useLegacyCorners:(BOOL)arg6 keepNoOpElements:(BOOL)arg7 ;
+(id)bezierPathWithLegacyRoundedRect:(CGRect)arg1 cornerRadius:(double)arg2 ;
+(id)bezierPathWithDefaultsForErrorCases;
+(id)bezierPathWithContinuousCornerRoundedRect:(CGRect)arg1 cornerRadius:(double)arg2 ;
+(double)minimumLengthForSideToHaveFullContinuityWithCornerRadius1:(double)arg1 cornerRadius2:(double)arg2 ;
-(void)setLineWidth:(double)arg1 ;
-(void)fill;
-(double)lineWidth;
-(CGRect)bounds;
-(CGPathRef)CGPath;
-(void)stroke;
-(BOOL)isFlat;
-(void)addClip;
-(void)appendBezierPathWithArcWithCenter:(CGPoint)arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4 clockwise:(BOOL)arg5 ;
-(id)init;
-(void)setLineDash:(const double*)arg1 count:(long long)arg2 phase:(double)arg3 ;
-(double)length;
-(long long)elementAtIndex:(long long)arg1 ;
-(double)flatness;
-(void)closePath;
-(void)removeAllPoints;
-(id)bezierPathByReversingPath;
-(void)setMiterLimit:(double)arg1 ;
-(void)setLineJoinStyle:(unsigned long long)arg1 ;
-(void)getLineDash:(double*)arg1 count:(long long*)arg2 phase:(double*)arg3 ;
-(void)appendBezierPathWithOvalInRect:(CGRect)arg1 ;
-(void)setLineCapStyle:(unsigned long long)arg1 ;
-(CGPoint)currentPoint;
-(id)description;
-(void)moveToPoint:(CGPoint)arg1 ;
-(const char*)cString;
-(long long)elementCount;
-(void)lineToPoint:(CGPoint)arg1 ;
-(void)appendBezierPathWithRect:(CGRect)arg1 ;
-(void)appendBezierPath:(id)arg1 ;
-(double)miterLimit;
-(unsigned long long)hash;
-(BOOL)isEmpty;
-(id)initWithCString:(const char*)arg1 ;
-(void)_doPath;
-(unsigned long long)lineCapStyle;
-(void)setFlatness:(double)arg1 ;
-(BOOL)isCircular;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)lineJoinStyle;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(BOOL)containsPoint:(CGPoint)arg1 ;
-(void)transformUsingAffineTransform:(CGAffineTransform)arg1 ;
-(BOOL)isRectangular;
-(void)curveToPoint:(CGPoint)arg1 controlPoint1:(CGPoint)arg2 controlPoint2:(CGPoint)arg3 ;
-(long long)elementAtIndex:(long long)arg1 associatedPoints:(CGPoint*)arg2 ;
-(unsigned long long)windingRule;
-(void)setWindingRule:(unsigned long long)arg1 ;
-(void)_deviceMoveToPoint:(CGPoint)arg1 ;
-(void)_deviceLineToPoint:(CGPoint)arg1 ;
-(void)_deviceCurveToPoint:(CGPoint)arg1 controlPoint1:(CGPoint)arg2 controlPoint2:(CGPoint)arg3 ;
-(void)_deviceClosePath;
-(void)subdivideBezierWithFlatness:(double)arg1 startPoint:(CGPoint)arg2 controlPoint1:(CGPoint)arg3 controlPoint2:(CGPoint)arg4 endPoint:(CGPoint)arg5 ;
-(void)flattenIntoPath:(id)arg1 ;
-(CGRect)controlPointBounds;
-(long long)elementAtIndex:(long long)arg1 allPoints:(CGPoint*)arg2 ;
-(double)calculateLengthOfElement:(long long)arg1 ;
-(void)calculateLengths;
-(void)appendBezierPathWithArcWithCenter:(CGPoint)arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4 ;
-(void)_appendArcSegmentWithCenter:(CGPoint)arg1 radius:(double)arg2 angle1:(double)arg3 angle2:(double)arg4 ;
-(void)relativeMoveToPoint:(CGPoint)arg1 ;
-(void)relativeLineToPoint:(CGPoint)arg1 ;
-(void)relativeCurveToPoint:(CGPoint)arg1 controlPoint1:(CGPoint)arg2 controlPoint2:(CGPoint)arg3 ;
-(id)bezierPathByFlatteningPath;
-(id)_copyFlattenedPath;
-(BOOL)isClockwise;
-(double)lengthOfElement:(long long)arg1 ;
-(double)lengthToElement:(long long)arg1 ;
-(void)setAssociatedPoints:(CGPoint*)arg1 atIndex:(long long)arg2 ;
-(void)appendBezierPathWithPoints:(CGPoint*)arg1 count:(long long)arg2 ;
-(void)appendBezierPathWithArcFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 radius:(double)arg3 ;
-(void)_addPathSegment:(long long)arg1 point:(CGPoint)arg2 ;
-(void)copyPathAttributesTo:(id)arg1 ;
-(BOOL)_isValid:(double)arg1 ;
-(CGPoint)_checkPointForValidity:(CGPoint)arg1 ;
-(void)flattenIntoPath:(id)arg1 flatness:(double)arg2 ;
-(id)bezierPathByFlatteningPathWithFlatness:(double)arg1 ;
-(id)p_bezierPathByRemovingRedundantElementAndSubregionsSmallerThanThreshold:(double)arg1 ;
-(id)bezierPathByRemovingRedundantElements;
-(void)_appendToPath:(id)arg1 skippingInitialMoveIfPossible:(BOOL)arg2 ;
-(void)appendBezierPath:(id)arg1 skippingInitialMoveIfPossible:(BOOL)arg2 ;
-(id)bezierPathByRemovingSmallSubpathsForInteriorWrapsForInset:(double)arg1 ;
-(BOOL)isTriangular;
-(BOOL)isDiamond;
-(void)appendBezierPathWithArcWithEllipseBounds:(CGRect)arg1 startAngle:(double)arg2 swingAngle:(double)arg3 angleType:(int)arg4 startNewPath:(BOOL)arg5 ;
-(void)appendBezierPathWithArcWithEllipseBounds:(CGRect)arg1 startRadialVector:(CGPoint)arg2 endRadialVector:(CGPoint)arg3 angleSign:(int)arg4 startNewPath:(BOOL)arg5 ;
-(BOOL)containsClosePathElement;
-(void)curveToPoint:(CGPoint)arg1 controlPoint:(CGPoint)arg2 ;
-(void)relativeCurveToPoint:(CGPoint)arg1 controlPoint:(CGPoint)arg2 ;
-(void)convertCloseElementsToLineElements;
@end

