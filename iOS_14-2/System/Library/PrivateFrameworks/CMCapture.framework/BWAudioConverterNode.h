/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@class NSDictionary;

@interface BWAudioConverterNode : BWNode {

	NSDictionary* _settings;
	OpaqueFigSampleBufferProcessorRef _audioCompressionSBP;

}

@property (nonatomic,readonly) NSDictionary * gaplessPlaybackInfo; 
+(void)initialize;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeType;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(id)nodeSubType;
-(id)init;
-(void)setSettings:(id)arg1 ;
-(void)acquireHardware;
-(NSDictionary *)gaplessPlaybackInfo;
-(void)relinquishHardware;
-(id)settings;
-(void)_handleUpdatedRecordingSettings:(id)arg1 ;
-(void)_teardownAudioCompressionSBP;
-(void)dealloc;
-(int)_setupAudioCompressionSBPForInputFormat:(id)arg1 ;
@end

