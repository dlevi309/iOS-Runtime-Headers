/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@protocol CLSHolidayCalendarEventDateRuleDelegate;
@class NSDateComponents, NSString;

@interface CLSHolidayCalendarEventDateRule : NSObject {

	id<CLSHolidayCalendarEventDateRuleDelegate> _delegate;
	NSDateComponents* _simpleRuleComponents;
	long long _startYear;
	long long _endYear;
	long long _offsetDays;
	NSString* _relativeToRuleUUID;

}

@property (assign,nonatomic,__weak) id<CLSHolidayCalendarEventDateRuleDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSDateComponents * simpleRuleComponents;                                    //@synthesize simpleRuleComponents=_simpleRuleComponents - In the implementation block
@property (assign,nonatomic) long long startYear;                                                      //@synthesize startYear=_startYear - In the implementation block
@property (assign,nonatomic) long long endYear;                                                        //@synthesize endYear=_endYear - In the implementation block
@property (assign,nonatomic) long long offsetDays;                                                     //@synthesize offsetDays=_offsetDays - In the implementation block
@property (nonatomic,copy) NSString * relativeToRuleUUID;                                              //@synthesize relativeToRuleUUID=_relativeToRuleUUID - In the implementation block
-(void)setEndYear:(long long)arg1 ;
-(NSString *)relativeToRuleUUID;
-(id)initWithEventDescription:(id)arg1 ;
-(NSDateComponents *)simpleRuleComponents;
-(void)setSimpleRuleComponents:(NSDateComponents *)arg1 ;
-(id<CLSHolidayCalendarEventDateRuleDelegate>)delegate;
-(BOOL)hasEndYear;
-(id)_stringDescriptionForDateRuleComponentValue:(long long)arg1 ;
-(BOOL)hasExplicitYear;
-(id)debugDescription;
-(void)setStartYear:(long long)arg1 ;
-(BOOL)hasStartYear;
-(long long)offsetDays;
-(BOOL)matchesExplicitYear:(long long)arg1 ;
-(void)setDelegate:(id<CLSHolidayCalendarEventDateRuleDelegate>)arg1 ;
-(void)setRelativeToRuleUUID:(NSString *)arg1 ;
-(void)setOffsetDays:(long long)arg1 ;
-(long long)endYear;
-(long long)startYear;
-(id)localDateByEvaluatingRuleForYear:(long long)arg1 ;
@end

