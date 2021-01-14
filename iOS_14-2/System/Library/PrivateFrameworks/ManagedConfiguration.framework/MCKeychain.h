/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/


#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
@interface MCKeychain : NSObject
+(CFDictionaryRef)_newQueryWithService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 group:(id)arg5 useSystemKeychain:(BOOL)arg6 outError:(id*)arg7 ;
+(const void*)copyItemWithPersistentID:(id)arg1 ;
+(void)removeItemWithPersistentID:(id)arg1 useSystemKeychain:(BOOL)arg2 ;
+(BOOL)itemExistsInKeychain:(void*)arg1 useSystemKeychain:(BOOL)arg2 enforcePersonalPersona:(BOOL)arg3 ;
+(BOOL)itemExistsInKeychain:(void*)arg1 useSystemKeychain:(BOOL)arg2 ;
+(void)removeItemForService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 useSystemKeychain:(BOOL)arg5 group:(id)arg6 ;
+(BOOL)setString:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 outError:(id*)arg6 ;
+(id)dataFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 group:(id)arg5 useSystemKeychain:(BOOL)arg6 enforcePersonalPersona:(BOOL)arg7 outError:(id*)arg8 ;
+(SecCertificateRef)copyCertificateWithPersistentID:(id)arg1 useSystemKeychain:(BOOL)arg2 ;
+(void)removeItemForService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 group:(id)arg5 ;
+(SecIdentityRef)copyIdentityWithPersistentID:(id)arg1 ;
+(BOOL)setData:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 access:(void*)arg6 group:(id)arg7 outError:(id*)arg8 ;
+(BOOL)setData:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 access:(void*)arg6 outError:(id*)arg7 ;
+(BOOL)setString:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 group:(id)arg6 outError:(id*)arg7 ;
+(id)dataFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 useSystemKeychain:(BOOL)arg5 outError:(id*)arg6 ;
+(void)removeItemWithPersistentID:(id)arg1 useSystemKeychain:(BOOL)arg2 enforcePersonalPersona:(BOOL)arg3 ;
+(SecCertificateRef)copyCertificateWithPersistentID:(id)arg1 ;
+(id)copyCertificatesWithPersistentIDs:(id)arg1 useSystemKeychain:(BOOL)arg2 ;
+(id)saveItem:(void*)arg1 withLabel:(id)arg2 group:(id)arg3 useSystemKeychain:(BOOL)arg4 ;
+(BOOL)setString:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 access:(void*)arg6 group:(id)arg7 outError:(id*)arg8 ;
+(id)dataFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 group:(id)arg5 outError:(id*)arg6 ;
+(SecCertificateRef)copyCertificateWithPersistentID:(id)arg1 useSystemKeychain:(BOOL)arg2 enforcePersonalPersona:(BOOL)arg3 ;
+(void)removeItemForService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 useSystemKeychain:(BOOL)arg5 enforcePersonalPersona:(BOOL)arg6 group:(id)arg7 ;
+(id)stringFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 group:(id)arg5 useSystemKeychain:(BOOL)arg6 outError:(id*)arg7 ;
+(id)dataFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 group:(id)arg5 useSystemKeychain:(BOOL)arg6 outError:(id*)arg7 ;
+(id)dataFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 outError:(id*)arg5 ;
+(BOOL)setData:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 access:(void*)arg6 group:(id)arg7 useSystemKeychain:(BOOL)arg8 sysBound:(BOOL)arg9 outError:(id*)arg10 ;
+(const void*)copyItemWithPersistentID:(id)arg1 useSystemKeychain:(BOOL)arg2 ;
+(id)saveItem:(void*)arg1 withLabel:(id)arg2 group:(id)arg3 ;
+(id)saveItem:(void*)arg1 withLabel:(id)arg2 group:(id)arg3 useSystemKeychain:(BOOL)arg4 enforcePersonalPersona:(BOOL)arg5 ;
+(BOOL)setString:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 access:(void*)arg6 group:(id)arg7 useSystemKeychain:(BOOL)arg8 sysBound:(BOOL)arg9 outError:(id*)arg10 ;
+(SecIdentityRef)copyIdentityWithPersistentID:(id)arg1 useSystemKeychain:(BOOL)arg2 enforcePersonalPersona:(BOOL)arg3 ;
+(BOOL)setData:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 access:(void*)arg6 useSystemKeychain:(BOOL)arg7 outError:(id*)arg8 ;
+(BOOL)setData:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 outError:(id*)arg6 ;
+(id)stringFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 outError:(id*)arg5 ;
+(BOOL)setData:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 useSystemKeychain:(BOOL)arg6 outError:(id*)arg7 ;
+(const void*)copyItemWithPersistentID:(id)arg1 useSystemKeychain:(BOOL)arg2 enforcePersonalPersona:(BOOL)arg3 ;
+(SecIdentityRef)copyIdentityWithPersistentID:(id)arg1 useSystemKeychain:(BOOL)arg2 ;
+(void)removeItemWithPersistentID:(id)arg1 ;
+(id)stringFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 group:(id)arg5 outError:(id*)arg6 ;
+(BOOL)setString:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 useSystemKeychain:(BOOL)arg6 outError:(id*)arg7 ;
+(id)stringFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 useSystemKeychain:(BOOL)arg5 outError:(id*)arg6 ;
+(BOOL)setData:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 access:(void*)arg6 group:(id)arg7 useSystemKeychain:(BOOL)arg8 sysBound:(BOOL)arg9 enforcePersonalPersona:(BOOL)arg10 outError:(id*)arg11 ;
+(BOOL)itemExistsInKeychain:(void*)arg1 ;
+(BOOL)setString:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 group:(id)arg6 useSystemKeychain:(BOOL)arg7 outError:(id*)arg8 ;
@end

