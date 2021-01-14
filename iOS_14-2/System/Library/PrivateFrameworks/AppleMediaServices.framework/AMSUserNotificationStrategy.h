/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@protocol AMSUserNotificationStrategy
@required
+(id)_activeNotificationsWithCenterBundleId:(id)arg1;
+(BOOL)_badgeBundleId:(id)arg1 increment:(BOOL)arg2 error:(id*)arg3;
+(id)_postNotification:(id)arg1 bag:(id)arg2 centerBundleId:(id)arg3;
+(id)_removeNotification:(id)arg1 centerBundleId:(id)arg2;
+(id)_removeNotificationWithIdentifier:(id)arg1 centerBundleId:(id)arg2 logKey:(id)arg3 scheduledOnly:(BOOL)arg4;

@end

