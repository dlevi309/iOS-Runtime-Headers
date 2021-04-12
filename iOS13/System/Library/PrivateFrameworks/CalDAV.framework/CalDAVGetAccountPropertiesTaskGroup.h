/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVGetAccountPropertiesTaskGroup.h>

@class NSURL, NSSet, CalDAVServerVersion;

@interface CalDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup {

	BOOL _supportsCalendarUserSearch;
	NSURL* _delegatePrincipalURL;
	NSSet* _calendarHomes;
	NSSet* _preferredUserAddresses;
	NSURL* _inboxURL;
	NSURL* _outboxURL;
	NSURL* _dropboxURL;
	NSURL* _notificationURL;
	NSURL* _updatedPrincipalURL;
	CalDAVServerVersion* _serverVersion;

}

@property (nonatomic,retain) NSURL * delegatePrincipalURL;                       //@synthesize delegatePrincipalURL=_delegatePrincipalURL - In the implementation block
@property (nonatomic,readonly) NSSet * calendarHomes;                            //@synthesize calendarHomes=_calendarHomes - In the implementation block
@property (nonatomic,readonly) NSSet * preferredUserAddresses;                   //@synthesize preferredUserAddresses=_preferredUserAddresses - In the implementation block
@property (nonatomic,readonly) NSURL * inboxURL;                                 //@synthesize inboxURL=_inboxURL - In the implementation block
@property (nonatomic,readonly) NSURL * outboxURL;                                //@synthesize outboxURL=_outboxURL - In the implementation block
@property (nonatomic,readonly) NSURL * dropboxURL;                               //@synthesize dropboxURL=_dropboxURL - In the implementation block
@property (nonatomic,readonly) NSURL * notificationURL;                          //@synthesize notificationURL=_notificationURL - In the implementation block
@property (nonatomic,readonly) NSURL * updatedPrincipalURL;                      //@synthesize updatedPrincipalURL=_updatedPrincipalURL - In the implementation block
@property (nonatomic,readonly) CalDAVServerVersion * serverVersion;              //@synthesize serverVersion=_serverVersion - In the implementation block
@property (nonatomic,readonly) BOOL supportsCalendarUserSearch;                  //@synthesize supportsCalendarUserSearch=_supportsCalendarUserSearch - In the implementation block
-(id)description;
-(NSURL *)notificationURL;
-(CalDAVServerVersion *)serverVersion;
-(void)startTaskGroup;
-(NSURL *)inboxURL;
-(NSURL *)outboxURL;
-(BOOL)supportsCalendarUserSearch;
-(id)userAddresses;
-(id)_copyAccountPropertiesPropFindElements;
-(NSURL *)delegatePrincipalURL;
-(void)_setPropertiesFromParsedResponses:(id)arg1 ;
-(NSSet *)preferredUserAddresses;
-(void)processPrincipalHeaders:(id)arg1 ;
-(id)homeSet;
-(BOOL)forceOptionsRequest;
-(void)setDelegatePrincipalURL:(NSURL *)arg1 ;
-(NSSet *)calendarHomes;
-(NSURL *)dropboxURL;
-(NSURL *)updatedPrincipalURL;
@end

