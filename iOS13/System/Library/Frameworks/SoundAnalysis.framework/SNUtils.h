/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/


#import <SoundAnalysis/SoundAnalysis-Structs.h>
@interface SNUtils : NSObject
+(int)modelSampleRate:(id)arg1 orDefaultRate:(int)arg2 ;
+(int)modelBlockSize:(id)arg1 ;
+(id)vggishFeatureEmbeddingInputShape;
+(int)numberOfElements:(id)arg1 ;
+(id)vggishFeatureEmbeddingOutputShape;
+(id)vggishFrontEndProcessingModelDescription;
+(id)splitBuffer:(id)arg1 intoBuffersWithFrameCount:(unsigned)arg2 ;
+(id)vggishFrontEndProcessingInputShape;
+(id)vggishFrontEndProcessingOutputShape;
+(void)silenceUnfilledFramesInBuffer:(id)arg1 ;
+(void)copyAudioBufferList:(AudioBufferList*)arg1 to:(AudioBufferList*)arg2 frameCount:(unsigned)arg3 bytesPerFrame:(unsigned)arg4 ;
+(int)modelInputBlockSize:(id)arg1 ;
+(int)modelOutputBlockSize:(id)arg1 ;
@end

