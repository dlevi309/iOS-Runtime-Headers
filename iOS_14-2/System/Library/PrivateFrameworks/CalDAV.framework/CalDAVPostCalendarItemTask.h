/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVPostTask.h>

@class NSString;

@interface CalDAVPostCalendarItemTask : CoreDAVPostTask {

	NSString* _previousScheduleTag;

}

@property (assign,nonatomic) id<CalDAVPostCalendarItemTaskDelegate> delegate; 
@property (nonatomic,retain) NSString * previousScheduleTag;                               //@synthesize previousScheduleTag=_previousScheduleTag - In the implementation block
-(id)additionalHeaderValues;
-(id)description;
-(void)setPreviousScheduleTag:(NSString *)arg1 ;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(NSString *)previousScheduleTag;
@end

