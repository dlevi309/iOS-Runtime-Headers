/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


#import <Message/Message-Structs.h>
@interface MFMessageKeychainManager : NSObject
+(void)initialize;
+(SecPolicyRef)copySMIMESigningPolicyForAddress:(id)arg1 ;
+(id)_passwordForHost:(id)arg1 username:(id)arg2 port:(int)arg3 keychainProtocol:(CFStringRef)arg4 ;
+(id)_passwordForGenericAccount:(id)arg1 service:(id)arg2 error:(id*)arg3 ;
+(id)passwordForServiceName:(id)arg1 accountName:(id)arg2 error:(id*)arg3 ;
+(BOOL)_matchSSLClientIdentity:(SecIdentityRef)arg1 withHostname:(id)arg2 ;
+(BOOL)validateSigningIdentity:(SecIdentityRef)arg1 forAddress:(id)arg2 error:(id*)arg3 ;
+(id)_copyAllIdentitiesWithError:(id*)arg1 usingBlock:(/*^block*/id)arg2 ;
+(BOOL)validateEncryptionIdentity:(SecIdentityRef)arg1 forAddress:(id)arg2 error:(id*)arg3 ;
+(BOOL)_validateIdentity:(SecIdentityRef)arg1 forAddress:(id)arg2 policy:(SecPolicyRef)arg3 usage:(unsigned)arg4 error:(id*)arg5 ;
+(SecPolicyRef)copySMIMEEncryptionPolicyForAddress:(id)arg1 ;
+(SecCertificateRef)_copyCertificateForPersistent:(id)arg1 error:(id*)arg2 ;
+(id)_removeCertificateForPersistent:(id)arg1 ;
+(id)_addCertificate:(SecCertificateRef)arg1 persistent:(id*)arg2 ;
+(id)_addPersistentMapping:(id)arg1 forAddress:(id)arg2 ;
+(id)passwordForServiceName:(id)arg1 accountName:(id)arg2 ;
+(id)passwordForHost:(id)arg1 username:(id)arg2 port:(int)arg3 keychainProtocol:(void*)arg4 ;
+(void)setPassword:(id)arg1 forHost:(id)arg2 username:(id)arg3 port:(int)arg4 keychainProtocol:(void*)arg5 keychainAccessibility:(void*)arg6 ;
+(void)removePasswordForHost:(id)arg1 username:(id)arg2 port:(int)arg3 keychainProtocol:(void*)arg4 ;
+(void)removePasswordForServiceName:(id)arg1 accountName:(id)arg2 ;
+(void)setPassword:(id)arg1 forServiceName:(id)arg2 accountName:(id)arg3 keychainAccessibility:(void*)arg4 ;
+(id)copyAllSigningIdentitiesForAddress:(id)arg1 error:(id*)arg2 ;
+(id)copyAllEncryptionIdentitiesForAddress:(id)arg1 error:(id*)arg2 ;
+(SecIdentityRef)copyIdentityForPersistentReference:(id)arg1 error:(id*)arg2 ;
+(SecIdentityRef)copyClientSSLIdentityForHostName:(id)arg1 error:(id*)arg2 ;
+(id)persistentReferenceForIdentity:(SecIdentityRef)arg1 error:(id*)arg2 ;
+(id)newTrustManager;
+(id)saveEncryptionCertificate:(SecCertificateRef)arg1 forAddress:(id)arg2 ;
+(SecCertificateRef)copyEncryptionCertificateForAddress:(id)arg1 error:(id*)arg2 ;
+(BOOL)addPassword:(id)arg1 forServiceName:(id)arg2 accountName:(id)arg3 keychainAccessibility:(void*)arg4 synchronizable:(BOOL)arg5 error:(id*)arg6 ;
+(id)passwordForServiceName:(id)arg1 accountName:(id)arg2 synchronizable:(BOOL)arg3 error:(id*)arg4 ;
@end

