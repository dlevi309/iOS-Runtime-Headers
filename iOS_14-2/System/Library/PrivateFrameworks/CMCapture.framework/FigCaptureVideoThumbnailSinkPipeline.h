/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureSinkPipeline.h>
#import <libobjc.A.dylib/BWImageQueueSinkNodePreviewTapDelegate.h>

@protocol OS_dispatch_queue, BWPipelineNotificationDelegate;
@class BWPixelTransferNode, BWImageQueueSinkNode, NSObject, NSString;

@interface FigCaptureVideoThumbnailSinkPipeline : FigCaptureSinkPipeline <BWImageQueueSinkNodePreviewTapDelegate> {

	BWPixelTransferNode* _scalerNode;
	BWImageQueueSinkNode* _imageQueueSinkNode;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	BOOL _didPropagateCurrentImageQueue;
	id<BWPipelineNotificationDelegate> _notificationDelegate;
	NSString* _sourceID;
	int _sourceDeviceType;

}

@property (nonatomic,readonly) NSString * sourceID;                                    //@synthesize sourceID=_sourceID - In the implementation block
@property (nonatomic,readonly) int sourceDeviceType;                                   //@synthesize sourceDeviceType=_sourceDeviceType - In the implementation block
@property (nonatomic,readonly) BWImageQueueSinkNode * imageQueueSinkNode;              //@synthesize imageQueueSinkNode=_imageQueueSinkNode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)initWithGraph:(id)arg1 name:(id)arg2 videoSourceOutput:(id)arg3 videoSourceTransform:(FigCaptureVideoTransform)arg4 outputTransform:(FigCaptureVideoTransform)arg5 videoThumbnailConnectionConfiguration:(id)arg6 notificationDelegate:(id)arg7 ;
-(void)imageQueueSinkNodeDidDisplayFirstFrame:(id)arg1 atHostTime:(long long)arg2 ;
-(void)imageQueueSinkNode:(id)arg1 didAttemptToEnqueuePreviewSampleBuffer:(opaqueCMSampleBufferRef)arg2 withSuccess:(BOOL)arg3 ;
-(void)setDiscardsSampleData:(BOOL)arg1 ;
-(void)imageQueueSinkNodeDidDisplayFirstFrame:(id)arg1 ;
-(int)_buildVideoFilterThumbnailPipeline:(id)arg1 videoSourceOutput:(id)arg2 videoSourceTransform:(FigCaptureVideoTransform)arg3 outputTransform:(FigCaptureVideoTransform)arg4 videoThumbnailConnectionConfiguration:(id)arg5 ;
-(NSString *)sourceID;
-(int)sourceDeviceType;
-(BWImageQueueSinkNode *)imageQueueSinkNode;
-(void)dealloc;
@end

