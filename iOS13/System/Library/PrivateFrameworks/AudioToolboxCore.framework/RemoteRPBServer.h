/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
*/


@protocol RPBServing;
@class NSXPCConnection;

@interface RemoteRPBServer : NSObject {

	unsigned _serverID;
	NSXPCConnection* _xpcConnection;
	id<RPBServing> _proxyInterface;

}

@property (assign) unsigned serverID;                            //@synthesize serverID=_serverID - In the implementation block
@property (retain) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (retain) id<RPBServing> proxyInterface;                //@synthesize proxyInterface=_proxyInterface - In the implementation block
-(id)description;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(id<RPBServing>)proxyInterface;
-(void)setProxyInterface:(id<RPBServing>)arg1 ;
-(id)initWithID:(unsigned)arg1 ;
-(unsigned)serverID;
-(void)setServerID:(unsigned)arg1 ;
@end

