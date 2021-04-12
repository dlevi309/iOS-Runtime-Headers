/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEORPFeedbackResult;

@interface GEORPFeedbackResponse : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEORPFeedbackResult* _feedbackResult;
	int _feedbackRequestType;
	int _status;
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status; 
@property (assign,nonatomic) BOOL hasFeedbackRequestType; 
@property (assign,nonatomic) int feedbackRequestType; 
@property (nonatomic,readonly) BOOL hasFeedbackResult; 
@property (nonatomic,retain) GEORPFeedbackResult * feedbackResult; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
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
-(int)feedbackRequestType;
-(void)setFeedbackRequestType:(int)arg1 ;
-(void)setHasFeedbackRequestType:(BOOL)arg1 ;
-(BOOL)hasFeedbackRequestType;
-(id)feedbackRequestTypeAsString:(int)arg1 ;
-(int)StringAsFeedbackRequestType:(id)arg1 ;
-(GEORPFeedbackResult *)feedbackResult;
-(void)setFeedbackResult:(GEORPFeedbackResult *)arg1 ;
-(BOOL)hasFeedbackResult;
@end

