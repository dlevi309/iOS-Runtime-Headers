/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(void)setTriggered:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(int)trigger;
-(unsigned)stepID;
-(id)jsonRepresentation;
-(void)setTrigger:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)triggered;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)lineMuid;
-(BOOL)hasTrigger;
-(BOOL)hasDisplayed;
-(void)setDisplayed:(BOOL)arg1 ;
-(void)setPreviousStopMuid:(unsigned long long)arg1 ;
-(void)setAlightStopMuid:(unsigned long long)arg1 ;
-(void)setTriggeredTimestamp:(double)arg1 ;
-(BOOL)hasTriggered;
-(void)setTriggeredLocationTraversalPercent:(int)arg1 ;
-(void)setLastDetectedLocationTimestamp:(double)arg1 ;
-(void)setHasDisplayed:(BOOL)arg1 ;
-(void)setLastDetectedLocationTraversalPercent:(int)arg1 ;
-(void)setLastDetectedLocationHorizontalAccuracy:(double)arg1 ;
-(void)setArrivalDetected:(BOOL)arg1 ;
-(void)setArrivedAtTimestamp:(double)arg1 ;
-(void)setHasTriggered:(BOOL)arg1 ;
-(unsigned long long)previousStopMuid;
-(void)setHasPreviousStopMuid:(BOOL)arg1 ;
-(BOOL)hasPreviousStopMuid;
-(unsigned long long)alightStopMuid;
-(void)setHasAlightStopMuid:(BOOL)arg1 ;
-(BOOL)hasAlightStopMuid;
-(void)setHasTrigger:(BOOL)arg1 ;
-(id)triggerAsString:(int)arg1 ;
-(int)StringAsTrigger:(id)arg1 ;
-(double)triggeredTimestamp;
-(void)setHasTriggeredTimestamp:(BOOL)arg1 ;
-(BOOL)hasTriggeredTimestamp;
-(int)triggeredLocationTraversalPercent;
-(void)setHasTriggeredLocationTraversalPercent:(BOOL)arg1 ;
-(BOOL)hasTriggeredLocationTraversalPercent;
-(double)lastDetectedLocationTimestamp;
-(void)setHasLastDetectedLocationTimestamp:(BOOL)arg1 ;
-(void)setHasArrivalDetected:(BOOL)arg1 ;
-(BOOL)hasLastDetectedLocationTimestamp;
-(int)lastDetectedLocationTraversalPercent;
-(BOOL)arrivalDetected;
-(void)setHasLastDetectedLocationTraversalPercent:(BOOL)arg1 ;
-(BOOL)hasLastDetectedLocationTraversalPercent;
-(double)lastDetectedLocationHorizontalAccuracy;
-(void)setHasLastDetectedLocationHorizontalAccuracy:(BOOL)arg1 ;
-(BOOL)hasLastDetectedLocationHorizontalAccuracy;
-(BOOL)hasArrivalDetected;
-(double)arrivedAtTimestamp;
-(void)setHasArrivedAtTimestamp:(BOOL)arg1 ;
-(BOOL)hasArrivedAtTimestamp;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasStepID;
-(void)setHasStepID:(BOOL)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)displayed;
-(void)setLineMuid:(unsigned long long)arg1 ;
-(void)setHasLineMuid:(BOOL)arg1 ;
-(BOOL)hasLineMuid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStepID:(unsigned)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

