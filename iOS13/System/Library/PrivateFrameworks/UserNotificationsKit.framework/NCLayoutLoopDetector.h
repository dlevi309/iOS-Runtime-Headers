/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
*/


@class NSMutableArray;

@interface NCLayoutLoopDetector : NSObject {

	NSMutableArray* _notificationLayoutsInProgress;

}

@property (retain) NSMutableArray * notificationLayoutsInProgress;              //@synthesize notificationLayoutsInProgress=_notificationLayoutsInProgress - In the implementation block
-(id)init;
-(id)_savedNotificationLayoutsInProgress;
-(void)_saveNotificationLayoutsInProgress;
-(BOOL)layoutInProgressContainsNotificationRequest:(id)arg1 ;
-(void)addNotificationRequestToLayoutsInProgress:(id)arg1 ;
-(void)removeNotificationRequestFromLayoutsInProgress:(id)arg1 ;
-(NSMutableArray *)notificationLayoutsInProgress;
-(void)setNotificationLayoutsInProgress:(NSMutableArray *)arg1 ;
@end

