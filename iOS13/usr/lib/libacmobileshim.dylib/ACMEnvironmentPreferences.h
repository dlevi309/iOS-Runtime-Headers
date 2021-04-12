/*
* Generated on Monday, March 1, 2021 at 2:35:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

#import <libacmobileshim.dylib/ACMPreferences.h>
#import <libobjc.A.dylib/ACMEnvironmentPreferences.h>
@class NSDictionary, NSString;


@protocol ACMEnvironmentPreferences <ACMBasePreferences>
@property (retain,readonly) NSDictionary * environmentSpecification; 
@property (retain,readonly) NSString * realm; 
@property (retain,readonly) id<ACMPrincipalPreferences> principalPreferences; 
@required
+(id)supportedRealms;
+(id)environmentPreferencesWithRealm:(id)arg1;
-(NSString *)realm;
-(id)publicKeyVersion;
-(void)setPublicKeyVersion:(id)arg1;
-(id)iForgotURL;
-(id)initWithRealm:(id)arg1;
-(id)provisionedDeviceIdentifier;
-(id)myAppleIDURL;
-(id)authenticateURLString;
-(id)principalPreferencesWithUserName:(id)arg1;
-(id<ACMPrincipalPreferences>)principalPreferences;
-(id)realmName;
-(id)realmShortName;
-(id)verifyRecoveryKeyURLString;
-(id)defaultPublicKeyString;
-(id)publicKeyCertificateName;
-(void)setPublicKeyCertificateName:(id)arg1;
-(id)environmentSpecificationForRealm:(id)arg1;
-(NSDictionary *)environmentSpecification;
-(id)verifyTicketURLString;
-(id)getTrustedDevicesURLString;
-(id)generateAndSendSecCodeURLString;
-(id)verifySecurityCodeURLString;
-(id)serverHosts;
-(id)serverAttemptsDelays;

@end


@protocol ACMPrincipalPreferences;
@class NSDictionary, NSString;

@interface ACMEnvironmentPreferences : ACMPreferences <ACMEnvironmentPreferences> {

	NSDictionary* _environmentSpecification;
	id<ACMPrincipalPreferences> _principalPreferences;

}

@property (retain) NSDictionary * environmentSpecification;                       //@synthesize environmentSpecification=_environmentSpecification - In the implementation block
@property (retain) id<ACMPrincipalPreferences> principalPreferences;              //@synthesize principalPreferences=_principalPreferences - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) id<ACMPreferencesStore> preferencesStore; 
@property (retain,readonly) NSString * realm; 
+(id)supportedRealms;
+(id)environmentPreferencesWithRealm:(id)arg1 ;
+(id)environmentSpecifications;
+(BOOL)isSupportedRealm:(id)arg1 ;
-(void)dealloc;
-(NSString *)realm;
-(id)publicKeyVersion;
-(void)setPublicKeyVersion:(id)arg1 ;
-(id)iForgotURL;
-(id)initWithRealm:(id)arg1 ;
-(id)provisionedDeviceIdentifier;
-(id)myAppleIDURL;
-(id)authenticateURLString;
-(id)principalPreferencesWithUserName:(id)arg1 ;
-(void)setEnvironmentSpecification:(NSDictionary *)arg1 ;
-(void)setPrincipalPreferences:(id<ACMPrincipalPreferences>)arg1 ;
-(id<ACMPrincipalPreferences>)principalPreferences;
-(id)createPrincipalPreferencesWithUserName:(id)arg1 ;
-(id)realmName;
-(id)realmShortName;
-(id)verifyRecoveryKeyURLString;
-(id)defaultPublicKeyString;
-(id)publicKeyCertificateName;
-(void)setPublicKeyCertificateName:(id)arg1 ;
-(id)environmentSpecificationForRealm:(id)arg1 ;
-(NSDictionary *)environmentSpecification;
-(id)verifyTicketURLString;
-(id)getTrustedDevicesURLString;
-(id)generateAndSendSecCodeURLString;
-(id)verifySecurityCodeURLString;
-(id)serverHosts;
-(id)serverAttemptsDelays;
@end

