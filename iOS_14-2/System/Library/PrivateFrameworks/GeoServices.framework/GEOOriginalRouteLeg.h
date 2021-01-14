/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOWaypointInfo, GEOEVStateInfo, NSData;

@interface GEOOriginalRouteLeg : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOWaypointInfo* _destinationWaypointInfo;
	GEOEVStateInfo* _evStateInfo;
	GEOWaypointInfo* _originWaypointInfo;
	NSData* _zilchPoints;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_destinationWaypointInfo : 1;
		unsigned read_evStateInfo : 1;
		unsigned read_originWaypointInfo : 1;
		unsigned read_zilchPoints : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasZilchPoints; 
@property (nonatomic,retain) NSData * zilchPoints; 
@property (nonatomic,readonly) BOOL hasEvStateInfo; 
@property (nonatomic,retain) GEOEVStateInfo * evStateInfo; 
@property (nonatomic,readonly) BOOL hasOriginWaypointInfo; 
@property (nonatomic,retain) GEOWaypointInfo * originWaypointInfo; 
@property (nonatomic,readonly) BOOL hasDestinationWaypointInfo; 
@property (nonatomic,retain) GEOWaypointInfo * destinationWaypointInfo; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(GEOWaypointInfo *)originWaypointInfo;
-(GEOWaypointInfo *)destinationWaypointInfo;
-(void)setEvStateInfo:(GEOEVStateInfo *)arg1 ;
-(void)setOriginWaypointInfo:(GEOWaypointInfo *)arg1 ;
-(void)setDestinationWaypointInfo:(GEOWaypointInfo *)arg1 ;
-(BOOL)hasEvStateInfo;
-(BOOL)hasOriginWaypointInfo;
-(BOOL)hasDestinationWaypointInfo;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(GEOEVStateInfo *)evStateInfo;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasZilchPoints;
-(void)setZilchPoints:(NSData *)arg1 ;
-(NSData *)zilchPoints;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

