/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface BLTPBDateComponents : PBCodable <NSCopying> {

	int _hour;
	int _minute;
	int _second;
	int _weekday;
	SCD_Struct_BL4 _has;

}

@property (assign,nonatomic) BOOL hasSecond; 
@property (assign,nonatomic) int second;                   //@synthesize second=_second - In the implementation block
@property (assign,nonatomic) BOOL hasHour; 
@property (assign,nonatomic) int hour;                     //@synthesize hour=_hour - In the implementation block
@property (assign,nonatomic) BOOL hasMinute; 
@property (assign,nonatomic) int minute;                   //@synthesize minute=_minute - In the implementation block
@property (assign,nonatomic) BOOL hasWeekday; 
@property (assign,nonatomic) int weekday;                  //@synthesize weekday=_weekday - In the implementation block
-(int)hour;
-(int)weekday;
-(int)second;
-(void)setWeekday:(int)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHour:(int)arg1 ;
-(int)minute;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasHour:(BOOL)arg1 ;
-(void)setHasMinute:(BOOL)arg1 ;
-(BOOL)hasMinute;
-(id)description;
-(void)setMinute:(int)arg1 ;
-(BOOL)hasHour;
-(BOOL)hasSecond;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSecond:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasWeekday;
-(void)setHasSecond:(BOOL)arg1 ;
-(void)setHasWeekday:(BOOL)arg1 ;
@end

