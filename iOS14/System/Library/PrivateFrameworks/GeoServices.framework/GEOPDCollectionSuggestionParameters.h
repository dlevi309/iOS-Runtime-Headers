/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOPDViewportInfo;

@interface GEOPDCollectionSuggestionParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _categoryIds;
	NSMutableArray* _geoIds;
	NSMutableArray* _publisherIds;
	double _requestLocalTimestamp;
	GEOPDViewportInfo* _viewportInfo;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_requestLocalTimestamp : 1;
		unsigned read_unknownFields : 1;
		unsigned read_categoryIds : 1;
		unsigned read_geoIds : 1;
		unsigned read_publisherIds : 1;
		unsigned read_viewportInfo : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasViewportInfo; 
@property (nonatomic,retain) GEOPDViewportInfo * viewportInfo; 
@property (assign,nonatomic) BOOL hasRequestLocalTimestamp; 
@property (assign,nonatomic) double requestLocalTimestamp; 
@property (nonatomic,retain) NSMutableArray * publisherIds; 
@property (nonatomic,retain) NSMutableArray * geoIds; 
@property (nonatomic,retain) NSMutableArray * categoryIds; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)publisherIdType;
+(Class)categoryIdType;
+(BOOL)isValid:(id)arg1 ;
+(Class)geoIdType;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(GEOPDViewportInfo *)viewportInfo;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(NSMutableArray *)geoIds;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasViewportInfo;
-(id)description;
-(NSMutableArray *)publisherIds;
-(unsigned long long)publisherIdsCount;
-(void)clearPublisherIds;
-(void)addPublisherId:(id)arg1 ;
-(id)publisherIdAtIndex:(unsigned long long)arg1 ;
-(void)setPublisherIds:(NSMutableArray *)arg1 ;
-(void)addGeoId:(id)arg1 ;
-(unsigned long long)geoIdsCount;
-(void)clearGeoIds;
-(double)requestLocalTimestamp;
-(void)setRequestLocalTimestamp:(double)arg1 ;
-(void)setHasRequestLocalTimestamp:(BOOL)arg1 ;
-(BOOL)hasRequestLocalTimestamp;
-(NSMutableArray *)categoryIds;
-(void)setGeoIds:(NSMutableArray *)arg1 ;
-(id)geoIdAtIndex:(unsigned long long)arg1 ;
-(void)addCategoryId:(id)arg1 ;
-(unsigned long long)categoryIdsCount;
-(void)clearCategoryIds;
-(id)categoryIdAtIndex:(unsigned long long)arg1 ;
-(void)setCategoryIds:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setViewportInfo:(GEOPDViewportInfo *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

