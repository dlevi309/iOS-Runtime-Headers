/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVLeafItem, CoreDAVItem;

@interface CalDAVCalendarServerNotificationItem : CoreDAVItem {

	CoreDAVLeafItem* _dtstamp;
	CoreDAVItem* _content;

}

@property (nonatomic,retain) CoreDAVLeafItem * dtstamp;              //@synthesize dtstamp=_dtstamp - In the implementation block
@property (nonatomic,retain) CoreDAVItem * content;                  //@synthesize content=_content - In the implementation block
-(CoreDAVItem *)content;
-(id)init;
-(void)setContent:(CoreDAVItem *)arg1 ;
-(CoreDAVLeafItem *)dtstamp;
-(void)setDtstamp:(CoreDAVLeafItem *)arg1 ;
-(id)copyParseRules;
@end

