/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAMicroblogGetSocialCredential.h>

@class NSString;

@interface SAMicroblogGetTwitterCredential : SAMicroblogGetSocialCredential

@property (nonatomic,copy) NSString * consumerKey; 
@property (nonatomic,copy) NSString * consumerSecret; 
+(id)getTwitterCredential;
+(id)getTwitterCredentialWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)consumerSecret;
-(NSString *)consumerKey;
-(void)setConsumerKey:(NSString *)arg1 ;
-(void)setConsumerSecret:(NSString *)arg1 ;
-(BOOL)requiresResponse;
@end

