/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setHasSequenceNumber:(BOOL)arg1 ;
-(GEOSessionID)sessionId;
-(void)setSessionId:(GEOSessionID)arg1 ;
-(void)setRelativeTimestamp:(double)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasSessionId;
-(BOOL)hasRelativeTimestamp;
-(double)relativeTimestamp;
-(GEOSessionID)navSessionId;
-(void)setSequenceNumber:(unsigned)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)setHasRelativeTimestamp:(BOOL)arg1 ;
-(unsigned)sequenceNumber;
-(void)setHasNavSessionRelativeTimestamp:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasNavSessionRelativeTimestamp;
-(void)setNavSessionRelativeTimestamp:(double)arg1 ;
-(id)description;
-(BOOL)hasEventTime;
-(double)navSessionRelativeTimestamp;
-(unsigned long long)hash;
-(BOOL)hasNavSessionId;
-(BOOL)readFrom:(id)arg1 ;
-(void)setNavSessionId:(GEOSessionID)arg1 ;
-(GEOLocalTime *)eventTime;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasSessionId:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setEventTime:(GEOLocalTime *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasNavSessionId:(BOOL)arg1 ;
-(BOOL)hasSequenceNumber;
@end

