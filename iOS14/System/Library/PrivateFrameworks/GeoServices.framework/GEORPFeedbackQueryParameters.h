/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEORPFilter, GEORPPageInfo, GEORPSortParameters;

@interface GEORPFeedbackQueryParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE90* _feedbackComponentTypes;
	GEORPFilter* _filter;
	GEORPPageInfo* _pageInfo;
	GEORPSortParameters* _sortParameters;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_feedbackComponentTypes : 1;
		unsigned read_filter : 1;
		unsigned read_pageInfo : 1;
		unsigned read_sortParameters : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasSortParameters; 
@property (nonatomic,retain) GEORPSortParameters * sortParameters; 
@property (nonatomic,readonly) BOOL hasPageInfo; 
@property (nonatomic,retain) GEORPPageInfo * pageInfo; 
@property (nonatomic,readonly) unsigned long long feedbackComponentTypesCount; 
@property (nonatomic,readonly) int* feedbackComponentTypes; 
@property (nonatomic,readonly) BOOL hasFilter; 
@property (nonatomic,retain) GEORPFilter * filter; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setFilter:(GEORPFilter *)arg1 ;
-(GEORPFilter *)filter;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)addFeedbackComponentType:(int)arg1 ;
-(unsigned long long)feedbackComponentTypesCount;
-(void)clearFeedbackComponentTypes;
-(int)feedbackComponentTypeAtIndex:(unsigned long long)arg1 ;
-(int*)feedbackComponentTypes;
-(void)setFeedbackComponentTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)feedbackComponentTypesAsString:(int)arg1 ;
-(int)StringAsFeedbackComponentTypes:(id)arg1 ;
-(GEORPSortParameters *)sortParameters;
-(void)setSortParameters:(GEORPSortParameters *)arg1 ;
-(void)setPageInfo:(GEORPPageInfo *)arg1 ;
-(BOOL)hasSortParameters;
-(BOOL)hasPageInfo;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(GEORPPageInfo *)pageInfo;
-(unsigned long long)hash;
-(BOOL)hasFilter;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

