/*
* Generated on Monday, March 1, 2021 at 2:35:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

#import <libacmobileshim.dylib/ACMTicketManager.h>
#import <libobjc.A.dylib/ACMTicketManagerProtocol.h>

@class NSString;

@interface ACMExternalTicketManager : ACMTicketManager <ACMTicketManagerProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)identifier;
-(id)deviceIdentifier;
-(id)preferences;
-(unsigned long long)clientID;
-(id)defaultPublicKeyVersionForRealm:(id)arg1 ;
-(id)twoSVPersonIDForPrincipal:(id)arg1 ;
-(id)twoSVSecretForPrincipal:(id)arg1 ;
-(id)twoSVCreateDateForPrincipal:(id)arg1 ;
-(void)tokenDidReceive2SVSecret:(id)arg1 ;
@end

