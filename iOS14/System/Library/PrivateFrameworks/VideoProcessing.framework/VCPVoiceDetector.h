/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSDictionary, NSMutableArray;

@interface VCPVoiceDetector : NSObject {

	NSDictionary* _model;
	AudioStreamBasicDescription _audioStream;
	int _sampleBatchSize;
	SCD_Struct_VC6 _trackStart;
	BOOL _voiceActivity;
	SCD_Struct_VC6 _voiceStart;
	NSMutableArray* _voiceDetections;
	NSMutableArray* _utteranceDetections;
	NSMutableArray* _musicDetections;

}

@property (retain) NSMutableArray * voiceDetections;              //@synthesize voiceDetections=_voiceDetections - In the implementation block
+(id)detector;
-(id)results;
-(id)init;
-(int)loadModel;
-(int)setupWithSample:(opaqueCMSampleBufferRef)arg1 andSampleBatchSize:(int)arg2 ;
-(int)processAudioSamples:(AudioBufferList*)arg1 timestamp:(AudioTimeStamp)arg2 ;
-(int)finalizeAnalysisAtTime:(const SCD_Struct_VC6*)arg1 ;
-(id)audioFormatRequirements;
-(NSMutableArray *)voiceDetections;
-(void)setVoiceDetections:(NSMutableArray *)arg1 ;
-(void)addDetectionFromTime:(const SCD_Struct_VC6*)arg1 toTime:(const SCD_Struct_VC6*)arg2 result:(id)arg3 ;
-(int)setupWithAudioStream:(const AudioStreamBasicDescription*)arg1 ;
@end

