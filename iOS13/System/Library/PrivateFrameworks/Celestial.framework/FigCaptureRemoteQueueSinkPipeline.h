/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/FigCaptureSinkPipeline.h>

@class BWRemoteQueueSinkNode;

@interface FigCaptureRemoteQueueSinkPipeline : FigCaptureSinkPipeline {

	BWRemoteQueueSinkNode* _sinkNode;

}

@property (nonatomic,readonly) BWRemoteQueueSinkNode * sinkNode;              //@synthesize sinkNode=_sinkNode - In the implementation block
-(void)dealloc;
-(void)setSinkNode:(BWRemoteQueueSinkNode *)arg1 ;
-(BWRemoteQueueSinkNode *)sinkNode;
@end

