/*
* Generated on Thursday, January 14, 2021 at 2:21:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOPDAddressObject, NSString, GEOAddress;

@interface GEORPAddress : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOPDAddressObject* _addressObject;
	NSString* _addressString;
	GEOAddress* _geoAddress;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_addressObject : 1;
		unsigned read_addressString : 1;
		unsigned read_geoAddress : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasGeoAddress; 
@property (nonatomic,retain) GEOAddress * geoAddress; 
@property (nonatomic,readonly) BOOL hasAddressString; 
@property (nonatomic,retain) NSString * addressString; 
@property (nonatomic,readonly) BOOL hasAddressObject; 
@property (nonatomic,retain) GEOPDAddressObject * addressObject; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasAddressObject;
-(void)setAddressObject:(GEOPDAddressObject *)arg1 ;
-(GEOAddress *)geoAddress;
-(void)readAll:(BOOL)arg1 ;
-(GEOPDAddressObject *)addressObject;
-(id)init;
-(void)setGeoAddress:(GEOAddress *)arg1 ;
-(BOOL)hasGeoAddress;
-(BOOL)hasAddressString;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setAddressString:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)addressString;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

