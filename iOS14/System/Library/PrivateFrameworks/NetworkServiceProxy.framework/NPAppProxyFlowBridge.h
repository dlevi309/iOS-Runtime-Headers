/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
*/


@protocol OS_nw_connection, OS_dispatch_queue;
@class NEAppProxyFlow, NWEndpoint, NSObject, NSError;

@interface NPAppProxyFlowBridge : NSObject {

	int _currentState;
	NEAppProxyFlow* _flow;
	NWEndpoint* _remoteEndpoint;
	NSObject*<OS_nw_connection> _connection;
	NSError* _connectionError;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (retain) NEAppProxyFlow * flow;                               //@synthesize flow=_flow - In the implementation block
@property (retain) NWEndpoint * remoteEndpoint;                         //@synthesize remoteEndpoint=_remoteEndpoint - In the implementation block
@property (retain) NSObject*<OS_nw_connection> connection;              //@synthesize connection=_connection - In the implementation block
@property (retain) NSError * connectionError;                           //@synthesize connectionError=_connectionError - In the implementation block
@property (assign) int currentState;                                    //@synthesize currentState=_currentState - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                  //@synthesize queue=_queue - In the implementation block
-(void)setCurrentState:(int)arg1 ;
-(NEAppProxyFlow *)flow;
-(NSError *)connectionError;
-(void)setConnectionError:(NSError *)arg1 ;
-(int)currentState;
-(NSObject*<OS_nw_connection>)connection;
-(void)setFlow:(NEAppProxyFlow *)arg1 ;
-(void)startConnection;
-(NSObject*<OS_dispatch_queue>)queue;
-(NWEndpoint *)remoteEndpoint;
-(void)setRemoteEndpoint:(NWEndpoint *)arg1 ;
-(void)setConnection:(NSObject*<OS_nw_connection>)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)readDataFromClient;
-(void)readMultipleFromClient;
-(void)readMultipleFromConnection;
-(void)readDataFromConnection;
-(void)writeMultipleToConnection:(id*)arg1 count:(unsigned)arg2 ;
-(void)writeDataToConnection:(id)arg1 ;
-(id)initWithAppProxyFlow:(id)arg1 ;
@end

