/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/


#import <AnnotationKit/AnnotationKit-Structs.h>
@interface AKAnnotationImageHelper : NSObject
+(id)imageForShapeTag:(long long)arg1 ;
+(id)_imageOfSize:(CGSize)arg1 forAnnotation:(id)arg2 strokeWidth:(double)arg3 withFillColor:(BOOL)arg4 ;
+(void)_drawFilledShapeImageForAnnotation:(id)arg1 inRect:(CGRect)arg2 inContext:(CGContextRef)arg3 ;
+(void)_drawImageForPath:(id)arg1 inRect:(CGRect)arg2 inContext:(CGContextRef)arg3 ;
+(void)_drawImageForSignature:(id)arg1 withFillColor:(id)arg2 scale:(double)arg3 pathOffset:(CGPoint)arg4 inContext:(CGContextRef)arg5 ;
+(id)imageOfSize:(CGSize)arg1 forAnnotationTag:(long long)arg2 ;
+(id)imageOfSize:(CGSize)arg1 forAnnotation:(id)arg2 ;
+(id)imageOfSize:(CGSize)arg1 forPath:(id)arg2 ;
+(id)imageOfSize:(CGSize)arg1 withFillColor:(id)arg2 forSignature:(id)arg3 ;
+(CGImageRef)createImageOfAnnotation:(id)arg1 withScale:(double)arg2 ;
@end

