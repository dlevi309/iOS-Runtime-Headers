/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)hour;
-(void)setEra:(long long)arg1 ;
-(id)dictionaryRepresentation;
-(void)setYear:(long long)arg1 ;
-(long long)day;
-(long long)year;
-(void)setMonth:(long long)arg1 ;
-(long long)month;
-(void)setDay:(long long)arg1 ;
-(void)setHour:(long long)arg1 ;
-(BOOL)hasDay;
-(void)setHasMonth:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasEra;
-(void)setHasHour:(BOOL)arg1 ;
-(long long)era;
-(id)description;
-(BOOL)hasHour;
-(unsigned long long)hash;
-(BOOL)hasMonth;
-(BOOL)hasYear;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasDay:(BOOL)arg1 ;
-(void)setHasYear:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasEra:(BOOL)arg1 ;
@end

