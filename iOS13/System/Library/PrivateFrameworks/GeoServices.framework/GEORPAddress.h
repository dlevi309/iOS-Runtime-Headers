/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_addressObject : 1;
		unsigned wrote_addressString : 1;
		unsigned wrote_geoAddress : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasGeoAddress; 
@property (nonatomic,retain) GEOAddress * geoAddress; 
@property (nonatomic,readonly) BOOL hasAddressString; 
@property (nonatomic,retain) NSString * addressString; 
@property (nonatomic,readonly) BOOL hasAddressObject; 
@property (nonatomic,retain) GEOPDAddressObject * addressObject; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)addressString;
-(void)readAll:(BOOL)arg1 ;
-(GEOPDAddressObject *)addressObject;
-(GEOAddress *)geoAddress;
-(BOOL)hasAddressObject;
-(void)setAddressObject:(GEOPDAddressObject *)arg1 ;
-(void)_readAddressObject;
-(void)_readGeoAddress;
-(void)_readAddressString;
-(void)setGeoAddress:(GEOAddress *)arg1 ;
-(void)setAddressString:(NSString *)arg1 ;
-(BOOL)hasGeoAddress;
-(BOOL)hasAddressString;
@end

