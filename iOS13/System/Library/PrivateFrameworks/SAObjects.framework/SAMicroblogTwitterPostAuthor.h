/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSURL, NSNumber;

@interface SAMicroblogTwitterPostAuthor : SADomainObject

@property (assign,nonatomic) long long followersCount; 
@property (nonatomic,copy) NSString * fullName; 
@property (nonatomic,copy) NSURL * profileImageUrl; 
@property (nonatomic,copy) NSString * screenName; 
@property (nonatomic,copy) NSNumber * userId; 
@property (assign,nonatomic) BOOL verified; 
+(id)twitterPostAuthor;
+(id)twitterPostAuthorWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)fullName;
-(void)setFullName:(NSString *)arg1 ;
-(void)setVerified:(BOOL)arg1 ;
-(id)encodedClassName;
-(BOOL)verified;
-(NSNumber *)userId;
-(void)setUserId:(NSNumber *)arg1 ;
-(long long)followersCount;
-(void)setFollowersCount:(long long)arg1 ;
-(NSURL *)profileImageUrl;
-(void)setProfileImageUrl:(NSURL *)arg1 ;
-(NSString *)screenName;
-(void)setScreenName:(NSString *)arg1 ;
@end

