/*
* Generated on Monday, March 1, 2021 at 2:35:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

#import <libacmobileshim.dylib/libacmobileshim.dylib-Structs.h>
#import <libacmobileshim.dylib/ACCTicketManager.h>

@interface ACMTicketManager : ACCTicketManager
-(id)components;
-(id)preferences;
-(id)systemInfo;
-(void)uninstallPublicKeyForRealm:(id)arg1 ;
-(id)defaultPublicKeyVersionForRealm:(id)arg1 ;
-(id)encodedUserPreferences:(id)arg1 ;
-(id)decodedUserPreferences:(id)arg1 ;
-(SecCertificateRef)defaultPublicKeyCertificateForRealm:(id)arg1 ;
-(id)certificateLabelForRealm:(id)arg1 ;
-(id)publicKeyVersionForRealm:(id)arg1 ;
-(void)setPublickKeyVersion:(id)arg1 label:(id)arg2 forRealm:(id)arg3 ;
-(void)setUserPreferences:(id)arg1 forToken:(id)arg2 ;
-(id)userPreferencesForToken:(id)arg1 ;
@end

