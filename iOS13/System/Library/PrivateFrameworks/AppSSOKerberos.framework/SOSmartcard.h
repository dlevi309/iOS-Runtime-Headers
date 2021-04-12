/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
*/


#import <AppSSOKerberos/AppSSOKerberos-Structs.h>
@interface SOSmartcard : NSObject
+(id)searchForCachedIdentityWithSerial:(CFDataRef)arg1 withIssuer:(CFDataRef)arg2 withTokenID:(id)arg3 ;
+(SecIdentityRef)getLocalAuthIdentityForCert:(id)arg1 withLAContext:(id)arg2 ;
+(int)getIdentityForPersistentRef:(CFDataRef)arg1 identityToReturn:(_SecIdentity*)arg2 ;
+(BOOL)pollSmartcardForIdentityWithSerialNumber:(id)arg1 withIssuer:(id)arg2 withTokenID:(id)arg3 ;
@end

