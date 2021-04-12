/*
* Generated on Thursday, January 14, 2021 at 2:28:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/

#import <TSUtility/TSUtility-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSLock, TSUSparseArray, NSMutableDictionary;

@interface TSUUUIDSetStore : NSObject <NSCopying> {

	NSLock* _lock;
	TSUSparseArray* _uuidSetForIndex;
	NSMutableDictionary* _indexesUsingUuid;
	unsigned _highestIndex;

}

@property (readonly) unsigned long long count; 
-(id)init;
-(unsigned)addSet:(id)arg1 ;
-(unsigned long long)count;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)foreachUuidSet:(/*^block*/id)arg1 ;
-(unsigned)indexOfSet:(id)arg1 ;
-(void)p_addSet:(id)arg1 atIndex:(unsigned)arg2 ;
-(id)indexesUsingUuid:(const UUIDData<TSP::UUIDData>*)arg1 ;
-(id)setForIndex:(unsigned)arg1 ;
-(void)_foreachUuidSet:(/*^block*/id)arg1 ;
-(unsigned)addSetForUuids:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg1 ;
-(void)removeSetAtIndex:(unsigned)arg1 ;
-(BOOL)containsUuidSet:(id)arg1 ;
-(id)indexesUsingAnyOfUuids:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >*)arg1 ;
-(id)subsetStoreForIndexes:(id)arg1 ;
-(unsigned)addSetForSingleUuid:(const UUIDData<TSP::UUIDData>*)arg1 ;
@end

