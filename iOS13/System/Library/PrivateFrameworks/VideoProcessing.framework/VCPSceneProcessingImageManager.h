/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPSceneProcessingImageManager : NSObject {

	CF<__CVPixelBufferPool *>* _pixelBufferPoolBGRA;

}
+(id)imageManager;
-(void)dealloc;
-(int)createPixelBufferPool;
-(int)loadPixelBuffer:(_CVBuffer*)arg1 fromImageURL:(id)arg2 ;
@end

