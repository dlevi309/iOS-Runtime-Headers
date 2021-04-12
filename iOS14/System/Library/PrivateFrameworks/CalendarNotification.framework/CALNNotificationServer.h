/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/

#import <libobjc.A.dylib/CADModule.h>
#import <libobjc.A.dylib/CALNUserNotificationCenterDelegate.h>
#import <libobjc.A.dylib/CALNNotificationManager.h>

@protocol CALNUserNotificationCenter, OS_dispatch_queue, CALNNotificationStorage, CALNAnalyticsHandler;
@class NSObject, NSMutableDictionary, NSArray, NSString;

@interface CALNNotificationServer : NSObject <CADModule, CALNUserNotificationCenterDelegate, CALNNotificationManager> {

	BOOL _active;
	BOOL _isProtectedDataAvailable;
	id<CALNUserNotificationCenter> _userNotificationCenter;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableDictionary* _notificationSourceMap;
	id<CALNNotificationStorage> _storage;
	id<CALNAnalyticsHandler> _analyticsHandler;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                             //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * notificationSourceMap;                          //@synthesize notificationSourceMap=_notificationSourceMap - In the implementation block
@property (nonatomic,retain) id<CALNNotificationStorage> storage;                                  //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) id<CALNAnalyticsHandler> analyticsHandler;                          //@synthesize analyticsHandler=_analyticsHandler - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                                          //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) BOOL isProtectedDataAvailable;                                        //@synthesize isProtectedDataAvailable=_isProtectedDataAvailable - In the implementation block
@property (nonatomic,readonly) id<CALNUserNotificationCenter> userNotificationCenter;              //@synthesize userNotificationCenter=_userNotificationCenter - In the implementation block
@property (nonatomic,readonly) NSArray * notificationSources; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CALNUserNotificationCenter>)userNotificationCenter;
-(void)setStorage:(id<CALNNotificationStorage>)arg1 ;
-(void)didRegisterForAlarms;
-(void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)receivedNotificationNamed:(id)arg1 ;
-(void)_addRecord:(id)arg1 ;
-(id)fetchRecordsWithSourceIdentifier:(id)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(void)receivedAlarmNamed:(id)arg1 ;
-(id<CALNNotificationStorage>)storage;
-(id)_notificationRecordWithSourceIdentifier:(id)arg1 sourceClientIdentifier:(id)arg2 ;
-(BOOL)isActive;
-(void)protectedDataDidBecomeAvailable;
-(void)_deactivate;
-(void)setNotificationSources:(NSArray *)arg1 ;
-(void)deactivate;
-(void)_didSetNotificationSources:(id)arg1 ;
-(void)activate;
-(void)_activate;
-(void)removeRecordWithSourceIdentifier:(id)arg1 sourceClientIdentifier:(id)arg2 ;
-(NSMutableDictionary *)notificationSourceMap;
-(void)_removeRecordWithSourceIdentifier:(id)arg1 sourceClientIdentifier:(id)arg2 ;
-(NSArray *)notificationSources;
-(void)setNotificationSourceMap:(NSMutableDictionary *)arg1 ;
-(void)_updateRecord:(id)arg1 ;
-(void)addRecord:(id)arg1 ;
-(id)_notificationRecordResponseFromNotificationResponse:(id)arg1 ;
-(id)notificationSourceForSourceIdentifier:(id)arg1 ;
-(id)initWithUserNotificationCenter:(id)arg1 storage:(id)arg2 analyticsHandler:(id)arg3 deviceLockObserver:(id)arg4 ;
-(void)setIsProtectedDataAvailable:(BOOL)arg1 ;
-(BOOL)isProtectedDataAvailable;
-(void)updateRecord:(id)arg1 ;
-(id<CALNAnalyticsHandler>)analyticsHandler;
-(id)_fetchRecordsWithSourceIdentifier:(id)arg1 ;
-(id)_notificationSourceMapWithNotificationSources:(id)arg1 ;
-(void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
@end

