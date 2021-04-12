/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DuetRecommendation.framework/DuetRecommendation
*/

#import <libobjc.A.dylib/_DRTopicInterestModeling.h>

@protocol OS_dispatch_queue;
@class NSObject, _DKKnowledgeStorage;

@interface _DRTopicInterestModel : NSObject <_DRTopicInterestModeling> {

	NSObject*<OS_dispatch_queue> _syncQueue;
	_DKKnowledgeStorage* _storage;

}

@property (retain) NSObject*<OS_dispatch_queue> syncQueue;              //@synthesize syncQueue=_syncQueue - In the implementation block
@property (retain) _DKKnowledgeStorage * storage;                       //@synthesize storage=_storage - In the implementation block
+(id)topicSelectedCategory;
+(id)predicateForTopicInteractionsAfter:(id)arg1 ;
+(id)topicPresentedCategory;
+(id)predicateForTopicInteractionsBefore:(id)arg1 ;
+(id)newsStorageDirectory;
+(id)topicActionCategoryType;
+(id)predicateForTopicsWithPrefix:(id)arg1 ;
-(void)setStorage:(_DKKnowledgeStorage *)arg1 ;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(id)init;
-(_DKKnowledgeStorage *)storage;
-(id)initWithStorageDirectory:(id)arg1 localOnly:(BOOL)arg2 ;
-(void)setSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)recordSelectionOfTopics:(id)arg1 onDate:(id)arg2 ;
-(id)computeSummaryWithFilter:(id)arg1 ;
-(void)purgeEntriesEarlierThanDate:(id)arg1 ;
-(void)enumerateTopicCountsWithFilter:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)purgeEntriesWithPrefix:(id)arg1 earlierThanDate:(id)arg2 ;
-(void)recordPresentationOfTopics:(id)arg1 onDate:(id)arg2 ;
-(id)initWithStorageDirectory:(id)arg1 ;
@end

