/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPMABaseTask.h>
#import <libobjc.A.dylib/VCPMAImageProcessingTaskProtocol.h>

@class NSURL;

@interface VCPShareSheetAssetProcessingTask : VCPMABaseTask <VCPMAImageProcessingTaskProtocol> {

	CF<__CVBuffer *>* _pixelBuffer;
	NSURL* _assetURL;

}
+(id)taskWithAssetURL:(id)arg1 options:(id)arg2 andCompletionHandler:(/*^block*/id)arg3 ;
+(id)taskWithPixelBuffer:(CVBufferRef)arg1 options:(id)arg2 andCompletionHandler:(/*^block*/id)arg3 ;
-(id)processObservations:(id)arg1 ;
-(BOOL)run:(id*)arg1 ;
@end

