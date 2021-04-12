/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(void)clearRegions;
-(unsigned long long)regionsCount;
-(GEOFlyoverRegion)regionAtIndex:(unsigned long long)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)addRegion:(GEOFlyoverRegion)arg1 ;
-(id)jsonRepresentation;
-(void)setRegions:(GEOFlyoverRegion*)arg1 count:(unsigned long long)arg2 ;
-(GEOFlyoverRegion*)regions;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

