/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CALNUNUserNotificationCenterProtocol.h>

@class UNUserNotificationCenter, NSString;

@interface CALNUNDefaultUserNotificationCenter : NSObject <CALNUNUserNotificationCenterProtocol> {

	UNUserNotificationCenter* _userNotificationCenter;

}

@property (nonatomic,readonly) UNUserNotificationCenter * userNotificationCenter;               //@synthesize userNotificationCenter=_userNotificationCenter - In the implementation block
@property (assign,nonatomic,__weak) id<UNUserNotificationCenterDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<UNUserNotificationCenterDelegate>)delegate;
-(void)setDelegate:(id<UNUserNotificationCenterDelegate>)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(id)notificationSettings;
-(void)setNotificationCategories:(id)arg1 ;
-(id)notificationCategories;
-(void)setWantsNotificationResponsesDelivered;
-(void)removeDeliveredNotificationsWithIdentifiers:(id)arg1 ;
-(id)deliveredNotifications;
-(void)removeAllDeliveredNotifications;
-(id)notificationSettingsForTopics;
-(UNUserNotificationCenter *)userNotificationCenter;
-(BOOL)addNotificationRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)replaceContentForRequestWithIdentifier:(id)arg1 replacementContent:(id)arg2 error:(id*)arg3 ;
@end

