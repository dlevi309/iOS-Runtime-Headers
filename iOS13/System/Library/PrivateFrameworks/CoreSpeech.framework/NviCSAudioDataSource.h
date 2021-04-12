/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/CSAudioStreamProvidingDelegate.h>
#import <libobjc.A.dylib/NviAudioDataSource.h>

@protocol OS_dispatch_queue;
@class NviContext, NSHashTable, CSAudioStream, NSObject, NSString;

@interface NviCSAudioDataSource : NSObject <CSAudioStreamProvidingDelegate, NviAudioDataSource> {

	NviContext* _nviCtx;
	NSHashTable* _receivers;
	CSAudioStream* _audioStream;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NviContext * nviCtx;                                 //@synthesize nviCtx=_nviCtx - In the implementation block
@property (nonatomic,retain) NSHashTable * receivers;                             //@synthesize receivers=_receivers - In the implementation block
@property (nonatomic,retain) CSAudioStream * audioStream;                         //@synthesize audioStream=_audioStream - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                  //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) unsigned long long sampleRate; 
@property (nonatomic,readonly) unsigned long long numBytesPerSample; 
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(unsigned long long)type;
-(unsigned long long)sampleRate;
-(void)addReceiver:(id)arg1 ;
-(void)removeReceiver:(id)arg1 ;
-(CSAudioStream *)audioStream;
-(void)setAudioStream:(CSAudioStream *)arg1 ;
-(void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2 ;
-(void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2 ;
-(void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2 ;
-(void)startWithNviContext:(id)arg1 didStartHandler:(/*^block*/id)arg2 ;
-(void)stopWithDidStopHandler:(/*^block*/id)arg1 ;
-(NviContext *)nviCtx;
-(void)setNviCtx:(NviContext *)arg1 ;
-(void)_createAudioStreamWithCurrentNviContext;
-(unsigned long long)numBytesPerSample;
-(void)audioStreamProvider:(id)arg1 avBufferAvailable:(id)arg2 ;
-(NSHashTable *)receivers;
-(void)setReceivers:(NSHashTable *)arg1 ;
@end

