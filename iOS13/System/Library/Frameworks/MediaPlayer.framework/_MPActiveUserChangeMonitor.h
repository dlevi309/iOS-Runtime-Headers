/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@protocol OS_dispatch_source, _MPActiveUserChangeMonitorDelegate;
#import <MediaPlayer/MediaPlayer-Structs.h>
@class NSSet, NSMutableSet, NSObject;

@interface _MPActiveUserChangeMonitor : NSObject {

	os_unfair_lock_s _stateLock;
	NSSet* _expectedNotifications;
	NSMutableSet* _receivedNotifications;
	NSObject*<OS_dispatch_source> _notificationTimer;
	id<_MPActiveUserChangeMonitorDelegate> _delegate;

}

@property (nonatomic,readonly) NSSet * expectedNotifications;                                     //@synthesize expectedNotifications=_expectedNotifications - In the implementation block
@property (nonatomic,copy) NSMutableSet * receivedNotifications;                                  //@synthesize receivedNotifications=_receivedNotifications - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> notificationTimer;                     //@synthesize notificationTimer=_notificationTimer - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s stateLock;                                        //@synthesize stateLock=_stateLock - In the implementation block
@property (assign,nonatomic,__weak) id<_MPActiveUserChangeMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<_MPActiveUserChangeMonitorDelegate>)delegate;
-(void)setDelegate:(id<_MPActiveUserChangeMonitorDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(os_unfair_lock_s)stateLock;
-(void)ingestNotificationName:(id)arg1 ;
-(void)_startNotificationTimerWithEventHandler:(/*^block*/id)arg1 ;
-(void)_cancelNotificationTimerWithReason:(id)arg1 ;
-(NSSet *)expectedNotifications;
-(NSMutableSet *)receivedNotifications;
-(void)setReceivedNotifications:(NSMutableSet *)arg1 ;
-(NSObject*<OS_dispatch_source>)notificationTimer;
-(void)setNotificationTimer:(NSObject*<OS_dispatch_source>)arg1 ;
@end

