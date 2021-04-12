/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CalDAVCalendarServerInviteItem : CoreDAVItem {

	NSMutableSet* _users;

}

@property (nonatomic,retain) NSMutableSet * users;              //@synthesize users=_users - In the implementation block
-(id)init;
-(NSMutableSet *)users;
-(void)setUsers:(NSMutableSet *)arg1 ;
-(id)initWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(id)copyParseRules;
-(void)addUser:(id)arg1 ;
@end

