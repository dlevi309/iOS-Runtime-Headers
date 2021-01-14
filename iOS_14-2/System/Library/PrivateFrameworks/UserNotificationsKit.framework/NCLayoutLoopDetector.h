/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject;

@interface NCLayoutLoopDetector : NSObject {

	NSMutableArray* _notificationLayoutsInProgress;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (retain) NSMutableArray * notificationLayoutsInProgress;              //@synthesize notificationLayoutsInProgress=_notificationLayoutsInProgress - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                //@synthesize queue=_queue - In the implementation block
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)_savedNotificationLayoutsInProgress;
-(void)_saveNotificationLayoutsInProgress;
-(BOOL)layoutInProgressContainsNotificationRequest:(id)arg1 ;
-(void)addNotificationRequestToLayoutsInProgress:(id)arg1 ;
-(void)removeNotificationRequestFromLayoutsInProgress:(id)arg1 ;
-(NSMutableArray *)notificationLayoutsInProgress;
-(void)setNotificationLayoutsInProgress:(NSMutableArray *)arg1 ;
@end

