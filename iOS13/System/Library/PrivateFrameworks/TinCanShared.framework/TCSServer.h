/*
* Generated on Monday, March 1, 2021 at 2:35:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id<TCSServerXPC>)delegate;
-(void)setDelegate:(id<TCSServerXPC>)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(BOOL)hasValidConnection;
-(void)_removeConnection:(id)arg1 ;
-(void)_addConnection:(id)arg1 ;
-(void)disconnectCall:(id)arg1 ;
-(void)sessionViewControllerViewDidAppear;
-(void)getCall:(/*^block*/id)arg1 ;
-(void)getLogEntryForCallWithUniqueProxyIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setUplinkMuted:(BOOL)arg1 for:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setClientRecordingInProgress:(BOOL)arg1 ;
-(void)ensureUplinkMuted;
-(void)queryIsTinCannable:(id)arg1 ;
-(void)callConnected:(id)arg1 ;
-(void)callStatusChanged:(id)arg1 ;
-(void)remoteUplinkMuteChanged:(id)arg1 ;
-(void)_enumerateConnectionsWithBlock:(/*^block*/id)arg1 ;
@end

