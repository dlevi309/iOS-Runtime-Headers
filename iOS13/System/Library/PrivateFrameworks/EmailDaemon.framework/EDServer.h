/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/EFLoggable.h>

@class NSXPCListener, NSMutableArray, EDDaemonInterfaceFactory, NSXPCListenerEndpoint, NSString;

@interface EDServer : NSObject <NSXPCListenerDelegate, EFLoggable> {

	NSXPCListener* _listener;
	NSMutableArray* _connectedClients;
	EDDaemonInterfaceFactory* _daemonInterfaceFactory;

}

@property (nonatomic,retain) NSXPCListener * listener;                                       //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) NSMutableArray * connectedClients;                              //@synthesize connectedClients=_connectedClients - In the implementation block
@property (nonatomic,retain) EDDaemonInterfaceFactory * daemonInterfaceFactory;              //@synthesize daemonInterfaceFactory=_daemonInterfaceFactory - In the implementation block
@property (nonatomic,readonly) NSXPCListenerEndpoint * serverXPCEndpoint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(NSXPCListener *)listener;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)start;
-(void)setListener:(NSXPCListener *)arg1 ;
-(NSMutableArray *)connectedClients;
-(void)test_tearDown;
-(void)setConnectedClients:(NSMutableArray *)arg1 ;
-(EDDaemonInterfaceFactory *)daemonInterfaceFactory;
-(id)initWithDaemonInterfaceFactory:(id)arg1 listener:(id)arg2 ;
-(void)removeRemoteClient:(id)arg1 ;
-(void)addRemoteClient:(id)arg1 ;
-(id)initWithDaemonInterfaceFactory:(id)arg1 ;
-(NSXPCListenerEndpoint *)serverXPCEndpoint;
-(void)setDaemonInterfaceFactory:(EDDaemonInterfaceFactory *)arg1 ;
@end

