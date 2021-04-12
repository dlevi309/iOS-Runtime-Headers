/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSMPIdentity.h>

@class NSString;

@interface IDSMPFullServiceIdentityAdmin : IDSMPIdentity

@property (nonatomic,readonly) long long identityServiceType; 
@property (nonatomic,readonly) NSString * identityServiceTypeName; 
+(id)fullServiceIdentityWithFullAccountIdentity:(id)arg1 type:(long long)arg2 error:(id*)arg3 ;
+(id)identityWithData:(id)arg1 accountIdentity:(id)arg2 error:(id*)arg3 ;
-(id)dataRepresentationWithError:(id*)arg1 ;
-(id)publicServiceIdentityAdminWithError:(id*)arg1 ;
-(long long)identityServiceType;
-(NSString *)identityServiceTypeName;
@end

