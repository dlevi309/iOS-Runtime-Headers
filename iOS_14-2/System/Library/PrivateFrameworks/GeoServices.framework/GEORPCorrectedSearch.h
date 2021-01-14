/*
* Generated on Thursday, January 14, 2021 at 2:21:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOPDPlaceRequest, GEOPDPlaceResponse, GEOPlaceSearchRequest, GEOPlaceSearchResponse, NSString;

@interface GEORPCorrectedSearch : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOPDPlaceRequest* _placeRequest;
	GEOPDPlaceResponse* _placeResponse;
	GEOPlaceSearchRequest* _placeSearchRequest;
	GEOPlaceSearchResponse* _placeSearchResponse;
	NSString* _preferredSearchDisplayLocation;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _correctedSearchResultIndex;
	unsigned _originalSearchResultIndex;
	struct {
		unsigned has_correctedSearchResultIndex : 1;
		unsigned has_originalSearchResultIndex : 1;
		unsigned read_placeRequest : 1;
		unsigned read_placeResponse : 1;
		unsigned read_placeSearchRequest : 1;
		unsigned read_placeSearchResponse : 1;
		unsigned read_preferredSearchDisplayLocation : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasPlaceSearchRequest; 
@property (nonatomic,retain) GEOPlaceSearchRequest * placeSearchRequest; 
@property (nonatomic,readonly) BOOL hasPlaceSearchResponse; 
@property (nonatomic,retain) GEOPlaceSearchResponse * placeSearchResponse; 
@property (assign,nonatomic) BOOL hasOriginalSearchResultIndex; 
@property (assign,nonatomic) unsigned originalSearchResultIndex; 
@property (assign,nonatomic) BOOL hasCorrectedSearchResultIndex; 
@property (assign,nonatomic) unsigned correctedSearchResultIndex; 
@property (nonatomic,readonly) BOOL hasPreferredSearchDisplayLocation; 
@property (nonatomic,retain) NSString * preferredSearchDisplayLocation; 
@property (nonatomic,readonly) BOOL hasPlaceRequest; 
@property (nonatomic,retain) GEOPDPlaceRequest * placeRequest; 
@property (nonatomic,readonly) BOOL hasPlaceResponse; 
@property (nonatomic,retain) GEOPDPlaceResponse * placeResponse; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasPlaceRequest;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(NSString *)preferredSearchDisplayLocation;
-(void)setOriginalSearchResultIndex:(unsigned)arg1 ;
-(void)setCorrectedSearchResultIndex:(unsigned)arg1 ;
-(void)setPreferredSearchDisplayLocation:(NSString *)arg1 ;
-(unsigned)originalSearchResultIndex;
-(BOOL)hasOriginalSearchResultIndex;
-(void)setHasOriginalSearchResultIndex:(BOOL)arg1 ;
-(unsigned)correctedSearchResultIndex;
-(BOOL)hasCorrectedSearchResultIndex;
-(void)setHasCorrectedSearchResultIndex:(BOOL)arg1 ;
-(BOOL)hasPreferredSearchDisplayLocation;
-(GEOPDPlaceRequest *)placeRequest;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(GEOPDPlaceResponse *)placeResponse;
-(BOOL)hasPlaceResponse;
-(void)setPlaceResponse:(GEOPDPlaceResponse *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(GEOPlaceSearchRequest *)placeSearchRequest;
-(void)setPlaceSearchRequest:(GEOPlaceSearchRequest *)arg1 ;
-(BOOL)hasPlaceSearchRequest;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setPlaceSearchResponse:(GEOPlaceSearchResponse *)arg1 ;
-(BOOL)containsReportableData;
-(GEOPlaceSearchResponse *)placeSearchResponse;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPlaceRequest:(GEOPDPlaceRequest *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)hasPlaceSearchResponse;
-(BOOL)isEqual:(id)arg1 ;
@end

