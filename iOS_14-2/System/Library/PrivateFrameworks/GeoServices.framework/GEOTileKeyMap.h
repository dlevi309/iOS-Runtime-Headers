/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOTileKeyMap : NSObject <NSCopying> {

	long long _type;
	void* _map;

}
-(id)init;
-(void)reserveCapacity:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(void)removeObjectForKey:(const GEOTileKey*)arg1 ;
-(id)objectForKey:(const GEOTileKey*)arg1 ;
-(id)initWithMapType:(long long)arg1 ;
-(id)contentsDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(const GEOTileKey*)arg2 ;
@end

