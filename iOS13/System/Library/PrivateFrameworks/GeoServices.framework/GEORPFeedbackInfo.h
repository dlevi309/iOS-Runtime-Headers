/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, NSString;

@interface GEORPFeedbackInfo : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _feedbackComponents;
	NSString* _feedbackId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _status;
	struct {
		unsigned has_status : 1;
		unsigned read_unknownFields : 1;
		unsigned read_feedbackComponents : 1;
		unsigned read_feedbackId : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_feedbackComponents : 1;
		unsigned wrote_feedbackId : 1;
		unsigned wrote_status : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasFeedbackId; 
@property (nonatomic,retain) NSString * feedbackId; 
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status; 
@property (nonatomic,retain) NSMutableArray * feedbackComponents; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)feedbackComponentType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(int)status;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSString *)feedbackId;
-(void)setFeedbackId:(NSString *)arg1 ;
-(BOOL)hasFeedbackId;
-(void)_readFeedbackId;
-(void)_readFeedbackComponents;
-(void)_addNoFlagsFeedbackComponent:(id)arg1 ;
-(unsigned long long)feedbackComponentsCount;
-(void)clearFeedbackComponents;
-(id)feedbackComponentAtIndex:(unsigned long long)arg1 ;
-(void)addFeedbackComponent:(id)arg1 ;
-(NSMutableArray *)feedbackComponents;
-(void)setFeedbackComponents:(NSMutableArray *)arg1 ;
@end

