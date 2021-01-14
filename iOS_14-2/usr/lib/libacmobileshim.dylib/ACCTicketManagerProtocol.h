/*
* Generated on Thursday, January 14, 2021 at 2:29:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libacmobileshim.dylib
*/


@protocol ACCTicketManagerProtocol <NSObject>
@required
-(BOOL)installCertificateWithString:(id)arg1 version:(id)arg2 forRealm:(id)arg3;
-(void)uninstallPublicKeyForRealm:(id)arg1;
-(id)envelopeWithContext:(id)arg1;
-(id)authContextWithRequest:(id)arg1;
-(id)authContextWithRequest:(id)arg1 keyCode:(id)arg2 authenticationType:(id)arg3;
-(id)authContextWithRequest:(id)arg1 sessionToken:(id)arg2;
-(id)decryptEncryptedContent:(id)arg1 withHmac:(id)arg2 context:(id)arg3;
-(id)createSSOTokenWithContent:(id)arg1 context:(id)arg2;
-(BOOL)storeSSOToken:(id)arg1;
-(id)fetchSSOTokenForPrincipal:(id)arg1;
-(id)fetchSSOTokenForPrincipal:(id)arg1 agedLessThan:(double)arg2;
-(id)changePasswordContextWithRequest:(id)arg1 oldPassword:(id)arg2 newPassword:(id)arg3;
-(id)serviceTicketStringWithRequest:(id)arg1 ssoToken:(id)arg2;
-(void)updateContextWithClientSecretIfAny:(id)arg1;

@end

