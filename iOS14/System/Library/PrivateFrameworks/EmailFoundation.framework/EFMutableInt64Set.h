/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)addIndexes:(id)arg1 ;
-(void)addIndex:(long long)arg1 ;
-(void)intersectIndexes:(id)arg1 ;
-(void)enumerateIndexesUsingBlock:(/*^block*/id)arg1 ;
-(long long)_positionOfIndex:(long long)arg1 ;
-(long long)firstIndex;
-(unsigned long long)count;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)containsIndex:(long long)arg1 ;
-(id)description;
-(void)removeAllIndexes;
-(void)removeIndex:(long long)arg1 ;
-(void)_garbageCollectStorageIfNecessary;
-(unsigned long long)getIndexes:(long long*)arg1 maxCount:(unsigned long long)arg2 inIndexRange:(EFUInt64Range*)arg3 ;
-(long long)_insertionPositionOfIndex:(long long)arg1 ;
-(id)commaSeparatedString;
-(long long)indexGreaterThanIndex:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)lastIndex;
-(void)dealloc;
-(void)_incrementStorageIfNecessaryForCount:(unsigned long long)arg1 ;
-(void)removeIndexes:(id)arg1 ;
@end

