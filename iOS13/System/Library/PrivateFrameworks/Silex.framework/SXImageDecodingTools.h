/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


#import <Silex/Silex-Structs.h>
@interface SXImageDecodingTools : NSObject
+(id)sharedInstance;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(BOOL)dataIsAnimatedImage:(id)arg1 ;
-(id)loadAnimatedImageFromImageData:(id)arg1 size:(CGSize)arg2 ;
-(id)imageFromData:(id)arg1 size:(CGSize)arg2 ;
-(CGImageRef)newImageByDecodingImage:(CGImageRef)arg1 size:(CGSize)arg2 ;
-(CGColorSpaceRef)RGBColorSpace;
-(CGColorSpaceRef)P3ColorSpace;
-(CFStringRef)contentTypeForImageData:(id)arg1 ;
-(id)imageFromData:(id)arg1 ;
-(id)decodeImage:(CGImageRef)arg1 ;
@end

