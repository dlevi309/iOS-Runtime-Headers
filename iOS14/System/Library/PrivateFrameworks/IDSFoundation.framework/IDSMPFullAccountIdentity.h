/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSMPIdentity.h>

@class NSData;

@interface IDSMPFullAccountIdentity : IDSMPIdentity

@property (nonatomic,readonly) NSData * publicName; 
+(id)fullAccountIdentityWithError:(id*)arg1 ;
+(id)identityWithData:(id)arg1 error:(id*)arg2 ;
-(id)publicAccountIdentityWithError:(id*)arg1 ;
-(NSData *)publicName;
-(id)rolledAccountIdenityWithError:(id*)arg1 ;
-(id)signData:(id)arg1 withError:(id*)arg2 ;
-(id)dataRepresentationWithError:(id*)arg1 ;
@end

