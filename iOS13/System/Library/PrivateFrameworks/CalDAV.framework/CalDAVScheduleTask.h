/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVPostTask.h>

@class NSArray, CalDAVScheduleResponseItem, NSString;

@interface CalDAVScheduleTask : CoreDAVPostTask {

	NSArray* _attendees;
	CalDAVScheduleResponseItem* _scheduleResponse;
	NSString* _originator;

}

@property (nonatomic,retain) CalDAVScheduleResponseItem * scheduleResponse;              //@synthesize scheduleResponse=_scheduleResponse - In the implementation block
@property (nonatomic,retain) NSString * originator;                                      //@synthesize originator=_originator - In the implementation block
@property (nonatomic,retain) NSArray * attendees;                                        //@synthesize attendees=_attendees - In the implementation block
-(void)setOriginator:(NSString *)arg1 ;
-(NSString *)originator;
-(NSArray *)attendees;
-(void)setAttendees:(NSArray *)arg1 ;
-(id)additionalHeaderValues;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(id)initWithOriginator:(id)arg1 attendees:(id)arg2 outboxURL:(id)arg3 payload:(id)arg4 ;
-(void)setScheduleResponse:(CalDAVScheduleResponseItem *)arg1 ;
-(CalDAVScheduleResponseItem *)scheduleResponse;
@end

