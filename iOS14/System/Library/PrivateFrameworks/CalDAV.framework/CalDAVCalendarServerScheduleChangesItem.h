/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CoreDAVLeafItem *)dtstamp;
-(void)setAction:(CalDAVCalendarServerActionItem *)arg1 ;
-(void)setDtstamp:(CoreDAVLeafItem *)arg1 ;
-(id)copyParseRules;
@end

