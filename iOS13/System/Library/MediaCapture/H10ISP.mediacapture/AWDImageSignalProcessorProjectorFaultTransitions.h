/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/MediaCapture/H10ISP.mediacapture
*/

#import <H10ISP.mediacapture/H10ISP.mediacapture-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDImageSignalProcessorProjectorFaultTransitions : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _capacitance;
	int _transition;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasTransition; 
@property (assign,nonatomic) int transition;                            //@synthesize transition=_transition - In the implementation block
@property (assign,nonatomic) BOOL hasCapacitance; 
@property (assign,nonatomic) unsigned capacitance;                      //@synthesize capacitance=_capacitance - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)transition;
-(void)setTransition:(int)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setHasTransition:(BOOL)arg1 ;
-(BOOL)hasTransition;
-(id)transitionAsString:(int)arg1 ;
-(int)StringAsTransition:(id)arg1 ;
-(void)setCapacitance:(unsigned)arg1 ;
-(void)setHasCapacitance:(BOOL)arg1 ;
-(BOOL)hasCapacitance;
-(unsigned)capacitance;
@end

