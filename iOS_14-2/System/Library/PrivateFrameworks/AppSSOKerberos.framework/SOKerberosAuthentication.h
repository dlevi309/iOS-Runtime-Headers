/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
*/


#import <AppSSOKerberos/AppSSOKerberos-Structs.h>
@class NSString, SORealmSettingManager, LAContext;

@interface SOKerberosAuthentication : NSObject {

	BOOL _siteDiscoveryInProgress;
	NSString* _realm;
	SORealmSettingManager* _settingsManager;
	LAContext* _myLAContext;

}

@property (nonatomic,retain) NSString * realm;                                     //@synthesize realm=_realm - In the implementation block
@property (nonatomic,retain) SORealmSettingManager * settingsManager;              //@synthesize settingsManager=_settingsManager - In the implementation block
@property (assign) BOOL siteDiscoveryInProgress;                                   //@synthesize siteDiscoveryInProgress=_siteDiscoveryInProgress - In the implementation block
@property (nonatomic,retain) LAContext * myLAContext;                              //@synthesize myLAContext=_myLAContext - In the implementation block
+(void)saveValuesForPlugins:(id)arg1 ;
-(NSString *)realm;
-(void)setRealm:(NSString *)arg1 ;
-(SORealmSettingManager *)settingsManager;
-(void)setSettingsManager:(SORealmSettingManager *)arg1 ;
-(void)triggerVPNIfNeededUsingRealm:(id)arg1 bundleIdentifier:(id)arg2 auditToken:(id)arg3 ;
-(id)retrieveCachedSiteCodeFromCacheForBundleIdentifier:(id)arg1 networkFingerprint:(id)arg2 ;
-(void)determineSiteCodeUsingContext:(id)arg1 ;
-(unsigned long long)findExistingCredentialUsingContext:(id)arg1 returningCredential:(gss_cred_id_t_desc_struct*)arg2 orError:(id*)arg3 ;
-(void)setSiteCodeUsingContext:(id)arg1 ;
-(unsigned long long)createNewCredentialUsingContext:(id)arg1 returningCredential:(gss_cred_id_t_desc_struct*)arg2 orError:(id*)arg3 ;
-(unsigned long long)mapErrorToKnownError:(id)arg1 ;
-(void)_determineSiteCodeUsingDispatchGroup:(id)arg1 bundleIdentifier:(id)arg2 auditTokenData:(id)arg3 networkFingerprint:(id)arg4 requireTLSForLDAP:(BOOL)arg5 ;
-(BOOL)siteDiscoveryInProgress;
-(void)setSiteDiscoveryInProgress:(BOOL)arg1 ;
-(id)initWithRealm:(id)arg1 andSettingsManager:(id)arg2 ;
-(unsigned long long)attemptKerberosWithContext:(id)arg1 returningToken:(id*)arg2 orError:(id*)arg3 ;
-(BOOL)changePasswordWithContext:(id)arg1 withError:(id*)arg2 ;
-(LAContext *)myLAContext;
-(void)setMyLAContext:(LAContext *)arg1 ;
@end

