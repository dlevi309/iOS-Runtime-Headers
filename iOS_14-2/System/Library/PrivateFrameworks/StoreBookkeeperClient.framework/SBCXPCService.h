/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)_serverDidLaunch;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)closeServiceConnection;
-(void)dealloc;
-(id)initWithClientConfiguration:(id)arg1 ;
-(void)didConnectToService;
-(BOOL)isConnectionConfigured;
-(SBCClientConfiguration *)clientConfiguration;
-(void)setClientConfiguration:(SBCClientConfiguration *)arg1 ;
-(void)_openServiceConnection;
-(id)newServiceConnection;
-(SBCXPCServiceInterface *)XPCServiceInterface;
-(void)setConnectionConfigured:(BOOL)arg1 ;
@end

