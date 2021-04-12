/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol OS_dispatch_source, OS_xpc_object;
@class NSMutableSet, NSObject, NSSet;

@interface GEODaemon : NSObject {

	NSMutableSet* _servers;
	NSMutableSet* _peers;
	NSObject*<OS_dispatch_source> _sigInfoSrc;
	NSObject*<OS_dispatch_source> _sigTermSrc;
	NSObject*<OS_xpc_object> _listener;

}

@property (nonatomic,readonly) NSSet * peers;              //@synthesize peers=_peers - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(void)start;
-(id)initWithPort:(const char*)arg1 ;
-(void)_localeChanged:(id)arg1 ;
-(id)_createListenerWithQueue:(id)arg1 onPort:(const char*)arg2 ;
-(void)_handleNewConnection:(id)arg1 ;
-(id)_createPeerForConnection:(id)arg1 ;
-(void)peerDidConnect:(id)arg1 ;
-(void)handleIncomingMessage:(id)arg1 fromPeer:(id)arg2 ;
-(void)peerDidDisconnect:(id)arg1 ;
-(void)addServerInstance:(id)arg1 ;
-(void)addServerClass:(Class)arg1 ;
-(void)startServerClassIfNecessary:(Class)arg1 ;
-(NSSet *)peers;
@end

