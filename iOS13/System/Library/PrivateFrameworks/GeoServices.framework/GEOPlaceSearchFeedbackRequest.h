/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOPlaceSearchFeedbackRequest : PBRequest <NSCopying> {

	GEOSessionID _sessionGUID;
	long long _businessID;
	double _timestamp;
	int _feedbackType;
	int _localSearchProviderID;
	int _numberOfResults;
	int _positionInResults;
	int _sequenceNumber;
	struct {
		unsigned has_sessionGUID : 1;
		unsigned has_businessID : 1;
		unsigned has_timestamp : 1;
		unsigned has_feedbackType : 1;
		unsigned has_localSearchProviderID : 1;
		unsigned has_numberOfResults : 1;
		unsigned has_positionInResults : 1;
		unsigned has_sequenceNumber : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp; 
@property (assign,nonatomic) BOOL hasSessionGUID; 
@property (assign,nonatomic) GEOSessionID sessionGUID; 
@property (assign,nonatomic) BOOL hasBusinessID; 
@property (assign,nonatomic) long long businessID; 
@property (assign,nonatomic) BOOL hasFeedbackType; 
@property (assign,nonatomic) int feedbackType; 
@property (assign,nonatomic) BOOL hasNumberOfResults; 
@property (assign,nonatomic) int numberOfResults; 
@property (assign,nonatomic) BOOL hasPositionInResults; 
@property (assign,nonatomic) int positionInResults; 
@property (assign,nonatomic) BOOL hasSequenceNumber; 
@property (assign,nonatomic) int sequenceNumber; 
@property (assign,nonatomic) BOOL hasLocalSearchProviderID; 
@property (assign,nonatomic) int localSearchProviderID; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(double)timestamp;
-(void)setSequenceNumber:(int)arg1 ;
-(int)sequenceNumber;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasSequenceNumber:(BOOL)arg1 ;
-(BOOL)hasSequenceNumber;
-(int)localSearchProviderID;
-(void)setLocalSearchProviderID:(int)arg1 ;
-(void)setHasLocalSearchProviderID:(BOOL)arg1 ;
-(BOOL)hasLocalSearchProviderID;
-(GEOSessionID)sessionGUID;
-(void)setSessionGUID:(GEOSessionID)arg1 ;
-(void)setHasSessionGUID:(BOOL)arg1 ;
-(BOOL)hasSessionGUID;
-(void)setBusinessID:(long long)arg1 ;
-(BOOL)hasBusinessID;
-(long long)businessID;
-(void)setHasBusinessID:(BOOL)arg1 ;
-(int)feedbackType;
-(void)setFeedbackType:(int)arg1 ;
-(void)setHasFeedbackType:(BOOL)arg1 ;
-(BOOL)hasFeedbackType;
-(id)feedbackTypeAsString:(int)arg1 ;
-(int)StringAsFeedbackType:(id)arg1 ;
-(int)numberOfResults;
-(void)setNumberOfResults:(int)arg1 ;
-(void)setHasNumberOfResults:(BOOL)arg1 ;
-(BOOL)hasNumberOfResults;
-(int)positionInResults;
-(void)setPositionInResults:(int)arg1 ;
-(void)setHasPositionInResults:(BOOL)arg1 ;
-(BOOL)hasPositionInResults;
@end

