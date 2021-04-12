/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol DEDXPCConnectorDaemonDelegate, OS_os_log;
@class NSXPCConnection, NSObject, DEDXPCInbound, NSXPCListener, NSString;

@interface DEDXPCConnector : NSObject <NSXPCListenerDelegate> {

	BOOL _isDaemon;
	BOOL _started;
	NSXPCConnection* _connection;
	id<DEDXPCConnectorDaemonDelegate> _daemonDelegate;
	NSObject*<OS_os_log> _log;
	DEDXPCInbound* _inbound;
	NSXPCListener* _listener;
	unsigned long long _connType;

}

@property (retain) NSObject*<OS_os_log> log;                                      //@synthesize log=_log - In the implementation block
@property (retain) DEDXPCInbound * inbound;                                       //@synthesize inbound=_inbound - In the implementation block
@property (retain) NSXPCConnection * connection;                                  //@synthesize connection=_connection - In the implementation block
@property (retain) NSXPCListener * listener;                                      //@synthesize listener=_listener - In the implementation block
@property (assign) unsigned long long connType;                                   //@synthesize connType=_connType - In the implementation block
@property (assign) BOOL isDaemon;                                                 //@synthesize isDaemon=_isDaemon - In the implementation block
@property (assign) BOOL started;                                                  //@synthesize started=_started - In the implementation block
@property (__weak) id<DEDXPCConnectorDaemonDelegate> daemonDelegate;              //@synthesize daemonDelegate=_daemonDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSXPCListener *)listener;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)start;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setListener:(NSXPCListener *)arg1 ;
-(NSObject*<OS_os_log>)log;
-(BOOL)started;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(BOOL)isDaemon;
-(DEDXPCInbound *)inbound;
-(void)setInbound:(DEDXPCInbound *)arg1 ;
-(void)setStarted:(BOOL)arg1 ;
-(void)setIsDaemon:(BOOL)arg1 ;
-(void)configureXPCInbound:(id)arg1 ;
-(void)configureConnectionType:(unsigned long long)arg1 ;
-(void)configureDaemonModeWithDelegate:(id)arg1 ;
-(void)setConnType:(unsigned long long)arg1 ;
-(void)setDaemonDelegate:(id<DEDXPCConnectorDaemonDelegate>)arg1 ;
-(void)startForDaemon;
-(void)startForApp;
-(unsigned long long)connType;
-(BOOL)validateConnection:(id)arg1 ;
-(id<DEDXPCConnectorDaemonDelegate>)daemonDelegate;
-(id)_whitelistedXPCInterface;
-(id)connectionWithEndpoint:(id)arg1 forMachService:(id)arg2 ;
@end

