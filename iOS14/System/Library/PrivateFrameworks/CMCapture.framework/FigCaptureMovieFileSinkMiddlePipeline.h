/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/FigCapturePipeline.h>

@class FigCaptureVISPipeline, BWFanOutNode, BWOverCaptureFanOutNode, NSMutableArray, FigCaptureMovieFileSinkHeadPipeline;

@interface FigCaptureMovieFileSinkMiddlePipeline : FigCapturePipeline {

	FigCaptureVISPipeline* _visPipeline;
	BWFanOutNode* _videoFanOut;
	FigCaptureVISPipeline* _overCaptureVISPipeline;
	BWOverCaptureFanOutNode* _audioFanOut;
	NSMutableArray* _metadataFanOuts;
	FigCaptureMovieFileSinkHeadPipeline* _headPipeline;
	unsigned long long _numberOfTailsToSupport;

}

@property (nonatomic,readonly) FigCaptureVISPipeline * visPipeline;                         //@synthesize visPipeline=_visPipeline - In the implementation block
@property (nonatomic,readonly) FigCaptureVISPipeline * overCaptureVISPipeline;              //@synthesize overCaptureVISPipeline=_overCaptureVISPipeline - In the implementation block
-(id)videoOutputForTailIndex:(unsigned long long)arg1 ;
-(FigCaptureVISPipeline *)visPipeline;
-(id)initWithConfiguration:(id)arg1 graph:(id)arg2 parentPipeline:(id)arg3 headPipeline:(id)arg4 captureDevice:(id)arg5 ;
-(FigCaptureVISPipeline *)overCaptureVISPipeline;
-(id)audioOutputForTailIndex:(unsigned long long)arg1 ;
-(int)_buildMovieFileSinkExtendedCVISMiddleWithConfiguration:(id)arg1 graph:(id)arg2 parentPipeline:(id)arg3 headPipeline:(id)arg4 captureDevice:(id)arg5 ;
-(id)metadataOutputsForTailIndex:(unsigned long long)arg1 ;
-(void)dealloc;
@end

