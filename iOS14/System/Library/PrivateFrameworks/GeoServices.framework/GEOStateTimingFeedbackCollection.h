/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOStateTimingFeedbackCollection : PBCodable <NSCopying> {

	GEOSessionID _sessionID;
	double _durationInOldState;
	double _sessionRelativeTimestamp;
	NSMutableArray* _stateTransitions;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) GEOSessionID sessionID; 
@property (nonatomic,retain) NSMutableArray * stateTransitions; 
@property (assign,nonatomic) BOOL hasDurationInOldState; 
@property (assign,nonatomic) double durationInOldState; 
@property (assign,nonatomic) BOOL hasSessionRelativeTimestamp; 
@property (assign,nonatomic) double sessionRelativeTimestamp; 
+(Class)stateTransitionType;
+(BOOL)isValid:(id)arg1 ;
-(BOOL)hasSessionID;
-(id)dictionaryRepresentation;
-(GEOSessionID)sessionID;
-(void)setSessionID:(GEOSessionID)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)setSessionRelativeTimestamp:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(double)sessionRelativeTimestamp;
-(id)description;
-(BOOL)hasSessionRelativeTimestamp;
-(void)setHasSessionID:(BOOL)arg1 ;
-(NSMutableArray *)stateTransitions;
-(void)addStateTransition:(id)arg1 ;
-(void)setDurationInOldState:(double)arg1 ;
-(unsigned long long)stateTransitionsCount;
-(void)clearStateTransitions;
-(unsigned long long)hash;
-(id)stateTransitionAtIndex:(unsigned long long)arg1 ;
-(void)setStateTransitions:(NSMutableArray *)arg1 ;
-(double)durationInOldState;
-(BOOL)hasDurationInOldState;
-(void)setHasDurationInOldState:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setHasSessionRelativeTimestamp:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

