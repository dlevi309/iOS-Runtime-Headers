/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
*/


#import <MarkupUI/MarkupUI-Structs.h>
@interface MUPDFUtilities : NSObject
+(unsigned long long)normalizedRotationAngleOfPage:(CGPDFPageRef)arg1 ;
+(id)createPDFDateString:(id)arg1 ;
+(id)createDictionaryFromPDFDictionary:(CGPDFDictionaryRef)arg1 ;
+(unsigned long long)indexOfDictionary:(CGPDFDictionaryRef)arg1 inArray:(CGPDFArrayRef)arg2 ;
+(long long)exifOrientationOfPage:(CGPDFPageRef)arg1 ;
+(CGAffineTransform)flattenRotationTransformForPage:(CGPDFPageRef)arg1 outMediaBox:(CGRect*)arg2 outCropBox:(CGRect*)arg3 ;
@end

