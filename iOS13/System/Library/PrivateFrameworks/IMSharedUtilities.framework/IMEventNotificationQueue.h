/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(long long)count;
-(id<IMEventNotificationQueueDelegate>)delegate;
-(void)setDelegate:(id<IMEventNotificationQueueDelegate>)arg1 ;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isPaused;
-(BOOL)isBusy;
-(BOOL)isScheduled;
-(void)setPaused:(BOOL)arg1 ;
-(void)_setBusy:(BOOL)arg1 ;
-(void)cancelEventNotificationsForNotificationTarget:(id)arg1 ;
-(void)cancelAllEventNotifications;
-(void)pushEventTarget:(id)arg1 eventNotificationBlock:(/*^block*/id)arg2 ;
-(void)appendEventTarget:(id)arg1 eventNotificationBlock:(/*^block*/id)arg2 ;
-(void)pushEventTarget:(id)arg1 sender:(id)arg2 eventNotificationBlock:(/*^block*/id)arg3 ;
-(void)appendEventTarget:(id)arg1 sender:(id)arg2 eventNotificationBlock:(/*^block*/id)arg3 ;
-(void)_processQueue;
-(void)_dispatchProcessQueue;
-(void)_didChangeBusyState:(BOOL)arg1 ;
-(void)_invokeEvent:(id)arg1 ;
-(void)_willProcessQueue;
-(void)_invokeNotifications;
-(void)_didProcessQueue;
-(void)_didAddNotification:(id)arg1 ;
-(void)_didCancelNotifications;
-(void)appendEventNotification:(id)arg1 ;
-(void)pushEventNotification:(id)arg1 ;
-(void)_scheduleIfNeeded:(BOOL)arg1 ;
-(void)_didChangePausedState:(BOOL)arg1 ;
-(BOOL)containsNotificationTarget:(id)arg1 ;
-(IMDoubleLinkedList *)eventNotificationList;
@end

