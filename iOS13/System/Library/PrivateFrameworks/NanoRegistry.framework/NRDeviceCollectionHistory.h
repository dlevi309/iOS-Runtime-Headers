/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <libobjc.A.dylib/NRMutableStateParentDelegate.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableOrderedSet, NRMutableDeviceCollection, NSMutableArray, NRSwitchRecordCollection, NSMutableDictionary, NRPBDeviceCollectionHistory;

@interface NRDeviceCollectionHistory : NSObject <NRMutableStateParentDelegate, NSCopying, NSSecureCoding, NSFastEnumeration> {

	NSMutableOrderedSet* _observers;
	long long _maxHistoryDepth;
	AB _atomicDirty;
	os_unfair_lock_s _observerLock;
	os_unfair_lock_s _cacheLock;
	NRMutableDeviceCollection* _deviceCollection;
	unsigned long long _startIndex;
	NSMutableArray* _history;
	NRSwitchRecordCollection* _switchRecords;
	NSMutableDictionary* _historyStateCache;
	NSMutableArray* _historyStateCacheMRU;
	NSMutableArray* _historyStateCacheIndex;

}

@property (assign,nonatomic) unsigned long long startIndex;                               //@synthesize startIndex=_startIndex - In the implementation block
@property (nonatomic,retain) NSMutableArray * history;                                    //@synthesize history=_history - In the implementation block
@property (nonatomic,retain) NRSwitchRecordCollection * switchRecords;                    //@synthesize switchRecords=_switchRecords - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * historyStateCache;                     //@synthesize historyStateCache=_historyStateCache - In the implementation block
@property (nonatomic,retain) NSMutableArray * historyStateCacheMRU;                       //@synthesize historyStateCacheMRU=_historyStateCacheMRU - In the implementation block
@property (nonatomic,retain) NSMutableArray * historyStateCacheIndex;                     //@synthesize historyStateCacheIndex=_historyStateCacheIndex - In the implementation block
@property (nonatomic,readonly) NRMutableDeviceCollection * deviceCollection;              //@synthesize deviceCollection=_deviceCollection - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) unsigned long long nextIndex; 
@property (nonatomic,readonly) BOOL dirty; 
@property (nonatomic,readonly) unsigned switchIndex; 
@property (nonatomic,readonly) NRPBDeviceCollectionHistory * protobuf; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(void)invalidate;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NR9*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSMutableArray *)history;
-(unsigned long long)startIndex;
-(void)setStartIndex:(unsigned long long)arg1 ;
-(NRPBDeviceCollectionHistory *)protobuf;
-(BOOL)dirty;
-(id)initWithProtobuf:(id)arg1 ;
-(void)setHistory:(NSMutableArray *)arg1 ;
-(unsigned)switchIndex;
-(id)stateAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)nextIndex;
-(id)applyDiff:(id)arg1 ;
-(void)setSwitchRecords:(NRSwitchRecordCollection *)arg1 ;
-(NRSwitchRecordCollection *)switchRecords;
-(id)addObserverQueue:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)child:(id)arg1 didApplyDiff:(id)arg2 ;
-(id)deviceIDAtSwitchIndex:(unsigned)arg1 date:(id*)arg2 ;
-(void)_createIndex;
-(void)_truncateHistory;
-(id)_mostRecentStateBefore:(id)arg1 ;
-(void)_updateHistoryCachesWithIndex:(id)arg1 ;
-(unsigned long long)_findIndexInHistoryStateCache:(id)arg1 type:(unsigned long long)arg2 ;
-(void)pruneStateCacheItems:(unsigned long long)arg1 ;
-(id)switchDeviceIDFromDiff:(id)arg1 ;
-(void)notifyHistoryObserversWithEntry:(id)arg1 ;
-(id)historyEntryAtIndex:(unsigned long long)arg1 ;
-(BOOL)isEqualToHistory:(id)arg1 ;
-(NRMutableDeviceCollection *)deviceCollection;
-(NSMutableDictionary *)historyStateCache;
-(void)setHistoryStateCache:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)historyStateCacheMRU;
-(void)setHistoryStateCacheMRU:(NSMutableArray *)arg1 ;
-(NSMutableArray *)historyStateCacheIndex;
-(void)setHistoryStateCacheIndex:(NSMutableArray *)arg1 ;
@end

