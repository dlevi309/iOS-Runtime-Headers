/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/


#import <DocumentCamera/DocumentCamera-Structs.h>
@interface ICDocCamUtilities : NSObject
+(CGSize)aspectFillSize:(CGSize)arg1 targetSize:(CGSize)arg2 ;
+(id)resizedImage:(id)arg1 newSize:(CGSize)arg2 interpolationQuality:(int)arg3 ;
+(CGSize)aspectFitSize:(CGSize)arg1 targetSize:(CGSize)arg2 ;
+(void)prepareForRotationIfNecessaryWithShutterButton:(id)arg1 coodinator:(id)arg2 ;
+(BOOL)shouldPerformCustomAnimationForTransitionCoordinator:(id)arg1 window:(id)arg2 ;
+(id)buttonFromCopyingValuesFromButton:(id)arg1 ;
+(CGAffineTransform)transformForOrientation:(id)arg1 newSize:(CGSize)arg2 ;
+(id)resizedImage:(id)arg1 newSize:(CGSize)arg2 transform:(CGAffineTransform)arg3 drawTransposed:(BOOL)arg4 interpolationQuality:(int)arg5 ;
@end

