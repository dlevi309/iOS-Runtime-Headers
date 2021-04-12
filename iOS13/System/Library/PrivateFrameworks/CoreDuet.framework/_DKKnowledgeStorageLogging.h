/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/_DKKnowledgeStorageEventNotificationDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface _DKKnowledgeStorageLogging : NSObject <_DKKnowledgeStorageEventNotificationDelegate> {

	NSObject*<OS_dispatch_queue> _notificationQueue;

}

@property (readonly) NSObject*<OS_dispatch_queue> notificationQueue;              //@synthesize notificationQueue=_notificationQueue - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)knowledgeStorage:(id)arg1 didInsertEventsWithStreamNameCounts:(id)arg2 ;
-(void)knowledgeStorage:(id)arg1 didDeleteEventsWithStreamNameCounts:(id)arg2 ;
-(void)knowledgeStorage:(id)arg1 didInsertLocalEventsWithStreamNameCounts:(id)arg2 ;
-(void)knowledgeStorage:(id)arg1 didTombstoneEventsWithStreamNameCounts:(id)arg2 ;
-(id)portraitStreamNames;
-(void)_sendDistributedNotificationName:(id)arg1 object:(id)arg2 throttledActivityName:(id)arg3 ;
-(id)streamNamesNotificationWhitelist;
-(void)_updateCounter:(id)arg1 streamNameCounts:(id)arg2 ;
-(void)_sendDistributedNotificationName:(id)arg1 streamNameCounts:(id)arg2 ;
-(void)_sendDistributedNotificationName:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)notificationQueue;
@end

