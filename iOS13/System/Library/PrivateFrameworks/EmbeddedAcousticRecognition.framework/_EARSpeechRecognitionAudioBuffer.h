/*
* Generated on Monday, March 1, 2021 at 2:32:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(void)initialize;
-(void)_detachFromRecognizer;
-(id)_initWithAudioBuffer:(shared_ptr<quasar::RecogAudioBufferBase>*)arg1 speechRecognizer:(id)arg2 ;
-(void)_setUnderlyingBuffer:(shared_ptr<quasar::RecogAudioBufferBase>*)arg1 ;
-(void)addAudioSampleData:(id)arg1 ;
-(void)endAudio;
-(void)cancelRecognition;
-(void)addAudioSamples:(const short*)arg1 count:(unsigned long long)arg2 ;
-(void)triggerServerSideEndPointer;
@end

