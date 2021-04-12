/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
*/

#import <libobjc.A.dylib/CKPermanentWritableEventStore.h>
#import <libobjc.A.dylib/CKPermanentReadableEventStore.h>
#import <libobjc.A.dylib/CKPermanentEventStorePrivate.h>

@class CKKnowledgeStore;

@interface CKPermanentEventStore : NSObject <CKPermanentWritableEventStore, CKPermanentReadableEventStore, CKPermanentEventStorePrivate> {

	 knowledgeStore;

}

@property (readonly,nonatomic) CKKnowledgeStore * backingStore; 
+(id)defaultStore;
+(id)createEventWithIdentifier:(id)arg1 dateInterval:(id)arg2 metadata:(id)arg3 fromEvent:(id)arg4 ;
-(id)init;
-(CKKnowledgeStore *)backingStore;
-(void)deleteInteractionsWithBundleId:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)deleteInteractionsWithBundleId:(id)arg1 error:(id*)arg2 ;
-(void)historicEventWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)recordEvent:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)recordInteraction:(id)arg1 bundleId:(id)arg2 error:(id*)arg3 ;
-(void)recordInteraction:(id)arg1 bundleId:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)recordEvent:(id)arg1 error:(id*)arg2 ;
-(BOOL)recordInteraction:(id)arg1 error:(id*)arg2 ;
-(void)recordInteraction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)historicEventsWithSourceBundleIdentifier:(id)arg1 andIntent:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)historicEventsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)historicEventsAndReturnError:(id*)arg1 ;
-(void)setFirstSeen:(id)arg1 forEventWithIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setLastSeen:(id)arg1 forEventWithIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setFrequency:(long long)arg1 forEventWithIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setLastDuration:(double)arg1 forEventWithIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setTotalDuration:(double)arg1 forEventWithIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)deleteEventWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)deleteEventWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithKnowledgeStore:(id)arg1 ;
@end

