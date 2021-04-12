/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
*/


@protocol RPBInspecting;
@class NSXPCConnection;

@interface RPBClientConnection : NSObject {

	NSXPCConnection* _xpconnection;
	id<RPBInspecting> _proxyInterface;

}

@property (retain) NSXPCConnection * xpconnection;                //@synthesize xpconnection=_xpconnection - In the implementation block
@property (retain) id<RPBInspecting> proxyInterface;              //@synthesize proxyInterface=_proxyInterface - In the implementation block
-(id<RPBInspecting>)proxyInterface;
-(void)setProxyInterface:(id<RPBInspecting>)arg1 ;
-(NSXPCConnection *)xpconnection;
-(void)setXpconnection:(NSXPCConnection *)arg1 ;
@end

