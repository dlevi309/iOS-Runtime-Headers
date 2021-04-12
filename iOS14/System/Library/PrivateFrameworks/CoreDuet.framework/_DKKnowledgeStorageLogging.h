/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/_DKKnowledgeStorageEventNotificationDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface _DKKnowledgeStorageLogging : NSObject <_DKKnowledgeStorageEventNotificationDelegate> {

	NSObject*<OS_dispatch_queue> _notificationQueue;

}
-(id)init;
-(void)knowledgeStorage:(id)arg1 didInsertLocalEventsWithStreamNameCounts:(id)arg2 ;
-(void)knowledgeStorage:(id)arg1 didTombstoneEventsWithStreamNameCounts:(id)arg2 ;
-(void)knowledgeStorage:(id)arg1 didDeleteEventsWithStreamNameCounts:(id)arg2 ;
-(void)knowledgeStorage:(id)arg1 didInsertEventsWithStreamNameCounts:(id)arg2 ;
@end

