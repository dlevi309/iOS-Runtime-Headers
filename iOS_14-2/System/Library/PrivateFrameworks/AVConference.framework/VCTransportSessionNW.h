/*
* Generated on Thursday, January 14, 2021 at 2:25:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCTransportSession.h>

@protocol OS_nw_connection, OS_dispatch_queue;
@class NSString, NSObject;

@interface VCTransportSessionNW : VCTransportSession {

	NSString* _connectionID;
	NSObject*<OS_nw_connection> _connection;
	tagVCNWConnectionMonitorRef _monitor;
	/*function pointer*/void* _notificationHandler;
	/*function pointer*/void* _packetEventHandler;
	void* _handlerContext;
	NSObject*<OS_dispatch_queue> _handlerQueue;
	BOOL _didScheduleReceive;
	int _networkInterfaceType;
	BOOL _isIPv6;
	unsigned _networkMTU;

}

@property (readonly) NSObject*<OS_nw_connection> nwConnection;              //@synthesize connection=_connection - In the implementation block
-(void)start;
-(void)stop;
-(BOOL)isIPv6;
-(int)networkInterfaceType;
-(void)dealloc;
-(BOOL)setupNWConnection;
-(BOOL)initializeNetworkMTU;
-(BOOL)initializeIsIPv6;
-(void)initializeInterfaceType;
-(void)destroyNWMonitorInternal;
-(void)handleStateChanges:(int)arg1 error:(id)arg2 semaphore:(id)arg3 operationResult:(BOOL*)arg4 ;
-(BOOL)setStateChangeHandlerWithResult:(BOOL*)arg1 semaphore:(id)arg2 ;
-(void)createNWMonitor;
-(void)destroyNWMonitor;
-(id)initWithNWConnectionID:(id)arg1 handlerQueue:(id)arg2 context:(void*)arg3 notificationHandler:(/*function pointer*/void*)arg4 eventHandler:(/*function pointer*/void*)arg5 ;
-(int)createVFD:(int*)arg1 forStreamType:(unsigned)arg2 ;
-(int)dupNWConnectionBackingSocket;
-(NSObject*<OS_nw_connection>)nwConnection;
-(unsigned)networkMTU;
@end

