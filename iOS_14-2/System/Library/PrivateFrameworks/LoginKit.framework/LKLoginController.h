/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
*/

#import <libobjc.A.dylib/LKLoginDaemonProtocol.h>

@class NSXPCConnection;

@interface LKLoginController : NSObject <LKLoginDaemonProtocol> {

	NSXPCConnection* _connection;
	/*^block*/id _completionHandler;

}

@property (retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
+(id)sharedController;
-(id)proxy;
-(id)init;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)checkInWithCurrentEnvironment:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)chooseUserWithIdentifier:(id)arg1 inClassWithID:(id)arg2 password:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)loginAppleID:(id)arg1 password:(id)arg2 localLoginOnly:(BOOL)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)saveClassConfiguration:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)triggerLocalUserSwitchTestForType:(unsigned long long)arg1 count:(long long)arg2 username:(id)arg3 password:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)interruptLocalUserSwitchTest;
-(void)isReadyToLoginWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)isReadyToLogoutWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateGlobalDefaultsValue:(id)arg1 forKey:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)logoutWithLogoutType:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)recentUsers;
@end

