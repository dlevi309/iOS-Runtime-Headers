/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)debugDescription;
-(id<CLSHolidayCalendarEventDateRuleDelegate>)delegate;
-(void)setDelegate:(id<CLSHolidayCalendarEventDateRuleDelegate>)arg1 ;
-(id)initWithEventDescription:(id)arg1 ;
-(id)localDateByEvaluatingRuleForYear:(long long)arg1 ;
-(BOOL)hasStartYear;
-(BOOL)hasEndYear;
-(BOOL)hasExplicitYear;
-(BOOL)matchesExplicitYear:(long long)arg1 ;
-(id)_stringDescriptionForDateRuleComponentValue:(long long)arg1 ;
-(NSDateComponents *)simpleRuleComponents;
-(void)setSimpleRuleComponents:(NSDateComponents *)arg1 ;
-(long long)startYear;
-(void)setStartYear:(long long)arg1 ;
-(long long)endYear;
-(void)setEndYear:(long long)arg1 ;
-(long long)offsetDays;
-(void)setOffsetDays:(long long)arg1 ;
-(NSString *)relativeToRuleUUID;
-(void)setRelativeToRuleUUID:(NSString *)arg1 ;
@end

