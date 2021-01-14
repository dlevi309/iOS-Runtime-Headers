/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/


@protocol OS_dispatch_queue, REMXPCSuggestedAttributesPerformer;
@class REMStore, NSObject;

@interface REMSuggestedAttributesPerformer : NSObject {

	REMStore* _store;
	NSObject*<OS_dispatch_queue> _queue;
	id<REMXPCSuggestedAttributesPerformer> _q_cachedXPCPerformer;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                       //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) REMStore * store;                                                         //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) id<REMXPCSuggestedAttributesPerformer> q_cachedXPCPerformer;              //@synthesize q_cachedXPCPerformer=_q_cachedXPCPerformer - In the implementation block
-(void)setStore:(REMStore *)arg1 ;
-(id)resultFromPerformingSwiftInvocation:(id)arg1 parametersData:(id)arg2 storages:(id)arg3 error:(id*)arg4 ;
-(REMStore *)store;
-(id)q_syncSuggestedAttributesPerformerWithReason:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)preWarmModels;
-(id<REMXPCSuggestedAttributesPerformer>)q_cachedXPCPerformer;
-(id)q_resolveSuggestedAttributesPerformerWithReason:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)setQ_cachedXPCPerformer:(id<REMXPCSuggestedAttributesPerformer>)arg1 ;
-(id)initWithQueue:(id)arg1 store:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

