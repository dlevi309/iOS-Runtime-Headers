/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)attendees;
-(void)setAttendees:(NSArray *)arg1 ;
-(NSString *)originator;
-(void)setOriginator:(NSString *)arg1 ;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(id)initWithOriginator:(id)arg1 attendees:(id)arg2 outboxURL:(id)arg3 payload:(id)arg4 ;
-(void)setScheduleResponse:(CalDAVScheduleResponseItem *)arg1 ;
-(CalDAVScheduleResponseItem *)scheduleResponse;
@end

