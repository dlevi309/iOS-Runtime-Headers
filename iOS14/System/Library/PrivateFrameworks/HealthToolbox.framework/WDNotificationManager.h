/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/HealthToolbox-Structs.h>
#import <libobjc.A.dylib/UNUserNotificationCenterDelegate.h>

@class NSMutableDictionary, HKNotificationStore, HKHealthStore, NSString;

@interface WDNotificationManager : NSObject <UNUserNotificationCenterDelegate> {

	os_unfair_lock_s _lock;
	NSMutableDictionary* _domainsToPolicies;
	HKNotificationStore* _notificationStore;
	HKHealthStore* _healthStore;

}

@property (nonatomic,readonly) HKHealthStore * healthStore;              //@synthesize healthStore=_healthStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)suppressBadgeNotifications;
+(void)setSuppressBadgeNotifications:(BOOL)arg1 ;
-(HKHealthStore *)healthStore;
-(id)initWithHealthStore:(id)arg1 ;
-(void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setBadge:(id)arg1 forDomain:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)userNotificationCenter:(id)arg1 openSettingsForNotification:(id)arg2 ;
-(void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)_lock_policyForNotification:(id)arg1 ;
-(void)setPolicy:(id)arg1 forDomain:(long long)arg2 ;
-(void)resetEmergencySOSBadge;
-(void)resetHealthRecordsDataBadge;
@end

