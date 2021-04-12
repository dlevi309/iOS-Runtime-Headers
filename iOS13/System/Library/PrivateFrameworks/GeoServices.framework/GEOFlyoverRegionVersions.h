/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOFlyoverRegionVersions : PBCodable <NSCopying> {

	GEOFlyoverRegion* _regions;
	unsigned long long _regionsCount;
	unsigned long long _regionsSpace;

}

@property (nonatomic,readonly) unsigned long long regionsCount; 
@property (nonatomic,readonly) GEOFlyoverRegion* regions; 
+(BOOL)isValid:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addRegion:(GEOFlyoverRegion)arg1 ;
-(GEOFlyoverRegion*)regions;
-(void)clearRegions;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)regionsCount;
-(GEOFlyoverRegion)regionAtIndex:(unsigned long long)arg1 ;
-(void)setRegions:(GEOFlyoverRegion*)arg1 count:(unsigned long long)arg2 ;
@end

