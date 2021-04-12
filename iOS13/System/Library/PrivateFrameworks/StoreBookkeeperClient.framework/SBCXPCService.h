/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/StoreBookkeeperClient
*/


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, SBCClientConfiguration, SBCXPCServiceInterface;

@interface SBCXPCService : NSObject {

	BOOL _connectionConfigured;
	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _xpcConnection;
	SBCClientConfiguration* _clientConfiguration;
	SBCXPCServiceInterface* _XPCServiceInterface;

}

@property (readonly) NSObject*<OS_dispatch_queue> queue;                          //@synthesize queue=_queue - In the implementation block
@property (retain) NSXPCConnection * xpcConnection;                               //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (readonly) SBCClientConfiguration * clientConfiguration;                //@synthesize clientConfiguration=_clientConfiguration - In the implementation block
@property (readonly) SBCXPCServiceInterface * XPCServiceInterface;                //@synthesize XPCServiceInterface=_XPCServiceInterface - In the implementation block
@property (getter=isConnectionConfigured) BOOL connectionConfigured;              //@synthesize connectionConfigured=_connectionConfigured - In the implementation block
+(Class)XPCServiceInterfaceClass;
+(id)newListener;
+(id)XPCInterfaceDebugDescription;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)_serverDidLaunch;
-(id)initWithClientConfiguration:(id)arg1 ;
-(void)didConnectToService;
-(BOOL)isConnectionConfigured;
-(SBCClientConfiguration *)clientConfiguration;
-(void)setClientConfiguration:(SBCClientConfiguration *)arg1 ;
-(void)_openServiceConnection;
-(void)closeServiceConnection;
-(id)newServiceConnection;
-(SBCXPCServiceInterface *)XPCServiceInterface;
-(void)setConnectionConfigured:(BOOL)arg1 ;
@end

