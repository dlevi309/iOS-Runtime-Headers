/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
*/


@protocol OS_dispatch_queue;
#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@class NSObject, _EARSpeechRecognizer;

@interface _EARSpeechRecognitionAudioBuffer : NSObject {

	shared_ptr<quasar::RecogAudioBufferBase>* _buffer;
	NSObject*<OS_dispatch_queue> _queue;
	_EARSpeechRecognizer* _speechRecognizer;
	BOOL _cancelled;
	BOOL _ended;

}

@property (nonatomic,readonly) double bufferedAudioDuration; 
+(void)initialize;
-(void)cancelRecognition;
-(void)triggerServerSideEndPointer;
-(void)addAudioSampleData:(id)arg1 ;
-(void)endAudio;
-(void)addAudioSamples:(const short*)arg1 count:(unsigned long long)arg2 ;
-(void)_detachFromRecognizer;
-(id)_initWithAudioBuffer:(shared_ptr<quasar::RecogAudioBufferBase>*)arg1 speechRecognizer:(id)arg2 ;
-(void)_setUnderlyingBuffer:(shared_ptr<quasar::RecogAudioBufferBase>*)arg1 ;
-(double)bufferedAudioDuration;
@end

