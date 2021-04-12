/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UsageTracking.framework/UsageTracking
*/


@protocol _DKKnowledgeDeleting_DKKnowledgeQuerying;
@interface USWebHistory : NSObject {

	id<_DKKnowledgeDeleting><_DKKnowledgeQuerying> _eventStorage;

}

@property (readonly) id<_DKKnowledgeDeleting><_DKKnowledgeQuerying> eventStorage;              //@synthesize eventStorage=_eventStorage - In the implementation block
-(id)init;
-(id<_DKKnowledgeDeleting><_DKKnowledgeQuerying>)eventStorage;
-(id)initWithEventStorage:(id)arg1 ;
-(void)_deleteEventsWithPredicate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteHistoryForURL:(id)arg1 webApplication:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deleteHistoryForDomain:(id)arg1 webApplication:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deleteHistoryDuringInterval:(id)arg1 webApplication:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deleteAllHistoryForApplication:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

