/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHour:(int)arg1 ;
-(void)setMinute:(int)arg1 ;
-(void)setSecond:(int)arg1 ;
-(int)hour;
-(int)minute;
-(int)second;
-(int)weekday;
-(void)setWeekday:(int)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasSecond;
-(void)setHasHour:(BOOL)arg1 ;
-(BOOL)hasHour;
-(void)setHasMinute:(BOOL)arg1 ;
-(BOOL)hasMinute;
-(void)setHasSecond:(BOOL)arg1 ;
-(void)setHasWeekday:(BOOL)arg1 ;
-(BOOL)hasWeekday;
@end

