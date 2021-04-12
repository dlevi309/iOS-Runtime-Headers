/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_entity : 1;
		unsigned wrote_hours : 1;
		unsigned wrote_placeInfo : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasEntity; 
@property (nonatomic,retain) GEOPDEntity * entity; 
@property (nonatomic,readonly) BOOL hasPlaceInfo; 
@property (nonatomic,retain) GEOPDPlaceInfo * placeInfo; 
@property (nonatomic,retain) NSMutableArray * hours; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)hoursType;
+(id)linkedServicesForPlaceData:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSMutableArray *)hours;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setEntity:(GEOPDEntity *)arg1 ;
-(GEOPDEntity *)entity;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readHours;
-(void)setHours:(NSMutableArray *)arg1 ;
-(void)_readPlaceInfo;
-(GEOPDPlaceInfo *)placeInfo;
-(void)setPlaceInfo:(GEOPDPlaceInfo *)arg1 ;
-(BOOL)hasPlaceInfo;
-(BOOL)hasEntity;
-(void)_readEntity;
-(void)_addNoFlagsHours:(id)arg1 ;
-(unsigned long long)hoursCount;
-(void)clearHours;
-(id)hoursAtIndex:(unsigned long long)arg1 ;
-(void)addHours:(id)arg1 ;
@end

