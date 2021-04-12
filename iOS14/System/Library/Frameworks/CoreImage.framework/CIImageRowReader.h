/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <libobjc.A.dylib/ImageRowReading.h>

@interface CIImageRowReader : NSObject <ImageRowReading> {

	unsigned long long height;
	unsigned long long width;
	unsigned long long bpr;
	void* data;
	short red;
	short green;
	short blue;
	short alpha;
	CGColorSpaceRef cs;

}
+(id)forImage:(id)arg1 usingContext:(id)arg2 ;
+(id)fromImage:(CGImageRef)arg1 ;
+(id)forImage:(id)arg1 usingContext:(id)arg2 colorspace:(CGColorSpaceRef)arg3 ;
+(id)fromImageFile:(id)arg1 ;
+(id)forImage:(id)arg1 downscaleToMax:(unsigned)arg2 colorspace:(CGColorSpaceRef)arg3 usingContext:(id)arg4 ;
+(id)withDictionary:(id)arg1 ;
-(unsigned long long)width;
-(short)red;
-(id)init;
-(short)alpha;
-(unsigned long long)height;
-(const char*)rowAtIndex:(unsigned)arg1 ;
-(short)blue;
-(short)green;
-(void)dumpImage:(id)arg1 ;
-(void)dealloc;
-(void)_dumpImage:(id)arg1 colorspace:(CGColorSpaceRef)arg2 ;
-(unsigned)bytesPerPixel;
-(void)dumpImageAsDeviceRGB:(id)arg1 ;
-(void)dumpImageAsDict:(id)arg1 ;
@end

