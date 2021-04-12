/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDEntity, NSMutableArray, GEOPDPlaceInfo;

@interface GEOPDLinkedService : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDEntity* _entity;
	NSMutableArray* _hours;
	GEOPDPlaceInfo* _placeInfo;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_entity : 1;
		unsigned read_hours : 1;
		unsigned read_placeInfo : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasEntity; 
@property (nonatomic,retain) GEOPDEntity * entity; 
@property (nonatomic,readonly) BOOL hasPlaceInfo; 
@property (nonatomic,retain) GEOPDPlaceInfo * placeInfo; 
@property (nonatomic,retain) NSMutableArray * hours; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)hoursType;
+(BOOL)isValid:(id)arg1 ;
+(id)linkedServicesForPlaceData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setEntity:(GEOPDEntity *)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOPDEntity *)entity;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(GEOPDPlaceInfo *)placeInfo;
-(void)mergeFrom:(id)arg1 ;
-(id)hoursAtIndex:(unsigned long long)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)addHours:(id)arg1 ;
-(id)description;
-(void)setPlaceInfo:(GEOPDPlaceInfo *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHours:(NSMutableArray *)arg1 ;
-(BOOL)hasPlaceInfo;
-(NSMutableArray *)hours;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasEntity;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hoursCount;
-(void)clearHours;
@end

