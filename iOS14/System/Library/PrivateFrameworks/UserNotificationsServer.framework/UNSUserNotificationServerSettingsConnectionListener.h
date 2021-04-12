/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/UNUserNotificationSettingsServerProtocol.h>
#import <libobjc.A.dylib/UNSNotificationSettingsServiceObserver.h>

@class NSMutableArray, NSXPCListener, UNSNotificationSettingsService, NSString;

@interface UNSUserNotificationServerSettingsConnectionListener : NSObject <NSXPCListenerDelegate, UNUserNotificationSettingsServerProtocol, UNSNotificationSettingsServiceObserver> {

	NSMutableArray* _connections;
	NSXPCListener* _listener;
	UNSNotificationSettingsService* _settingsService;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)replaceNotificationSettings:(id)arg1 forNotificationSourceIdentifier:(id)arg2 ;
-(void)_handleClientConnectionInvalidated:(id)arg1 ;
-(void)settingsService:(id)arg1 didUpdateNotificationSourcesForBundleIdentifiers:(id)arg2 ;
-(void)settingsService:(id)arg1 didUpdateNotificationSystemSettings:(id)arg2 ;
-(id)_currentConnection;
-(void)replaceNotificationTopicSettings:(id)arg1 forNotificationSourceIdentifier:(id)arg2 topicIdentifier:(id)arg3 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)getAllNotificationSourcesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getNotificationSystemSettingsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_handleClientConnectionInterrupted:(id)arg1 ;
-(void)getNotificationSources:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)getNotificationSource:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)resume;
-(id)initWithNotificationSettingsService:(id)arg1 ;
-(void)dealloc;
-(void)setNotificationSystemSettings:(id)arg1 ;
@end

