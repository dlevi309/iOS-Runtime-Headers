/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/UIPDFMarkupAnnotation.h>

@interface UIPDFLinkAnnotation : UIPDFMarkupAnnotation
-(id)url;
-(unsigned long long)pageNumber;
-(BOOL)recognizeGestures;
-(BOOL)shouldRecognizeTapOrPress:(CGPoint)arg1 ;
-(id)newBaseURL;
-(unsigned long long)getDestination:(CGPDFDictionaryRef)arg1 ;
-(unsigned long long)getNamedDestination:(CGPDFDictionaryRef)arg1 ;
-(BOOL)quadPoints:(CGPDFArrayRef)arg1 within:(CGRect)arg2 ;
-(CGRect)linkRectangle;
@end

