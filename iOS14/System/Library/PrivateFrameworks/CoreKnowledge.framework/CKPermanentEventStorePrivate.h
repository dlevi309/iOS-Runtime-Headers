/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
*/

@class CKKnowledgeStore;


@protocol CKPermanentEventStorePrivate
@property (readonly,nonatomic) CKKnowledgeStore * backingStore; 
@required
-(CKKnowledgeStore *)backingStore;
-(void)historicEventsWithCompletionHandler:(/*^block*/id)arg1;
-(id)historicEventsAndReturnError:(id*)arg1;
-(void)setFirstSeen:(id)arg1 forEventWithIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)setLastSeen:(id)arg1 forEventWithIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)setFrequency:(long long)arg1 forEventWithIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)setLastDuration:(double)arg1 forEventWithIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)setTotalDuration:(double)arg1 forEventWithIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(BOOL)deleteEventWithIdentifier:(id)arg1 error:(id*)arg2;
-(void)deleteEventWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end

