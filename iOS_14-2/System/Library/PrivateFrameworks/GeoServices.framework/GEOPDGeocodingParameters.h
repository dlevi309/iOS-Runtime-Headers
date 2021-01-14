/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, GEOStructuredAddress, GEOPDViewportInfo;

@interface GEOPDGeocodingParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _queryString;
	GEOStructuredAddress* _structuredAddress;
	GEOPDViewportInfo* _viewportInfo;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _maxResults;
	struct {
		unsigned has_maxResults : 1;
		unsigned read_unknownFields : 1;
		unsigned read_queryString : 1;
		unsigned read_structuredAddress : 1;
		unsigned read_viewportInfo : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasQueryString; 
@property (nonatomic,retain) NSString * queryString; 
@property (assign,nonatomic) BOOL hasMaxResults; 
@property (assign,nonatomic) unsigned maxResults; 
@property (nonatomic,readonly) BOOL hasViewportInfo; 
@property (nonatomic,retain) GEOPDViewportInfo * viewportInfo; 
@property (nonatomic,readonly) BOOL hasStructuredAddress; 
@property (nonatomic,retain) GEOStructuredAddress * structuredAddress; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
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
-(NSString *)queryString;
-(void)setQueryString:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setMaxResults:(unsigned)arg1 ;
-(id)initWithData:(id)arg1 ;
-(unsigned)maxResults;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasViewportInfo;
-(void)setStructuredAddress:(GEOStructuredAddress *)arg1 ;
-(id)description;
-(GEOStructuredAddress *)structuredAddress;
-(id)initWithForwardGeocodeAddress:(id)arg1 addressString:(id)arg2 maxResults:(unsigned)arg3 traits:(id)arg4 ;
-(BOOL)hasStructuredAddress;
-(unsigned long long)hash;
-(id)initWithForwardGeocodeAddress:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)initWithForwardGeocodeAddressString:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasQueryString;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setViewportInfo:(GEOPDViewportInfo *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

