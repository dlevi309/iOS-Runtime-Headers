/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/


@protocol AVAudioDeviceTestServiceProtocol;
@class NSXPCConnection;

@interface AVAudioDeviceTest : NSObject {

	BOOL _processSequenceAsynchronously;
	NSXPCConnection* _connection;
	id<AVAudioDeviceTestServiceProtocol> _serviceDelegateAsync;
	id<AVAudioDeviceTestServiceProtocol> _serviceDelegateSync;

}

@property (retain) NSXPCConnection * connection;                                           //@synthesize connection=_connection - In the implementation block
@property (retain) id<AVAudioDeviceTestServiceProtocol> serviceDelegateAsync;              //@synthesize serviceDelegateAsync=_serviceDelegateAsync - In the implementation block
@property (retain) id<AVAudioDeviceTestServiceProtocol> serviceDelegateSync;               //@synthesize serviceDelegateSync=_serviceDelegateSync - In the implementation block
@property (assign) BOOL processSequenceAsynchronously;                                     //@synthesize processSequenceAsynchronously=_processSequenceAsynchronously - In the implementation block
-(id)init;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)cancel;
-(id)initWithXPCEndPoint:(id)arg1 ;
-(void)startWithSequence:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)processSequenceAsynchronously;
-(void)setProcessSequenceAsynchronously:(BOOL)arg1 ;
-(id<AVAudioDeviceTestServiceProtocol>)serviceDelegateAsync;
-(void)setServiceDelegateAsync:(id<AVAudioDeviceTestServiceProtocol>)arg1 ;
-(id<AVAudioDeviceTestServiceProtocol>)serviceDelegateSync;
-(void)setServiceDelegateSync:(id<AVAudioDeviceTestServiceProtocol>)arg1 ;
-(void)dealloc;
@end

