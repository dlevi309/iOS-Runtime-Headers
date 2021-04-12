/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/

#import <IMSharedUtilities/IMEventNotificationQueueDelegate.h>

@class IMAutomaticEventNotificationQueue, IMEventListenerList, NSMutableArray, NSString;

@interface IMEventNotificationManager : NSObject <IMEventNotificationQueueDelegate> {

	IMAutomaticEventNotificationQueue* _notificationQueue;
	double _eventTimeout;
	IMEventListenerList* _eventListeners;
	NSMutableArray* _registeredNotificationQueues;
	long long _busyCount;

}

@property (nonatomic,readonly) IMAutomaticEventNotificationQueue * notificationQueue;              //@synthesize notificationQueue=_notificationQueue - In the implementation block
@property (nonatomic,readonly) IMEventListenerList * eventListeners;                               //@synthesize eventListeners=_eventListeners - In the implementation block
@property (nonatomic,readonly) NSMutableArray * registeredNotificationQueues;                      //@synthesize registeredNotificationQueues=_registeredNotificationQueues - In the implementation block
@property (assign) long long busyCount;                                                            //@synthesize busyCount=_busyCount - In the implementation block
@property (assign) double eventTimeout;                                                            //@synthesize eventTimeout=_eventTimeout - In the implementation block
@property (getter=isBusy,readonly) BOOL busy; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isBusy;
-(id)init;
-(long long)busyCount;
-(IMAutomaticEventNotificationQueue *)notificationQueue;
-(void)registerNotificationQueue:(id)arg1 ;
-(void)setBusyCount:(long long)arg1 ;
-(void)eventListenerDidFinish:(id)arg1 ;
-(void)cancelAllEventNotifications;
-(void)pauseEventNotifications:(BOOL)arg1 ;
-(double)eventTimeout;
-(void)eventNotificationQueue:(id)arg1 didChangeBusyState:(BOOL)arg2 ;
-(void)setEventTimeout:(double)arg1 ;
-(id)createEventListenerForNotificationName:(id)arg1 object:(id)arg2 ;
-(void)cancelEventNotificationsForEventHandler:(id)arg1 ;
-(IMEventListenerList *)eventListeners;
-(void)pushNotificationForEventHandler:(id)arg1 eventNotificationBlock:(/*^block*/id)arg2 ;
-(void)appendNotificationForEventHandler:(id)arg1 eventNotificationBlock:(/*^block*/id)arg2 ;
-(void)pushNotificationForEventHandler:(id)arg1 sender:(id)arg2 eventNotificationBlock:(/*^block*/id)arg3 ;
-(void)appendNotificationForEventHandler:(id)arg1 sender:(id)arg2 eventNotificationBlock:(/*^block*/id)arg3 ;
-(NSMutableArray *)registeredNotificationQueues;
-(void)registerEventListener:(id)arg1 ;
-(void)dealloc;
@end

