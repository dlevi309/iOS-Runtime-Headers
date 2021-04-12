/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUINamedVectorImage.h>

@interface CUINamedVectorPDFImage : CUINamedVectorImage

@property (nonatomic,readonly) CGPDFDocumentRef pdfDocument; 
-(CGImageRef)rasterizeImageUsingScaleFactor:(double)arg1 forTargetSize:(CGSize)arg2 ;
-(CGPDFDocumentRef)pdfDocument;
@end

