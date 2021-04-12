/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class SAEmailEmail;

@interface SAEmailSend : SADomainCommand

@property (nonatomic,retain) SAEmailEmail * email; 
+(id)send;
+(id)sendWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SAEmailEmail *)email;
-(void)setEmail:(SAEmailEmail *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

