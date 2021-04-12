/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/

#import <iTunesStore/iTunesStore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ISURLCacheConfiguration : NSObject <NSCopying> {

	unsigned long long _diskCapacity;
	unsigned long long _memoryCapacity;
	NSString* _persistentIdentifier;

}

@property (assign,nonatomic) unsigned long long diskCapacity;                //@synthesize diskCapacity=_diskCapacity - In the implementation block
@property (assign,nonatomic) unsigned long long memoryCapacity;              //@synthesize memoryCapacity=_memoryCapacity - In the implementation block
@property (nonatomic,copy) NSString * persistentIdentifier;                  //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
-(unsigned long long)memoryCapacity;
-(void)setMemoryCapacity:(unsigned long long)arg1 ;
-(unsigned long long)diskCapacity;
-(void)setDiskCapacity:(unsigned long long)arg1 ;
-(void)setPersistentIdentifier:(NSString *)arg1 ;
-(NSString *)persistentIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

