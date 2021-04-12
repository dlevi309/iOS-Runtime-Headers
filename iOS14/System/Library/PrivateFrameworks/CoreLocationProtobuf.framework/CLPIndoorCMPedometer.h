/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CLPIndoorCMPedometer : PBCodable <NSCopying> {

	double _firstStepTime;
	double _timestamp;
	float _activeTime;
	float _distance;
	int _floorsAscended;
	int _floorsDescended;
	int _numberOfSteps;
	SCD_Struct_CL8 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDistance; 
@property (assign,nonatomic) float distance;                       //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfSteps; 
@property (assign,nonatomic) int numberOfSteps;                    //@synthesize numberOfSteps=_numberOfSteps - In the implementation block
@property (assign,nonatomic) BOOL hasFloorsAscended; 
@property (assign,nonatomic) int floorsAscended;                   //@synthesize floorsAscended=_floorsAscended - In the implementation block
@property (assign,nonatomic) BOOL hasFloorsDescended; 
@property (assign,nonatomic) int floorsDescended;                  //@synthesize floorsDescended=_floorsDescended - In the implementation block
@property (assign,nonatomic) BOOL hasFirstStepTime; 
@property (assign,nonatomic) double firstStepTime;                 //@synthesize firstStepTime=_firstStepTime - In the implementation block
@property (assign,nonatomic) BOOL hasActiveTime; 
@property (assign,nonatomic) float activeTime;                     //@synthesize activeTime=_activeTime - In the implementation block
-(id)dictionaryRepresentation;
-(void)setFloorsAscended:(int)arg1 ;
-(void)setHasNumberOfSteps:(BOOL)arg1 ;
-(void)setDistance:(float)arg1 ;
-(int)numberOfSteps;
-(double)firstStepTime;
-(void)setHasFloorsDescended:(BOOL)arg1 ;
-(BOOL)hasFirstStepTime;
-(void)setFirstStepTime:(double)arg1 ;
-(void)setActiveTime:(float)arg1 ;
-(BOOL)hasActiveTime;
-(float)distance;
-(double)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasDistance;
-(void)setHasActiveTime:(BOOL)arg1 ;
-(int)floorsDescended;
-(void)setHasDistance:(BOOL)arg1 ;
-(void)setNumberOfSteps:(int)arg1 ;
-(id)description;
-(BOOL)hasFloorsDescended;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(float)activeTime;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)hasFloorsAscended;
-(BOOL)hasNumberOfSteps;
-(int)floorsAscended;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setFloorsDescended:(int)arg1 ;
-(void)setHasFirstStepTime:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(void)setHasFloorsAscended:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

