/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CoreDAVCurrentUserPrivilegeSetItem : CoreDAVItem {

	NSMutableSet* _privileges;

}

@property (nonatomic,retain) NSMutableSet * privileges;              //@synthesize privileges=_privileges - In the implementation block
+(id)copyParseRules;
-(id)init;
-(id)description;
-(NSMutableSet *)privileges;
-(void)setPrivileges:(NSMutableSet *)arg1 ;
-(void)addPrivilege:(id)arg1 ;
-(BOOL)hasPrivilegeWithNameSpace:(id)arg1 andName:(id)arg2 ;
@end

