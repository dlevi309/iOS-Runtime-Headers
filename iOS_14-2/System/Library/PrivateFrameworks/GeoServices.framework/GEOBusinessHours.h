/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOPDBusinessHours, NSArray, NSString, NSDate;

@interface GEOBusinessHours : NSObject {

	GEOPDBusinessHours* _hours;
	NSArray* _placeDailyHours;
	NSArray* _placeDailyNormalizedHours;
	BOOL _isBrandTypeHours;

}

@property (nonatomic,readonly) unsigned openingSoonThresholdInSeconds; 
@property (nonatomic,readonly) unsigned closingSoonThresdholdInSeconds; 
@property (nonatomic,readonly) unsigned long long hoursType; 
@property (nonatomic,readonly) NSArray * pdHours; 
@property (nonatomic,readonly) NSArray * placeDailyHours;                            //@synthesize placeDailyHours=_placeDailyHours - In the implementation block
@property (nonatomic,readonly) NSArray * placeDailyNormalizedHours;                  //@synthesize placeDailyNormalizedHours=_placeDailyNormalizedHours - In the implementation block
@property (nonatomic,readonly) NSString * localizedMessage; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) BOOL isBrandTypeHours;                                //@synthesize isBrandTypeHours=_isBrandTypeHours - In the implementation block
+(id)prioritizeBusinessHours:(id)arg1 compareDate:(id)arg2 ;
+(void)divideBusinessHoursBasedOnTodaysDate:(id)arg1 compareDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(unsigned long long)hoursType;
-(NSArray *)pdHours;
-(id)initWithGEOPDBusinessHours:(id)arg1 timeZone:(id)arg2 ;
-(id)initWithGEOPDHours:(id)arg1 timeZone:(id)arg2 ;
-(NSArray *)placeDailyNormalizedHours;
-(BOOL)pdHoursAreValid;
-(NSString *)localizedMessage;
-(NSArray *)placeDailyHours;
-(unsigned)closingSoonThresdholdInSeconds;
-(unsigned)openingSoonThresholdInSeconds;
-(BOOL)isBrandTypeHours;
@end

