/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVHrefItem, CoreDAVItemWithNoChildren, CoreDAVItemWithHrefChildItem, CoreDAVLeafItem, NSString, NSURL;

@interface CalDAVCalendarServerInviteReplyItem : CoreDAVItem {

	CoreDAVHrefItem* _href;
	CoreDAVItemWithNoChildren* _inviteStatus;
	CoreDAVItemWithHrefChildItem* _hostURL;
	CoreDAVLeafItem* _inReplyTo;
	CoreDAVLeafItem* _summary;
	NSString* _firstName;
	NSString* _lastName;
	NSURL* _acceptedURL;

}

@property (nonatomic,retain) CoreDAVHrefItem * href;                                //@synthesize href=_href - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * inviteStatus;              //@synthesize inviteStatus=_inviteStatus - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithHrefChildItem * hostURL;                //@synthesize hostURL=_hostURL - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * inReplyTo;                           //@synthesize inReplyTo=_inReplyTo - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * summary;                             //@synthesize summary=_summary - In the implementation block
@property (nonatomic,retain) NSString * firstName;                                  //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;                                   //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) NSURL * acceptedURL;                                   //@synthesize acceptedURL=_acceptedURL - In the implementation block
-(id)init;
-(CoreDAVHrefItem *)href;
-(void)setHref:(CoreDAVHrefItem *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(CoreDAVLeafItem *)summary;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setSummary:(CoreDAVLeafItem *)arg1 ;
-(CoreDAVItemWithHrefChildItem *)hostURL;
-(void)setHostURL:(CoreDAVItemWithHrefChildItem *)arg1 ;
-(CoreDAVLeafItem *)inReplyTo;
-(void)setInReplyTo:(CoreDAVLeafItem *)arg1 ;
-(NSURL *)acceptedURL;
-(CoreDAVItemWithNoChildren *)inviteStatus;
-(id)copyParseRules;
-(void)setInviteStatus:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setAcceptedURL:(NSURL *)arg1 ;
-(void)setFirstNameItem:(id)arg1 ;
-(void)setLastNameItem:(id)arg1 ;
-(void)setAcceptedURLItem:(id)arg1 ;
@end

