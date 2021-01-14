/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


#import <Silex/Silex-Structs.h>
@interface SXImageDecodingTools : NSObject
+(id)sharedInstance;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(CGImageRef)newImageByDecodingImage:(CGImageRef)arg1 size:(CGSize)arg2 ;
-(CGColorSpaceRef)RGBColorSpace;
-(CGColorSpaceRef)P3ColorSpace;
-(CFStringRef)contentTypeForImageData:(id)arg1 ;
-(id)imageFromData:(id)arg1 size:(CGSize)arg2 ;
-(id)imageFromData:(id)arg1 ;
-(id)decodeImage:(CGImageRef)arg1 ;
-(id)loadAnimatedImageFromImageData:(id)arg1 size:(CGSize)arg2 ;
-(BOOL)dataIsAnimatedImage:(id)arg1 ;
@end

