/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren, CalDAVCalendarServerUpdateItem, CalDAVCalendarServerCancelItem, CalDAVCalendarServerReplyItem;

@interface CalDAVCalendarServerActionItem : CoreDAVItem {

	CoreDAVItemWithNoChildren* _create;
	CalDAVCalendarServerUpdateItem* _update;
	CalDAVCalendarServerCancelItem* _cancel;
	CalDAVCalendarServerReplyItem* _reply;

}

@property (nonatomic,retain) CoreDAVItemWithNoChildren * create;                   //@synthesize create=_create - In the implementation block
@property (nonatomic,retain) CalDAVCalendarServerUpdateItem * update;              //@synthesize update=_update - In the implementation block
@property (nonatomic,retain) CalDAVCalendarServerCancelItem * cancel;              //@synthesize cancel=_cancel - In the implementation block
@property (nonatomic,retain) CalDAVCalendarServerReplyItem * reply;                //@synthesize reply=_reply - In the implementation block
-(id)init;
-(CalDAVCalendarServerCancelItem *)cancel;
-(CoreDAVItemWithNoChildren *)create;
-(CalDAVCalendarServerUpdateItem *)update;
-(CalDAVCalendarServerReplyItem *)reply;
-(void)setReply:(CalDAVCalendarServerReplyItem *)arg1 ;
-(void)setCancel:(CalDAVCalendarServerCancelItem *)arg1 ;
-(void)setUpdate:(CalDAVCalendarServerUpdateItem *)arg1 ;
-(id)copyParseRules;
-(void)setCreate:(CoreDAVItemWithNoChildren *)arg1 ;
@end

