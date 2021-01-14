/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@protocol AMSUserNotificationStrategy;
@interface AMSUserNotificationCenter : NSObject {

	id<AMSUserNotificationStrategy> _strategy;

}

@property (nonatomic,readonly) id<AMSUserNotificationStrategy> strategy;              //@synthesize strategy=_strategy - In the implementation block
+(BOOL)badgeBundleId:(id)arg1 badgeId:(id)arg2 enabled:(BOOL)arg3 error:(id*)arg4 ;
+(id)postNotification:(id)arg1 bag:(id)arg2 centerBundleId:(id)arg3 ;
+(id)removeNotificationWithIdentifier:(id)arg1 centerBundleId:(id)arg2 logKey:(id)arg3 scheduledOnly:(BOOL)arg4 ;
+(Class)_determineStrategyForBundleId:(id)arg1 ;
+(id)activeNotificationsWithCenterBundleId:(id)arg1 ;
+(id)removeNotification:(id)arg1 centerBundleId:(id)arg2 ;
-(id<AMSUserNotificationStrategy>)strategy;
@end

