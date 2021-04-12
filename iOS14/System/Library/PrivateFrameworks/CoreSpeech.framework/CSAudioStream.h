/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/CSAudioStreamProvidingDelegate.h>

@protocol CSAudioStreamProviding, CSAudioStreamProvidingDelegate;
@class NSString, CSAudioStreamRequest, CSAudioStartStreamOption, NSUUID;

@interface CSAudioStream : NSObject <CSAudioStreamProvidingDelegate> {

	BOOL _scheduledFutureSample;
	BOOL _streaming;
	id<CSAudioStreamProviding> _streamProvider;
	id<CSAudioStreamProvidingDelegate> _delegate;
	unsigned long long _lastForwardedSampleCount;
	NSString* _name;
	CSAudioStreamRequest* _streamRequest;
	NSString* _UUID;
	CSAudioStartStreamOption* _startStreamOption;
	NSUUID* _streamingUUID;

}

@property (assign) BOOL streaming;                                                            //@synthesize streaming=_streaming - In the implementation block
@property (retain) NSUUID * streamingUUID;                                                    //@synthesize streamingUUID=_streamingUUID - In the implementation block
@property (assign,nonatomic,__weak) id<CSAudioStreamProviding> streamProvider;                //@synthesize streamProvider=_streamProvider - In the implementation block
@property (assign,nonatomic,__weak) id<CSAudioStreamProvidingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long lastForwardedSampleCount;                     //@synthesize lastForwardedSampleCount=_lastForwardedSampleCount - In the implementation block
@property (assign,nonatomic) BOOL scheduledFutureSample;                                      //@synthesize scheduledFutureSample=_scheduledFutureSample - In the implementation block
@property (nonatomic,retain) NSString * name;                                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) CSAudioStreamRequest * streamRequest;                            //@synthesize streamRequest=_streamRequest - In the implementation block
@property (nonatomic,readonly) NSString * UUID;                                               //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,retain) CSAudioStartStreamOption * startStreamOption;                    //@synthesize startStreamOption=_startStreamOption - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isStreaming;
-(NSString *)UUID;
-(id<CSAudioStreamProvidingDelegate>)delegate;
-(BOOL)isNarrowBand;
-(NSString *)name;
-(void)setDelegate:(id<CSAudioStreamProvidingDelegate>)arg1 ;
-(void)setStreaming:(BOOL)arg1 ;
-(void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2 ;
-(void)setName:(NSString *)arg1 ;
-(BOOL)streaming;
-(void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2 ;
-(void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2 ;
-(id)recordSettings;
-(void)dealloc;
-(unsigned long long)lastForwardedSampleCount;
-(void)setLastForwardedSampleCount:(unsigned long long)arg1 ;
-(void)startAudioStreamWithOption:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)stopAudioStreamWithOption:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)audioStreamProvider:(id)arg1 didHardwareConfigurationChange:(long long)arg2 ;
-(BOOL)prepareAudioStreamSyncWithRequest:(id)arg1 error:(id*)arg2 ;
-(id<CSAudioStreamProviding>)streamProvider;
-(void)setStreamProvider:(id<CSAudioStreamProviding>)arg1 ;
-(id)initWithAudioStreamProvider:(id)arg1 streamName:(id)arg2 streamRequest:(id)arg3 ;
-(void)setStreamRequest:(CSAudioStreamRequest *)arg1 ;
-(void)setStreamingUUID:(NSUUID *)arg1 ;
-(void)setStartStreamOption:(CSAudioStartStreamOption *)arg1 ;
-(NSUUID *)streamingUUID;
-(void)prepareAudioStreamWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)scheduledFutureSample;
-(void)setScheduledFutureSample:(BOOL)arg1 ;
-(CSAudioStreamRequest *)streamRequest;
-(CSAudioStartStreamOption *)startStreamOption;
@end

