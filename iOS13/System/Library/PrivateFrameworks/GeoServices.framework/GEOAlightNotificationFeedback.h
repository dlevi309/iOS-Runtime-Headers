/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOAlightNotificationFeedback : PBCodable <NSCopying> {

	unsigned long long _alightStopMuid;
	double _arrivedAtTimestamp;
	double _lastDetectedLocationHorizontalAccuracy;
	double _lastDetectedLocationTimestamp;
	unsigned long long _lineMuid;
	unsigned long long _previousStopMuid;
	double _triggeredTimestamp;
	int _lastDetectedLocationTraversalPercent;
	unsigned _stepID;
	int _triggeredLocationTraversalPercent;
	int _trigger;
	BOOL _arrivalDetected;
	BOOL _displayed;
	BOOL _triggered;
	struct {
		unsigned has_alightStopMuid : 1;
		unsigned has_arrivedAtTimestamp : 1;
		unsigned has_lastDetectedLocationHorizontalAccuracy : 1;
		unsigned has_lastDetectedLocationTimestamp : 1;
		unsigned has_lineMuid : 1;
		unsigned has_previousStopMuid : 1;
		unsigned has_triggeredTimestamp : 1;
		unsigned has_lastDetectedLocationTraversalPercent : 1;
		unsigned has_stepID : 1;
		unsigned has_triggeredLocationTraversalPercent : 1;
		unsigned has_trigger : 1;
		unsigned has_arrivalDetected : 1;
		unsigned has_displayed : 1;
		unsigned has_triggered : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasDisplayed; 
@property (assign,nonatomic) BOOL displayed; 
@property (assign,nonatomic) BOOL hasTriggered; 
@property (assign,nonatomic) BOOL triggered; 
@property (assign,nonatomic) BOOL hasLineMuid; 
@property (assign,nonatomic) unsigned long long lineMuid; 
@property (assign,nonatomic) BOOL hasPreviousStopMuid; 
@property (assign,nonatomic) unsigned long long previousStopMuid; 
@property (assign,nonatomic) BOOL hasAlightStopMuid; 
@property (assign,nonatomic) unsigned long long alightStopMuid; 
@property (assign,nonatomic) BOOL hasTrigger; 
@property (assign,nonatomic) int trigger; 
@property (assign,nonatomic) BOOL hasTriggeredTimestamp; 
@property (assign,nonatomic) double triggeredTimestamp; 
@property (assign,nonatomic) BOOL hasTriggeredLocationTraversalPercent; 
@property (assign,nonatomic) int triggeredLocationTraversalPercent; 
@property (assign,nonatomic) BOOL hasLastDetectedLocationTimestamp; 
@property (assign,nonatomic) double lastDetectedLocationTimestamp; 
@property (assign,nonatomic) BOOL hasLastDetectedLocationTraversalPercent; 
@property (assign,nonatomic) int lastDetectedLocationTraversalPercent; 
@property (assign,nonatomic) BOOL hasLastDetectedLocationHorizontalAccuracy; 
@property (assign,nonatomic) double lastDetectedLocationHorizontalAccuracy; 
@property (assign,nonatomic) BOOL hasArrivalDetected; 
@property (assign,nonatomic) BOOL arrivalDetected; 
@property (assign,nonatomic) BOOL hasArrivedAtTimestamp; 
@property (assign,nonatomic) double arrivedAtTimestamp; 
@property (assign,nonatomic) BOOL hasStepID; 
@property (assign,nonatomic) unsigned stepID; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)displayed;
-(int)trigger;
-(void)readAll:(BOOL)arg1 ;
-(void)setStepID:(unsigned)arg1 ;
-(unsigned)stepID;
-(void)setHasStepID:(BOOL)arg1 ;
-(BOOL)hasStepID;
-(void)setDisplayed:(BOOL)arg1 ;
-(void)setHasDisplayed:(BOOL)arg1 ;
-(BOOL)hasDisplayed;
-(BOOL)triggered;
-(void)setTriggered:(BOOL)arg1 ;
-(void)setHasTriggered:(BOOL)arg1 ;
-(BOOL)hasTriggered;
-(unsigned long long)lineMuid;
-(void)setLineMuid:(unsigned long long)arg1 ;
-(void)setHasLineMuid:(BOOL)arg1 ;
-(BOOL)hasLineMuid;
-(unsigned long long)previousStopMuid;
-(void)setPreviousStopMuid:(unsigned long long)arg1 ;
-(void)setHasPreviousStopMuid:(BOOL)arg1 ;
-(BOOL)hasPreviousStopMuid;
-(unsigned long long)alightStopMuid;
-(void)setAlightStopMuid:(unsigned long long)arg1 ;
-(void)setHasAlightStopMuid:(BOOL)arg1 ;
-(BOOL)hasAlightStopMuid;
-(void)setTrigger:(int)arg1 ;
-(void)setHasTrigger:(BOOL)arg1 ;
-(BOOL)hasTrigger;
-(id)triggerAsString:(int)arg1 ;
-(int)StringAsTrigger:(id)arg1 ;
-(double)triggeredTimestamp;
-(void)setTriggeredTimestamp:(double)arg1 ;
-(void)setHasTriggeredTimestamp:(BOOL)arg1 ;
-(BOOL)hasTriggeredTimestamp;
-(int)triggeredLocationTraversalPercent;
-(void)setTriggeredLocationTraversalPercent:(int)arg1 ;
-(void)setHasTriggeredLocationTraversalPercent:(BOOL)arg1 ;
-(BOOL)hasTriggeredLocationTraversalPercent;
-(double)lastDetectedLocationTimestamp;
-(void)setLastDetectedLocationTimestamp:(double)arg1 ;
-(void)setHasLastDetectedLocationTimestamp:(BOOL)arg1 ;
-(BOOL)hasLastDetectedLocationTimestamp;
-(int)lastDetectedLocationTraversalPercent;
-(void)setLastDetectedLocationTraversalPercent:(int)arg1 ;
-(void)setHasLastDetectedLocationTraversalPercent:(BOOL)arg1 ;
-(BOOL)hasLastDetectedLocationTraversalPercent;
-(double)lastDetectedLocationHorizontalAccuracy;
-(void)setLastDetectedLocationHorizontalAccuracy:(double)arg1 ;
-(void)setHasLastDetectedLocationHorizontalAccuracy:(BOOL)arg1 ;
-(BOOL)hasLastDetectedLocationHorizontalAccuracy;
-(BOOL)arrivalDetected;
-(void)setArrivalDetected:(BOOL)arg1 ;
-(void)setHasArrivalDetected:(BOOL)arg1 ;
-(BOOL)hasArrivalDetected;
-(double)arrivedAtTimestamp;
-(void)setArrivedAtTimestamp:(double)arg1 ;
-(void)setHasArrivedAtTimestamp:(BOOL)arg1 ;
-(BOOL)hasArrivedAtTimestamp;
@end

