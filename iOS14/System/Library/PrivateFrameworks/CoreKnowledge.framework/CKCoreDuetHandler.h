/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
*/


@interface CKCoreDuetHandler : NSObject
+(id)duetKnowledgeStore;
+(void)duetEventsWithIdentifier:(id)arg1 inStreamNamed:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 limit:(unsigned long long)arg5 completionHandler:(/*^block*/id)arg6 ;
+(void)saveEvents:(id)arg1 toStreamNamed:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)removeAllFromStreamNamed:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

