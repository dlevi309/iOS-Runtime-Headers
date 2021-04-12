/*
* Generated on Thursday, January 14, 2021 at 2:29:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiDPSNotification : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _problemAC;
	int _symptom;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasSymptom; 
@property (assign,nonatomic) int symptom;                               //@synthesize symptom=_symptom - In the implementation block
@property (assign,nonatomic) BOOL hasProblemAC; 
@property (assign,nonatomic) unsigned problemAC;                        //@synthesize problemAC=_problemAC - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(int)symptom;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSymptom:(int)arg1 ;
-(void)setHasSymptom:(BOOL)arg1 ;
-(BOOL)hasSymptom;
-(id)symptomAsString:(int)arg1 ;
-(int)StringAsSymptom:(id)arg1 ;
-(void)setProblemAC:(unsigned)arg1 ;
-(void)setHasProblemAC:(BOOL)arg1 ;
-(BOOL)hasProblemAC;
-(unsigned)problemAC;
@end

