/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_requestLocalTimestamp : 1;
		unsigned wrote_suggestionEntryMetadatas : 1;
		unsigned wrote_viewportInfo : 1;
		unsigned wrote_maxResults : 1;
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
+(BOOL)isValid:(id)arg1 ;
+(Class)suggestionEntryMetadataType;
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
-(void)_readViewportInfo;
-(GEOPDViewportInfo *)viewportInfo;
-(void)setViewportInfo:(GEOPDViewportInfo *)arg1 ;
-(BOOL)hasViewportInfo;
-(unsigned)maxResults;
-(void)setMaxResults:(unsigned)arg1 ;
-(void)setHasMaxResults:(BOOL)arg1 ;
-(BOOL)hasMaxResults;
-(void)_readSuggestionEntryMetadatas;
-(void)_addNoFlagsSuggestionEntryMetadata:(id)arg1 ;
-(NSMutableArray *)suggestionEntryMetadatas;
-(unsigned long long)suggestionEntryMetadatasCount;
-(void)clearSuggestionEntryMetadatas;
-(id)suggestionEntryMetadataAtIndex:(unsigned long long)arg1 ;
-(void)addSuggestionEntryMetadata:(id)arg1 ;
-(double)requestLocalTimestamp;
-(void)setRequestLocalTimestamp:(double)arg1 ;
-(void)setHasRequestLocalTimestamp:(BOOL)arg1 ;
-(BOOL)hasRequestLocalTimestamp;
-(void)setSuggestionEntryMetadatas:(NSMutableArray *)arg1 ;
@end

