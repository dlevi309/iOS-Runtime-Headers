/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BrookServices.framework/BrookServices
*/

#import <libobjc.A.dylib/UNUserNotificationCenterDelegatePrivate.h>

@class UNUserNotificationCenter, NSMutableDictionary, NSString;

@interface BRKUserNotificationManager : NSObject <UNUserNotificationCenterDelegatePrivate> {

	UNUserNotificationCenter* _notificationCenter;
	NSMutableDictionary* _responseHandlers;
	NSMutableDictionary* _categories;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(id)categoryForIdentifier:(id)arg1 ;
-(void)handleNotificationResponse:(id)arg1 ;
-(void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)removeNotification:(id)arg1 ;
-(void)addCategories:(id)arg1 ;
-(id)postNotification:(id)arg1 trigger:(id)arg2 responseHandler:(/*^block*/id)arg3 destinations:(unsigned long long)arg4 ;
-(void)_deliveredNotificationIdentifiersWithCategoryIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_pendingNotificationIdentifiersWithCategoryIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)postNotification:(id)arg1 destinations:(unsigned long long)arg2 ;
-(void)isNotificationPendingOrDeliveredWithCategoryIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeNotificationsWithCategoryIdentifier:(id)arg1 ;
@end

