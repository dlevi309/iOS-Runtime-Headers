/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
*/

#import <iCalendar/ICSComponent.h>

@class ICSDate, NSArray;

@interface ICSTimeZoneBlock : ICSComponent

@property (nonatomic,retain) ICSDate * dtstart; 
@property (nonatomic,retain) NSArray * rdate; 
@property (nonatomic,retain) NSArray * rrule; 
@property (assign,nonatomic) NSArray * tzname; 
@property (assign,nonatomic) long long tzoffsetfrom; 
@property (assign,nonatomic) long long tzoffsetto; 
-(BOOL)validate:(id*)arg1 ;
-(long long)compare:(id)arg1 ;
-(NSArray *)rrule;
-(NSArray *)rdate;
-(ICSDate *)dtstart;
-(NSArray *)tzname;
-(void)setRrule:(NSArray *)arg1 ;
-(void)setDtstart:(ICSDate *)arg1 ;
-(void)setRdate:(NSArray *)arg1 ;
-(long long)tzoffsetfrom;
-(long long)tzoffsetto;
-(void)setTzname:(NSArray *)arg1 ;
-(void)setTzoffsetfrom:(long long)arg1 ;
-(void)setTzoffsetto:(long long)arg1 ;
-(void)addRecurrenceDate:(id)arg1 ;
-(id)computeTimeZoneChangeListFromDate:(id)arg1 toDate:(id)arg2 ;
@end

