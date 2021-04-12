/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)addIndexes:(id)arg1 ;
-(void)addIndex:(unsigned long long)arg1 ;
-(unsigned long long)_positionOfIndex:(unsigned long long)arg1 ;
-(unsigned long long)firstIndex;
-(unsigned long long)count;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)containsIndex:(unsigned long long)arg1 ;
-(id)description;
-(void)removeIndex:(unsigned long long)arg1 ;
-(void)_garbageCollectStorageIfNecessary;
-(unsigned long long)_insertionPositionOfIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexGreaterThanIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)_incrementStorageIfNecessaryForCount:(unsigned long long)arg1 ;
-(void)enumerateIndexesWithBlock:(/*^block*/id)arg1 ;
@end

