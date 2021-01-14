/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetSync.framework/CoreDuetSync
*/


@protocol _CDRemoteUserContextServer
@required
-(void)subscribeToDeviceStatusChangeNotificationsForDeviceTypes:(unsigned long long)arg1 handler:(/*^block*/id)arg2;
-(void)requestActivateDevicesWithHandler:(/*^block*/id)arg1;
-(id)sourceDeviceUUID;
-(void)subscribeToContextValueChangeNotificationsWithRegistration:(id)arg1 deviceIDs:(id)arg2 handler:(/*^block*/id)arg3;
-(void)fetchPropertiesOfRemoteKeyPaths:(id)arg1 handler:(/*^block*/id)arg2;
-(void)unsubscribeFromContextValueChangeNotificationsWithRegistration:(id)arg1 deviceIDs:(id)arg2 handler:(/*^block*/id)arg3;

@end

