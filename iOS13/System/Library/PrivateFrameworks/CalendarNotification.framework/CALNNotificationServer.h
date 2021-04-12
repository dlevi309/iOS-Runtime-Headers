/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)_activate;
-(id<CALNNotificationStorage>)storage;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(void)setStorage:(id<CALNNotificationStorage>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)activate;
-(void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)deactivate;
-(void)_deactivate;
-(void)addRecord:(id)arg1 ;
-(void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(BOOL)isProtectedDataAvailable;
-(void)protectedDataDidBecomeAvailable;
-(void)receivedNotificationNamed:(id)arg1 ;
-(void)receivedAlarmNamed:(id)arg1 ;
-(void)didRegisterForAlarms;
-(void)handleBTAJob:(id)arg1 named:(const char*)arg2 ;
-(void)didRegisterForBackgroundTaskAgentJobs;
-(id<CALNUserNotificationCenter>)userNotificationCenter;
-(void)removeRecordWithSourceIdentifier:(id)arg1 sourceClientIdentifier:(id)arg2 ;
-(void)updateRecord:(id)arg1 ;
-(id)fetchRecordsWithSourceIdentifier:(id)arg1 ;
-(id)_notificationSourceMapWithNotificationSources:(id)arg1 ;
-(void)setNotificationSourceMap:(NSMutableDictionary *)arg1 ;
-(void)_didSetNotificationSources:(id)arg1 ;
-(NSMutableDictionary *)notificationSourceMap;
-(void)setIsProtectedDataAvailable:(BOOL)arg1 ;
-(id)_fetchRecordsWithSourceIdentifier:(id)arg1 ;
-(void)_addRecord:(id)arg1 ;
-(id<CALNAnalyticsHandler>)analyticsHandler;
-(void)_updateRecord:(id)arg1 ;
-(void)_removeRecordWithSourceIdentifier:(id)arg1 sourceClientIdentifier:(id)arg2 ;
-(id)_notificationRecordResponseFromNotificationResponse:(id)arg1 ;
-(id)notificationSourceForSourceIdentifier:(id)arg1 ;
-(id)initWithUserNotificationCenter:(id)arg1 storage:(id)arg2 analyticsHandler:(id)arg3 deviceLockObserver:(id)arg4 ;
-(void)setNotificationSources:(NSArray *)arg1 ;
-(NSArray *)notificationSources;
-(id)_notificationRecordWithSourceIdentifier:(id)arg1 sourceClientIdentifier:(id)arg2 ;
@end

