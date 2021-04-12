/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
*/

#import <ClockKitUI/ClockKitUI-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSArray;

@interface CLKUIAlmanacTransitInfo : NSObject <NSSecureCoding> {

	NSDate* _day;
	long long _constantSun;
	NSDate* _rise;
	NSDate* _solarNoon;
	NSDate* _set;
	NSArray* _solarMidnights;
	SCD_Struct_CL3 _location;

}

@property (nonatomic,retain) NSDate * day;                          //@synthesize day=_day - In the implementation block
@property (assign,nonatomic) SCD_Struct_CL3 location;               //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) long long constantSun;                 //@synthesize constantSun=_constantSun - In the implementation block
@property (nonatomic,retain) NSDate * rise;                         //@synthesize rise=_rise - In the implementation block
@property (nonatomic,retain) NSDate * solarNoon;                    //@synthesize solarNoon=_solarNoon - In the implementation block
@property (nonatomic,retain) NSDate * set;                          //@synthesize set=_set - In the implementation block
@property (nonatomic,retain) NSArray * solarMidnights;              //@synthesize solarMidnights=_solarMidnights - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)transitInfoForDate:(id)arg1 city:(id)arg2 ;
+(id)transitInfoForDate:(id)arg1 location:(SCD_Struct_CL3)arg2 sunAltitude:(double)arg3 ;
+(id)transitInfoForDate:(id)arg1 location:(SCD_Struct_CL3)arg2 ;
+(id)transitInfoForDate:(id)arg1 ;
+(id)transitInfoForDate:(id)arg1 city:(id)arg2 sunAltitude:(double)arg3 ;
-(NSDate *)day;
-(void)setDay:(NSDate *)arg1 ;
-(id)initWithDate:(id)arg1 ;
-(void)setSet:(NSDate *)arg1 ;
-(SCD_Struct_CL3)location;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setLocation:(SCD_Struct_CL3)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)set;
-(NSDate *)rise;
-(id)initWithDate:(id)arg1 location:(SCD_Struct_CL3)arg2 ;
-(long long)constantSun;
-(NSDate *)solarNoon;
-(NSArray *)solarMidnights;
-(id)initWithDate:(id)arg1 city:(id)arg2 ;
-(id)initWithDate:(id)arg1 location:(SCD_Struct_CL3)arg2 sunAltitude:(double)arg3 ;
-(id)initWithDate:(id)arg1 city:(id)arg2 sunAltitude:(double)arg3 ;
-(void)setSolarNoon:(NSDate *)arg1 ;
-(void)setSolarMidnights:(NSArray *)arg1 ;
-(void)setConstantSun:(long long)arg1 ;
-(void)setRise:(NSDate *)arg1 ;
@end

