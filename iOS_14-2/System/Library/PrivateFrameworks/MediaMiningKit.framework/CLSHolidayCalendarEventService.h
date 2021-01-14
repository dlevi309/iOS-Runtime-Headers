/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <libobjc.A.dylib/CLSHolidayCalendarEventDateRuleDelegate.h>

@class NSArray, NSString;

@interface CLSHolidayCalendarEventService : NSObject <CLSHolidayCalendarEventDateRuleDelegate> {

	NSArray* _eventRules;

}

@property (nonatomic,retain) NSArray * eventRules;                  //@synthesize eventRules=_eventRules - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithLocale:(id)arg1 ;
-(id)dateForRuleWithUUID:(id)arg1 byEvaluatingForYear:(long long)arg2 ;
-(NSArray *)eventRules;
-(id)eventRuleForLocalDate:(id)arg1 ;
-(void)setEventRules:(NSArray *)arg1 ;
-(id)_ruleWithUUID:(id)arg1 ;
-(id)initWithLocale:(id)arg1 calendarSourcesURL:(id)arg2 ;
-(void)enumerateEventRulesBetweenLocalDate:(id)arg1 andLocalDate:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
@end

