/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

