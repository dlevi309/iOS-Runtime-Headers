/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/


#import <TVMLKit/TVMLKit-Structs.h>
@interface TVGraphicsImageRenderer : NSObject
+(id)preferredFormat;
+(id)formatWithCGImage:(CGImageRef)arg1 ;
+(id)imageWithSize:(CGSize)arg1 format:(id)arg2 actions:(/*^block*/id)arg3 ;
+(id)imageWithSize:(CGSize)arg1 format:(id)arg2 cgContextActions:(/*^block*/id)arg3 ;
+(id)formatWithUIImage:(id)arg1 ;
+(id)imageWithSize:(CGSize)arg1 alpha:(BOOL)arg2 actions:(/*^block*/id)arg3 ;
+(id)imageWithSize:(CGSize)arg1 alpha:(BOOL)arg2 cgContextActions:(/*^block*/id)arg3 ;
+(id)decodedImage:(id)arg1 opaque:(BOOL)arg2 ;
@end

