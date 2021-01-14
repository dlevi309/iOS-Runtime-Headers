/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
*/


@protocol OS_dispatch_queue;
#import <AppSupport/AppSupport-Structs.h>
@class NSString, NSLock, NSObject;

@interface CPDistributedNotificationCenter : NSObject {

	NSString* _centerName;
	NSLock* _lock;
	CFRunLoopSourceRef _receiveNotificationSource;
	BOOL _isServer;
	CFDictionaryRef _sendPorts;
	unsigned long long _startCount;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)_serverPortToNotificationCenterMapDispatchQueue;
+(id)centerNamed:(id)arg1 ;
+(id)centerForServerPort:(unsigned)arg1 ;
+(void)setCenter:(id)arg1 forServerPort:(unsigned)arg2 ;
+(CFDictionaryRef)_serverPortToNotificationCenterMap;
-(void)_createReceiveSourceForRunLoop:(CFRunLoopRef)arg1 ;
-(void)postNotificationName:(id)arg1 userInfo:(id)arg2 ;
-(void)postNotificationName:(id)arg1 ;
-(void)_checkIn;
-(void)startDeliveringNotificationsToRunLoop:(CFRunLoopRef)arg1 ;
-(id)_initWithServerName:(id)arg1 ;
-(void)deliverNotification:(id)arg1 userInfo:(id)arg2 ;
-(id)name;
-(void)_checkOutAndRemoveSource;
-(void)runServerOnCurrentThread;
-(void)_receivedCheckIn:(unsigned)arg1 auditToken:(SCD_Struct_CP3*)arg2 ;
-(void)_notificationServerWasRestarted;
-(void)runServer;
-(void)stopDeliveringNotifications;
-(void)startDeliveringNotificationsToMainThread;
-(BOOL)postNotificationName:(id)arg1 userInfo:(id)arg2 toBundleIdentifier:(id)arg3 ;
-(void)dealloc;
@end

