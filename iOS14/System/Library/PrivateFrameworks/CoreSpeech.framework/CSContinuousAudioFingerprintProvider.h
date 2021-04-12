/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/CSAudioStreamProvidingDelegate.h>
#import <libobjc.A.dylib/CSAudioServerCrashMonitorDelegate.h>

@protocol OS_dispatch_queue;
@class NSHashTable, CSAudioStream, NSObject, CSAudioCircularBuffer, CSPlainAudioFileWriter, NSMutableDictionary, NSString;

@interface CSContinuousAudioFingerprintProvider : NSObject <CSAudioStreamProvidingDelegate, CSAudioServerCrashMonitorDelegate> {

	BOOL _isListenPollingStarting;
	float _currentMaximumBufferSize;
	NSHashTable* _observers;
	CSAudioStream* _audioStream;
	NSObject*<OS_dispatch_queue> _queue;
	CSAudioCircularBuffer* _audioLoggingBuffer;
	CSPlainAudioFileWriter* _audioFileWriter;
	NSMutableDictionary* _inUseServices;

}

@property (nonatomic,retain) NSHashTable * observers;                                 //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) CSAudioStream * audioStream;                             //@synthesize audioStream=_audioStream - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL isListenPollingStarting;                            //@synthesize isListenPollingStarting=_isListenPollingStarting - In the implementation block
@property (nonatomic,retain) CSAudioCircularBuffer * audioLoggingBuffer;              //@synthesize audioLoggingBuffer=_audioLoggingBuffer - In the implementation block
@property (nonatomic,retain) CSPlainAudioFileWriter * audioFileWriter;                //@synthesize audioFileWriter=_audioFileWriter - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * inUseServices;                     //@synthesize inUseServices=_inUseServices - In the implementation block
@property (assign,nonatomic) float currentMaximumBufferSize;                          //@synthesize currentMaximumBufferSize=_currentMaximumBufferSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)unregisterObserver:(id)arg1 ;
-(BOOL)isListenPollingStarting;
-(void)registerObserver:(id)arg1 ;
-(NSHashTable *)observers;
-(id)init;
-(void)setIsListenPollingStarting:(BOOL)arg1 ;
-(void)_startListenPollingWithInterval:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)_startListenWithCompletion:(/*^block*/id)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)setAudioStream:(CSAudioStream *)arg1 ;
-(void)reset;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2 ;
-(void)_reset;
-(void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2 ;
-(void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_stopListening;
-(void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg1 ;
-(CSAudioStream *)audioStream;
-(void)audioStreamProvider:(id)arg1 didHardwareConfigurationChange:(long long)arg2 ;
-(CSPlainAudioFileWriter *)audioFileWriter;
-(void)setAudioFileWriter:(CSPlainAudioFileWriter *)arg1 ;
-(void)_setMaximumBufferSizeFromInUseServices;
-(void)_startListenPolling;
-(void)startWithUUID:(id)arg1 withMaximumBufferSize:(float)arg2 ;
-(void)stopWithUUID:(id)arg1 ;
-(void)CSSiriEnabledMonitor:(id)arg1 didReceiveEnabled:(BOOL)arg2 ;
-(CSAudioCircularBuffer *)audioLoggingBuffer;
-(void)setAudioLoggingBuffer:(CSAudioCircularBuffer *)arg1 ;
-(NSMutableDictionary *)inUseServices;
-(void)setInUseServices:(NSMutableDictionary *)arg1 ;
-(float)currentMaximumBufferSize;
-(void)setCurrentMaximumBufferSize:(float)arg1 ;
@end

