/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
*/

#import <ActivitySharing/ActivitySharing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ASCodableCloudKitDateComponents : PBCodable <NSCopying> {

	long long _day;
	long long _era;
	long long _hour;
	long long _month;
	long long _year;
	SCD_Struct_AS5 _has;

}

@property (assign,nonatomic) BOOL hasYear; 
@property (assign,nonatomic) long long year;               //@synthesize year=_year - In the implementation block
@property (assign,nonatomic) BOOL hasMonth; 
@property (assign,nonatomic) long long month;              //@synthesize month=_month - In the implementation block
@property (assign,nonatomic) BOOL hasDay; 
@property (assign,nonatomic) long long day;                //@synthesize day=_day - In the implementation block
@property (assign,nonatomic) BOOL hasHour; 
@property (assign,nonatomic) long long hour;               //@synthesize hour=_hour - In the implementation block
@property (assign,nonatomic) BOOL hasEra; 
@property (assign,nonatomic) long long era;                //@synthesize era=_era - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setYear:(long long)arg1 ;
-(void)setMonth:(long long)arg1 ;
-(void)setDay:(long long)arg1 ;
-(void)setHour:(long long)arg1 ;
-(long long)era;
-(void)setEra:(long long)arg1 ;
-(long long)year;
-(long long)month;
-(long long)day;
-(long long)hour;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasMonth;
-(void)setHasMonth:(BOOL)arg1 ;
-(BOOL)hasYear;
-(void)setHasYear:(BOOL)arg1 ;
-(void)setHasDay:(BOOL)arg1 ;
-(BOOL)hasDay;
-(void)setHasHour:(BOOL)arg1 ;
-(BOOL)hasHour;
-(void)setHasEra:(BOOL)arg1 ;
-(BOOL)hasEra;
@end

