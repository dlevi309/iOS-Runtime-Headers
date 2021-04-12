/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@protocol OS_dispatch_queue;
#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSObject;

@interface VCPImageManager : NSObject {

	FigPhotoDecompressionSessionRef _decodeSession;
	OpaqueVTPixelTransferSessionRef _transferSession;
	NSObject*<OS_dispatch_queue> _decodeQueue;

}
+(BOOL)loggingEnabled;
+(id)sharedImageManager;
+(BOOL)canDecodeAcceleratedUniformTypeIdentifier:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)flushCache;
-(int)createPixelBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(int)arg3 pixelBuffer:(_CVBuffer*)arg4 ;
-(int)convertPixelBuffer:(_CVBuffer*)arg1 toPixelFormat:(int)arg2 ;
-(int)drawImage:(CGImageRef)arg1 withOrientation:(unsigned)arg2 maxDimension:(unsigned long long)arg3 pixelBuffer:(_CVBuffer*)arg4 ;
-(int)acceleratedDecodeImageData:(id)arg1 pixelFormat:(int)arg2 maxDimension:(unsigned long long)arg3 pixelBuffer:(_CVBuffer*)arg4 flushCache:(BOOL)arg5 ;
-(int)decodeImageSource:(CGImageSourceRef)arg1 pixelFormat:(int)arg2 maxDimension:(unsigned long long)arg3 pixelBuffer:(_CVBuffer*)arg4 ;
-(id)dataForResource:(id)arg1 ;
-(CVBufferRef)pixelBufferWithFormat:(int)arg1 andMaxDimension:(unsigned long long)arg2 fromData:(id)arg3 withUniformTypeIdentifier:(id)arg4 flushCache:(BOOL)arg5 ;
-(CVBufferRef)imageForResource:(id)arg1 pixelFormat:(int)arg2 ;
-(CVBufferRef)imageForResource:(id)arg1 pixelFormat:(int)arg2 maxDimension:(unsigned long long)arg3 ;
-(CVBufferRef)pixelBufferWithFormat:(int)arg1 fromImageURL:(id)arg2 flushCache:(BOOL)arg3 ;
-(CVBufferRef)pixelBufferWithFormat:(int)arg1 andMaxDimension:(unsigned long long)arg2 fromImageURL:(id)arg3 ;
@end

