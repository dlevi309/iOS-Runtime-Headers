/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/WBSCloudHistoryPushAgent.h>

@protocol WBSCloudHistoryPushAgent <NSObject>
@required
-(void)acknowledgePendingPushNotifications;
-(void)queryMemoryFootprint:(/*^block*/id)arg1;
-(void)clearAcknowledgedPushNotifications;
-(void)getPushNotifications:(/*^block*/id)arg1;

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
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(id)init;
-(void)acknowledgePendingPushNotifications;
-(BOOL)_hasUnacknowledgedPushNotifications;
-(void)queryMemoryFootprint:(/*^block*/id)arg1 ;
-(BOOL)_hasAcknowledgedPushNotifications;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)clearAcknowledgedPushNotifications;
-(void)_setHasAcknowlegedPushNotifications:(BOOL)arg1 ;
-(void)getPushNotifications:(/*^block*/id)arg1 ;
-(void)_setHasUnacknowledgedPushNotifications:(BOOL)arg1 ;
-(id)_userDefaults;
-(id)_pushTopic;
@end

