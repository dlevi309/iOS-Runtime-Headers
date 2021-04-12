/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)compare:(id)arg1 ;
-(BOOL)validate:(id*)arg1 ;
-(NSArray *)rrule;
-(void)setDtstart:(ICSDate *)arg1 ;
-(ICSDate *)dtstart;
-(void)setRrule:(NSArray *)arg1 ;
-(void)setRdate:(NSArray *)arg1 ;
-(NSArray *)rdate;
-(long long)tzoffsetfrom;
-(long long)tzoffsetto;
-(NSArray *)tzname;
-(void)setTzname:(NSArray *)arg1 ;
-(void)setTzoffsetfrom:(long long)arg1 ;
-(void)setTzoffsetto:(long long)arg1 ;
-(void)addRecurrenceDate:(id)arg1 ;
-(id)computeTimeZoneChangeListFromDate:(id)arg1 toDate:(id)arg2 ;
@end

