/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@protocol _DKKnowledgeEventStreamDeleting
@required
-(unsigned long long)deleteAllEventsMatchingPredicate:(id)arg1 error:(id*)arg2;
-(unsigned long long)deleteAllEventsInEventStream:(id)arg1 error:(id*)arg2;
-(void)deleteAllEventsMatchingPredicate:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)deleteAllEventsInEventStream:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3;

@end

