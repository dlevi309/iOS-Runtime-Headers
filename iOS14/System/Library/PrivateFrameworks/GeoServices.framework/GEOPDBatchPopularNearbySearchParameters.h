/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOPDViewportInfo;

@interface GEOPDBatchPopularNearbySearchParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	double _requestLocalTimestamp;
	NSMutableArray* _suggestionEntryMetadatas;
	GEOPDViewportInfo* _viewportInfo;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _maxResults;
	struct {
		unsigned has_requestLocalTimestamp : 1;
		unsigned has_maxResults : 1;
		unsigned read_unknownFields : 1;
		unsigned read_suggestionEntryMetadatas : 1;
		unsigned read_viewportInfo : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasMaxResults; 
@property (assign,nonatomic) unsigned maxResults; 
@property (nonatomic,readonly) BOOL hasViewportInfo; 
@property (nonatomic,retain) GEOPDViewportInfo * viewportInfo; 
@property (assign,nonatomic) BOOL hasRequestLocalTimestamp; 
@property (assign,nonatomic) double requestLocalTimestamp; 
@property (nonatomic,retain) NSMutableArray * suggestionEntryMetadatas; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)suggestionEntryMetadataType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(GEOPDViewportInfo *)viewportInfo;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasMaxResults:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasMaxResults;
-(void)mergeFrom:(id)arg1 ;
-(void)setMaxResults:(unsigned)arg1 ;
-(id)initWithData:(id)arg1 ;
-(unsigned)maxResults;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasViewportInfo;
-(id)description;
-(NSMutableArray *)suggestionEntryMetadatas;
-(double)requestLocalTimestamp;
-(void)setRequestLocalTimestamp:(double)arg1 ;
-(void)addSuggestionEntryMetadata:(id)arg1 ;
-(unsigned long long)suggestionEntryMetadatasCount;
-(void)clearSuggestionEntryMetadatas;
-(id)suggestionEntryMetadataAtIndex:(unsigned long long)arg1 ;
-(void)setHasRequestLocalTimestamp:(BOOL)arg1 ;
-(BOOL)hasRequestLocalTimestamp;
-(void)setSuggestionEntryMetadatas:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setViewportInfo:(GEOPDViewportInfo *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

