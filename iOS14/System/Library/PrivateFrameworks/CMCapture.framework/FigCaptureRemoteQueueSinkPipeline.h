/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/FigCaptureSinkPipeline.h>

@class BWRemoteQueueSinkNode;

@interface FigCaptureRemoteQueueSinkPipeline : FigCaptureSinkPipeline {

	BWRemoteQueueSinkNode* _sinkNode;

}

@property (nonatomic,readonly) BWRemoteQueueSinkNode * sinkNode;              //@synthesize sinkNode=_sinkNode - In the implementation block
-(BWRemoteQueueSinkNode *)sinkNode;
-(void)setSinkNode:(BWRemoteQueueSinkNode *)arg1 ;
-(void)dealloc;
@end

