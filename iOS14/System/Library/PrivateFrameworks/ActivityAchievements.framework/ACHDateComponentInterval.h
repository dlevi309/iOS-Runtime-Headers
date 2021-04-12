/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
*/


@class NSDateComponents;

@interface ACHDateComponentInterval : NSObject {

	NSDateComponents* _startDateComponents;
	NSDateComponents* _endDateComponents;

}

@property (nonatomic,readonly) NSDateComponents * startDateComponents;              //@synthesize startDateComponents=_startDateComponents - In the implementation block
@property (nonatomic,readonly) NSDateComponents * endDateComponents;                //@synthesize endDateComponents=_endDateComponents - In the implementation block
-(NSDateComponents *)startDateComponents;
-(id)initWithStartDateComponents:(id)arg1 endDateComponents:(id)arg2 ;
-(NSDateComponents *)endDateComponents;
-(BOOL)containsDateComponents:(id)arg1 inCalendar:(id)arg2 ;
-(unsigned long long)countOfDaysContainedInIntervalInCalendar:(id)arg1 ;
@end

