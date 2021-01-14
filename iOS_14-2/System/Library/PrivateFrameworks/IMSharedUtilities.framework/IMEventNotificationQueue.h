/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@protocol IMEventNotificationQueueDelegate;
@class IMDoubleLinkedList;

@interface IMEventNotificationQueue : NSObject {

	BOOL _paused;
	BOOL _scheduled;
	BOOL _busy;
	id<IMEventNotificationQueueDelegate> _delegate;
	IMDoubleLinkedList* _eventNotificationList;

}

@property (nonatomic,readonly) IMDoubleLinkedList * eventNotificationList;              //@synthesize eventNotificationList=_eventNotificationList - In the implementation block
@property (getter=isScheduled,readonly) BOOL scheduled;                                 //@synthesize scheduled=_scheduled - In the implementation block
@property (__weak) id<IMEventNotificationQueueDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (getter=isBusy,readonly) BOOL busy;                                           //@synthesize busy=_busy - In the implementation block
@property (readonly) long long count; 
@property (getter=isPaused) BOOL paused;                                                //@synthesize paused=_paused - In the implementation block
-(BOOL)isBusy;
-(void)_setBusy:(BOOL)arg1 ;
-(id)init;
-(id<IMEventNotificationQueueDelegate>)delegate;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(long long)count;
-(void)cancelEventNotificationsForNotificationTarget:(id)arg1 ;
-(void)cancelAllEventNotifications;
-(void)pushEventTarget:(id)arg1 eventNotificationBlock:(/*^block*/id)arg2 ;
-(void)appendEventTarget:(id)arg1 eventNotificationBlock:(/*^block*/id)arg2 ;
-(void)pushEventTarget:(id)arg1 sender:(id)arg2 eventNotificationBlock:(/*^block*/id)arg3 ;
-(void)appendEventTarget:(id)arg1 sender:(id)arg2 eventNotificationBlock:(/*^block*/id)arg3 ;
-(void)setDelegate:(id<IMEventNotificationQueueDelegate>)arg1 ;
-(void)_processQueue;
-(void)_dispatchProcessQueue;
-(void)_didChangeBusyState:(BOOL)arg1 ;
-(void)_invokeEvent:(id)arg1 ;
-(void)_willProcessQueue;
-(void)_invokeNotifications;
-(void)_didProcessQueue;
-(void)_didAddNotification:(id)arg1 ;
-(void)_didCancelNotifications;
-(void)_scheduleIfNeeded:(BOOL)arg1 ;
-(void)appendEventNotification:(id)arg1 ;
-(void)pushEventNotification:(id)arg1 ;
-(void)_didChangePausedState:(BOOL)arg1 ;
-(BOOL)containsNotificationTarget:(id)arg1 ;
-(IMDoubleLinkedList *)eventNotificationList;
-(BOOL)isScheduled;
-(BOOL)isPaused;
@end

