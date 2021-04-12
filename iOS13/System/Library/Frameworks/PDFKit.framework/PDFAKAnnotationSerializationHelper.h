/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/


#import <PDFKit/PDFKit-Structs.h>
@interface PDFAKAnnotationSerializationHelper : NSObject
+(void)addAKAnnotation:(id)arg1 toAnnotationDictionary:(CFDictionaryRef)arg2 ;
+(id)akAnnotationFromCGPDFAnnotation:(CGPDFAnnotationRef)arg1 andDictionary:(CGPDFDictionaryRef)arg2 ;
+(BOOL)_annotationClassHasSeniority:(id)arg1 ;
+(BOOL)_shouldUseAKAnnotation:(id)arg1 toRepresentCGPDFDictionary:(CGPDFDictionaryRef)arg2 ;
@end

