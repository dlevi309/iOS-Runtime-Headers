/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@protocol CLSHolidayCalendarEventDateRuleDelegate;
@class NSString, NSArray, CLSHolidayCalendarEventRuleRequiredTraits;

@interface CLSHolidayCalendarEventRule : NSObject {

	BOOL _checkWeekends;
	NSString* _uuid;
	NSString* _name;
	NSArray* _dateRules;
	CLSHolidayCalendarEventRuleRequiredTraits* _requiredTraits;
	id<CLSHolidayCalendarEventDateRuleDelegate> _dateRuleDelegate;
	NSString* _localizedName;
	unsigned long long _category;

}

@property (nonatomic,readonly) NSString * uuid;                                                                //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) CLSHolidayCalendarEventRuleRequiredTraits * requiredTraits;                     //@synthesize requiredTraits=_requiredTraits - In the implementation block
@property (nonatomic,readonly) NSArray * dateRules;                                                            //@synthesize dateRules=_dateRules - In the implementation block
@property (nonatomic,readonly) BOOL checkWeekends;                                                             //@synthesize checkWeekends=_checkWeekends - In the implementation block
@property (assign,nonatomic,__weak) id<CLSHolidayCalendarEventDateRuleDelegate> dateRuleDelegate;              //@synthesize dateRuleDelegate=_dateRuleDelegate - In the implementation block
@property (nonatomic,readonly) BOOL isCelebration; 
@property (nonatomic,readonly) NSString * name;                                                                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * localizedName;                                                       //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,readonly) unsigned long long category;                                                    //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) BOOL allowSceneClassificationBasedEvaluation; 
+(id)localizedNameForName:(id)arg1 ;
-(NSString *)localizedName;
-(NSString *)uuid;
-(id)initWithEventDescription:(id)arg1 ;
-(BOOL)isCelebration;
-(BOOL)evaluateOnlyTraits:(id)arg1 ;
-(id)localDatesByEvaluatingRuleForYear:(long long)arg1 ;
-(NSArray *)dateRules;
-(void)setDateRuleDelegate:(id<CLSHolidayCalendarEventDateRuleDelegate>)arg1 ;
-(unsigned long long)category;
-(BOOL)evaluateWithLocalDate:(id)arg1 traits:(id)arg2 ;
-(NSString *)name;
-(id<CLSHolidayCalendarEventDateRuleDelegate>)dateRuleDelegate;
-(BOOL)_isMatchingOnlyLocalDate:(id)arg1 ;
-(CLSHolidayCalendarEventRuleRequiredTraits *)requiredTraits;
-(id)_dateRuleForYear:(long long)arg1 ;
-(id)_datesFromWeekendWithStartDate:(id)arg1 withDuration:(double)arg2 ;
-(unsigned long long)hash;
-(BOOL)checkWeekends;
-(BOOL)allowSceneClassificationBasedEvaluation;
-(BOOL)isEqual:(id)arg1 ;
@end

