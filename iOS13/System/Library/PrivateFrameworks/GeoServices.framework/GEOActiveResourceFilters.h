/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(GEOActiveResourceFilter*)filters;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned long long)filtersCount;
-(void)clearFilters;
-(GEOActiveResourceFilter)filterAtIndex:(unsigned long long)arg1 ;
-(void)addFilter:(GEOActiveResourceFilter)arg1 ;
-(void)setFilters:(GEOActiveResourceFilter*)arg1 count:(unsigned long long)arg2 ;
@end

