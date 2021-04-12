/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <libobjc.A.dylib/UNUserNotificationCenterDelegate.h>

@protocol HFUserNotificationPresentationHandling;
@class UNUserNotificationCenter, NAFuture, NSHashTable, NSString;

@interface HFUserNotificationCenter : NSObject <UNUserNotificationCenterDelegate> {

	UNUserNotificationCenter* _userNotificationCenter;
	id<HFUserNotificationPresentationHandling> _presentationHandler;
	NAFuture* _notificationSettingsFuture;
	NSHashTable* _observers;

}

@property (nonatomic,retain) UNUserNotificationCenter * userNotificationCenter;                                  //@synthesize userNotificationCenter=_userNotificationCenter - In the implementation block
@property (nonatomic,retain) NAFuture * notificationSettingsFuture;                                              //@synthesize notificationSettingsFuture=_notificationSettingsFuture - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                                            //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic,__weak) id<HFUserNotificationPresentationHandling> presentationHandler;              //@synthesize presentationHandler=_presentationHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)notificationSettings;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_applicationDidEnterBackground;
-(void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)userNotificationCenter:(id)arg1 openSettingsForNotification:(id)arg2 ;
-(void)_applicationWillEnterForeground;
-(void)setPresentationHandler:(id<HFUserNotificationPresentationHandling>)arg1 ;
-(id<HFUserNotificationPresentationHandling>)presentationHandler;
-(UNUserNotificationCenter *)userNotificationCenter;
-(void)setUserNotificationCenter:(UNUserNotificationCenter *)arg1 ;
-(void)setNotificationSettingsFuture:(NAFuture *)arg1 ;
-(NAFuture *)notificationSettingsFuture;
@end

