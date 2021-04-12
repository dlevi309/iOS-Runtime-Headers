/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CoreDAVHrefItem *)href;
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setLastName:(NSString *)arg1 ;
-(id)init;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setHref:(CoreDAVHrefItem *)arg1 ;
-(CoreDAVItemWithHrefChildItem *)hostURL;
-(CoreDAVLeafItem *)summary;
-(void)setHostURL:(CoreDAVItemWithHrefChildItem *)arg1 ;
-(CoreDAVItemWithNoChildren *)inviteStatus;
-(NSURL *)acceptedURL;
-(CoreDAVLeafItem *)inReplyTo;
-(void)setSummary:(CoreDAVLeafItem *)arg1 ;
-(void)setInReplyTo:(CoreDAVLeafItem *)arg1 ;
-(id)copyParseRules;
-(void)setInviteStatus:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setAcceptedURL:(NSURL *)arg1 ;
-(void)setFirstNameItem:(id)arg1 ;
-(void)setLastNameItem:(id)arg1 ;
-(void)setAcceptedURLItem:(id)arg1 ;
@end

