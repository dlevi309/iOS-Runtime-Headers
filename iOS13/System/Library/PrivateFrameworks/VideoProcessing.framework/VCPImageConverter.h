/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPImageConverter : NSObject {

	int _pixelFormat;
	int _width;
	int _height;
	CGColorSpaceRef _rgbColorSpace;
	CGContextRef _cgContext;
	CVBufferRef _rgbFrame;
	CVPixelBufferPoolRef _yuvFrames;
	OpaqueVTPixelTransferSessionRef _rgbToYuv;

}
-(id)init;
-(void)dealloc;
-(int)resize:(int)arg1 height:(int)arg2 ;
-(id)initWithPixelFormat:(int)arg1 ;
-(int)convertImage:(CGImageRef)arg1 yuvFrame:(_CVBuffer*)arg2 ;
@end

