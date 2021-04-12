/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithLocale:(id)arg1 calendarSourcesURL:(id)arg2 ;
-(id)eventRuleForLocalDate:(id)arg1 ;
-(void)enumerateEventRulesBetweenLocalDate:(id)arg1 andLocalDate:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)_ruleWithUUID:(id)arg1 ;
-(NSArray *)eventRules;
-(void)setEventRules:(NSArray *)arg1 ;
@end

