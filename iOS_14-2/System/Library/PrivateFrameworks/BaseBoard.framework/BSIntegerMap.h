/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)enumerateWithBlock:(/*^block*/id)arg1 ;
-(id)init;
-(BOOL)containsObjectForKey:(long long)arg1 ;
-(void)enumerateKeysWithBlock:(/*^block*/id)arg1 ;
-(unsigned long long)count;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)objectForKey:(long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)allKeys;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

