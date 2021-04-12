/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCaptureSourcePipeline.h>

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
-(void)dealloc;
-(BWAudioSourceNode *)sourceNode;
-(OpaqueCMClockRef)clock;
-(id)nextOutputForMicSourcePosition:(int)arg1 ;
-(id)initWithConfiguration:(id)arg1 graph:(id)arg2 name:(id)arg3 cmSession:(opaqueCMSessionRef)arg4 renderDelegate:(id)arg5 isMultiCamSession:(BOOL)arg6 ;
-(int)_buildMicSourcePipelineWithConfiguration:(id)arg1 graph:(id)arg2 cmSession:(opaqueCMSessionRef)arg3 renderDelegate:(id)arg4 isMultiCamSession:(BOOL)arg5 ;
@end

