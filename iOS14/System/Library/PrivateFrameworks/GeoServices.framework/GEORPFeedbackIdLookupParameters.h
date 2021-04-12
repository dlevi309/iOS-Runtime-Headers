/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEORPFeedbackIdLookupParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE90* _feedbackComponentTypes;
	NSMutableArray* _feedbackIds;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_feedbackComponentTypes : 1;
		unsigned read_feedbackIds : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * feedbackIds; 
@property (nonatomic,readonly) unsigned long long feedbackComponentTypesCount; 
@property (nonatomic,readonly) int* feedbackComponentTypes; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)feedbackIdType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(NSMutableArray *)feedbackIds;
-(void)mergeFrom:(id)arg1 ;
-(void)addFeedbackId:(id)arg1 ;
-(void)addFeedbackComponentType:(int)arg1 ;
-(unsigned long long)feedbackIdsCount;
-(void)clearFeedbackIds;
-(id)feedbackIdAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)feedbackComponentTypesCount;
-(void)clearFeedbackComponentTypes;
-(int)feedbackComponentTypeAtIndex:(unsigned long long)arg1 ;
-(void)setFeedbackIds:(NSMutableArray *)arg1 ;
-(int*)feedbackComponentTypes;
-(void)setFeedbackComponentTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)feedbackComponentTypesAsString:(int)arg1 ;
-(int)StringAsFeedbackComponentTypes:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

