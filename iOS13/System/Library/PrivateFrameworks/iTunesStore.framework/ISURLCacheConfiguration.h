/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)persistentIdentifier;
-(void)setPersistentIdentifier:(NSString *)arg1 ;
-(unsigned long long)memoryCapacity;
-(unsigned long long)diskCapacity;
-(void)setMemoryCapacity:(unsigned long long)arg1 ;
-(void)setDiskCapacity:(unsigned long long)arg1 ;
@end

