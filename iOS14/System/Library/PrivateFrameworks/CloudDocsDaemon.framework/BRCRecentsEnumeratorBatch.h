/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


@protocol OS_dispatch_queue, NSFileProviderEnumerationObserver;
@class NSMutableOrderedSet, NSObject;

@interface BRCRecentsEnumeratorBatch : NSObject {

	NSMutableOrderedSet* _toIndexItems;
	NSMutableOrderedSet* _deletedItemIDs;
	NSObject*<OS_dispatch_queue> _queue;
	id<NSFileProviderEnumerationObserver> _observer;
	unsigned long long _rank;

}

@property (assign,nonatomic) unsigned long long rank;              //@synthesize rank=_rank - In the implementation block
-(void)setRank:(unsigned long long)arg1 ;
-(id)init;
-(id)description;
-(unsigned long long)rank;
-(unsigned long long)batchCount;
-(void)addIndexOfItem:(id)arg1 ;
-(void)addDeletionOfFileObjectID:(id)arg1 rank:(unsigned long long)arg2 ;
-(void)listItems:(/*^block*/id)arg1 ;
@end

