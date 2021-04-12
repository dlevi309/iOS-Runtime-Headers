/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HMFoundation/HMFMessageTransport.h>
#import <libobjc.A.dylib/HMFMessageTransportDelegate.h>

@class NSXPCConnection, NSString;

@interface HMXPCClient : HMFMessageTransport <HMFMessageTransportDelegate> {

	BOOL _connectionValid;
	BOOL _requiresCheckin;
	BOOL _notifyRegistered;
	int _notifyRegisterToken;
	NSXPCConnection* _connection;
	/*^block*/id _reconnectionHandler;

}

@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) BOOL connectionValid;                      //@synthesize connectionValid=_connectionValid - In the implementation block
@property (assign,nonatomic) BOOL requiresCheckin;                      //@synthesize requiresCheckin=_requiresCheckin - In the implementation block
@property (assign,nonatomic) int notifyRegisterToken;                   //@synthesize notifyRegisterToken=_notifyRegisterToken - In the implementation block
@property (assign,nonatomic) BOOL notifyRegistered;                     //@synthesize notifyRegistered=_notifyRegistered - In the implementation block
@property (nonatomic,copy) id reconnectionHandler;                      //@synthesize reconnectionHandler=_reconnectionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)sendMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)messageTransport:(id)arg1 didReceiveMessage:(id)arg2 ;
-(BOOL)notifyRegistered;
-(int)notifyRegisterToken;
-(BOOL)connectionValid;
-(id)reconnectionHandler;
-(void)setRequiresCheckin:(BOOL)arg1 ;
-(void)setConnectionValid:(BOOL)arg1 ;
-(BOOL)requiresCheckin;
-(void)setNotifyRegisterToken:(int)arg1 ;
-(void)setNotifyRegistered:(BOOL)arg1 ;
-(void)setReconnectionHandler:(id)arg1 ;
-(void)registerReconnectionHandler:(/*^block*/id)arg1 ;
@end

