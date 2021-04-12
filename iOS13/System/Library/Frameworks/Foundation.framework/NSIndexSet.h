/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSIndexSet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	struct {
		unsigned _isEmpty : 1;
		unsigned _hasSingleRange : 1;
		unsigned _cacheValid : 1;
		unsigned _reservedArrayBinderController : 29;
	}  _indexSetFlags;
	SCD_Union_NS27* _internal;

}

@property (readonly) unsigned long long count; 
@property (readonly) unsigned long long firstIndex; 
@property (readonly) unsigned long long lastIndex; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)indexSetWithIndexesInRange:(NSRange)arg1 ;
+(id)_alloc;
+(id)indexSet;
+(id)indexSetWithIndex:(unsigned long long)arg1 ;
+(id)indexSetWithIndexes:(const unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(unsigned long long)lastIndex;
-(unsigned long long)__getContainmentVector:(out BOOL*)arg1 inRange:(NSRange)arg2 ;
-(unsigned long long)firstIndex;
-(BOOL)containsIndex:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(unsigned long long)rangeCount;
-(NSRange)rangeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)countOfIndexesInRange:(NSRange)arg1 ;
-(void)__forwardEnumerateRanges:(/*^block*/id)arg1 ;
-(id)_init;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(unsigned long long)_indexAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexGreaterThanIndex:(unsigned long long)arg1 ;
-(id)initWithIndex:(unsigned long long)arg1 ;
-(id)initWithIndexesInRange:(NSRange)arg1 ;
-(id)initWithIndexSet:(id)arg1 ;
-(id)initWithIndexes:(const unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(void)_setContentToContentFromIndexSet:(id)arg1 ;
-(BOOL)isEqualToIndexSet:(id)arg1 ;
-(unsigned long long)_indexOfRangeAfterOrContainingIndex:(unsigned long long)arg1 ;
-(unsigned long long)_indexOfRangeBeforeOrContainingIndex:(unsigned long long)arg1 ;
-(unsigned long long)_indexClosestToIndex:(unsigned long long)arg1 equalAllowed:(BOOL)arg2 following:(BOOL)arg3 ;
-(unsigned long long)getIndexes:(unsigned long long*)arg1 maxCount:(unsigned long long)arg2 inIndexRange:(NSRange*)arg3 ;
-(unsigned long long)_indexOfRangeContainingIndex:(unsigned long long)arg1 ;
-(BOOL)containsIndexesInRange:(NSRange)arg1 ;
-(void)enumerateRangesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateIndexesWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(unsigned long long)indexWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)indexesWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(void)enumerateRangesWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(unsigned long long)indexLessThanIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexGreaterThanOrEqualToIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexLessThanOrEqualToIndex:(unsigned long long)arg1 ;
-(BOOL)containsIndexes:(id)arg1 ;
-(BOOL)intersectsIndexesInRange:(NSRange)arg1 ;
-(id)_numberEnumerator;
-(void)enumerateIndexesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateIndexesInRange:(NSRange)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(unsigned long long)indexPassingTest:(/*^block*/id)arg1 ;
-(unsigned long long)indexInRange:(NSRange)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)indexesPassingTest:(/*^block*/id)arg1 ;
-(id)indexesInRange:(NSRange)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(void)enumerateRangesInRange:(NSRange)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
@end

