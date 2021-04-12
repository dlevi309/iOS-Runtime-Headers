/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class SAMicroblogSocialCredential, NSString;

@interface SAMicroblogSocialCredentialResult : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,retain) SAMicroblogSocialCredential * socialCredential; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)socialCredentialResult;
+(id)socialCredentialResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SAMicroblogSocialCredential *)socialCredential;
-(void)setSocialCredential:(SAMicroblogSocialCredential *)arg1 ;
@end

