/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/

#import <TSUtility/TSUtility-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSUIndexSetObj : NSObject <NSCopying> {

	TSUIndexSet* _indexSet;

}
-(void)addIndexes:(id)arg1 ;
-(unsigned long long)countOfIndexesInRange:(TSUIndexRangeStruct)arg1 ;
-(void)addIndex:(long long)arg1 ;
-(id)init;
-(void)enumerateIndexesUsingBlock:(/*^block*/id)arg1 ;
-(long long)firstIndex;
-(unsigned long long)count;
-(long long)indexGreaterThanOrEqualToIndex:(long long)arg1 ;
-(BOOL)containsIndex:(long long)arg1 ;
-(long long)indexLessThanOrEqualToIndex:(long long)arg1 ;
-(BOOL)intersectsIndexesInRange:(TSUIndexRangeStruct)arg1 ;
-(id)initWithIndexSet:(id)arg1 ;
-(BOOL)containsIndexes:(id)arg1 ;
-(void)enumerateRangesUsingBlock:(/*^block*/id)arg1 ;
-(void)removeIndexesInRange:(TSUIndexRangeStruct)arg1 ;
-(long long)indexLessThanIndex:(long long)arg1 ;
-(void)addIndexesInRange:(TSUIndexRangeStruct)arg1 ;
-(TSUIndexSet*)indexSet;
-(BOOL)containsIndexesInRange:(TSUIndexRangeStruct)arg1 ;
-(void)removeAllIndexes;
-(void)removeIndex:(long long)arg1 ;
-(unsigned long long)hash;
-(long long)indexGreaterThanIndex:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)lastIndex;
-(BOOL)isEqual:(id)arg1 ;
-(void)removeIndexes:(id)arg1 ;
-(id)initWithIndexSetCpp:(const TSUIndexSet*)arg1 ;
-(id)initWithNSIndexSet:(id)arg1 ;
-(long long)nthIndex:(unsigned long long)arg1 ;
-(void)enumerateIndexesInRange:(TSUIndexRangeStruct)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

