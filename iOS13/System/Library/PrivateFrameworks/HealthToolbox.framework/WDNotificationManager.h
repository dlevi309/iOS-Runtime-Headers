/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/HealthToolbox-Structs.h>
#import <libobjc.A.dylib/UNUserNotificationCenterDelegate.h>

@class UNUserNotificationCenter, NSMutableDictionary, HKHealthStore, NSString;

@interface WDNotificationManager : NSObject <UNUserNotificationCenterDelegate> {

	UNUserNotificationCenter* _notificationCenter;
	os_unfair_lock_s _lock;
	NSMutableDictionary* _domainsToPolicies;
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
-(void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)userNotificationCenter:(id)arg1 openSettingsForNotification:(id)arg2 ;
-(id)initWithHealthStore:(id)arg1 ;
-(void)setBadge:(id)arg1 forDomain:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)_lock_policyForNotification:(id)arg1 ;
-(void)setPolicy:(id)arg1 forDomain:(long long)arg2 ;
-(void)resetEmergencySOSBadge;
-(void)resetHealthRecordsDataBadge;
@end

