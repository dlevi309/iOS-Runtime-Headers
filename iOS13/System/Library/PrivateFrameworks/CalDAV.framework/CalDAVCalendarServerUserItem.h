/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CalDAV/CalDAV-Structs.h>
#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVHrefItem, CoreDAVLeafItem, CoreDAVItemWithNoChildren, CalDAVCalendarServerAccessItem, NSString, NSURL;

@interface CalDAVCalendarServerUserItem : CoreDAVItem {

	CoreDAVHrefItem* _href;
	CoreDAVLeafItem* _commonName;
	CoreDAVItemWithNoChildren* _inviteStatus;
	CalDAVCalendarServerAccessItem* _access;
	CoreDAVLeafItem* _summary;
	NSString* _firstName;
	NSString* _lastName;
	NSURL* _acceptedURL;

}

@property (nonatomic,retain) CoreDAVHrefItem * href;                                //@synthesize href=_href - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * commonName;                          //@synthesize commonName=_commonName - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * inviteStatus;              //@synthesize inviteStatus=_inviteStatus - In the implementation block
@property (nonatomic,retain) CalDAVCalendarServerAccessItem * access;               //@synthesize access=_access - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * summary;                             //@synthesize summary=_summary - In the implementation block
@property (nonatomic,retain) NSString * firstName;                                  //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;                                   //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) NSURL * acceptedURL;                                   //@synthesize acceptedURL=_acceptedURL - In the implementation block
-(BOOL)updateCalSharee:(void*)arg1 ;
-(void*)createCalShareeInDatabase:(CalDatabase*)arg1 andCalendar:(void*)arg2 ;
-(id)initWithCalSharee:(void*)arg1 ;
-(id)init;
-(id)description;
-(long long)compare:(id)arg1 ;
-(CalDAVCalendarServerAccessItem *)access;
-(CoreDAVHrefItem *)href;
-(void)setHref:(CoreDAVHrefItem *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(CoreDAVLeafItem *)summary;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setSummary:(CoreDAVLeafItem *)arg1 ;
-(CoreDAVLeafItem *)commonName;
-(void)setAccess:(CalDAVCalendarServerAccessItem *)arg1 ;
-(NSURL *)acceptedURL;
-(id)initWithHREF:(id)arg1 commonName:(id)arg2 inviteStatus:(int)arg3 access:(int)arg4 ;
-(CoreDAVItemWithNoChildren *)inviteStatus;
-(id)copyParseRules;
-(void)setInviteStatus:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setAcceptedURL:(NSURL *)arg1 ;
-(void)setFirstNameItem:(id)arg1 ;
-(void)setLastNameItem:(id)arg1 ;
-(void)setAcceptedURLItem:(id)arg1 ;
-(void)setCommonName:(CoreDAVLeafItem *)arg1 ;
@end

