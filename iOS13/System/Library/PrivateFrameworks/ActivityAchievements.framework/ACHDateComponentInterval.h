/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
*/


@class NSDateComponents;

@interface ACHDateComponentInterval : NSObject {

	NSDateComponents* _startDateComponents;
	NSDateComponents* _endDateComponents;

}

@property (nonatomic,readonly) NSDateComponents * startDateComponents;              //@synthesize startDateComponents=_startDateComponents - In the implementation block
@property (nonatomic,readonly) NSDateComponents * endDateComponents;                //@synthesize endDateComponents=_endDateComponents - In the implementation block
-(id)initWithStartDateComponents:(id)arg1 endDateComponents:(id)arg2 ;
-(NSDateComponents *)startDateComponents;
-(NSDateComponents *)endDateComponents;
-(BOOL)containsDateComponents:(id)arg1 inCalendar:(id)arg2 ;
-(unsigned long long)countOfDaysContainedInIntervalInCalendar:(id)arg1 ;
@end

