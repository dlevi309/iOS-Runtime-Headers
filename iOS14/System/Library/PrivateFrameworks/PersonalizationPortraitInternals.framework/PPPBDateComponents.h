/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PPPBDateComponents : PBCodable <NSCopying> {

	NSString* _calendarIdentifier;
	int _day;
	int _month;
	NSString* _timeZoneName;
	int _year;
	SCD_Struct_PP4 _has;

}

@property (assign,nonatomic) BOOL hasDay; 
@property (assign,nonatomic) int day;                                    //@synthesize day=_day - In the implementation block
@property (assign,nonatomic) BOOL hasMonth; 
@property (assign,nonatomic) int month;                                  //@synthesize month=_month - In the implementation block
@property (assign,nonatomic) BOOL hasYear; 
@property (assign,nonatomic) int year;                                   //@synthesize year=_year - In the implementation block
@property (nonatomic,readonly) BOOL hasCalendarIdentifier; 
@property (nonatomic,retain) NSString * calendarIdentifier;              //@synthesize calendarIdentifier=_calendarIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasTimeZoneName; 
@property (nonatomic,retain) NSString * timeZoneName;                    //@synthesize timeZoneName=_timeZoneName - In the implementation block
-(id)dictionaryRepresentation;
-(void)setYear:(int)arg1 ;
-(int)day;
-(int)year;
-(void)setMonth:(int)arg1 ;
-(int)month;
-(void)setDay:(int)arg1 ;
-(BOOL)hasDay;
-(NSString *)calendarIdentifier;
-(void)setTimeZoneName:(NSString *)arg1 ;
-(void)setHasMonth:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setCalendarIdentifier:(NSString *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)hasMonth;
-(BOOL)hasYear;
-(NSString *)timeZoneName;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasTimeZoneName;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasDay:(BOOL)arg1 ;
-(void)setHasYear:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasCalendarIdentifier;
-(BOOL)isEqual:(id)arg1 ;
@end

