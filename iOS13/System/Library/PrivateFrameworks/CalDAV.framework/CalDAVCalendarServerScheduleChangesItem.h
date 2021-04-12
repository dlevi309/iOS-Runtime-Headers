/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVLeafItem, CalDAVCalendarServerActionItem;

@interface CalDAVCalendarServerScheduleChangesItem : CoreDAVItem {

	CoreDAVLeafItem* _dtstamp;
	CalDAVCalendarServerActionItem* _action;

}

@property (nonatomic,retain) CoreDAVLeafItem * dtstamp;                            //@synthesize dtstamp=_dtstamp - In the implementation block
@property (nonatomic,retain) CalDAVCalendarServerActionItem * action;              //@synthesize action=_action - In the implementation block
-(id)init;
-(CalDAVCalendarServerActionItem *)action;
-(void)setAction:(CalDAVCalendarServerActionItem *)arg1 ;
-(CoreDAVLeafItem *)dtstamp;
-(void)setDtstamp:(CoreDAVLeafItem *)arg1 ;
-(id)copyParseRules;
@end

