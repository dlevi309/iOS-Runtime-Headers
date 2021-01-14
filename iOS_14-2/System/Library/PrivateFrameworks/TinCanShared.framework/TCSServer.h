/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared
*/

#import <TinCanShared/TinCanShared-Structs.h>
#import <libobjc.A.dylib/TCSServerXPC.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol TCSServerXPC;
@class NSXPCListener, NSMutableArray, NSString;

@interface TCSServer : NSObject <TCSServerXPC, NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	os_unfair_lock_s _connectionsLock;
	NSMutableArray* _connections;
	id<TCSServerXPC> _delegate;

}

@property (assign,nonatomic,__weak) id<TCSServerXPC> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)callStatusChanged:(id)arg1 ;
-(id)init;
-(id<TCSServerXPC>)delegate;
-(void)_removeConnection:(id)arg1 ;
-(void)disconnectCall:(id)arg1 ;
-(void)_addConnection:(id)arg1 ;
-(void)setDelegate:(id<TCSServerXPC>)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(BOOL)hasValidConnection;
-(void)sessionViewControllerViewDidAppear;
-(void)getCall:(/*^block*/id)arg1 ;
-(void)getLogEntryForCallWithUniqueProxyIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setUplinkMuted:(BOOL)arg1 for:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)ensureUplinkMuted;
-(void)queryIsTinCannable:(id)arg1 ;
-(void)callConnected:(id)arg1 ;
-(void)remoteUplinkMuteChanged:(id)arg1 ;
-(void)_enumerateConnectionsWithBlock:(/*^block*/id)arg1 ;
@end

