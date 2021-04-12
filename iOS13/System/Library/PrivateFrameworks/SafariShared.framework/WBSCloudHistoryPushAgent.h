/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/WBSCloudHistoryPushAgent.h>

@protocol WBSCloudHistoryPushAgent <NSObject>
@required
-(void)clearAcknowledgedPushNotifications;
-(void)acknowledgePendingPushNotifications;
-(void)getPushNotifications:(/*^block*/id)arg1;
-(void)queryMemoryFootprint:(/*^block*/id)arg1;

@end


@protocol OS_dispatch_queue;
@class NSXPCListener, APSConnection, NSObject, NSString;

@interface WBSCloudHistoryPushAgent : NSObject <NSXPCListenerDelegate, WBSCloudHistoryPushAgent> {

	NSXPCListener* _xpcListener;
	APSConnection* _pushConnection;
	NSObject*<OS_dispatch_queue> _pushNotificationStateQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4 ;
-(id)_userDefaults;
-(id)_pushTopic;
-(void)clearAcknowledgedPushNotifications;
-(void)acknowledgePendingPushNotifications;
-(void)getPushNotifications:(/*^block*/id)arg1 ;
-(void)_setHasUnacknowledgedPushNotifications:(BOOL)arg1 ;
-(void)queryMemoryFootprint:(/*^block*/id)arg1 ;
-(BOOL)_hasUnacknowledgedPushNotifications;
-(BOOL)_hasAcknowledgedPushNotifications;
-(void)_setHasAcknowlegedPushNotifications:(BOOL)arg1 ;
@end

