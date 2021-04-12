/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVResourceTypeItem.h>

@class CoreDAVItemWithNoChildren;

@interface CalDAVResourceTypeItem : CoreDAVResourceTypeItem {

	CoreDAVItemWithNoChildren* _calendar;
	CoreDAVItemWithNoChildren* _scheduleInbox;
	CoreDAVItemWithNoChildren* _scheduleOutbox;
	CoreDAVItemWithNoChildren* _notification;
	CoreDAVItemWithNoChildren* _subscribed;
	CoreDAVItemWithNoChildren* _sharedOwner;
	CoreDAVItemWithNoChildren* _isFamilyCalendar;

}

@property (nonatomic,retain) CoreDAVItemWithNoChildren * calendar;                      //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * scheduleInbox;                 //@synthesize scheduleInbox=_scheduleInbox - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * scheduleOutbox;                //@synthesize scheduleOutbox=_scheduleOutbox - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * notification;                  //@synthesize notification=_notification - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * subscribed;                    //@synthesize subscribed=_subscribed - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * sharedOwner;                   //@synthesize sharedOwner=_sharedOwner - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * isFamilyCalendar;              //@synthesize isFamilyCalendar=_isFamilyCalendar - In the implementation block
-(CoreDAVItemWithNoChildren *)calendar;
-(void)setCalendar:(CoreDAVItemWithNoChildren *)arg1 ;
-(CoreDAVItemWithNoChildren *)notification;
-(void)setNotification:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)write:(id)arg1 ;
-(void)setSubscribed:(CoreDAVItemWithNoChildren *)arg1 ;
-(CoreDAVItemWithNoChildren *)isFamilyCalendar;
-(CoreDAVItemWithNoChildren *)sharedOwner;
-(CoreDAVItemWithNoChildren *)subscribed;
-(void)setIsFamilyCalendar:(CoreDAVItemWithNoChildren *)arg1 ;
-(CoreDAVItemWithNoChildren *)scheduleInbox;
-(CoreDAVItemWithNoChildren *)scheduleOutbox;
-(id)copyParseRules;
-(void)setScheduleInbox:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setScheduleOutbox:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setSharedOwner:(CoreDAVItemWithNoChildren *)arg1 ;
@end

