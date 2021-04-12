/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSString, NSNumber;

@interface EDAMNotebookDescriptor : FATObject {

	NSString* _guid;
	NSString* _notebookDisplayName;
	NSString* _contactName;
	NSNumber* _hasSharedNotebook;
	NSNumber* _joinedUserCount;

}

@property (nonatomic,retain) NSString * guid;                             //@synthesize guid=_guid - In the implementation block
@property (nonatomic,retain) NSString * notebookDisplayName;              //@synthesize notebookDisplayName=_notebookDisplayName - In the implementation block
@property (nonatomic,retain) NSString * contactName;                      //@synthesize contactName=_contactName - In the implementation block
@property (nonatomic,retain) NSNumber * hasSharedNotebook;                //@synthesize hasSharedNotebook=_hasSharedNotebook - In the implementation block
@property (nonatomic,retain) NSNumber * joinedUserCount;                  //@synthesize joinedUserCount=_joinedUserCount - In the implementation block
+(id)structName;
+(id)structFields;
-(NSString *)guid;
-(NSString *)contactName;
-(void)setContactName:(NSString *)arg1 ;
-(void)setGuid:(NSString *)arg1 ;
-(NSString *)notebookDisplayName;
-(void)setNotebookDisplayName:(NSString *)arg1 ;
-(NSNumber *)hasSharedNotebook;
-(void)setHasSharedNotebook:(NSNumber *)arg1 ;
-(NSNumber *)joinedUserCount;
-(void)setJoinedUserCount:(NSNumber *)arg1 ;
@end

