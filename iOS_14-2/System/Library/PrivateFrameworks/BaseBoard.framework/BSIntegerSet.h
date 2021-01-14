/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)enumerateWithBlock:(/*^block*/id)arg1 ;
-(id)init;
-(unsigned long long)count;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(BOOL)containsValue:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

