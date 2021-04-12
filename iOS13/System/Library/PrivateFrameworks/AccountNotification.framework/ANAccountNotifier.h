/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccountNotification.framework/AccountNotification
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/ANClientCallbackProtocol.h>

@protocol ANAccountNotifierDelegate;
@class NSXPCConnection, NSXPCListener, NSString;

@interface ANAccountNotifier : NSObject <NSXPCListenerDelegate, ANClientCallbackProtocol> {

	NSXPCConnection* _daemonConnection;
	NSXPCListener* _bulletinResponseListener;
	NSString* _callbackMachService;
	id<ANAccountNotifierDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ANAccountNotifierDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<ANAccountNotifierDelegate>)delegate;
-(void)setDelegate:(id<ANAccountNotifierDelegate>)arg1 ;
-(id)_daemonConnection;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)addNotification:(id)arg1 ;
-(void)_disconnectFromDaemon;
-(void)removeNotificationsWithEventIdentifier:(id)arg1 ;
-(id)initWithCallbackMachService:(id)arg1 ;
-(void)_startNotificationCallbackListenerWithMachServiceName:(id)arg1 ;
-(void)_stopNotificationCallbackListener;
-(id)_createDaemonConnection;
-(void)_daemonConnectionWasInvalidated;
-(void)_daemonConnectionWasInterrupted;
-(void)notificationWasActivated:(id)arg1 ;
-(void)notificationWasDismissed:(id)arg1 ;
-(void)notificationWasCleared:(id)arg1 ;
-(void)removeNotificationWithIdentifier:(id)arg1 ;
@end

