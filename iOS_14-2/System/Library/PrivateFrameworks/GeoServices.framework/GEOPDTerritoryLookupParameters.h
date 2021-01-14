/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOPDTerritoryLookupParameters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _locations;

}

@property (nonatomic,retain) NSMutableArray * locations; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)locationType;
+(BOOL)isValid:(id)arg1 ;
-(NSMutableArray *)locations;
-(void)addLocation:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)clearLocations;
-(PBUnknownFields *)unknownFields;
-(void)setLocations:(NSMutableArray *)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(unsigned long long)locationsCount;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(id)locationAtIndex:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

