/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_GE85 _flags;

}

@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) GEOSessionID sessionID; 
@property (nonatomic,retain) NSMutableArray * stateTransitions; 
@property (assign,nonatomic) BOOL hasDurationInOldState; 
@property (assign,nonatomic) double durationInOldState; 
@property (assign,nonatomic) BOOL hasSessionRelativeTimestamp; 
@property (assign,nonatomic) double sessionRelativeTimestamp; 
+(BOOL)isValid:(id)arg1 ;
+(Class)stateTransitionType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(GEOSessionID)sessionID;
-(void)setSessionID:(GEOSessionID)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasSessionID:(BOOL)arg1 ;
-(BOOL)hasSessionID;
-(double)sessionRelativeTimestamp;
-(void)setSessionRelativeTimestamp:(double)arg1 ;
-(void)setHasSessionRelativeTimestamp:(BOOL)arg1 ;
-(BOOL)hasSessionRelativeTimestamp;
-(double)durationInOldState;
-(void)setDurationInOldState:(double)arg1 ;
-(void)setHasDurationInOldState:(BOOL)arg1 ;
-(BOOL)hasDurationInOldState;
-(void)addStateTransition:(id)arg1 ;
-(unsigned long long)stateTransitionsCount;
-(void)clearStateTransitions;
-(id)stateTransitionAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)stateTransitions;
-(void)setStateTransitions:(NSMutableArray *)arg1 ;
@end

