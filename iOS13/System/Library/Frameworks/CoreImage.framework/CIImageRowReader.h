/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)forImage:(id)arg1 downscaleToMax:(unsigned)arg2 colorspace:(CGColorSpaceRef)arg3 ;
+(id)forImage:(id)arg1 downscaleToMax:(unsigned)arg2 colorspace:(CGColorSpaceRef)arg3 usingContext:(id)arg4 ;
+(id)forImage:(id)arg1 usingContext:(id)arg2 colorspace:(CGColorSpaceRef)arg3 ;
+(id)fromImageFile:(id)arg1 ;
+(id)forImage:(id)arg1 downscaleToMax:(unsigned)arg2 ;
+(id)withDictionary:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)width;
-(unsigned long long)height;
-(short)red;
-(short)green;
-(short)blue;
-(short)alpha;
-(void)_dumpImage:(id)arg1 colorspace:(CGColorSpaceRef)arg2 ;
-(const char*)rowAtIndex:(unsigned)arg1 ;
-(unsigned)bytesPerPixel;
-(void)dumpImage:(id)arg1 ;
-(void)dumpImageAsDeviceRGB:(id)arg1 ;
-(void)dumpImageAsDict:(id)arg1 ;
@end

