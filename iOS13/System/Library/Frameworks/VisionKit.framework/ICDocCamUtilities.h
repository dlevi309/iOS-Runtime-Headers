/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VisionKit.framework/VisionKit
*/


#import <VisionKit/VisionKit-Structs.h>
@interface ICDocCamUtilities : NSObject
+(CGSize)aspectFillSize:(CGSize)arg1 targetSize:(CGSize)arg2 ;
+(id)resizedImage:(id)arg1 newSize:(CGSize)arg2 interpolationQuality:(int)arg3 ;
+(CGSize)aspectFitSize:(CGSize)arg1 targetSize:(CGSize)arg2 ;
+(void)prepareForRotationIfNecessaryWithShutterButton:(id)arg1 coodinator:(id)arg2 ;
+(BOOL)shouldPerformCustomAnimationForTransitionCoordinator:(id)arg1 ;
+(id)buttonFromCopyingValuesFromButton:(id)arg1 ;
+(CGAffineTransform)transformForOrientation:(id)arg1 newSize:(CGSize)arg2 ;
+(id)resizedImage:(id)arg1 newSize:(CGSize)arg2 transform:(CGAffineTransform)arg3 drawTransposed:(BOOL)arg4 interpolationQuality:(int)arg5 ;
@end

