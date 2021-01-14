/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) unsigned long long sampleRate; 
@property (nonatomic,readonly) unsigned long long numBytesPerSample; 
@property (nonatomic,readonly) unsigned long long type; 
-(id)init;
-(void)addReceiver:(id)arg1 ;
-(void)removeReceiver:(id)arg1 ;
-(NviContext *)nviCtx;
-(NSHashTable *)receivers;
-(unsigned long long)type;
-(void)setAudioStream:(CSAudioStream *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2 ;
-(void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2 ;
-(void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)sampleRate;
-(CSAudioStream *)audioStream;
-(void)startWithNviContext:(id)arg1 didStartHandler:(/*^block*/id)arg2 ;
-(void)stopWithDidStopHandler:(/*^block*/id)arg1 ;
-(void)setNviCtx:(NviContext *)arg1 ;
-(void)_createAudioStreamWithCurrentNviContext;
-(unsigned long long)numBytesPerSample;
-(void)audioStreamProvider:(id)arg1 avBufferAvailable:(id)arg2 ;
-(void)setReceivers:(NSHashTable *)arg1 ;
@end

