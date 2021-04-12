/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CalDAV/CalDAVItemWithRecurrenceChildren.h>

@class CoreDAVLeafItem;

@interface CalDAVCalendarServerReplyItem : CalDAVItemWithRecurrenceChildren {

	CoreDAVLeafItem* _attendee;

}

@property (nonatomic,retain) CoreDAVLeafItem * attendee;              //@synthesize attendee=_attendee - In the implementation block
-(CoreDAVLeafItem *)attendee;
-(void)setAttendee:(CoreDAVLeafItem *)arg1 ;
-(id)copyParseRules;
@end

