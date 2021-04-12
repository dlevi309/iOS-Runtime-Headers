/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_placeRequest : 1;
		unsigned wrote_placeResponse : 1;
		unsigned wrote_placeSearchRequest : 1;
		unsigned wrote_placeSearchResponse : 1;
		unsigned wrote_preferredSearchDisplayLocation : 1;
		unsigned wrote_correctedSearchResultIndex : 1;
		unsigned wrote_originalSearchResultIndex : 1;
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
-(void)_readPlaceSearchRequest;
-(GEOPlaceSearchRequest *)placeSearchRequest;
-(void)setPlaceSearchRequest:(GEOPlaceSearchRequest *)arg1 ;
-(BOOL)hasPlaceSearchRequest;
-(void)_readPlaceSearchResponse;
-(GEOPlaceSearchResponse *)placeSearchResponse;
-(BOOL)hasPlaceSearchResponse;
-(void)setPlaceSearchResponse:(GEOPlaceSearchResponse *)arg1 ;
-(void)_readPlaceRequest;
-(void)_readPlaceResponse;
-(GEOPDPlaceRequest *)placeRequest;
-(GEOPDPlaceResponse *)placeResponse;
-(void)setPlaceRequest:(GEOPDPlaceRequest *)arg1 ;
-(void)setPlaceResponse:(GEOPDPlaceResponse *)arg1 ;
-(BOOL)hasPlaceRequest;
-(BOOL)hasPlaceResponse;
-(void)_readPreferredSearchDisplayLocation;
-(NSString *)preferredSearchDisplayLocation;
-(void)setPreferredSearchDisplayLocation:(NSString *)arg1 ;
-(unsigned)originalSearchResultIndex;
-(void)setOriginalSearchResultIndex:(unsigned)arg1 ;
-(void)setHasOriginalSearchResultIndex:(BOOL)arg1 ;
-(BOOL)hasOriginalSearchResultIndex;
-(unsigned)correctedSearchResultIndex;
-(void)setCorrectedSearchResultIndex:(unsigned)arg1 ;
-(void)setHasCorrectedSearchResultIndex:(BOOL)arg1 ;
-(BOOL)hasCorrectedSearchResultIndex;
-(BOOL)hasPreferredSearchDisplayLocation;
-(BOOL)containsReportableData;
@end

