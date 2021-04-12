/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDPublisherSuggestionParameters, GEOPDAllCollectionsViewResultFilter, GEOPDViewportInfo;

@interface GEOPDAllCollectionsViewParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDPublisherSuggestionParameters* _publisherSuggestionParameters;
	GEOPDAllCollectionsViewResultFilter* _resultFilter;
	GEOPDViewportInfo* _viewportInfo;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _numClientizedResults;
	struct {
		unsigned has_numClientizedResults : 1;
		unsigned read_unknownFields : 1;
		unsigned read_publisherSuggestionParameters : 1;
		unsigned read_resultFilter : 1;
		unsigned read_viewportInfo : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasPublisherSuggestionParameters; 
@property (nonatomic,retain) GEOPDPublisherSuggestionParameters * publisherSuggestionParameters; 
@property (assign,nonatomic) BOOL hasNumClientizedResults; 
@property (assign,nonatomic) unsigned numClientizedResults; 
@property (nonatomic,readonly) BOOL hasResultFilter; 
@property (nonatomic,retain) GEOPDAllCollectionsViewResultFilter * resultFilter; 
@property (nonatomic,readonly) BOOL hasViewportInfo; 
@property (nonatomic,retain) GEOPDViewportInfo * viewportInfo; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(GEOPDViewportInfo *)viewportInfo;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasViewportInfo;
-(GEOPDPublisherSuggestionParameters *)publisherSuggestionParameters;
-(GEOPDAllCollectionsViewResultFilter *)resultFilter;
-(void)setPublisherSuggestionParameters:(GEOPDPublisherSuggestionParameters *)arg1 ;
-(void)setNumClientizedResults:(unsigned)arg1 ;
-(void)setResultFilter:(GEOPDAllCollectionsViewResultFilter *)arg1 ;
-(BOOL)hasPublisherSuggestionParameters;
-(unsigned)numClientizedResults;
-(void)setHasNumClientizedResults:(BOOL)arg1 ;
-(BOOL)hasNumClientizedResults;
-(BOOL)hasResultFilter;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setViewportInfo:(GEOPDViewportInfo *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

