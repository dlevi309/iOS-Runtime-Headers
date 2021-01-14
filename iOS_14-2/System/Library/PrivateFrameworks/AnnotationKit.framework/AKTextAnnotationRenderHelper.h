/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/


#import <AnnotationKit/AnnotationKit-Structs.h>
@interface AKTextAnnotationRenderHelper : NSObject
+(void)renderAnnotationText:(id)arg1 intoContext:(CGContextRef)arg2 isForScreen:(BOOL)arg3 pageControllerOrNil:(id)arg4 ;
+(CGSize)unconstrainedSizeForText:(id)arg1 ;
+(id)_sharedLayoutManager;
+(BOOL)_hitTestPoint:(CGPoint)arg1 againstActualTextForAnnotation:(id)arg2 onPageController:(id)arg3 contextForVisualDebugging:(CGContextRef)arg4 ;
+(void)getAnnotationRectangle:(CGRect*)arg1 textBounds:(CGRect*)arg2 containerSize:(CGSize*)arg3 exclusionPaths:(id*)arg4 isTextClipped:(BOOL*)arg5 forAnnotation:(id)arg6 onPageController:(id)arg7 orInContext:(CGContextRef)arg8 shouldAlignToPixels:(BOOL)arg9 optionalText:(id)arg10 optionalCenter:(CGPoint)arg11 optionalProposedRectangle:(CGRect)arg12 ;
+(BOOL)hitTestPoint:(CGPoint)arg1 againstActualTextForAnnotation:(id)arg2 onPageController:(id)arg3 ;
@end

