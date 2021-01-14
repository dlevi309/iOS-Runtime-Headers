/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOLeaveNowFeedbackCollection : PBCodable <NSCopying> {

	GEOSessionID _sessionID;
	double _currentTimestamp;
	double _eventTimestamp;
	double _travelDuration;
	int _actionType;
	int _alertType;
	int _travelState;
	struct {
		unsigned has_sessionID : 1;
		unsigned has_currentTimestamp : 1;
		unsigned has_eventTimestamp : 1;
		unsigned has_travelDuration : 1;
		unsigned has_actionType : 1;
		unsigned has_alertType : 1;
		unsigned has_travelState : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) GEOSessionID sessionID; 
@property (assign,nonatomic) BOOL hasActionType; 
@property (assign,nonatomic) int actionType; 
@property (assign,nonatomic) BOOL hasAlertType; 
@property (assign,nonatomic) int alertType; 
@property (assign,nonatomic) BOOL hasTravelState; 
@property (assign,nonatomic) int travelState; 
@property (assign,nonatomic) BOOL hasEventTimestamp; 
@property (assign,nonatomic) double eventTimestamp; 
@property (assign,nonatomic) BOOL hasCurrentTimestamp; 
@property (assign,nonatomic) double currentTimestamp; 
@property (assign,nonatomic) BOOL hasTravelDuration; 
@property (assign,nonatomic) double travelDuration; 
+(BOOL)isValid:(id)arg1 ;
-(int)travelState;
-(BOOL)hasSessionID;
-(id)dictionaryRepresentation;
-(int)alertType;
-(void)setActionType:(int)arg1 ;
-(int)actionType;
-(GEOSessionID)sessionID;
-(void)setSessionID:(GEOSessionID)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setAlertType:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setTravelState:(int)arg1 ;
-(void)setHasSessionID:(BOOL)arg1 ;
-(BOOL)hasAlertType;
-(void)setEventTimestamp:(double)arg1 ;
-(void)setTravelDuration:(double)arg1 ;
-(void)setCurrentTimestamp:(double)arg1 ;
-(void)setHasActionType:(BOOL)arg1 ;
-(BOOL)hasActionType;
-(id)actionTypeAsString:(int)arg1 ;
-(int)StringAsActionType:(id)arg1 ;
-(void)setHasAlertType:(BOOL)arg1 ;
-(BOOL)hasTravelState;
-(id)alertTypeAsString:(int)arg1 ;
-(int)StringAsAlertType:(id)arg1 ;
-(void)setHasTravelState:(BOOL)arg1 ;
-(id)travelStateAsString:(int)arg1 ;
-(int)StringAsTravelState:(id)arg1 ;
-(double)eventTimestamp;
-(void)setHasEventTimestamp:(BOOL)arg1 ;
-(BOOL)hasEventTimestamp;
-(void)setHasCurrentTimestamp:(BOOL)arg1 ;
-(BOOL)hasCurrentTimestamp;
-(double)travelDuration;
-(void)setHasTravelDuration:(BOOL)arg1 ;
-(BOOL)hasTravelDuration;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(double)currentTimestamp;
@end

