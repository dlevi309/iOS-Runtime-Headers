/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVLeafItem, CoreDAVHrefItem, CoreDAVItemWithNoChildren, CalDAVCalendarServerAccessItem, CoreDAVItemWithHrefChildItem, CalDAVCalendarServerOrganizerItem, CalDAVSupportedCalendarComponentSet;

@interface CalDAVCalendarServerInviteNotificationItem : CoreDAVItem {

	CoreDAVLeafItem* _uid;
	CoreDAVHrefItem* _href;
	CoreDAVItemWithNoChildren* _inviteStatus;
	CoreDAVItemWithNoChildren* _calendarPublic;
	CalDAVCalendarServerAccessItem* _access;
	CoreDAVItemWithHrefChildItem* _hostURL;
	CalDAVCalendarServerOrganizerItem* _organizer;
	CoreDAVLeafItem* _summary;
	CalDAVSupportedCalendarComponentSet* _supportedCalendarComponentSet;

}

@property (nonatomic,retain) CoreDAVLeafItem * uid;                                                            //@synthesize uid=_uid - In the implementation block
@property (nonatomic,retain) CoreDAVHrefItem * href;                                                           //@synthesize href=_href - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * inviteStatus;                                         //@synthesize inviteStatus=_inviteStatus - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * calendarPublic;                                       //@synthesize calendarPublic=_calendarPublic - In the implementation block
@property (nonatomic,retain) CalDAVCalendarServerAccessItem * access;                                          //@synthesize access=_access - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithHrefChildItem * hostURL;                                           //@synthesize hostURL=_hostURL - In the implementation block
@property (nonatomic,retain) CalDAVCalendarServerOrganizerItem * organizer;                                    //@synthesize organizer=_organizer - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * summary;                                                        //@synthesize summary=_summary - In the implementation block
@property (nonatomic,retain) CalDAVSupportedCalendarComponentSet * supportedCalendarComponentSet;              //@synthesize supportedCalendarComponentSet=_supportedCalendarComponentSet - In the implementation block
-(id)init;
-(CoreDAVLeafItem *)uid;
-(CalDAVCalendarServerAccessItem *)access;
-(void)setUid:(CoreDAVLeafItem *)arg1 ;
-(CoreDAVHrefItem *)href;
-(void)setHref:(CoreDAVHrefItem *)arg1 ;
-(CoreDAVLeafItem *)summary;
-(CalDAVCalendarServerOrganizerItem *)organizer;
-(void)setSummary:(CoreDAVLeafItem *)arg1 ;
-(CoreDAVItemWithHrefChildItem *)hostURL;
-(void)setHostURL:(CoreDAVItemWithHrefChildItem *)arg1 ;
-(void)setOrganizer:(CalDAVCalendarServerOrganizerItem *)arg1 ;
-(void)setAccess:(CalDAVCalendarServerAccessItem *)arg1 ;
-(CoreDAVItemWithNoChildren *)inviteStatus;
-(CalDAVSupportedCalendarComponentSet *)supportedCalendarComponentSet;
-(void)setSupportedCalendarComponentSet:(CalDAVSupportedCalendarComponentSet *)arg1 ;
-(id)copyParseRules;
-(void)setInviteStatus:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setCalendarPublic:(CoreDAVItemWithNoChildren *)arg1 ;
-(id)initForReplyWithUID:(id)arg1 href:(id)arg2 hostURL:(id)arg3 summary:(id)arg4 ;
-(BOOL)isComponentSupportedForString:(id)arg1 ;
-(CoreDAVItemWithNoChildren *)calendarPublic;
@end

