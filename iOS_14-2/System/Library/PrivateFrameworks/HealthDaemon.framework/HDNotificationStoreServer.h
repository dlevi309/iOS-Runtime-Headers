/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDStandardTaskServer.h>
#import <libobjc.A.dylib/HKNotificationStoreServer.h>

@class HDNotificationManager, NSString;

@interface HDNotificationStoreServer : HDStandardTaskServer <HKNotificationStoreServer> {

	HDNotificationManager* _notificationManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createTaskServerWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 error:(id*)arg5 ;
+(id)taskIdentifier;
+(id)requiredEntitlements;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)remote_fetchBadgeForDomain:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_setBadge:(id)arg1 forDomain:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_postCompanionUserNotificationOfType:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_postNotificationWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

