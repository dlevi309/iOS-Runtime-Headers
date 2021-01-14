/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriTape.framework/SiriTape
*/

#import <SiriTape/SiriTape-Structs.h>
#import <libobjc.A.dylib/GCDAsyncSocketDelegate.h>

@protocol STAceObjectHandler, OS_dispatch_queue;
@class NSURL, GCDAsyncSocket, NSObject, NSMutableArray, NSMutableDictionary, STServerConnection;

@interface STProxySocketDelegate : NSObject <GCDAsyncSocketDelegate> {

	NSURL* _serverURL;
	NSURL* _replayURL;
	unsigned long long _port;
	BOOL _usingTLS;
	id<STAceObjectHandler> _handler;
	GCDAsyncSocket* _serverSocket;
	GCDAsyncSocket* _listenSocket;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _serverQueue;
	NSMutableArray* _connectedSockets;
	NSMutableDictionary* _clientConnections;
	STServerConnection* _serverConnection;

}
-(void)socket:(id)arg1 didAcceptNewSocket:(id)arg2 ;
-(void)socket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3 ;
-(void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3 ;
-(void)socketDidDisconnect:(id)arg1 withError:(id)arg2 ;
-(id)initWithActiveServerURL:(id)arg1 handler:(id)arg2 replayFileURL:(id)arg3 ;
@end

