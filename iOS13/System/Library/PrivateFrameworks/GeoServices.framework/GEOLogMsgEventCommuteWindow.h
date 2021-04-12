/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOLogMsgEventCommuteWindow : PBCodable <NSCopying> {

	NSMutableArray* _predictedDestinations;
	double _startTime;
	unsigned _duration;
	int _endReason;
	unsigned _numberOfAlertingResponses;
	unsigned _numberOfDoomRoutingRequests;
	unsigned _predictedExitTime;
	struct {
		unsigned has_startTime : 1;
		unsigned has_duration : 1;
		unsigned has_endReason : 1;
		unsigned has_numberOfAlertingResponses : 1;
		unsigned has_numberOfDoomRoutingRequests : 1;
		unsigned has_predictedExitTime : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasStartTime; 
@property (assign,nonatomic) double startTime; 
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned duration; 
@property (assign,nonatomic) BOOL hasPredictedExitTime; 
@property (assign,nonatomic) unsigned predictedExitTime; 
@property (assign,nonatomic) BOOL hasEndReason; 
@property (assign,nonatomic) int endReason; 
@property (nonatomic,retain) NSMutableArray * predictedDestinations; 
@property (assign,nonatomic) BOOL hasNumberOfDoomRoutingRequests; 
@property (assign,nonatomic) unsigned numberOfDoomRoutingRequests; 
@property (assign,nonatomic) BOOL hasNumberOfAlertingResponses; 
@property (assign,nonatomic) unsigned numberOfAlertingResponses; 
+(BOOL)isValid:(id)arg1 ;
+(Class)predictedDestinationType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)duration;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDuration:(unsigned)arg1 ;
-(double)startTime;
-(int)endReason;
-(void)setEndReason:(int)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasDuration;
-(void)setHasStartTime:(BOOL)arg1 ;
-(BOOL)hasStartTime;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)addPredictedDestination:(id)arg1 ;
-(unsigned long long)predictedDestinationsCount;
-(void)clearPredictedDestinations;
-(id)predictedDestinationAtIndex:(unsigned long long)arg1 ;
-(unsigned)predictedExitTime;
-(void)setPredictedExitTime:(unsigned)arg1 ;
-(void)setHasPredictedExitTime:(BOOL)arg1 ;
-(BOOL)hasPredictedExitTime;
-(void)setHasEndReason:(BOOL)arg1 ;
-(BOOL)hasEndReason;
-(id)endReasonAsString:(int)arg1 ;
-(int)StringAsEndReason:(id)arg1 ;
-(NSMutableArray *)predictedDestinations;
-(void)setPredictedDestinations:(NSMutableArray *)arg1 ;
-(unsigned)numberOfDoomRoutingRequests;
-(void)setNumberOfDoomRoutingRequests:(unsigned)arg1 ;
-(void)setHasNumberOfDoomRoutingRequests:(BOOL)arg1 ;
-(BOOL)hasNumberOfDoomRoutingRequests;
-(unsigned)numberOfAlertingResponses;
-(void)setNumberOfAlertingResponses:(unsigned)arg1 ;
-(void)setHasNumberOfAlertingResponses:(BOOL)arg1 ;
-(BOOL)hasNumberOfAlertingResponses;
@end

