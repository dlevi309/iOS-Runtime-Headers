/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/CSAudioStreamProvidingDelegate.h>
#import <libobjc.A.dylib/CSXPCClientDelegate.h>

@protocol CSCommandControlListenerDelegate, OS_dispatch_queue, CSAudioStreamProviding;
@class NSObject, CSAudioStream, CSXPCClient, NSString;

@interface CSCommandControlListener : NSObject <CSAudioStreamProvidingDelegate, CSXPCClientDelegate> {

	id<CSCommandControlListenerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	id<CSAudioStreamProviding> _audioStreamProvider;
	CSAudioStream* _audioStream;
	CSXPCClient* _xpcClient;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) id<CSAudioStreamProviding> audioStreamProvider;                    //@synthesize audioStreamProvider=_audioStreamProvider - In the implementation block
@property (nonatomic,retain) CSAudioStream * audioStream;                                       //@synthesize audioStream=_audioStream - In the implementation block
@property (nonatomic,retain) CSXPCClient * xpcClient;                                           //@synthesize xpcClient=_xpcClient - In the implementation block
@property (assign,nonatomic,__weak) id<CSCommandControlListenerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<CSCommandControlListenerDelegate>)delegate;
-(void)setDelegate:(id<CSCommandControlListenerDelegate>)arg1 ;
-(CSXPCClient *)xpcClient;
-(void)setAudioStream:(CSAudioStream *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2 ;
-(void)CSXPCClient:(id)arg1 didDisconnect:(BOOL)arg2 ;
-(void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2 ;
-(void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setXpcClient:(CSXPCClient *)arg1 ;
-(CSAudioStream *)audioStream;
-(void)_startRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)audioStreamProvider:(id)arg1 didHardwareConfigurationChange:(long long)arg2 ;
-(void)startListenWithOption:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)stopListenWithCompletion:(/*^block*/id)arg1 ;
-(id<CSAudioStreamProviding>)audioStreamProvider;
-(void)setAudioStreamProvider:(id<CSAudioStreamProviding>)arg1 ;
@end

