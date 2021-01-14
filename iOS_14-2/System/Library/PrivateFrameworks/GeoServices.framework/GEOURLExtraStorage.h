/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOMapRegion, NSString, GEOStyleAttributes;

@interface GEOURLExtraStorage : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOMapRegion* _mapRegion;
	NSString* _phoneNumber;
	GEOStyleAttributes* _styleAttributes;
	NSString* _url;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_mapRegion : 1;
		unsigned read_phoneNumber : 1;
		unsigned read_styleAttributes : 1;
		unsigned read_url : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasStyleAttributes; 
@property (nonatomic,retain) GEOStyleAttributes * styleAttributes; 
@property (nonatomic,readonly) BOOL hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion; 
@property (nonatomic,readonly) BOOL hasPhoneNumber; 
@property (nonatomic,retain) NSString * phoneNumber; 
@property (nonatomic,readonly) BOOL hasUrl; 
@property (nonatomic,retain) NSString * url; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)hasStyleAttributes;
-(void)setStyleAttributes:(GEOStyleAttributes *)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOStyleAttributes *)styleAttributes;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(NSString *)phoneNumber;
-(GEOMapRegion *)mapRegion;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSString *)url;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasMapRegion;
-(id)description;
-(BOOL)hasUrl;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasPhoneNumber;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

