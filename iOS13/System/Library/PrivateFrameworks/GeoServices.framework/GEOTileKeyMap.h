/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOTileKeyMap : NSObject <NSCopying> {

	long long _type;
	void* _map;

}
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(id)objectForKey:(const GEOTileKey*)arg1 ;
-(void)removeObjectForKey:(const GEOTileKey*)arg1 ;
-(void)setObject:(id)arg1 forKey:(const GEOTileKey*)arg2 ;
-(void)reserveCapacity:(unsigned long long)arg1 ;
-(id)initWithMapType:(long long)arg1 ;
-(id)contentsDescription;
@end

