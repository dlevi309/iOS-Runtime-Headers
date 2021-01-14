/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAMicroblogGetSocialCredential : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * explicitUserPermission; 
@property (nonatomic,copy) NSString * socialNetwork; 
+(id)getSocialCredential;
+(id)getSocialCredentialWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)explicitUserPermission;
-(void)setExplicitUserPermission:(NSString *)arg1 ;
-(NSString *)socialNetwork;
-(void)setSocialNetwork:(NSString *)arg1 ;
@end

