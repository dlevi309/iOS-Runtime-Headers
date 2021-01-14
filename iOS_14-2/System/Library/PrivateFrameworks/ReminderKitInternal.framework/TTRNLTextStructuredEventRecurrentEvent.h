/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKitInternal.framework/ReminderKitInternal
*/


#import <ReminderKitInternal/ReminderKitInternal-Structs.h>
@class NSDate, NSDictionary;

@interface TTRNLTextStructuredEventRecurrentEvent : NSObject {

	BOOL _isAllDay;
	NSDate* _startDate;
	NSDate* _endDate;
	NSDictionary* _frequency;
	NSRange _range;

}

@property (assign,nonatomic) NSRange range;                                 //@synthesize range=_range - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                            //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                              //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) BOOL isAllDay;                                 //@synthesize isAllDay=_isAllDay - In the implementation block
@property (nonatomic,retain) NSDictionary * frequency;                      //@synthesize frequency=_frequency - In the implementation block
@property (nonatomic,readonly) long long hourFrequency; 
@property (nonatomic,readonly) long long dayFrequency; 
@property (nonatomic,readonly) long long monthFrequency; 
@property (nonatomic,readonly) long long weekOfMonthFrequency; 
@property (nonatomic,readonly) long long weekDay; 
@property (nonatomic,readonly) long long weekdayOrdinal; 
@property (nonatomic,readonly) long long weekdayStart; 
@property (nonatomic,readonly) long long weekdayEnd; 
@property (nonatomic,readonly) long long weekOfYear; 
@property (nonatomic,readonly) long long yearFrequency; 
-(void)setFrequency:(NSDictionary *)arg1 ;
-(long long)weekdayOrdinal;
-(NSDictionary *)frequency;
-(NSDate *)endDate;
-(void)setRange:(NSRange)arg1 ;
-(long long)weekOfYear;
-(BOOL)isAllDay;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSRange)range;
-(NSDate *)startDate;
-(void)setIsAllDay:(BOOL)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(id)initWithRange:(NSRange)arg1 startDate:(id)arg2 endDate:(id)arg3 isAllDay:(BOOL)arg4 frequency:(id)arg5 ;
-(long long)frequencyForKey:(id)arg1 ;
-(long long)hourFrequency;
-(long long)dayFrequency;
-(long long)monthFrequency;
-(long long)weekOfMonthFrequency;
-(long long)weekdayStart;
-(long long)weekdayEnd;
-(long long)yearFrequency;
-(id)description;
-(long long)weekDay;
@end

