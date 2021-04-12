/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_interpretedQuery : 1;
		unsigned wrote_relatedSearchSuggestion : 1;
		unsigned wrote_substituteType : 1;
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
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOPDRelatedSearchSuggestion *)relatedSearchSuggestion;
-(int)substituteType;
-(NSString *)interpretedQuery;
-(void)setRelatedSearchSuggestion:(GEOPDRelatedSearchSuggestion *)arg1 ;
-(BOOL)hasRelatedSearchSuggestion;
-(void)_readInterpretedQuery;
-(void)_readRelatedSearchSuggestion;
-(void)setInterpretedQuery:(NSString *)arg1 ;
-(void)setSubstituteType:(int)arg1 ;
-(void)setHasSubstituteType:(BOOL)arg1 ;
-(BOOL)hasSubstituteType;
-(id)substituteTypeAsString:(int)arg1 ;
-(int)StringAsSubstituteType:(id)arg1 ;
-(BOOL)hasInterpretedQuery;
@end

