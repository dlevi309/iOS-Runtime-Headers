/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, GEOPDRelatedSearchSuggestion;

@interface GEOPDDisplayHeaderSubstitute : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _interpretedQuery;
	GEOPDRelatedSearchSuggestion* _relatedSearchSuggestion;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _substituteType;
	struct {
		unsigned has_substituteType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_interpretedQuery : 1;
		unsigned read_relatedSearchSuggestion : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasSubstituteType; 
@property (assign,nonatomic) int substituteType; 
@property (nonatomic,readonly) BOOL hasInterpretedQuery; 
@property (nonatomic,retain) NSString * interpretedQuery; 
@property (nonatomic,readonly) BOOL hasRelatedSearchSuggestion; 
@property (nonatomic,retain) GEOPDRelatedSearchSuggestion * relatedSearchSuggestion; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(GEOPDRelatedSearchSuggestion *)relatedSearchSuggestion;
-(void)setRelatedSearchSuggestion:(GEOPDRelatedSearchSuggestion *)arg1 ;
-(BOOL)hasRelatedSearchSuggestion;
-(id)description;
-(NSString *)interpretedQuery;
-(void)setSubstituteType:(int)arg1 ;
-(void)setInterpretedQuery:(NSString *)arg1 ;
-(int)substituteType;
-(void)setHasSubstituteType:(BOOL)arg1 ;
-(BOOL)hasSubstituteType;
-(id)substituteTypeAsString:(int)arg1 ;
-(int)StringAsSubstituteType:(id)arg1 ;
-(BOOL)hasInterpretedQuery;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

