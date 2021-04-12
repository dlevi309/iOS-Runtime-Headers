/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_countryCode : 1;
		unsigned wrote_language : 1;
		unsigned wrote_response : 1;
		unsigned wrote_sourceURL : 1;
		unsigned wrote_timestamp : 1;
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSString *)countryCode;
-(id)dictionaryRepresentation;
-(double)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(GEOPDPlaceResponse *)response;
-(void)setResponse:(GEOPDPlaceResponse *)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(NSString *)sourceURL;
-(void)setSourceURL:(NSString *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)clearSensitiveFields;
-(void)_readLanguage;
-(BOOL)hasLanguage;
-(BOOL)hasCountryCode;
-(void)_readResponse;
-(BOOL)hasResponse;
-(void)_readCountryCode;
-(void)_readSourceURL;
-(BOOL)hasSourceURL;
@end

