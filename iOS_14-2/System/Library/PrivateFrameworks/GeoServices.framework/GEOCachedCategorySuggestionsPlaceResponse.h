/*
* Generated on Thursday, January 14, 2021 at 2:21:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, GEOPDPlaceResponse;

@interface GEOCachedCategorySuggestionsPlaceResponse : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _countryCode;
	NSString* _language;
	GEOPDPlaceResponse* _response;
	NSString* _sourceURL;
	double _timestamp;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_timestamp : 1;
		unsigned read_unknownFields : 1;
		unsigned read_countryCode : 1;
		unsigned read_language : 1;
		unsigned read_response : 1;
		unsigned read_sourceURL : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasResponse; 
@property (nonatomic,retain) GEOPDPlaceResponse * response; 
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp; 
@property (nonatomic,readonly) BOOL hasSourceURL; 
@property (nonatomic,retain) NSString * sourceURL; 
@property (nonatomic,readonly) BOOL hasCountryCode; 
@property (nonatomic,retain) NSString * countryCode; 
@property (nonatomic,readonly) BOOL hasLanguage; 
@property (nonatomic,retain) NSString * language; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSourceURL:(NSString *)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasSourceURL;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSString *)sourceURL;
-(NSString *)countryCode;
-(BOOL)hasResponse;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasLanguage;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasCountryCode;
-(void)clearSensitiveFields;
-(void)setLanguage:(NSString *)arg1 ;
-(double)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(GEOPDPlaceResponse *)response;
-(void)setResponse:(GEOPDPlaceResponse *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(NSString *)language;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

