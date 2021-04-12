/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,readonly) NRMutableDeviceCollection * deviceCollection;              //@synthesize deviceCollection=_deviceCollection - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) unsigned long long nextIndex; 
@property (nonatomic,readonly) BOOL dirty; 
@property (nonatomic,readonly) unsigned switchIndex; 
@property (nonatomic,readonly) NRPBDeviceCollectionHistory * protobuf; 
+(BOOL)supportsSecureCoding;
-(void)child:(id)arg1 didApplyDiff:(id)arg2 ;
-(BOOL)dirty;
-(unsigned long long)nextIndex;
-(unsigned)switchIndex;
-(void)_createIndex;
-(id)addObserverQueue:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NR9*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(id)switchDeviceIDFromDiff:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(void)notifyHistoryObserversWithEntry:(id)arg1 ;
-(void)_updateHistoryCachesWithIndex:(id)arg1 ;
-(id)description;
-(id)applyDiff:(id)arg1 ;
-(unsigned long long)_findIndexInHistoryStateCache:(id)arg1 type:(unsigned long long)arg2 ;
-(void)pruneStateCacheItems:(unsigned long long)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NRPBDeviceCollectionHistory *)protobuf;
-(id)historyEntryAtIndex:(unsigned long long)arg1 ;
-(id)deviceIDAtSwitchIndex:(unsigned)arg1 date:(id*)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)invalidate;
-(NRMutableDeviceCollection *)deviceCollection;
-(id)initWithProtobuf:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_mostRecentStateBefore:(id)arg1 ;
-(void)_truncateHistory;
-(BOOL)isEqualToHistory:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

