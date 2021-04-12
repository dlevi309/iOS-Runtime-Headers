/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/MattingV2.bundle/MattingV2
*/


@protocol ImageBufferProcessor
@required
-(int)finishProcessing;
-(int)process;
-(int)prewarmWithTuningParameters:(id)arg1;
-(int)prepareToProcess:(unsigned)arg1;
-(int)resetState;
-(int)purgeResources;

@end

