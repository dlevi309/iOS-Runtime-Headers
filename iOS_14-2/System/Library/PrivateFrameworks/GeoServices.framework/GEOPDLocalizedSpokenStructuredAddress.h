/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, GEOStructuredAddress;

@interface GEOPDLocalizedSpokenStructuredAddress : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _language;
	GEOStructuredAddress* _spokenStructuredAddress;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_language : 1;
		unsigned read_spokenStructuredAddress : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasLanguage; 
@property (nonatomic,retain) NSString * language; 
@property (nonatomic,readonly) BOOL hasSpokenStructuredAddress; 
@property (nonatomic,retain) GEOStructuredAddress * spokenStructuredAddress; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasLanguage;
-(id)init;
-(id)jsonRepresentation;
-(void)setLanguage:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasSpokenStructuredAddress;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(GEOStructuredAddress *)spokenStructuredAddress;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSpokenStructuredAddress:(GEOStructuredAddress *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

