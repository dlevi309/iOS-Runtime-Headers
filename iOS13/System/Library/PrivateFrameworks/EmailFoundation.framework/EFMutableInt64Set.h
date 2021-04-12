/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <EmailFoundation/EmailFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface EFMutableInt64Set : NSObject <NSCopying, NSMutableCopying> {

	unsigned _count;
	unsigned _storageSize;
	unsigned _cursor;
	long long* _storage;

}
+(id)indexSetWithIndexesInRange:(EFUInt64Range)arg1 ;
+(id)indexSet;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(long long)lastIndex;
-(void)addIndex:(long long)arg1 ;
-(long long)firstIndex;
-(BOOL)containsIndex:(long long)arg1 ;
-(long long)indexGreaterThanIndex:(long long)arg1 ;
-(void)addIndexes:(id)arg1 ;
-(unsigned long long)getIndexes:(long long*)arg1 maxCount:(unsigned long long)arg2 inIndexRange:(EFUInt64Range*)arg3 ;
-(void)enumerateIndexesUsingBlock:(/*^block*/id)arg1 ;
-(void)removeAllIndexes;
-(void)removeIndex:(long long)arg1 ;
-(void)removeIndexes:(id)arg1 ;
-(void)intersectIndexes:(id)arg1 ;
-(id)commaSeparatedString;
-(long long)_insertionPositionOfIndex:(long long)arg1 ;
-(void)_incrementStorageIfNecessaryForCount:(unsigned long long)arg1 ;
-(long long)_positionOfIndex:(long long)arg1 ;
-(void)_garbageCollectStorageIfNecessary;
@end

