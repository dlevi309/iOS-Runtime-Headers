/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UsageTracking.framework/UsageTracking
*/


@protocol _DKKnowledgeEventStreamDeleting;
#import <UsageTracking/UsageTracking-Structs.h>
@interface USWebHistory : NSObject {

	BOOL _usageTrusted;
	id<_DKKnowledgeEventStreamDeleting> _eventStorage;

}

@property (readonly) BOOL usageTrusted;                                             //@synthesize usageTrusted=_usageTrusted - In the implementation block
@property (readonly) id<_DKKnowledgeEventStreamDeleting> eventStorage;              //@synthesize eventStorage=_eventStorage - In the implementation block
-(id)init;
-(id)initWithAuditToken:(SCD_Struct_US3)arg1 ;
-(BOOL)usageTrusted;
-(id)initWithEventStorage:(id)arg1 usageTrusted:(BOOL)arg2 ;
-(void)_deleteEventsWithWebUsagePredicate:(id)arg1 videoUsagePredicate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_deleteEventsWithPredicate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id<_DKKnowledgeEventStreamDeleting>)eventStorage;
-(void)deleteHistoryForURL:(id)arg1 webApplication:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deleteHistoryForDomain:(id)arg1 webApplication:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deleteHistoryDuringInterval:(id)arg1 webApplication:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deleteAllHistoryForApplication:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

