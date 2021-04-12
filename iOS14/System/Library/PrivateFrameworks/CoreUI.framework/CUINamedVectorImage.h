/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUINamedLookup.h>

@interface CUINamedVectorImage : CUINamedLookup

@property (nonatomic,readonly) double scale; 
@property (nonatomic,readonly) CGPDFDocumentRef pdfDocument; 
-(CGPDFDocumentRef)pdfDocument;
-(double)scale;
-(CGImageRef)rasterizeImageUsingScaleFactor:(double)arg1 forTargetSize:(CGSize)arg2 ;
@end

