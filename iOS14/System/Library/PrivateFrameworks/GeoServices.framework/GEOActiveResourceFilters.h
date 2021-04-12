/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOActiveResourceFilters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOActiveResourceFilter* _filters;
	unsigned long long _filtersCount;
	unsigned long long _filtersSpace;

}

@property (nonatomic,readonly) unsigned long long filtersCount; 
@property (nonatomic,readonly) GEOActiveResourceFilter* filters; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearFilters;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)filtersCount;
-(id)jsonRepresentation;
-(GEOActiveResourceFilter*)filters;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)addFilter:(GEOActiveResourceFilter)arg1 ;
-(id)description;
-(GEOActiveResourceFilter)filterAtIndex:(unsigned long long)arg1 ;
-(void)setFilters:(GEOActiveResourceFilter*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

