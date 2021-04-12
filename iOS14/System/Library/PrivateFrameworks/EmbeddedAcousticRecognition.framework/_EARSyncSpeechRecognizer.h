/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
*/


@protocol OS_dispatch_queue;
#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@class NSObject, _EARFormatter, NSString;

@interface _EARSyncSpeechRecognizer : NSObject {

	NSObject*<OS_dispatch_queue> _formatterQueue;
	_EARFormatter* _formatter;
	shared_ptr<quasar::SyncSpeechRecognizer>* _syncRecognizer;
	NSString* _configPath;

}
+(void)initialize;
-(id)initWithConfiguration:(id)arg1 ;
-(void)resetWithSamplingRate:(unsigned)arg1 language:(id)arg2 taskType:(id)arg3 userId:(id)arg4 sessionId:(id)arg5 deviceId:(id)arg6 farField:(BOOL)arg7 audioSource:(id)arg8 maxAudioBufferSizeSeconds:(unsigned)arg9 ;
-(id)resultsWithEndedAudio;
-(id)resultsWithAddedFloatAudio:(id)arg1 numberOfSamples:(unsigned long long)arg2 taskName:(id)arg3 ;
-(id)resultsWithAddedAudio:(id)arg1 numberOfSamples:(unsigned long long)arg2 taskName:(id)arg3 ;
-(id)getSpeechRecognitionResultFromTokens:(vector<std::__1::vector<quasar::Token, std::__1::allocator<quasar::Token> >, std::__1::allocator<std::__1::vector<quasar::Token, std::__1::allocator<quasar::Token> > > >*)arg1 taskName:(id)arg2 ;
@end

