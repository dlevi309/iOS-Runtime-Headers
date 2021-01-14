/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setLineWidth:(double)arg1 ;
-(void)setFillColor:(CGColorRef)arg1 ;
-(CGColorRef)strokeColor;
-(double)lineWidth;
-(CGRect)bounds;
-(long long)zOrder;
-(void)finalize;
-(id)init;
-(long long)mcid;
-(CGColorRef)fillColor;
-(int)lineCap;
-(void)setPath:(CGPathRef)arg1 ;
-(CGPathRef)path;
-(void)setLineCap:(int)arg1 ;
-(void)dispose;
-(void)setMiterLimit:(double)arg1 ;
-(id)attributes;
-(int)lineJoin;
-(BOOL)isVisible;
-(double)miterLimit;
-(void)setStrokeColor:(CGColorRef)arg1 ;
-(id)string;
-(void)setLineJoin:(int)arg1 ;
-(void)accept:(id)arg1 ;
-(BOOL)hasFill;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(int)windingRule;
-(void)setWindingRule:(int)arg1 ;
-(id)initWithPDFShape:(CPPDFShape*)arg1 ;
-(void)addShape:(id)arg1 ;
-(CGRect)renderedBounds;
-(unsigned)pathElementCount;
-(void)recomputeRenderedBounds;
-(void)recomputeBounds;
-(BOOL)hasStroke;
-(BOOL)isUprightRectangle;
-(BOOL)hasSamePathAs:(id)arg1 ;
-(BOOL)isStrokeFor:(id)arg1 ;
-(CGPDFObjectRef)fillObject;
-(CGAffineTransform)paintTransform;
-(CGPDFObjectRef)strokeObject;
-(BOOL)canCombineWith:(id)arg1 ;
-(void)setFillObject:(CGPDFObjectRef)arg1 ;
-(void)setStrokeObject:(CGPDFObjectRef)arg1 ;
-(void)setPaintTransform:(CGAffineTransform)arg1 ;
-(unsigned)pdfObjectID;
-(void)setPdfObjectID:(unsigned)arg1 ;
-(CGRect)innerBounds;
-(void)makeLineFromVertex:(CGPoint)arg1 toVertex:(CGPoint)arg2 ;
@end

