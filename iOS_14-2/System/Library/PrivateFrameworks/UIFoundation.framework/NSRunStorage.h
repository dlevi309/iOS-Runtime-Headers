/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NSRunStorage : NSObject <NSCopying> {

	unsigned long long _count;
	unsigned long long _elementSize;
	unsigned long long _numBlocks;
	unsigned long long _maxBlocks;
	unsigned long long _indexDeltaStartBlock;
	long long _indexDelta;
	NSRunBlock* _runs;
	unsigned long long _cachedBlock;
	NSRange _cachedBlockRange;
	unsigned long long _gapBlockIndex;

}
+(void)initialize;
+(void)_setConsistencyCheckingEnabled:(BOOL)arg1 superCheckEnabled:(BOOL)arg2 ;
-(void)replaceElementsInRange:(NSRange)arg1 withElement:(void*)arg2 coalesceRuns:(BOOL)arg3 ;
-(id)init;
-(void)insertElement:(void*)arg1 range:(NSRange)arg2 coalesceRuns:(BOOL)arg3 ;
-(void*)elementAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(void)_deallocData;
-(void)_moveGapToBlockIndex:(unsigned long long)arg1 ;
-(void)_consistencyCheck:(long long)arg1 ;
-(unsigned long long)count;
-(unsigned long long)elementSize;
-(id)description;
-(void)removeElementsInRange:(NSRange)arg1 coalesceRuns:(BOOL)arg2 ;
-(void)_consistencyError:(long long)arg1 startAtZeroError:(BOOL)arg2 cacheError:(BOOL)arg3 inconsistentBlockError:(BOOL)arg4 ;
-(id)initWithElementSize:(unsigned long long)arg1 capacity:(unsigned long long)arg2 ;
-(void)_ensureCapacity:(unsigned long long)arg1 ;
-(void)_allocData:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_moveGapAndMergeWithBlockRange:(NSRange)arg1 ;
-(void)dealloc;
-(void)_reallocData:(unsigned long long)arg1 ;
-(id)initWithRunStorage:(id)arg1 ;
@end

