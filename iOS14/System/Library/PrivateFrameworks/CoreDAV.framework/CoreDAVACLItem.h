/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)addACE:(id)arg1 ;
-(NSMutableSet *)accessControlEntities;
-(void)setAccessControlEntities:(NSMutableSet *)arg1 ;
-(id)notGrantedSubsetOfACEs:(id)arg1 ;
-(id)liveACEs;
@end

