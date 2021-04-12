/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/UNUserNotificationCenterDelegate.h>
#import <libobjc.A.dylib/CALNUserNotificationCenter.h>

@protocol CALNUserNotificationCenterDelegate, CALNUNUserNotificationCenterProtocol, CALNNotificationStorage;
@class CALNUNNotificationMapper, CALNUNNotificationRequestMapper, CALNUNNotificationContentMapper, CALNUNNotificationResponseMapper, NSString;

@interface CALNUNUserNotificationCenter : NSObject <UNUserNotificationCenterDelegate, CALNUserNotificationCenter> {

	BOOL _active;
	id<CALNUserNotificationCenterDelegate> _delegate;
	id<CALNUNUserNotificationCenterProtocol> _userNotificationCenter;
	id<CALNNotificationStorage> _storage;
	CALNUNNotificationMapper* _notificationMapper;
	CALNUNNotificationRequestMapper* _notificationRequestMapper;
	CALNUNNotificationContentMapper* _notificationContentMapper;
	CALNUNNotificationResponseMapper* _notificationResponseMapper;

}

@property (nonatomic,readonly) id<CALNUNUserNotificationCenterProtocol> userNotificationCenter;              //@synthesize userNotificationCenter=_userNotificationCenter - In the implementation block
@property (nonatomic,readonly) id<CALNNotificationStorage> storage;                                          //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) CALNUNNotificationMapper * notificationMapper;                                //@synthesize notificationMapper=_notificationMapper - In the implementation block
@property (nonatomic,readonly) CALNUNNotificationRequestMapper * notificationRequestMapper;                  //@synthesize notificationRequestMapper=_notificationRequestMapper - In the implementation block
@property (nonatomic,readonly) CALNUNNotificationContentMapper * notificationContentMapper;                  //@synthesize notificationContentMapper=_notificationContentMapper - In the implementation block
@property (nonatomic,readonly) CALNUNNotificationResponseMapper * notificationResponseMapper;                //@synthesize notificationResponseMapper=_notificationResponseMapper - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                                                    //@synthesize active=_active - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CALNUserNotificationCenterDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
+(void)_addSettingName:(id)arg1 value:(id)arg2 toStatsPayload:(id)arg3 forTopicIdentifier:(id)arg4 ;
+(id)_statsPayloadKeyForSettingName:(id)arg1 topicIdentifier:(id)arg2 ;
-(id<CALNNotificationStorage>)storage;
-(id<CALNUserNotificationCenterDelegate>)delegate;
-(void)setDelegate:(id<CALNUserNotificationCenterDelegate>)arg1 ;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(void)activate;
-(void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)deactivate;
-(void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setNotificationCategories:(id)arg1 ;
-(id)notificationCategories;
-(void)removeDeliveredNotificationsWithIdentifiers:(id)arg1 ;
-(id)deliveredNotifications;
-(void)removeAllDeliveredNotifications;
-(id<CALNUNUserNotificationCenterProtocol>)userNotificationCenter;
-(BOOL)addNotificationRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)replaceNotificationRequest:(id)arg1 error:(id*)arg2 ;
-(CALNUNNotificationMapper *)notificationMapper;
-(CALNUNNotificationRequestMapper *)notificationRequestMapper;
-(id)_updatedRecord:(id)arg1 ;
-(CALNUNNotificationContentMapper *)notificationContentMapper;
-(CALNUNNotificationResponseMapper *)notificationResponseMapper;
-(void)collectSettingsStats:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 userNotificationCenterFactory:(id)arg2 storage:(id)arg3 notificationIconCache:(id)arg4 ;
@end

