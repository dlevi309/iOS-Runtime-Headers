/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_PP3 _has;

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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)calendarIdentifier;
-(void)setYear:(int)arg1 ;
-(void)setMonth:(int)arg1 ;
-(void)setDay:(int)arg1 ;
-(int)year;
-(int)month;
-(int)day;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)timeZoneName;
-(void)setTimeZoneName:(NSString *)arg1 ;
-(BOOL)hasTimeZoneName;
-(void)setCalendarIdentifier:(NSString *)arg1 ;
-(BOOL)hasMonth;
-(void)setHasMonth:(BOOL)arg1 ;
-(BOOL)hasYear;
-(void)setHasYear:(BOOL)arg1 ;
-(void)setHasDay:(BOOL)arg1 ;
-(BOOL)hasDay;
-(BOOL)hasCalendarIdentifier;
@end

