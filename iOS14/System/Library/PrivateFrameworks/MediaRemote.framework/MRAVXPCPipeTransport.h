/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRExternalDeviceTransport.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>
#import <libobjc.A.dylib/MRVirtualDevicePipeProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, MRDeviceInfo, NSError, NSInputStream, NSOutputStream, NSXPCConnection, NSRunLoop, CURunLoopThread, MRAVOutputDevice, NSXPCListenerEndpoint, NSString;

@interface MRAVXPCPipeTransport : MRExternalDeviceTransport <NSStreamDelegate, MRVirtualDevicePipeProtocol> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	MRDeviceInfo* _deviceInfo;
	NSError* _error;
	NSInputStream* _inputStream;
	NSInputStream* _inputStreamInternal;
	NSOutputStream* _outputStream;
	NSOutputStream* _outputStreamInternal;
	BOOL _useSystemAuthenticationPrompt;
	NSXPCConnection* _pipeConnection;
	NSRunLoop* _runLoop;
	CURunLoopThread* _runLoopThread;
	MRAVOutputDevice* _outputDevice;
	NSXPCListenerEndpoint* _pipeEndpoint;

}

@property (nonatomic,readonly) MRAVOutputDevice * outputDevice;                   //@synthesize outputDevice=_outputDevice - In the implementation block
@property (nonatomic,readonly) NSXPCListenerEndpoint * pipeEndpoint;              //@synthesize pipeEndpoint=_pipeEndpoint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)port;
-(id)uid;
-(id)deviceInfo;
-(MRAVOutputDevice *)outputDevice;
-(void)sendData:(id)arg1 ;
-(id)error;
-(void)_onQueue_resetStreams;
-(NSXPCListenerEndpoint *)pipeEndpoint;
-(id)initWithOutputDevice:(id)arg1 pipeEndpoint:(id)arg2 ;
-(BOOL)shouldUseSystemAuthenticationPrompt;
-(void)setShouldUseSystemAuthenticationPrompt:(BOOL)arg1 ;
-(BOOL)getInputStream:(id*)arg1 outputStream:(id*)arg2 userInfo:(id)arg3 ;
-(BOOL)requiresCustomPairing;
-(id)name;
-(NSString *)description;
-(id)hostname;
-(void)reset;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)dealloc;
@end

