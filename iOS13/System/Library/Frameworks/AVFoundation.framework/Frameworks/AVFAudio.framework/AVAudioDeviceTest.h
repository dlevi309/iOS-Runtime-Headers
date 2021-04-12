/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/


@protocol AVAudioDeviceTestServiceProtocol;
@class NSXPCConnection;

@interface AVAudioDeviceTest : NSObject {

	NSXPCConnection* _connection;
	id<AVAudioDeviceTestServiceProtocol> _serviceDelegateAsync;
	id<AVAudioDeviceTestServiceProtocol> _serviceDelegateSync;

}

@property (retain) NSXPCConnection * connection;                                           //@synthesize connection=_connection - In the implementation block
@property (retain) id<AVAudioDeviceTestServiceProtocol> serviceDelegateAsync;              //@synthesize serviceDelegateAsync=_serviceDelegateAsync - In the implementation block
@property (retain) id<AVAudioDeviceTestServiceProtocol> serviceDelegateSync;               //@synthesize serviceDelegateSync=_serviceDelegateSync - In the implementation block
-(id)init;
-(void)dealloc;
-(void)cancel;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)startWithSequence:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<AVAudioDeviceTestServiceProtocol>)serviceDelegateAsync;
-(void)setServiceDelegateAsync:(id<AVAudioDeviceTestServiceProtocol>)arg1 ;
-(id<AVAudioDeviceTestServiceProtocol>)serviceDelegateSync;
-(void)setServiceDelegateSync:(id<AVAudioDeviceTestServiceProtocol>)arg1 ;
@end

