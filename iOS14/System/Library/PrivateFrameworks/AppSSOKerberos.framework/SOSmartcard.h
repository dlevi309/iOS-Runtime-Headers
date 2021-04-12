/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
*/


#import <AppSSOKerberos/AppSSOKerberos-Structs.h>
@interface SOSmartcard : NSObject
+(id)searchForCachedIdentityWithSerial:(CFDataRef)arg1 withIssuer:(CFDataRef)arg2 withTokenID:(id)arg3 ;
+(SecIdentityRef)getLocalAuthIdentityForCert:(id)arg1 withLAContext:(id)arg2 ;
+(int)getIdentityForPersistentRef:(CFDataRef)arg1 identityToReturn:(_SecIdentity*)arg2 ;
+(BOOL)pollSmartcardForIdentityWithSerialNumber:(id)arg1 withIssuer:(id)arg2 withTokenID:(id)arg3 ;
@end

