/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/Frameworks/TextToSpeechBundleSupport.framework/TextToSpeechBundleSupport
*/


@protocol OS_dispatch_queue;
#import <TextToSpeechBundleSupport/TextToSpeechBundleSupport-Structs.h>
@class NSLock, NSMutableArray, TTSTimer, TTSSpeechServer, NSObject, TTSVocalizer;

@interface TTSSpeechServerInstance : NSObject {

	NSLock* _speechLock;
	NSMutableArray* _speechRequestQueue;
	unsigned char _speechActive;
	unsigned char _speechThreadActive;
	CFRunLoopRef _speechThreadRunLoop;
	CFRunLoopSourceRef _speechActivitySignal;
	SCD_Struct_TT9* _speechActiveContext;
	unsigned char _newVoiceInstalled;
	unsigned char _speechThreadPriorityIsHigh;
	unsigned char _shouldTerminateThread;
	unsigned char _didTerminateThread;
	unsigned long long _synthesizerId;
	TTSTimer* _wordCallbackTimer;
	TTSSpeechServer* _speechService;
	NSObject*<OS_dispatch_queue> _serviceQueue;
	TTSVocalizer* _vocalizer;
	/*^block*/id _unitTestMarkerProcessingCallback;

}

@property (nonatomic,retain) TTSTimer * wordCallbackTimer;                           //@synthesize wordCallbackTimer=_wordCallbackTimer - In the implementation block
@property (assign,nonatomic) unsigned long long synthesizerId;                       //@synthesize synthesizerId=_synthesizerId - In the implementation block
@property (assign,nonatomic) TTSSpeechServer * speechService;                        //@synthesize speechService=_speechService - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serviceQueue;              //@synthesize serviceQueue=_serviceQueue - In the implementation block
@property (nonatomic,retain) TTSVocalizer * vocalizer;                               //@synthesize vocalizer=_vocalizer - In the implementation block
@property (nonatomic,copy) id unitTestMarkerProcessingCallback;                      //@synthesize unitTestMarkerProcessingCallback=_unitTestMarkerProcessingCallback - In the implementation block
-(oneway void)startSpeechRequest:(id)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)serviceQueue;
-(void)dealloc;
-(oneway void)pauseSpeechRequest:(id)arg1 atMark:(long long)arg2 ;
-(oneway void)continueSpeechRequest:(id)arg1 ;
-(oneway void)stopSpeechRequest:(id)arg1 atMark:(long long)arg2 ;
-(oneway void)getSpeechIsActiveForRequest:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setSpeechService:(TTSSpeechServer *)arg1 ;
-(TTSSpeechServer *)speechService;
-(void)setWordCallbackTimer:(TTSTimer *)arg1 ;
-(void)setServiceQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setUnitTestMarkerProcessingCallback:(id)arg1 ;
-(id)_getAvailableVoiceForVoice:(id)arg1 ;
-(void)_appendSpeechRequestAndStart:(id)arg1 ;
-(void)_startSpeechThread;
-(void)_initializeSpeech:(SCD_Struct_TT9*)arg1 ;
-(unsigned char)_activeRequestShouldStopAtAnyMark:(SCD_Struct_TT9*)arg1 ;
-(unsigned char)_setActiveRequestActionForMark:(long long)arg1 clientRequest:(id)arg2 markType:(long long)arg3 ;
-(TTSTimer *)wordCallbackTimer;
-(void)_initializeSpeechEngine:(SCD_Struct_TT9*)arg1 ;
-(void)_processCurrentRequest:(SCD_Struct_TT9*)arg1 ;
-(void)_cleanupAfterRequest:(SCD_Struct_TT9*)arg1 ;
-(void)_ttsLogSpeechForServerRequest:(id)arg1 ;
-(unsigned char)_activeRequestShouldStopImmediately:(SCD_Struct_TT9*)arg1 ;
-(unsigned char)_activeRequestShouldPauseImmediately:(SCD_Struct_TT9*)arg1 ;
-(unsigned char)_activeRequestShouldContinue:(SCD_Struct_TT9*)arg1 ;
-(void)_uninitializeSpeech:(SCD_Struct_TT9*)arg1 ;
-(unsigned char)_needsParameterChange:(SCD_Struct_TT9*)arg1 lock:(unsigned char)arg2 rate:(float*)arg3 pitch:(float*)arg4 volume:(float*)arg5 footprint:(long long*)arg6 voiceType:(long long*)arg7 ;
-(void)_setParameters:(SCD_Struct_TT9*)arg1 rate:(float)arg2 pitch:(float)arg3 volume:(float)arg4 footprint:(long long)arg5 ;
-(id)unitTestMarkerProcessingCallback;
-(BOOL)_footprintOrVoiceNameHasChanged:(SCD_Struct_TT9*)arg1 ;
-(void)_loadVoiceResource:(SCD_Struct_TT9*)arg1 voiceResource:(id)arg2 ;
-(void)_speechThreadSignal;
-(void)_terminateThread;
-(unsigned)_vocalizerMessageBufferDone:(VE_HSAFE*)arg1 context:(SCD_Struct_TT11*)arg2 outData:(SCD_Struct_TT12*)arg3 ;
-(void)_handleSpeechThread;
-(unsigned char)_shouldContinueSpeechGivenMark:(SCD_Struct_TT9*)arg1 markType:(long long)arg2 blockIfPaused:(unsigned char)arg3 ;
-(void)processMarker:(long long)arg1 withByteOffset:(unsigned)arg2 markerPosition:(unsigned)arg3 markerLength:(unsigned)arg4 context:(SCD_Struct_TT9*)arg5 currentTime:(unsigned long long)arg6 secondPass:(BOOL)arg7 ;
-(void)_newVoiceInstalled;
-(id)_ttSSpeechServerCopyVoiceNamesForLanguage:(id)arg1 voiceType:(long long)arg2 queryingMobileAssets:(BOOL)arg3 ;
-(BOOL)_defaultVoiceIsFallback;
-(CFArrayRef)loadedVoiceResources;
-(id)_speechVocalizerPlaybackDataProviderWithVocalizer:(id)arg1 playback:(TTSPlaybackRef)arg2 inContext:(void*)arg3 ;
-(TTSVocalizer *)vocalizer;
-(void)setVocalizer:(TTSVocalizer *)arg1 ;
-(unsigned long long)synthesizerId;
-(void)setSynthesizerId:(unsigned long long)arg1 ;
@end
