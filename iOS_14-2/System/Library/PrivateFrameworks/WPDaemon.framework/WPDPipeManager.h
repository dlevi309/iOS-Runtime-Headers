/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
*/

#import <WPDaemon/WPDManager.h>
#import <libobjc.A.dylib/CBScalablePipeManagerDelegate.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CBScalablePipeManager, NSMutableDictionary, NSString;

@interface WPDPipeManager : WPDManager <CBScalablePipeManagerDelegate, NSStreamDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	CBScalablePipeManager* _pipeManager;
	NSMutableDictionary* _endpointsDict;
	NSMutableDictionary* _peerPipesDict;
	NSMutableDictionary* _connectionInitiators;

}

@property (__weak) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (retain) CBScalablePipeManager * pipeManager;                     //@synthesize pipeManager=_pipeManager - In the implementation block
@property (retain) NSMutableDictionary * endpointsDict;                     //@synthesize endpointsDict=_endpointsDict - In the implementation block
@property (retain) NSMutableDictionary * peerPipesDict;                     //@synthesize peerPipesDict=_peerPipesDict - In the implementation block
@property (retain) NSMutableDictionary * connectionInitiators;              //@synthesize connectionInitiators=_connectionInitiators - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPipeManager:(CBScalablePipeManager *)arg1 ;
-(CBScalablePipeManager *)pipeManager;
-(id)generateStateDump;
-(void)scalablePipeManager:(id)arg1 pipeDidConnect:(id)arg2 ;
-(void)sendAck:(id)arg1 errorCode:(unsigned char)arg2 ;
-(void)unregisterEndpoint:(id)arg1 forClient:(id)arg2 ;
-(void)scalablePipeManager:(id)arg1 pipeDidDisconnect:(id)arg2 error:(id)arg3 ;
-(void)receivedVersionInfo:(id)arg1 data:(char*)arg2 dataSize:(long long)arg3 ;
-(void)scalablePipeManager:(id)arg1 didUnregisterEndpoint:(id)arg2 ;
-(void)scalablePipeManager:(id)arg1 didRegisterEndpoint:(id)arg2 error:(id)arg3 ;
-(void)registerEndpoint:(id)arg1 requireAck:(BOOL)arg2 requireEncryption:(BOOL)arg3 forClient:(id)arg4 ;
-(void)sendErrorResponse:(id)arg1 errorCode:(unsigned char)arg2 ;
-(void)receivedAck:(id)arg1 data:(char*)arg2 dataSize:(long long)arg3 ;
-(id)pipeInfo:(id)arg1 forClient:(id)arg2 ;
-(void)sendConnectStatus:(id)arg1 connectStatus:(unsigned char)arg2 ;
-(id)initWithServer:(id)arg1 ;
-(NSMutableDictionary *)endpointsDict;
-(void)invalidatePipeInfo:(id)arg1 forPeer:(id)arg2 ;
-(void)update;
-(void)setConnectionInitiator:(BOOL)arg1 forPeer:(id)arg2 forClient:(id)arg3 ;
-(void)handleIncomingPipeData:(id)arg1 data:(char*)arg2 dataSize:(long long)arg3 ;
-(void)receivedError:(id)arg1 data:(char*)arg2 dataSize:(long long)arg3 ;
-(void)setEndpointsDict:(NSMutableDictionary *)arg1 ;
-(void)setPipeClientConnectionStatus:(BOOL)arg1 forPeer:(id)arg2 forClient:(id)arg3 ;
-(NSMutableDictionary *)connectionInitiators;
-(void)setConnectionInitiators:(NSMutableDictionary *)arg1 ;
-(void)receivedPayload:(id)arg1 data:(char*)arg2 dataSize:(long long)arg3 ;
-(void)channelHasData:(id)arg1 ;
-(id)pipeManagerState:(long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSMutableDictionary *)peerPipesDict;
-(id)streamEvent:(unsigned long long)arg1 ;
-(void)sendChannelData:(id)arg1 ;
-(void)sendData:(id)arg1 forPeer:(id)arg2 forClient:(id)arg3 ;
-(void)setPeerPipesDict:(NSMutableDictionary *)arg1 ;
-(long long)writeDataToPipe:(id)arg1 pipe:(id)arg2 ;
-(void)receivedConnectStatus:(id)arg1 data:(char*)arg2 dataSize:(long long)arg3 ;
-(BOOL)sendVersionInfo:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)sendRemainingData:(id)arg1 wpClient:(id)arg2 ;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
@end

