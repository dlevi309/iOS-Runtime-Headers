/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSMapTable, NSMutableIndexSet;

@interface PXTileStatePool : NSObject {

	PXTileState* _states;
	unordered_map<PXTileIdentifier, unsigned long, std::__1::hash<PXTileIdentifier>, std::__1::equal_to<PXTileIdentifier>, std::__1::allocator<std::__1::pair<const PXTileIdentifier, unsigned long> > >* _indexByTargetIdentifier;
	NSMapTable* _tileIndexesByPageKey;
	long long _statesMaxCount;
	NSMutableIndexSet* _usedIndexes;
	NSMutableIndexSet* _unusedIndexes;
	NSMutableIndexSet* _pageKeysToRemove;

}

@property (nonatomic,readonly) long long count; 
-(id)init;
-(long long)count;
-(void)checkInIndex:(unsigned long long)arg1 ;
-(unsigned long long)checkOutIndexWithInitialConfiguration:(/*^block*/id)arg1 ;
-(void)checkInIndexes:(id)arg1 ;
-(void)_cleanupStateAtIndex:(unsigned long long)arg1 ;
-(PXProtectedTileState*)stateAtIndex:(unsigned long long)arg1 ;
-(PXTileState*)_mutableStateAtIndex:(unsigned long long)arg1 ;
-(void)enumerateStatesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateStatesAtIndexes:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateStatesInRect:(CGRect)arg1 usingBlock:(/*^block*/id)arg2 ;
-(unsigned long long)indexOfFirstStatePassingTest:(/*^block*/id)arg1 ;
-(id)indexesOfStatesPassingTest:(/*^block*/id)arg1 ;
-(unsigned long long)indexOfStateWithTargetIdentifier:(PXTileIdentifier)arg1 ;
-(void)setTargetIdentifier:(PXTileIdentifier)arg1 forTileStateAtIndex:(unsigned long long)arg2 ;
-(void)setCurrentGeometry:(const PXTileGeometry*)arg1 forTileStateAtIndex:(unsigned long long)arg2 ;
-(void)_storeTargetIdentifierLookupForTileState:(PXTileState*)arg1 withIndex:(unsigned long long)arg2 ;
-(void)_storeCurrentFrameLookupForTileState:(PXTileState*)arg1 withIndex:(unsigned long long)arg2 ;
-(id)description;
-(void)dealloc;
@end

