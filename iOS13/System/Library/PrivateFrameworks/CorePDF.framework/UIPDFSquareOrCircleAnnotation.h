/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/UIPDFAnnotation.h>

@interface UIPDFSquareOrCircleAnnotation : UIPDFAnnotation {

	double _W;
	unsigned short _S;
	CGPDFArrayRef _D;
	double _SE;
	double _I;

}
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)strokePath:(CGContextRef)arg1 inRect:(CGRect)arg2 ;
-(id)initWithAnnotationDictionary:(CGPDFDictionaryRef)arg1 ;
@end

