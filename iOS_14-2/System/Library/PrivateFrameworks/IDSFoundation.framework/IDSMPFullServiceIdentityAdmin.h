/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSMPIdentity.h>

@class NSString;

@interface IDSMPFullServiceIdentityAdmin : IDSMPIdentity

@property (nonatomic,readonly) long long identityServiceType; 
@property (nonatomic,readonly) NSString * identityServiceTypeName; 
+(id)fullServiceIdentityWithFullAccountIdentity:(id)arg1 type:(long long)arg2 error:(id*)arg3 ;
+(id)identityWithData:(id)arg1 accountIdentity:(id)arg2 error:(id*)arg3 ;
-(id)publicServiceIdentityAdminWithError:(id*)arg1 ;
-(long long)identityServiceType;
-(NSString *)identityServiceTypeName;
-(id)dataRepresentationWithError:(id*)arg1 ;
@end

