/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/_DKSyncCoordinatorEventNotificationDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface _DKSyncCoordinatorLogging : NSObject <_DKSyncCoordinatorEventNotificationDelegate> {

	NSObject*<OS_dispatch_queue> _notificationQueue;

}

@property (readonly) NSObject*<OS_dispatch_queue> notificationQueue;              //@synthesize notificationQueue=_notificationQueue - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)syncCoordinator:(id)arg1 didAddRemoteEventsWithStreamNameCounts:(id)arg2 events:(id)arg3 ;
-(void)syncCoordinator:(id)arg1 didApplyRemoteAdditionChangeSet:(id)arg2 ;
-(void)syncCoordinator:(id)arg1 didDeleteRemoteEventsWithCount:(unsigned long long)arg2 ;
-(void)syncCoordinator:(id)arg1 didApplyRemoteDeletionChangeSet:(id)arg2 ;
-(void)syncCoordinator:(id)arg1 didInsertLocalAdditionEventsWithStreamNameCounts:(id)arg2 ;
-(void)syncCoordinator:(id)arg1 didCreateAdditionChangeSet:(id)arg2 ;
-(void)syncCoordinator:(id)arg1 didInsertLocalDeletionEventsWithCount:(unsigned long long)arg2 ;
-(void)syncCoordinator:(id)arg1 didCreateDeletionChangeSet:(id)arg2 ;
-(id)portraitStreamNames;
-(void)_sendDistributedNotificationName:(id)arg1 object:(id)arg2 throttledActivityName:(id)arg3 ;
-(void)_sendDistributedNotificationName:(id)arg1 streamNameCounts:(id)arg2 ;
-(void)_sendDistributedNotificationName:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)notificationQueue;
-(id)typeValueWithStreamName:(id)arg1 ;
-(void)_updateSyncCounter:(id)arg1 streamNameCounts:(id)arg2 ;
-(void)_syncCoordinatorDidCreateChangeSetOfType:(id)arg1 ;
@end

