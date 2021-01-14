/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol OS_dispatch_source, OS_xpc_object;
@class NSMutableDictionary, NSMutableSet, NSObject, NSSet;

@interface GEODaemon : NSObject {

	NSMutableDictionary* _servers;
	NSMutableSet* _peers;
	NSObject*<OS_dispatch_source> _sigInfoSrc;
	NSObject*<OS_dispatch_source> _sigTermSrc;
	NSObject*<OS_xpc_object> _listener;

}

@property (nonatomic,readonly) NSSet * peers;              //@synthesize peers=_peers - In the implementation block
-(NSSet *)peers;
-(void)peerDidConnect:(id)arg1 ;
-(id)init;
-(id)initWithPort:(const char*)arg1 ;
-(void)handleIncomingMessage:(id)arg1 fromPeer:(id)arg2 ;
-(void)start;
-(void)addServerClass:(Class)arg1 ;
-(void)peerDidDisconnect:(id)arg1 ;
-(void)_localeChanged:(id)arg1 ;
-(void)_handleNewConnection:(id)arg1 ;
-(id)description;
-(id)_createListenerWithQueue:(id)arg1 onPort:(const char*)arg2 ;
-(void)addServerInstance:(id)arg1 ;
-(void)startServerClassIfNecessary:(Class)arg1 ;
-(void)dealloc;
-(id)_createPeerForConnection:(id)arg1 ;
@end

