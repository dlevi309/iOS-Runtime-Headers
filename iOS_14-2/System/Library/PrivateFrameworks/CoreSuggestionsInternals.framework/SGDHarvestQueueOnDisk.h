/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <CoreSuggestionsInternals/SGDHarvestQueue.h>

@protocol OS_dispatch_queue;
@class NSString, SGDSqlHarvestQueueStore, NSObject, SGDHarvestQueueFileWriter, SGDHarvestQueueFileReader;

@interface SGDHarvestQueueOnDisk : SGDHarvestQueue {

	NSString* _dirPath;
	SGDSqlHarvestQueueStore* _store;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _backingQueue;
	SGDHarvestQueueFileWriter* _writerHighPriority;
	SGDHarvestQueueFileWriter* _writerLowPriority;
	SGDHarvestQueueFileReader* _reader;
	long long _idCounter;
	AQ _count;
	AQ _countHighPriority;
	AQ _maxQueueItems;
	AQ _pendingWrites;
	AQ _maxPendingWrites;
	id _lockStateChangeToken;

}

@property (assign,nonatomic) unsigned long long maxQueueItems; 
@property (assign,nonatomic) unsigned long long maxPendingWrites; 
-(void)popByItemId:(long long)arg1 callback:(/*^block*/id)arg2 ;
-(void)addItemWithSourceKey:(id)arg1 messageId:(id)arg2 highPriority:(BOOL)arg3 customPriorityCriteria:(unsigned char)arg4 item:(id)arg5 callback:(/*^block*/id)arg6 ;
-(unsigned long long)maxPendingWrites;
-(unsigned long long)maxQueueItems;
-(void)_openFilesForProcessingWhileLocked;
-(void)close;
-(void)_unlinkFileWithIdLocked:(int)arg1 ;
-(void)pop:(/*^block*/id)arg1 ;
-(unsigned long long)count;
-(void)_processPoppedItemResult:(SCD_Struct_SG22)arg1 callback:(/*^block*/id)arg2 ;
-(void)deleteWithItemId:(long long)arg1 fileId:(int)arg2 ;
-(void)_trimPermafailDirectory;
-(void)popByCustomPriorityCriteria:(unsigned char)arg1 callback:(/*^block*/id)arg2 ;
-(void)popHighPriority:(/*^block*/id)arg1 ;
-(void)setMaxPendingWrites:(unsigned long long)arg1 ;
-(void)setMaxQueueItems:(unsigned long long)arg1 ;
-(void)_read:(SCD_Struct_SG21)arg1 fileId:(int)arg2 callback:(/*^block*/id)arg3 ;
-(void)_flushFilesWhileUnlocked;
-(id)initWithDirectory:(id)arg1 ;
-(void)markAsFailedWithId:(long long)arg1 ;
-(void)countHighPriorityItems:(unsigned long long*)arg1 lowPriorityItems:(unsigned long long*)arg2 ;
-(void)performMaintenanceTasks;
-(void)popBySourceKey:(id)arg1 messageId:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)writePermafail:(id)arg1 ;
@end

