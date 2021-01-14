/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/UIPDFMarkupAnnotation.h>

@interface UIPDFUnderlineAnnotation : UIPDFMarkupAnnotation
-(Class)viewClass;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(int)annotationType;
-(void)drawInContext:(CGContextRef)arg1 ;
-(BOOL)recognizeGestures;
-(void)drawLayerUpright:(id)arg1 inContext:(CGContextRef)arg2 selection:(id)arg3 rectangles:(unsigned long long)arg4 ;
-(void)drawLayerRotated:(id)arg1 inContext:(CGContextRef)arg2 selection:(id)arg3 rectangles:(unsigned long long)arg4 ;
@end

