/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<CALNUNUserNotificationCenterProtocol>)userNotificationCenter;
-(void)removeDeliveredNotificationsWithIdentifiers:(id)arg1 ;
-(void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)_updatedRecord:(id)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(id<CALNUserNotificationCenterDelegate>)delegate;
-(id<CALNNotificationStorage>)storage;
-(BOOL)isActive;
-(CALNUNNotificationContentMapper *)notificationContentMapper;
-(void)setNotificationCategories:(id)arg1 ;
-(void)deactivate;
-(void)activate;
-(void)setDelegate:(id<CALNUserNotificationCenterDelegate>)arg1 ;
-(BOOL)replaceNotificationRequest:(id)arg1 error:(id*)arg2 ;
-(id)initWithBundleIdentifier:(id)arg1 userNotificationCenterFactory:(id)arg2 storage:(id)arg3 notificationIconCache:(id)arg4 ;
-(CALNUNNotificationRequestMapper *)notificationRequestMapper;
-(id)notificationCategories;
-(BOOL)addNotificationRequest:(id)arg1 error:(id*)arg2 ;
-(void)removeAllDeliveredNotifications;
-(id)deliveredNotifications;
-(CALNUNNotificationResponseMapper *)notificationResponseMapper;
-(CALNUNNotificationMapper *)notificationMapper;
-(void)collectSettingsStats:(id)arg1 ;
-(void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
@end

