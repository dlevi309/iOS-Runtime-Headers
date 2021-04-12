/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
*/

#import <Foundation/NSFormatter.h>

@class SCLScheduleIntervalFormatter, NSListFormatter, NSLocale;

@interface SCLTimeIntervalsFormatter : NSFormatter {

	BOOL _prefersHoursOnly;
	SCLScheduleIntervalFormatter* _intervalFormatter;
	NSListFormatter* _listFormatter;

}

@property (nonatomic,readonly) SCLScheduleIntervalFormatter * intervalFormatter;              //@synthesize intervalFormatter=_intervalFormatter - In the implementation block
@property (nonatomic,readonly) NSListFormatter * listFormatter;                               //@synthesize listFormatter=_listFormatter - In the implementation block
@property (nonatomic,retain) NSLocale * locale; 
@property (assign,nonatomic) BOOL prefersHoursOnly;                                           //@synthesize prefersHoursOnly=_prefersHoursOnly - In the implementation block
@property (assign,nonatomic) unsigned long long intervalFormattingStyle; 
-(id)stringForObjectValue:(id)arg1 ;
-(NSLocale *)locale;
-(void)setLocale:(NSLocale *)arg1 ;
-(id)init;
-(void)setPrefersHoursOnly:(BOOL)arg1 ;
-(id)stringFromTimeIntervals:(id)arg1 ;
-(NSListFormatter *)listFormatter;
-(SCLScheduleIntervalFormatter *)intervalFormatter;
-(BOOL)prefersHoursOnly;
-(unsigned long long)intervalFormattingStyle;
-(void)setIntervalFormattingStyle:(unsigned long long)arg1 ;
@end

