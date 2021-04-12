/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_daemonConnection;
-(id)init;
-(id<ANAccountNotifierDelegate>)delegate;
-(void)setDelegate:(id<ANAccountNotifierDelegate>)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)dealloc;
-(void)addNotification:(id)arg1 ;
-(id)initWithCallbackMachService:(id)arg1 ;
-(void)_startNotificationCallbackListenerWithMachServiceName:(id)arg1 ;
-(void)_stopNotificationCallbackListener;
-(void)_disconnectFromDaemon;
-(id)_createDaemonConnection;
-(void)_daemonConnectionWasInvalidated;
-(void)_daemonConnectionWasInterrupted;
-(void)notificationWasActivated:(id)arg1 ;
-(void)notificationWasDismissed:(id)arg1 ;
-(void)notificationWasCleared:(id)arg1 ;
-(void)removeNotificationWithIdentifier:(id)arg1 ;
-(void)removeNotificationsWithEventIdentifier:(id)arg1 ;
@end

