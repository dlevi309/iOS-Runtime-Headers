/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/FigCapturePipeline.h>

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
-(void)dealloc;
-(int)_buildMovieFileSinkExtendedCVISMiddleWithConfiguration:(id)arg1 graph:(id)arg2 parentPipeline:(id)arg3 headPipeline:(id)arg4 captureDevice:(id)arg5 ;
-(id)initWithConfiguration:(id)arg1 graph:(id)arg2 parentPipeline:(id)arg3 headPipeline:(id)arg4 captureDevice:(id)arg5 ;
-(id)videoOutputForTailIndex:(unsigned long long)arg1 ;
-(id)audioOutputForTailIndex:(unsigned long long)arg1 ;
-(id)metadataOutputsForTailIndex:(unsigned long long)arg1 ;
-(FigCaptureVISPipeline *)visPipeline;
-(FigCaptureVISPipeline *)overCaptureVISPipeline;
@end

