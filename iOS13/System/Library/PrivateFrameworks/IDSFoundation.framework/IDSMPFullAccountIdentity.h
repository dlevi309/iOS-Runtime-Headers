/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSMPIdentity.h>

@class NSData;

@interface IDSMPFullAccountIdentity : IDSMPIdentity

@property (nonatomic,readonly) NSData * publicName; 
+(id)identityWithData:(id)arg1 error:(id*)arg2 ;
+(id)fullAccountIdentityWithError:(id*)arg1 ;
-(id)dataRepresentationWithError:(id*)arg1 ;
-(id)publicAccountIdentityWithError:(id*)arg1 ;
-(NSData *)publicName;
-(id)rolledAccountIdenityWithError:(id*)arg1 ;
-(id)signData:(id)arg1 withError:(id*)arg2 ;
@end

