/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsSettings.framework/UserNotificationsSettings
*/

#import <libobjc.A.dylib/UNUserNotificationSettingsClientProtocol.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSXPCConnection, NSObject, NSString;

@interface UNUserNotificationSettingsServiceConnection : NSObject <UNUserNotificationSettingsClientProtocol> {

	NSMutableArray* _observers;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callOutQueue;

}

@property (nonatomic,retain) NSXPCConnection * connection;                           //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callOutQueue;              //@synthesize callOutQueue=_callOutQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)addObserver:(id)arg1 ;
-(void)_invalidate;
-(void)_queue_interruptedConnection;
-(void)replaceNotificationSettings:(id)arg1 forNotificationSourceIdentifier:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)callOutQueue;
-(id)init;
-(void)setCallOutQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_queue_removeObserver:(id)arg1 ;
-(void)replaceNotificationTopicSettings:(id)arg1 forNotificationSourceIdentifier:(id)arg2 topicIdentifier:(id)arg3 ;
-(id)notificationSystemSettings;
-(NSXPCConnection *)connection;
-(void)removeObserver:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)allNotificationSources;
-(void)_queue_invalidatedConnection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)_queue_ensureConnection;
-(void)setNotificationSystemSettings:(id)arg1 ;
-(void)_queue_addObserver:(id)arg1 ;
-(id)notificationSourceWithIdentifier:(id)arg1 ;
-(void)updateNotificationSourcesWithBundleIdentifiers:(id)arg1 ;
-(void)updateNotificationSystemSettings:(id)arg1 ;
-(id)notificationSourcesWithIdentifiers:(id)arg1 ;
@end

