/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/MuxNotificationSinkDelegate.h>

@class NSSet, NSXPCConnection, NSXPCListenerEndpoint, MuxNotificationSink, NSError;

@interface CoreTelephonyClientMux : NSObject <MuxNotificationSinkDelegate> {

	map<__unsafe_unretained id, (anonymous namespace)::DelegateContext, std::__1::less<__unsafe_unretained id>, std::__1::allocator<std::__1::pair<const __unsafe_unretained id, (anonymous namespace)::DelegateContext> > >* _delegates;
	NSSet* _currentSelectorSet;
	NSXPCConnection* _connection;
	queue* _xpcQueue;
	NSXPCListenerEndpoint* _endpoint;
	MuxNotificationSink* _notificationSink;
	NSError* _reconnectError;

}

@property (nonatomic,retain) NSXPCConnection * connection;                        //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) queue* xpcQueue;                                     //@synthesize xpcQueue=_xpcQueue - In the implementation block
@property (nonatomic,retain) NSXPCListenerEndpoint * endpoint;                    //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,retain) MuxNotificationSink * notificationSink;              //@synthesize notificationSink=_notificationSink - In the implementation block
@property (nonatomic,retain) NSError * reconnectError;                            //@synthesize reconnectError=_reconnectError - In the implementation block
-(id)init;
-(void)dealloc;
-(id)_connection;
-(NSXPCListenerEndpoint *)endpoint;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(void)_connect_sync;
-(id)synchronousProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(id)initWithSink:(id)arg1 ;
-(void)sink:(id)arg1 handleNotification:(id)arg2 ;
-(void)_initializeConnection_sync;
-(void)_setReconnectError_sync:(id)arg1 ;
-(void)_ensureConnectionSetup_sync;
-(void)_computeNotificationSet_sync:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_registerForNotifications_sync:(id)arg1 shouldForce:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)proxyWithErrorHandler_sync:(/*^block*/id)arg1 ;
-(void)_computeNotificationSetForced_sync:(/*^block*/id)arg1 ;
-(void)_ensureConnectionSetup_sync:(BOOL)arg1 ;
-(void)_computeNotificationSetForced_sync;
-(id)initWithEndpoint:(id)arg1 sink:(id)arg2 ;
-(void)addDelegate:(id)arg1 queue:(queue*)arg2 ;
-(id)proxyWithQueue:(queue*)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)_computeNotificationSet_sync:(/*^block*/id)arg1 ;
-(queue*)xpcQueue;
-(void)setXpcQueue:(queue*)arg1 ;
-(MuxNotificationSink *)notificationSink;
-(void)setNotificationSink:(MuxNotificationSink *)arg1 ;
-(NSError *)reconnectError;
-(void)setReconnectError:(NSError *)arg1 ;
@end

