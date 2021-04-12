/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)endAudio;
-(void)appendAudioPCMBuffer:(id)arg1 ;
-(id)_startedConnectionWithLanguageCode:(id)arg1 delegate:(id)arg2 taskHint:(long long)arg3 requestIdentifier:(id)arg4 ;
-(void)_appendAudioPCMBuffer:(id)arg1 ;
-(void)_appendAudioSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_endAudio;
-(AVAudioFormat *)nativeAudioFormat;
-(void)_drainAndClearAudioConverter;
-(void)_convertAndFeedPCMBuffer:(id)arg1 ;
-(void)appendAudioSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
@end

