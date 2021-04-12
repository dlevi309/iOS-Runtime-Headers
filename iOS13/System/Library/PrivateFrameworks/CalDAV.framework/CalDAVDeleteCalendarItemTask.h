/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVDeleteTask.h>

@class NSString;

@interface CalDAVDeleteCalendarItemTask : CoreDAVDeleteTask {

	NSString* _previousScheduleTag;

}

@property (nonatomic,retain) NSString * previousScheduleTag;              //@synthesize previousScheduleTag=_previousScheduleTag - In the implementation block
-(id)description;
-(id)additionalHeaderValues;
-(void)setPreviousScheduleTag:(NSString *)arg1 ;
-(NSString *)previousScheduleTag;
@end

