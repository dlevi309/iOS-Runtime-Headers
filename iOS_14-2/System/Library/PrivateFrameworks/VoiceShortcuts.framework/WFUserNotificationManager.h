/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/

#import <libobjc.A.dylib/UNUserNotificationCenterDelegate.h>

@class UNUserNotificationCenter, NSMutableSet, NSMutableDictionary, NSString;

@interface WFUserNotificationManager : NSObject <UNUserNotificationCenterDelegate> {

	UNUserNotificationCenter* _notificationCenter;
	NSMutableSet* _categories;
	NSMutableDictionary* _observers;

}

@property (nonatomic,retain) NSMutableSet * categories;                                    //@synthesize categories=_categories - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * observers;                              //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) UNUserNotificationCenter * notificationCenter;              //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCategories:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)observers;
-(id)init;
-(UNUserNotificationCenter *)notificationCenter;
-(NSMutableSet *)categories;
-(void)removeStaleNotificationsWithCompletion:(/*^block*/id)arg1 ;
-(void)setObservers:(NSMutableDictionary *)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)categoryIdentifiers;
-(void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)registerCategoriesIfNecessary:(id)arg1 ;
-(void)addObserver:(id)arg1 forCategory:(id)arg2 ;
-(void)removeNotificationsWithIdentifiers:(id)arg1 ;
@end

