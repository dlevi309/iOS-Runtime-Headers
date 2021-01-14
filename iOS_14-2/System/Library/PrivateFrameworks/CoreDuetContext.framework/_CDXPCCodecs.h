/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
*/


@interface _CDXPCCodecs : NSObject
+(id)unsubscribeFromContextValueNotificationsEventWithRegistration:(id)arg1 deviceIDs:(id)arg2 error:(id*)arg3 ;
+(BOOL)addRegistration:(id)arg1 toDictionary:(id)arg2 error:(id*)arg3 ;
+(id)commonContextValueNotificationsEventWithType:(const char*)arg1 registration:(id)arg2 deviceIDs:(id)arg3 error:(id*)arg4 ;
+(id)errorFromReply:(id)arg1 ;
+(id)keyPathsFromDictionary:(id)arg1 error:(id*)arg2 ;
+(id)registrationFromDictionary:(id)arg1 error:(id*)arg2 ;
+(id)requestActivateDevicesEvent;
+(BOOL)addDeviceIDs:(id)arg1 toDictionary:(id)arg2 error:(id*)arg3 ;
+(BOOL)parseNotificationEvent:(id)arg1 registrationIdentifier:(id*)arg2 info:(id*)arg3 error:(id*)arg4 ;
+(id)fetchPropertiesReplyWithEvent:(id)arg1 error:(id)arg2 ;
+(id)fetchProxySourceDeviceUUIDEvent;
+(id)requestActivateDevicesReplyWithEvent:(id)arg1 error:(id)arg2 ;
+(id)subscribeToContextValueNotificationsReplyWithEvent:(id)arg1 error:(id)arg2 ;
+(id)keyPathsFromFetchPropertiesEvent:(id)arg1 error:(id*)arg2 ;
+(id)subscribeToContextValueNotificationsEventWithRegistration:(id)arg1 deviceIDs:(id)arg2 error:(id*)arg3 ;
+(BOOL)parseSubscribeToContextValueNotificationsEvent:(id)arg1 registration:(id*)arg2 deviceIDs:(id*)arg3 error:(id*)arg4 ;
+(id)deviceIDsFromDictionary:(id)arg1 error:(id*)arg2 ;
+(BOOL)addKeyPaths:(id)arg1 toDictionary:(id)arg2 error:(id*)arg3 ;
+(id)notificationEventWithRegistrationIdentifier:(id)arg1 info:(id)arg2 error:(id*)arg3 ;
+(id)messageTypeFromEvent:(id)arg1 ;
+(id)parseProxySourceDeviceUUIDEvent:(id)arg1 error:(id*)arg2 ;
+(id)fetchProxySourceDeviceUUIDReplyWithEvent:(id)arg1 sourceDeviceUUID:(id)arg2 error:(id)arg3 ;
+(void)addError:(id)arg1 toReply:(id)arg2 ;
+(id)fetchPropertiesEventWithRemoteKeyPaths:(id)arg1 error:(id*)arg2 ;
+(id)keepAliveReplyWithEvent:(id)arg1 error:(id)arg2 ;
+(BOOL)keepAliveFromKeepAliveEvent:(id)arg1 error:(id*)arg2 ;
+(id)unsubscribeFromContextValueNotificationsReplyWithEvent:(id)arg1 error:(id)arg2 ;
+(long long)eventTypeWithEvent:(id)arg1 ;
+(BOOL)parseUnsubscribeFromContextValueNotificationsEvent:(id)arg1 registration:(id*)arg2 deviceIDs:(id*)arg3 error:(id*)arg4 ;
+(id)keepAliveEventWithKeepAlive:(BOOL)arg1 error:(id*)arg2 ;
@end

