/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/


#import <PDFKit/PDFKit-Structs.h>
@interface PDFAKAnnotationSerializationHelper : NSObject
+(void)addAKAnnotation:(id)arg1 toAnnotationDictionary:(CFDictionaryRef)arg2 ;
+(id)akAnnotationFromCGPDFAnnotation:(CGPDFAnnotationRef)arg1 andDictionary:(CGPDFDictionaryRef)arg2 ;
+(BOOL)_annotationClassHasSeniority:(id)arg1 ;
+(BOOL)_shouldUseAKAnnotation:(id)arg1 toRepresentCGPDFDictionary:(CGPDFDictionaryRef)arg2 ;
@end

