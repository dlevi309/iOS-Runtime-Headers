/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)canDecodeAcceleratedUniformTypeIdentifier:(id)arg1 ;
+(id)sharedImageManager;
-(id)init;
-(void)flushCache;
-(int)createPixelBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(int)arg3 pixelBuffer:(_CVBuffer*)arg4 ;
-(int)convertPixelBuffer:(_CVBuffer*)arg1 toPixelFormat:(int)arg2 ;
-(id)dataForResource:(id)arg1 ;
-(int)drawImage:(CGImageRef)arg1 withOrientation:(unsigned)arg2 maxDimension:(unsigned long long)arg3 pixelBuffer:(_CVBuffer*)arg4 ;
-(int)acceleratedDecodeImageData:(id)arg1 pixelFormat:(int)arg2 maxDimension:(unsigned long long)arg3 pixelBuffer:(_CVBuffer*)arg4 flushCache:(BOOL)arg5 ;
-(int)decodeImageSource:(CGImageSourceRef)arg1 pixelFormat:(int)arg2 maxDimension:(unsigned long long)arg3 pixelBuffer:(_CVBuffer*)arg4 ;
-(CVBufferRef)imageForResource:(id)arg1 pixelFormat:(int)arg2 ;
-(CVBufferRef)pixelBufferWithFormat:(int)arg1 andMaxDimension:(unsigned long long)arg2 fromData:(id)arg3 withUniformTypeIdentifier:(id)arg4 flushCache:(BOOL)arg5 ;
-(CVBufferRef)imageForResource:(id)arg1 pixelFormat:(int)arg2 maxDimension:(unsigned long long)arg3 ;
-(CVBufferRef)pixelBufferWithFormat:(int)arg1 fromImageURL:(id)arg2 flushCache:(BOOL)arg3 ;
-(CVBufferRef)pixelBufferWithFormat:(int)arg1 andMaxDimension:(unsigned long long)arg2 fromImageURL:(id)arg3 ;
-(void)dealloc;
@end

