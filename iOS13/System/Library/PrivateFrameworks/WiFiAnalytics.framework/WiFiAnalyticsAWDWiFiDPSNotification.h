/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
*/

#import <WiFiAnalytics/WiFiAnalytics-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WiFiAnalyticsAWDWiFiDPSNotification : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _problemAC;
	int _symptom;
	SCD_Struct_Wi10 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasSymptom; 
@property (assign,nonatomic) int symptom;                               //@synthesize symptom=_symptom - In the implementation block
@property (assign,nonatomic) BOOL hasProblemAC; 
@property (assign,nonatomic) unsigned problemAC;                        //@synthesize problemAC=_problemAC - In the implementation block
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
-(void)setHasTimestamp:(BOOL)arg1 ;
-(int)symptom;
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

