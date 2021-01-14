/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
*/


#import <AppSSOKerberos/AppSSOKerberos-Structs.h>
@interface SOKerberosHelper : NSObject
+(gss_cred_id_t_desc_structRef)acquireCredentialForUUID:(id)arg1 ;
+(BOOL)authenticate:(gss_cred_id_t_desc_structRef)arg1 toServer:(id)arg2 returningToken:(id*)arg3 andError:(id*)arg4 ;
+(gss_cred_id_t_desc_structRef)createCredential:(id)arg1 withOptions:(id)arg2 andError:(id*)arg3 ;
+(gss_cred_id_t_desc_structRef)acquireCredentialForUPN:(id)arg1 ;
+(BOOL)changePasswordForUPN:(id)arg1 realm:(id)arg2 withOldPassword:(id)arg3 withNewPassword:(id)arg4 withError:(id*)arg5 ;
+(unsigned)createGSSName:(id)arg1 gname:(gss_name_t_desc_struct*)arg2 error:(id*)arg3 ;
+(BOOL)_testForUPNForUser:(id)arg1 ;
+(BOOL)validatePassword:(id)arg1 forUser:(id)arg2 ;
+(void)destroyAllCredentials;
+(void)destroyCredential:(id)arg1 ;
+(void)destroyCredentialForUPN:(id)arg1 ;
+(id)listCredentials;
@end

