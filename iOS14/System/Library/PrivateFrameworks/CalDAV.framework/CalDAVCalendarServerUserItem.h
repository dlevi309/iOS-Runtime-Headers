/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CoreDAVHrefItem *)href;
-(NSString *)firstName;
-(NSString *)lastName;
-(long long)compare:(id)arg1 ;
-(CalDAVCalendarServerAccessItem *)access;
-(void)setLastName:(NSString *)arg1 ;
-(id)init;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setHref:(CoreDAVHrefItem *)arg1 ;
-(CoreDAVLeafItem *)commonName;
-(id)description;
-(CoreDAVLeafItem *)summary;
-(CoreDAVItemWithNoChildren *)inviteStatus;
-(void)setAccess:(CalDAVCalendarServerAccessItem *)arg1 ;
-(NSURL *)acceptedURL;
-(void)setSummary:(CoreDAVLeafItem *)arg1 ;
-(id)initWithHREF:(id)arg1 commonName:(id)arg2 inviteStatus:(int)arg3 access:(int)arg4 ;
-(id)copyParseRules;
-(void)setInviteStatus:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setAcceptedURL:(NSURL *)arg1 ;
-(void)setFirstNameItem:(id)arg1 ;
-(void)setLastNameItem:(id)arg1 ;
-(void)setAcceptedURLItem:(id)arg1 ;
-(void)setCommonName:(CoreDAVLeafItem *)arg1 ;
@end

