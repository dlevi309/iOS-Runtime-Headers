/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

