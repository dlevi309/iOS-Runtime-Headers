/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEORPPageInfo, GEORPSortParameters;

@interface GEORPFeedbackQueryParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE1* _feedbackComponentTypes;
	GEORPPageInfo* _pageInfo;
	GEORPSortParameters* _sortParameters;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_feedbackComponentTypes : 1;
		unsigned read_pageInfo : 1;
		unsigned read_sortParameters : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_feedbackComponentTypes : 1;
		unsigned wrote_pageInfo : 1;
		unsigned wrote_sortParameters : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasSortParameters; 
@property (nonatomic,retain) GEORPSortParameters * sortParameters; 
@property (nonatomic,readonly) BOOL hasPageInfo; 
@property (nonatomic,retain) GEORPPageInfo * pageInfo; 
@property (nonatomic,readonly) unsigned long long feedbackComponentTypesCount; 
@property (nonatomic,readonly) int* feedbackComponentTypes; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(void)dealloc;
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
-(void)_readSortParameters;
-(void)_readPageInfo;
-(void)_readFeedbackComponentTypes;
-(void)_addNoFlagsFeedbackComponentType:(int)arg1 ;
-(GEORPSortParameters *)sortParameters;
-(GEORPPageInfo *)pageInfo;
-(void)setSortParameters:(GEORPSortParameters *)arg1 ;
-(void)setPageInfo:(GEORPPageInfo *)arg1 ;
-(unsigned long long)feedbackComponentTypesCount;
-(void)clearFeedbackComponentTypes;
-(int)feedbackComponentTypeAtIndex:(unsigned long long)arg1 ;
-(void)addFeedbackComponentType:(int)arg1 ;
-(BOOL)hasSortParameters;
-(BOOL)hasPageInfo;
-(int*)feedbackComponentTypes;
-(void)setFeedbackComponentTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)feedbackComponentTypesAsString:(int)arg1 ;
-(int)StringAsFeedbackComponentTypes:(id)arg1 ;
@end

