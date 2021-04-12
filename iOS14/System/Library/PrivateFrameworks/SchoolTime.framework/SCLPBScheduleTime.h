/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
*/

#import <SchoolTime/SchoolTime-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SCLPBScheduleTime : PBCodable <NSCopying> {

	unsigned _hour;
	unsigned _minute;
	SCD_Struct_SC3 _has;

}

@property (assign,nonatomic) BOOL hasHour; 
@property (assign,nonatomic) unsigned hour;                //@synthesize hour=_hour - In the implementation block
@property (assign,nonatomic) BOOL hasMinute; 
@property (assign,nonatomic) unsigned minute;              //@synthesize minute=_minute - In the implementation block
-(unsigned)hour;
-(id)dictionaryRepresentation;
-(void)setHour:(unsigned)arg1 ;
-(unsigned)minute;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasHour:(BOOL)arg1 ;
-(void)setHasMinute:(BOOL)arg1 ;
-(BOOL)hasMinute;
-(id)description;
-(void)setMinute:(unsigned)arg1 ;
-(BOOL)hasHour;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

