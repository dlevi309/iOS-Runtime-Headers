/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HMFoundation/HMFMessageTransport.h>
#import <libobjc.A.dylib/HMFMessageTransportDelegate.h>

@class NSMutableArray, NSXPCConnection, NSDictionary, NSString;

@interface HMXPCClient : HMFMessageTransport <HMFMessageTransportDelegate> {

	NSMutableArray* _reconnectionHandlers;
	BOOL _connectionValid;
	BOOL _requiresCheckin;
	BOOL _notifyRegistered;
	int _notifyRegisterToken;
	NSXPCConnection* _connection;
	NSDictionary* _userInfo;

}

@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) BOOL connectionValid;                      //@synthesize connectionValid=_connectionValid - In the implementation block
@property (assign,nonatomic) BOOL requiresCheckin;                      //@synthesize requiresCheckin=_requiresCheckin - In the implementation block
@property (assign,nonatomic) int notifyRegisterToken;                   //@synthesize notifyRegisterToken=_notifyRegisterToken - In the implementation block
@property (assign,nonatomic) BOOL notifyRegistered;                     //@synthesize notifyRegistered=_notifyRegistered - In the implementation block
@property (copy,readonly) NSDictionary * userInfo;                      //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)remoteObjectInterface;
+(id)exportedInterface;
-(void)sendMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setNotifyRegistered:(BOOL)arg1 ;
-(NSDictionary *)userInfo;
-(id)init;
-(BOOL)connectionValid;
-(void)setConnectionValid:(BOOL)arg1 ;
-(BOOL)notifyRegistered;
-(void)setRequiresCheckin:(BOOL)arg1 ;
-(id)initWithUserInfo:(id)arg1 ;
-(NSXPCConnection *)connection;
-(void)setNotifyRegisterToken:(int)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)registerReconnectionHandler:(/*^block*/id)arg1 ;
-(void)messageTransport:(id)arg1 didReceiveMessage:(id)arg2 ;
-(BOOL)requiresCheckin;
-(int)notifyRegisterToken;
-(void)dealloc;
@end

