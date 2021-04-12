/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOVenueFloorInfo.h>

@protocol GEOVenueFloorInfo <NSObject>
@property (nonatomic,readonly) short ordinal; 
@property (nonatomic,readonly) unsigned long long levelID; 
@required
-(short)ordinal;
-(unsigned long long)levelID;

@end


@class NSString;

@interface GEOVenueFloorInfo : NSObject <GEOVenueFloorInfo> {

	short _ordinal;
	unsigned long long _levelID;

}

@property (nonatomic,readonly) short ordinal;                           //@synthesize ordinal=_ordinal - In the implementation block
@property (nonatomic,readonly) unsigned long long levelID;              //@synthesize levelID=_levelID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)floorInfosFromLevels:(id)arg1 ;
+(BOOL)isIntegerValidOrdinal:(long long)arg1 ;
-(short)ordinal;
-(id)init;
-(id)initWithLevel:(id)arg1 ;
-(unsigned long long)levelID;
-(id)initWithOrdinal:(short)arg1 levelID:(unsigned long long)arg2 ;
@end

