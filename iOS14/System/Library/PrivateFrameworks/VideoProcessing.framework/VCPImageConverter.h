/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)resize:(int)arg1 height:(int)arg2 ;
-(id)initWithPixelFormat:(int)arg1 ;
-(int)convertImage:(CGImageRef)arg1 yuvFrame:(_CVBuffer*)arg2 ;
-(void)dealloc;
@end

