/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/OSLogCoding.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOTileKeyMap;

@interface GEOTileKeyList : NSObject <OSLogCoding, NSFastEnumeration, NSCopying> {

	void* _head;
	void* _tail;
	GEOTileKeyMap* _map;
	unsigned long long _count;
	unsigned long long _maxCount;
	unsigned long long _mutationsCount;

}
+(id)listFromXPCData:(id)arg1 ;
+(id)formatOSLogData:(id)arg1 ;
-(BOOL)containsKey:(const GEOTileKey*)arg1 ;
-(GEOTileKey*)firstKey;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_GE31*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(void)encodeWithOSLogCoder:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 ;
-(unsigned long long)capacity;
-(void)removeKeysMatchingPredicate:(/*^block*/id)arg1 ;
-(void)_addKeyToBack:(const GEOTileKey*)arg1 ;
-(BOOL)addKey:(const GEOTileKey*)arg1 lostKey:(GEOTileKey*)arg2 ;
-(unsigned long long)count;
-(GEOTileKey*)keyAtIndex:(unsigned long long)arg1 ;
-(void)addKey:(const GEOTileKey*)arg1 ;
-(BOOL)intersectsList:(id)arg1 ;
-(id)description;
-(BOOL)removeKey:(const GEOTileKey*)arg1 ;
-(id)newXPCData;
-(void)sort:(/*^block*/id)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)copyWithMaxCapacity:(unsigned long long)arg1 ;
-(id)initWithMaxCapacity:(unsigned long long)arg1 ;
-(id)listWithout:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)sublistWithRange:(NSRange)arg1 ;
-(void)dealloc;
@end

