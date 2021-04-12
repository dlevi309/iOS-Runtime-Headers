/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/

#import <MessageLegacy/MessageLegacy-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface MFSparseMutable64IndexSet : NSObject <NSCopying, NSMutableCopying> {

	unsigned _count;
	unsigned _storageSize;
	unsigned _cursor;
	unsigned long long* _storage;

}
+(id)indexSet;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(void)addIndex:(unsigned long long)arg1 ;
-(unsigned long long)firstIndex;
-(BOOL)containsIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexGreaterThanIndex:(unsigned long long)arg1 ;
-(void)addIndexes:(id)arg1 ;
-(void)removeIndex:(unsigned long long)arg1 ;
-(unsigned long long)_insertionPositionOfIndex:(unsigned long long)arg1 ;
-(void)_incrementStorageIfNecessaryForCount:(unsigned long long)arg1 ;
-(unsigned long long)_positionOfIndex:(unsigned long long)arg1 ;
-(void)_garbageCollectStorageIfNecessary;
-(void)enumerateIndexesWithBlock:(/*^block*/id)arg1 ;
@end

