/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class SAEmailEmail;

@interface SAEmailSend : SADomainCommand

@property (nonatomic,retain) SAEmailEmail * email; 
+(id)sendWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)send;
-(void)setEmail:(SAEmailEmail *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SAEmailEmail *)email;
@end

