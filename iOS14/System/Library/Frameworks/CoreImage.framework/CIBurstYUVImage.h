/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/


#import <CoreImage/CoreImage-Structs.h>
@interface CIBurstYUVImage : NSObject {

	char* Ybuffer;
	char* Cbuffer;
	int width;
	int height;
	int bytesPerRow;
	CFDataRef dataPtr;
	CVBufferRef pixelBuffer;
	IOSurfaceRef ioSurf;

}

@property (assign) int width; 
@property (assign) int height; 
@property (assign) int bytesPerRow; 
@property (assign) char* Ybuffer; 
@property (assign) char* Cbuffer; 
-(void)setHeight:(int)arg1 ;
-(int)width;
-(int)bytesPerRow;
-(void)setWidth:(int)arg1 ;
-(int)height;
-(char*)Ybuffer;
-(char*)Cbuffer;
-(id)initWithCGImage:(CGImageRef)arg1 maxDimension:(int)arg2 ;
-(id)initWithIOSurface:(IOSurfaceRef)arg1 maxDimension:(int)arg2 ;
-(void)convertRGBAToYUV420:(char*)arg1 rgbaBytesPerRow:(int)arg2 ;
-(void)setYbuffer:(char*)arg1 ;
-(void)setCbuffer:(char*)arg1 ;
-(id)initWithCIImage:(id)arg1 ctx:(id)arg2 maxDimension:(int)arg3 ;
-(void)setBytesPerRow:(int)arg1 ;
-(CVBufferRef)pixelBuffer;
-(void)dealloc;
@end

