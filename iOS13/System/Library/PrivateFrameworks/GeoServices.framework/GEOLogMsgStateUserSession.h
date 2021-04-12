/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOLocalTime;

@interface GEOLogMsgStateUserSession : PBCodable <NSCopying> {

	GEOSessionID _navSessionId;
	GEOSessionID _sessionId;
	GEOLocalTime* _eventTime;
	double _navSessionRelativeTimestamp;
	double _relativeTimestamp;
	unsigned _sequenceNumber;
	struct {
		unsigned has_navSessionId : 1;
		unsigned has_sessionId : 1;
		unsigned has_navSessionRelativeTimestamp : 1;
		unsigned has_relativeTimestamp : 1;
		unsigned has_sequenceNumber : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasSessionId; 
@property (assign,nonatomic) GEOSessionID sessionId; 
@property (assign,nonatomic) BOOL hasSequenceNumber; 
@property (assign,nonatomic) unsigned sequenceNumber; 
@property (assign,nonatomic) BOOL hasRelativeTimestamp; 
@property (assign,nonatomic) double relativeTimestamp; 
@property (assign,nonatomic) BOOL hasNavSessionId; 
@property (assign,nonatomic) GEOSessionID navSessionId; 
@property (assign,nonatomic) BOOL hasNavSessionRelativeTimestamp; 
@property (assign,nonatomic) double navSessionRelativeTimestamp; 
@property (nonatomic,readonly) BOOL hasEventTime; 
@property (nonatomic,retain) GEOLocalTime * eventTime; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSequenceNumber:(unsigned)arg1 ;
-(unsigned)sequenceNumber;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(GEOSessionID)sessionId;
-(void)setSessionId:(GEOSessionID)arg1 ;
-(void)setHasSessionId:(BOOL)arg1 ;
-(BOOL)hasSessionId;
-(void)setHasSequenceNumber:(BOOL)arg1 ;
-(BOOL)hasSequenceNumber;
-(GEOSessionID)navSessionId;
-(void)setNavSessionId:(GEOSessionID)arg1 ;
-(void)setHasNavSessionId:(BOOL)arg1 ;
-(BOOL)hasNavSessionId;
-(double)relativeTimestamp;
-(void)setRelativeTimestamp:(double)arg1 ;
-(void)setHasRelativeTimestamp:(BOOL)arg1 ;
-(BOOL)hasRelativeTimestamp;
-(void)setEventTime:(GEOLocalTime *)arg1 ;
-(GEOLocalTime *)eventTime;
-(double)navSessionRelativeTimestamp;
-(void)setNavSessionRelativeTimestamp:(double)arg1 ;
-(void)setHasNavSessionRelativeTimestamp:(BOOL)arg1 ;
-(BOOL)hasNavSessionRelativeTimestamp;
-(BOOL)hasEventTime;
@end

