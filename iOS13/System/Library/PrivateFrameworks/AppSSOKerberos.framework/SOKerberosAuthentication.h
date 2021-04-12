/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)realm;
-(void)setRealm:(NSString *)arg1 ;
-(void)setSettingsManager:(SORealmSettingManager *)arg1 ;
-(SORealmSettingManager *)settingsManager;
-(id)retrieveCachedSiteCodeFromCacheForBundleIdentifier:(id)arg1 networkFingerprint:(id)arg2 ;
-(void)determineSiteCodeUsingDispatchGroup:(id)arg1 andBundleIdentifier:(id)arg2 networkFingerprint:(id)arg3 ;
-(unsigned long long)findExistingCredentialUsingContext:(id)arg1 returningCredential:(gss_cred_id_t_desc_struct*)arg2 orError:(id*)arg3 ;
-(void)setSiteCodeUsingContext:(id)arg1 ;
-(unsigned long long)createNewCredentialUsingContext:(id)arg1 returningCredential:(gss_cred_id_t_desc_struct*)arg2 orError:(id*)arg3 ;
-(unsigned long long)mapErrorToKnownError:(id)arg1 ;
-(BOOL)siteDiscoveryInProgress;
-(void)setSiteDiscoveryInProgress:(BOOL)arg1 ;
-(id)initWithRealm:(id)arg1 andSettingsManager:(id)arg2 ;
-(unsigned long long)attemptKerberosWithContext:(id)arg1 returningToken:(id*)arg2 orError:(id*)arg3 ;
-(LAContext *)myLAContext;
-(void)setMyLAContext:(LAContext *)arg1 ;
@end

