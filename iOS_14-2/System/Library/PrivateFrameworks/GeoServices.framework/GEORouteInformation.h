/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOFormattedString, NSString;

@interface GEORouteInformation : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOFormattedString* _detail;
	GEOFormattedString* _distance;
	GEOFormattedString* _duration;
	GEOFormattedString* _routeDescription;
	NSString* _separator;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_detail : 1;
		unsigned read_distance : 1;
		unsigned read_duration : 1;
		unsigned read_routeDescription : 1;
		unsigned read_separator : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasDuration; 
@property (nonatomic,retain) GEOFormattedString * duration; 
@property (nonatomic,readonly) BOOL hasDetail; 
@property (nonatomic,retain) GEOFormattedString * detail; 
@property (nonatomic,readonly) BOOL hasDistance; 
@property (nonatomic,retain) GEOFormattedString * distance; 
@property (nonatomic,readonly) BOOL hasRouteDescription; 
@property (nonatomic,retain) GEOFormattedString * routeDescription; 
@property (nonatomic,readonly) BOOL hasSeparator; 
@property (nonatomic,retain) NSString * separator; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)hasSeparator;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)setDistance:(GEOFormattedString *)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasDuration;
-(GEOFormattedString *)detail;
-(void)setDuration:(GEOFormattedString *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(BOOL)hasDetail;
-(id)jsonRepresentation;
-(GEOFormattedString *)distance;
-(GEOFormattedString *)routeDescription;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasDistance;
-(id)initWithData:(id)arg1 ;
-(void)setRouteDescription:(GEOFormattedString *)arg1 ;
-(BOOL)hasRouteDescription;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)separator;
-(id)description;
-(unsigned long long)hash;
-(void)setSeparator:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setDetail:(GEOFormattedString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(GEOFormattedString *)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

