/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class NSArray;

@interface SAFmfPunchOutFriend : SADomainCommand

@property (nonatomic,copy) NSArray * friends; 
+(id)punchOutFriend;
+(id)punchOutFriendWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)friends;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setFriends:(NSArray *)arg1 ;
@end

