/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPGraphicObject.h>
#import <libobjc.A.dylib/CPDisposable.h>

@interface CPShape : CPGraphicObject <CPDisposable> {

	long long mcid;
	unsigned pdfObjectID;
	CGPathRef path;
	BOOL isUprightRectangle;
	int windingRule;
	double lineWidth;
	double miterLimit;
	int lineCap;
	int lineJoin;
	CGColorRef fillColor;
	CGColorRef strokeColor;
	CGPDFObjectRef fillObject;
	CGPDFObjectRef strokeObject;
	CGAffineTransform paintTransform;
	BOOL boundsComputed;
	BOOL renderedBoundsComputed;

}
-(id)init;
-(id)string;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)finalize;
-(id)attributes;
-(CGPathRef)path;
-(void)setPath:(CGPathRef)arg1 ;
-(CGRect)bounds;
-(BOOL)isVisible;
-(void)setLineWidth:(double)arg1 ;
-(double)lineWidth;
-(CGColorRef)fillColor;
-(void)setFillColor:(CGColorRef)arg1 ;
-(void)setStrokeColor:(CGColorRef)arg1 ;
-(void)setLineCap:(int)arg1 ;
-(double)miterLimit;
-(void)setMiterLimit:(double)arg1 ;
-(CGColorRef)strokeColor;
-(void)setLineJoin:(int)arg1 ;
-(int)lineJoin;
-(int)lineCap;
-(id)initWithPDFShape:(CPPDFShape*)arg1 ;
-(void)addShape:(id)arg1 ;
-(long long)zOrder;
-(CGRect)renderedBounds;
-(void)accept:(id)arg1 ;
-(void)dispose;
-(unsigned)pathElementCount;
-(void)recomputeRenderedBounds;
-(void)recomputeBounds;
-(BOOL)hasStroke;
-(BOOL)isUprightRectangle;
-(BOOL)hasFill;
-(BOOL)hasSamePathAs:(id)arg1 ;
-(BOOL)isStrokeFor:(id)arg1 ;
-(CGPDFObjectRef)fillObject;
-(CGAffineTransform)paintTransform;
-(CGPDFObjectRef)strokeObject;
-(BOOL)canCombineWith:(id)arg1 ;
-(int)windingRule;
-(void)setWindingRule:(int)arg1 ;
-(void)setFillObject:(CGPDFObjectRef)arg1 ;
-(void)setStrokeObject:(CGPDFObjectRef)arg1 ;
-(void)setPaintTransform:(CGAffineTransform)arg1 ;
-(long long)mcid;
-(unsigned)pdfObjectID;
-(void)setPdfObjectID:(unsigned)arg1 ;
-(CGRect)innerBounds;
-(void)makeLineFromVertex:(CGPoint)arg1 toVertex:(CGPoint)arg2 ;
@end

