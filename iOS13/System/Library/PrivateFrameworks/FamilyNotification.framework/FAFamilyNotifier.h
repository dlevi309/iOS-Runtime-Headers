/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FamilyNotification.framework/FamilyNotification
*/

#import <libobjc.A.dylib/FAFamilyNotifierRemoteObjectProtocol.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol FAFamilyNotificationDelegate;
@class NSXPCConnection, NSLock, NSXPCListener, NSString;

@interface FAFamilyNotifier : NSObject <FAFamilyNotifierRemoteObjectProtocol, NSXPCListenerDelegate> {

	NSXPCConnection* _conn;
	NSLock* _connLock;
	NSXPCListener* _listener;
	NSString* _identifier;
	NSString* _serviceName;
	id<FAFamilyNotificationDelegate> _delegate;

}

@property (readonly) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (readonly) NSString * serviceName;                               //@synthesize serviceName=_serviceName - In the implementation block
@property (__weak) id<FAFamilyNotificationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<FAFamilyNotificationDelegate>)delegate;
-(void)setDelegate:(id<FAFamilyNotificationDelegate>)arg1 ;
-(NSString *)identifier;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSString *)serviceName;
-(void)removeAllNotifications;
-(void)deliverNotification:(id)arg1 ;
-(void)removeNotificationWithIdentifier:(id)arg1 ;
-(id)agentConnection;
-(id)_pendingNotificationsWithClientIdentifier:(id)arg1 ;
-(void)_agentConnectionWasInterrupted;
-(void)_agentConnectionWasInvalidated;
-(void)_agentConnectionFailedToBootstrap;
-(void)didActivateNotification:(id)arg1 ;
-(void)didDismissNotification:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 machServiceName:(id)arg2 ;
-(id)pendingNotifications;
-(id)_pendingNotificationsForAllClients;
-(void)didClearNotification:(id)arg1 ;
@end

