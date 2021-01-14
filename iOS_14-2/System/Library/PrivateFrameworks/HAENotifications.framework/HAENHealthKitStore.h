/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HAENotifications.framework/HAENotifications
*/


@protocol OS_dispatch_queue;
@class NSObject, HKHealthStore;

@interface HAENHealthKitStore : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	HKHealthStore* _healthStore;

}
+(id)sharedInstance;
+(id)createHKCategorySampleForEvent:(id)arg1 ;
-(id)init;
-(id)saveNotificationEventToHealthKit:(id)arg1 ;
-(id)saveNotificationEventToHealthKit:(id)arg1 withDelegate:(id)arg2 ;
@end

