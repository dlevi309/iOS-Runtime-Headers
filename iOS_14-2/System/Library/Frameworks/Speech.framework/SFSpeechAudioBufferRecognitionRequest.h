/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Speech.framework/Speech
*/

#import <Speech/Speech-Structs.h>
#import <Speech/SFSpeechRecognitionRequest.h>

@protocol SFSpeechRecognitionBufferDelegate, OS_dispatch_queue;
@class NSMutableArray, NSObject, AVAudioConverter, AVAudioFormat;

@interface SFSpeechAudioBufferRecognitionRequest : SFSpeechRecognitionRequest {

	id<SFSpeechRecognitionBufferDelegate> _bufferDelegate;
	NSMutableArray* _queuedBuffers;
	NSObject*<OS_dispatch_queue> _queue;
	AVAudioConverter* _converter;
	BOOL _audioEnded;

}

@property (nonatomic,readonly) AVAudioFormat * nativeAudioFormat; 
-(id)init;
-(void)_appendAudioPCMBuffer:(id)arg1 ;
-(AVAudioFormat *)nativeAudioFormat;
-(void)_convertAndFeedPCMBuffer:(id)arg1 ;
-(void)_drainAndClearAudioConverter;
-(void)appendAudioPCMBuffer:(id)arg1 ;
-(void)endAudio;
-(id)_startedConnectionWithLanguageCode:(id)arg1 delegate:(id)arg2 taskHint:(long long)arg3 requestIdentifier:(id)arg4 ;
-(void)_appendAudioSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_endAudio;
-(void)appendAudioSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
@end

