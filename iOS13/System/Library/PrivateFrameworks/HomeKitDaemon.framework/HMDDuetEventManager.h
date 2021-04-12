/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue, _DKKnowledgeSaving, _DKKnowledgeQuerying;
@class _CDClientContext, NSObject, _DKKnowledgeStore;

@interface HMDDuetEventManager : HMFObject {

	_CDClientContext* _context;
	NSObject*<OS_dispatch_queue> _workQueue;
	id<_DKKnowledgeSaving> _saveStore;
	_DKKnowledgeStore* _deleteStore;
	id<_DKKnowledgeQuerying> _queryStore;

}

@property (nonatomic,retain) _CDClientContext * context;                          //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) id<_DKKnowledgeSaving> saveStore;                    //@synthesize saveStore=_saveStore - In the implementation block
@property (nonatomic,retain) _DKKnowledgeStore * deleteStore;                     //@synthesize deleteStore=_deleteStore - In the implementation block
@property (nonatomic,retain) id<_DKKnowledgeQuerying> queryStore;                 //@synthesize queryStore=_queryStore - In the implementation block
+(id)sharedInstance;
+(id)eventTypeAsString:(unsigned long long)arg1 ;
+(id)identifierForType:(unsigned long long)arg1 eventValue:(id)arg2 ;
+(id)eventStreamForType:(unsigned long long)arg1 ;
-(id)init;
-(_CDClientContext *)context;
-(void)setContext:(_CDClientContext *)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(_DKKnowledgeStore *)deleteStore;
-(id<_DKKnowledgeSaving>)saveStore;
-(void)_logToCoreDuetStoreEventWithType:(unsigned long long)arg1 metadata:(id)arg2 ;
-(void)_logEventWithType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 typeIdentifier:(id)arg4 metadata:(id)arg5 ;
-(id<_DKKnowledgeQuerying>)queryStore;
-(id)_queryEventsOfType:(unsigned long long)arg1 fromDate:(id)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 ;
-(void)_deleteEventsOfType:(unsigned long long)arg1 fromDate:(id)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 ;
-(id)_dumpEventsOfType:(unsigned long long)arg1 fromDate:(id)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 ;
-(void)logEventWithType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 typeIdentifier:(id)arg4 metadata:(id)arg5 ;
-(id)queryEventsOfType:(unsigned long long)arg1 fromDate:(id)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 ;
-(void)deleteEventsOfType:(unsigned long long)arg1 fromDate:(id)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 ;
-(void)resetAllEvents;
-(id)dumpEventsOfType:(unsigned long long)arg1 fromDate:(id)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 ;
-(id)dumpAllEvents;
-(void)setSaveStore:(id<_DKKnowledgeSaving>)arg1 ;
-(void)setDeleteStore:(_DKKnowledgeStore *)arg1 ;
-(void)setQueryStore:(id<_DKKnowledgeQuerying>)arg1 ;
@end

