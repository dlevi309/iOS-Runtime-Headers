/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/

#import <PDFKit/PDFKit-Structs.h>
#import <PDFKit/PDFAnnotation.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class PDFAnnotationFreeTextPrivateVars;

@interface PDFAnnotationFreeText : PDFAnnotation <NSCopying, NSCoding> {

	PDFAnnotationFreeTextPrivateVars* _private2;

}
-(void)setFont:(id)arg1 ;
-(long long)alignment;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAlignment:(long long)arg1 ;
-(void)commonInit;
-(void)setFontColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)fontColor;
-(id)font;
-(CFDictionaryRef)commonCreateDictionaryRef;
-(id)initWithAnnotationDictionary:(CGPDFDictionaryRef)arg1 forPage:(id)arg2 ;
-(void)drawWithBox:(long long)arg1 inContext:(CGContextRef)arg2 ;
@end

