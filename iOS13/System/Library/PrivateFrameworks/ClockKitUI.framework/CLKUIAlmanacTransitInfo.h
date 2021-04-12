/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
*/


#import <ClockKitUI/ClockKitUI-Structs.h>
@class NSDate, NSArray;

@interface CLKUIAlmanacTransitInfo : NSObject {

	NSDate* _day;
	long long _constantSun;
	NSDate* _rise;
	NSDate* _solarNoon;
	NSDate* _set;
	NSArray* _solarMidnights;
	SCD_Struct_CL2 _location;

}

@property (nonatomic,retain) NSDate * day;                          //@synthesize day=_day - In the implementation block
@property (assign,nonatomic) SCD_Struct_CL2 location;               //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) long long constantSun;                 //@synthesize constantSun=_constantSun - In the implementation block
@property (nonatomic,retain) NSDate * rise;                         //@synthesize rise=_rise - In the implementation block
@property (nonatomic,retain) NSDate * solarNoon;                    //@synthesize solarNoon=_solarNoon - In the implementation block
@property (nonatomic,retain) NSDate * set;                          //@synthesize set=_set - In the implementation block
@property (nonatomic,retain) NSArray * solarMidnights;              //@synthesize solarMidnights=_solarMidnights - In the implementation block
+(id)transitInfoForDate:(id)arg1 ;
+(id)transitInfoForDate:(id)arg1 location:(SCD_Struct_CL2)arg2 ;
+(id)transitInfoForDate:(id)arg1 city:(id)arg2 ;
+(id)transitInfoForDate:(id)arg1 location:(SCD_Struct_CL2)arg2 sunAltitude:(double)arg3 ;
+(id)transitInfoForDate:(id)arg1 city:(id)arg2 sunAltitude:(double)arg3 ;
-(id)description;
-(NSDate *)set;
-(void)setSet:(NSDate *)arg1 ;
-(void)setDay:(NSDate *)arg1 ;
-(id)initWithDate:(id)arg1 ;
-(NSDate *)day;
-(SCD_Struct_CL2)location;
-(void)setLocation:(SCD_Struct_CL2)arg1 ;
-(NSDate *)rise;
-(id)initWithDate:(id)arg1 location:(SCD_Struct_CL2)arg2 ;
-(id)initWithDate:(id)arg1 city:(id)arg2 ;
-(id)initWithDate:(id)arg1 location:(SCD_Struct_CL2)arg2 sunAltitude:(double)arg3 ;
-(id)initWithDate:(id)arg1 city:(id)arg2 sunAltitude:(double)arg3 ;
-(void)setSolarNoon:(NSDate *)arg1 ;
-(void)setSolarMidnights:(NSArray *)arg1 ;
-(void)setConstantSun:(long long)arg1 ;
-(void)setRise:(NSDate *)arg1 ;
-(NSDate *)solarNoon;
-(long long)constantSun;
-(NSArray *)solarMidnights;
@end

