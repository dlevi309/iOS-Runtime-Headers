/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPSceneProcessingImageManager : NSObject {

	CF<__CVPixelBufferPool *>* _pixelBufferPoolBGRA;

}
+(id)imageManager;
-(int)_createPixelBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(int)arg3 pixelBuffer:(_CVBuffer*)arg4 ;
-(int)_createPixelBufferPool;
-(int)loadFullPixelBuffer:(_CVBuffer*)arg1 scaledPixelBuffer:(_CVBuffer*)arg2 fromImageURL:(id)arg3 isPano:(BOOL)arg4 ;
-(void)dealloc;
@end

