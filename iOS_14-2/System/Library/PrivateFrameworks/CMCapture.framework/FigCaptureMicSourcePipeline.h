/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureSourcePipeline.h>

@class BWAudioSourceNode, BWFanOutNode, BWZoomCommandHandler;

@interface FigCaptureMicSourcePipeline : FigCaptureSourcePipeline {

	BWAudioSourceNode* _sourceNode;
	BWFanOutNode* _splitterNodesByMicSourcePosition[3];
	unsigned _nextOutputIndexByMicSourcePosition[3];
	BWZoomCommandHandler* _zoomCommandHandlerForStereoAudioCapture;

}

@property (nonatomic,readonly) OpaqueCMClockRef clock; 
@property (nonatomic,readonly) BWAudioSourceNode * sourceNode;              //@synthesize sourceNode=_sourceNode - In the implementation block
+(void)initialize;
-(OpaqueCMClockRef)clock;
-(BWAudioSourceNode *)sourceNode;
-(id)nextOutputForMicSourcePosition:(int)arg1 ;
-(int)_buildMicSourcePipelineWithConfiguration:(id)arg1 graph:(id)arg2 cmSession:(opaqueCMSessionRef)arg3 renderDelegate:(id)arg4 isMultiCamSession:(BOOL)arg5 ;
-(void)dealloc;
-(id)initWithConfiguration:(id)arg1 graph:(id)arg2 name:(id)arg3 cmSession:(opaqueCMSessionRef)arg4 renderDelegate:(id)arg5 isMultiCamSession:(BOOL)arg6 ;
@end

