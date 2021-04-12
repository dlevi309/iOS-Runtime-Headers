/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setTransition:(int)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(int)transition;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasTransition;
-(void)setHasTransition:(BOOL)arg1 ;
-(id)transitionAsString:(int)arg1 ;
-(int)StringAsTransition:(id)arg1 ;
-(void)setCapacitance:(unsigned)arg1 ;
-(void)setHasCapacitance:(BOOL)arg1 ;
-(BOOL)hasCapacitance;
-(unsigned)capacitance;
@end

