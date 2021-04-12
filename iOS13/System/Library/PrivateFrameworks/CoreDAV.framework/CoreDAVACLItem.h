/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CoreDAVACLItem : CoreDAVItem {

	NSMutableSet* _accessControlEntities;

}

@property (nonatomic,retain) NSMutableSet * accessControlEntities;              //@synthesize accessControlEntities=_accessControlEntities - In the implementation block
+(id)copyParseRules;
-(id)init;
-(id)description;
-(NSMutableSet *)accessControlEntities;
-(void)addACE:(id)arg1 ;
-(void)setAccessControlEntities:(NSMutableSet *)arg1 ;
-(id)notGrantedSubsetOfACEs:(id)arg1 ;
-(id)liveACEs;
@end

