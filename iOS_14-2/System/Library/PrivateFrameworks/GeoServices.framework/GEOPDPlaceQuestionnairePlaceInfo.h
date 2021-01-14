/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, GEOPDMapsIdentifier;

@interface GEOPDPlaceQuestionnairePlaceInfo : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _countryCode;
	NSString* _mapsCategoryId;
	GEOPDMapsIdentifier* _mapsId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_countryCode : 1;
		unsigned read_mapsCategoryId : 1;
		unsigned read_mapsId : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasMapsId; 
@property (nonatomic,retain) GEOPDMapsIdentifier * mapsId; 
@property (nonatomic,readonly) BOOL hasMapsCategoryId; 
@property (nonatomic,retain) NSString * mapsCategoryId; 
@property (nonatomic,readonly) BOOL hasCountryCode; 
@property (nonatomic,retain) NSString * countryCode; 
+(BOOL)isValid:(id)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)countryCode;
-(void)readAll:(BOOL)arg1 ;
-(void)setMapsId:(GEOPDMapsIdentifier *)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasCountryCode;
-(BOOL)hasMapsCategoryId;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSString *)mapsCategoryId;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setMapsCategoryId:(NSString *)arg1 ;
-(GEOPDMapsIdentifier *)mapsId;
-(BOOL)hasMapsId;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

