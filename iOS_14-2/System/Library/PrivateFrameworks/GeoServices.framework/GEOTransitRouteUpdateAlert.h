/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOFormattedString, NSData;

@interface GEOTransitRouteUpdateAlert : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOFormattedString* _content;
	NSData* _identifier;
	GEOFormattedString* _title;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_content : 1;
		unsigned read_identifier : 1;
		unsigned read_title : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) GEOFormattedString * title; 
@property (nonatomic,readonly) BOOL hasContent; 
@property (nonatomic,retain) GEOFormattedString * content; 
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSData * identifier; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasContent;
-(void)readAll:(BOOL)arg1 ;
-(GEOFormattedString *)content;
-(id)init;
-(void)setContent:(GEOFormattedString *)arg1 ;
-(id)jsonRepresentation;
-(BOOL)hasTitle;
-(BOOL)hasIdentifier;
-(void)setTitle:(GEOFormattedString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setIdentifier:(NSData *)arg1 ;
-(NSData *)identifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(GEOFormattedString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

