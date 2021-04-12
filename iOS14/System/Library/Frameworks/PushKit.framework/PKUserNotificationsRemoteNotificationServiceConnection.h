/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PushKit.framework/PushKit
*/

#import <libobjc.A.dylib/PKUserNotificationServerRemoteNotificationXPCClient.h>

@protocol OS_dispatch_queue;
@class NSMutableSet, NSXPCConnection, NSObject, NSString;

@interface PKUserNotificationsRemoteNotificationServiceConnection : NSObject <PKUserNotificationServerRemoteNotificationXPCClient> {

	NSMutableSet* _registries;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callOutQueue;
	NSString* _bundleIdentifier;

}

@property (nonatomic,retain) NSMutableSet * registries;                              //@synthesize registries=_registries - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                           //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callOutQueue;              //@synthesize callOutQueue=_callOutQueue - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)_invalidate;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)_queue_interruptedConnection;
-(NSMutableSet *)registries;
-(BOOL)allowsRemoteNotifications;
-(NSObject*<OS_dispatch_queue>)callOutQueue;
-(void)registerPushRegistry:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)remoteUserNotificationPayloadReceived:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(NSString *)bundleIdentifier;
-(void)setCallOutQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSXPCConnection *)connection;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)_queue_remoteUserNotificationPayloadReceived:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_queue_remoteUserNotificationsRegistrationSucceededWithDeviceToken:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_queue_invalidatedConnection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)_queue_ensureConnection;
-(void)setRegistries:(NSMutableSet *)arg1 ;
-(void)unregisterPushRegistry:(id)arg1 ;
@end

