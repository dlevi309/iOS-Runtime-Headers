/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/


#import <AvatarKit/AvatarKit-Structs.h>
@interface AVTImageUtilities : NSObject
+(UIEdgeInsets)transparencyInsetsForImage:(id)arg1 requiringFullOpacity:(BOOL)arg2 ;
+(id)trimmedImageByTrimmingTransparentPixelsFromImage:(id)arg1 ;
+(id)trimmedImageByTrimmingTransparentPixelsFromImage:(id)arg1 requiringFullOpacity:(BOOL)arg2 ;
+(void)cropImageWhitespace:(id)arg1 upToRect:(CGRect)arg2 resultBlock:(/*^block*/id)arg3 ;
+(CGImageRef)CGImageFromImage:(id)arg1 ;
+(double)scaleFromImage:(id)arg1 ;
+(id)imageFromCGImage:(CGImageRef)arg1 scale:(double)arg2 ;
+(id)cropImage:(id)arg1 toRect:(CGRect)arg2 ;
@end

