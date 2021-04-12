/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAMPDislikesMediaEntity : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * influencedUserSharedUserId; 
+(id)dislikesMediaEntity;
+(id)dislikesMediaEntityWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)influencedUserSharedUserId;
-(void)setInfluencedUserSharedUserId:(NSString *)arg1 ;
@end

