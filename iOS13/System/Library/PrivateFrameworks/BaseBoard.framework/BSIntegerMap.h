/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMapTable;

@interface BSIntegerMap : NSObject <NSCopying, NSMutableCopying> {

	NSMapTable* _mapTable;
	id _zeroIndexValue;

}

@property (nonatomic,readonly) unsigned long long count; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(id)allKeys;
-(id)objectForKey:(long long)arg1 ;
-(void)enumerateWithBlock:(/*^block*/id)arg1 ;
-(id)_initWithMapTable:(id)arg1 zeroIndexValue:(id)arg2 ;
-(BOOL)containsObjectForKey:(long long)arg1 ;
-(void)enumerateKeysWithBlock:(/*^block*/id)arg1 ;
@end

