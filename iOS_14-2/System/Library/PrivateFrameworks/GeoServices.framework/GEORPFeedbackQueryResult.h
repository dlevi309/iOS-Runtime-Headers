/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, NSData;

@interface GEORPFeedbackQueryResult : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _feedbackInfos;
	NSData* _nextPageToken;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_feedbackInfos : 1;
		unsigned read_nextPageToken : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * feedbackInfos; 
@property (nonatomic,readonly) BOOL hasNextPageToken; 
@property (nonatomic,retain) NSData * nextPageToken; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)feedbackInfoType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)feedbackInfos;
-(void)addFeedbackInfo:(id)arg1 ;
-(unsigned long long)feedbackInfosCount;
-(void)clearFeedbackInfos;
-(id)feedbackInfoAtIndex:(unsigned long long)arg1 ;
-(void)setFeedbackInfos:(NSMutableArray *)arg1 ;
-(NSData *)nextPageToken;
-(void)setNextPageToken:(NSData *)arg1 ;
-(BOOL)hasNextPageToken;
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
@end

