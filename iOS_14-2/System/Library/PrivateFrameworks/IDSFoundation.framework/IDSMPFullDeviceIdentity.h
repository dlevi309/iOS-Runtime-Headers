/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSMPIdentity.h>

@interface IDSMPFullDeviceIdentity : IDSMPIdentity
+(id)deviceIdentityFromDataRepresentation:(id)arg1 publicAdminServiceIdentity:(id)arg2 error:(id*)arg3 ;
+(id)deviceIdentityWithFullAdminServiceIdentity:(id)arg1 error:(id*)arg2 ;
-(BOOL)purgeFromKeychain:(id*)arg1 ;
-(id)publicDeviceIdentityWithError:(id*)arg1 ;
-(id)dataRepresentationWithError:(id*)arg1 ;
@end

