/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOPDRelatedPlace : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _mapsIds;
	int _type;
	struct {
		unsigned has_type : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * mapsIds; 
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)relatedPlacesForPlaceData:(id)arg1 ;
+(BOOL)isValid:(id)arg1 ;
+(Class)mapsIdType;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearMapsIds;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(void)setMapsIds:(NSMutableArray *)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(id)jsonRepresentation;
-(unsigned long long)mapsIdsCount;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSMutableArray *)mapsIds;
-(void)addMapsId:(id)arg1 ;
-(id)description;
-(id)mapsIdAtIndex:(unsigned long long)arg1 ;
-(int)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

