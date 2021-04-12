/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_feedbackInfos : 1;
		unsigned wrote_nextPageToken : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * feedbackInfos; 
@property (nonatomic,readonly) BOOL hasNextPageToken; 
@property (nonatomic,retain) NSData * nextPageToken; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)feedbackInfoType;
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
-(NSData *)nextPageToken;
-(void)setNextPageToken:(NSData *)arg1 ;
-(BOOL)hasNextPageToken;
-(void)addFeedbackInfo:(id)arg1 ;
-(unsigned long long)feedbackInfosCount;
-(void)clearFeedbackInfos;
-(id)feedbackInfoAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)feedbackInfos;
-(void)setFeedbackInfos:(NSMutableArray *)arg1 ;
-(void)_readFeedbackInfos;
-(void)_addNoFlagsFeedbackInfo:(id)arg1 ;
-(void)_readNextPageToken;
@end

