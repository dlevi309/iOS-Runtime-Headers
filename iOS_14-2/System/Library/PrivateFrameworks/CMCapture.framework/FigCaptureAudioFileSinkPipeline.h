/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/FigCaptureSinkPipeline.h>

@class BWFileCoordinatorNode, BWAudioConverterNode, BWAudioFileSinkNode;

@interface FigCaptureAudioFileSinkPipeline : FigCaptureSinkPipeline {

	BWFileCoordinatorNode* _fileCoordinatorNode;
	BWAudioConverterNode* _audioConverterNode;
	BWAudioFileSinkNode* _audioFileSinkNode;

}

@property (nonatomic,readonly) BWFileCoordinatorNode * fileCoordinatorNode;              //@synthesize fileCoordinatorNode=_fileCoordinatorNode - In the implementation block
@property (nonatomic,readonly) BWAudioFileSinkNode * audioFileSinkNode;                  //@synthesize audioFileSinkNode=_audioFileSinkNode - In the implementation block
+(void)initialize;
-(BWAudioFileSinkNode *)audioFileSinkNode;
-(id)initWithConfiguration:(id)arg1 graph:(id)arg2 name:(id)arg3 sourceAudioOutput:(id)arg4 recordingStatusDelegate:(id)arg5 ;
-(BWFileCoordinatorNode *)fileCoordinatorNode;
-(int)_buildAudioFileSinkPipeline:(id)arg1 graph:(id)arg2 sourceAudioOutput:(id)arg3 recordingStatusDelegate:(id)arg4 ;
-(void)dealloc;
@end

