/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVDeleteTask.h>

@class NSString;

@interface CalDAVDeleteCalendarItemTask : CoreDAVDeleteTask {

	NSString* _previousScheduleTag;

}

@property (nonatomic,retain) NSString * previousScheduleTag;              //@synthesize previousScheduleTag=_previousScheduleTag - In the implementation block
-(id)additionalHeaderValues;
-(id)description;
-(void)setPreviousScheduleTag:(NSString *)arg1 ;
-(NSString *)previousScheduleTag;
@end

