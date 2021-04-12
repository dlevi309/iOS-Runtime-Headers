/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSHashTable;

@interface BSIntegerSet : NSObject <NSCopying, NSMutableCopying> {

	NSHashTable* _hashTable;
	BOOL _hasZeroValue;

}

@property (nonatomic,readonly) unsigned long long count; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(void)enumerateWithBlock:(/*^block*/id)arg1 ;
-(id)_initWithHashTable:(id)arg1 hasZeroValue:(BOOL)arg2 ;
-(BOOL)containsValue:(long long)arg1 ;
@end

