/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(int)width;
-(int)height;
-(int)bytesPerRow;
-(char*)Ybuffer;
-(id)initWithCGImage:(CGImageRef)arg1 maxDimension:(int)arg2 ;
-(char*)Cbuffer;
-(id)initWithIOSurface:(IOSurfaceRef)arg1 maxDimension:(int)arg2 ;
-(void)convertRGBAToYUV420:(char*)arg1 rgbaBytesPerRow:(int)arg2 ;
-(id)initWithCIImage:(id)arg1 ctx:(id)arg2 maxDimension:(int)arg3 ;
-(CVBufferRef)pixelBuffer;
-(void)setWidth:(int)arg1 ;
-(void)setHeight:(int)arg1 ;
-(void)setYbuffer:(char*)arg1 ;
-(void)setCbuffer:(char*)arg1 ;
-(void)setBytesPerRow:(int)arg1 ;
@end

