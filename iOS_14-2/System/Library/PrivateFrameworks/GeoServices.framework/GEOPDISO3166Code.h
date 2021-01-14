/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, GEOLatLngE7;

@interface GEOPDISO3166Code : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _countryCode;
	GEOLatLngE7* _location;
	NSString* _subdivisonCode;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _isDisputed;
	struct {
		unsigned has_isDisputed : 1;
		unsigned read_unknownFields : 1;
		unsigned read_countryCode : 1;
		unsigned read_location : 1;
		unsigned read_subdivisonCode : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLatLngE7 * location; 
@property (nonatomic,readonly) BOOL hasCountryCode; 
@property (nonatomic,retain) NSString * countryCode; 
@property (nonatomic,readonly) BOOL hasSubdivisonCode; 
@property (nonatomic,retain) NSString * subdivisonCode; 
@property (assign,nonatomic) BOOL hasIsDisputed; 
@property (assign,nonatomic) BOOL isDisputed; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)setIsDisputed:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSString *)countryCode;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)isDisputed;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasCountryCode;
-(GEOLatLngE7 *)location;
-(void)setHasIsDisputed:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)subdivisonCode;
-(void)setSubdivisonCode:(NSString *)arg1 ;
-(BOOL)hasSubdivisonCode;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setLocation:(GEOLatLngE7 *)arg1 ;
-(id)description;
-(BOOL)hasLocation;
-(BOOL)hasIsDisputed;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

