/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
*/


@class NSString, NSArray, NSDictionary, NSNumber;

@interface SOKerberosExtensionData : NSObject {

	BOOL _useSiteAutoDiscovery;
	BOOL _isDefaultRealm;
	BOOL _allowPasswordChange;
	BOOL _allowAutomaticLogin;
	BOOL _requireUserPresence;
	BOOL _pwReqComplexity;
	BOOL _syncLocalPassword;
	NSString* _cacheName;
	NSString* _principalName;
	NSString* _siteCode;
	NSString* _certificateUUID;
	NSArray* _credentialBundleIdACL;
	NSDictionary* _domainRealmMapping;
	NSString* _pwChangeURL;
	NSNumber* _pwExpireOverride;
	NSNumber* _pwNotificationDays;
	NSNumber* _pwReqLength;
	NSNumber* _pwReqMinAge;
	NSNumber* _pwReqHistory;
	NSString* _pwReqText;
	NSNumber* _replicationTime;

}

@property (nonatomic,retain) NSString * cacheName;                           //@synthesize cacheName=_cacheName - In the implementation block
@property (nonatomic,retain) NSString * principalName;                       //@synthesize principalName=_principalName - In the implementation block
@property (nonatomic,retain) NSString * siteCode;                            //@synthesize siteCode=_siteCode - In the implementation block
@property (nonatomic,retain) NSString * certificateUUID;                     //@synthesize certificateUUID=_certificateUUID - In the implementation block
@property (assign,nonatomic) BOOL useSiteAutoDiscovery;                      //@synthesize useSiteAutoDiscovery=_useSiteAutoDiscovery - In the implementation block
@property (nonatomic,retain) NSArray * credentialBundleIdACL;                //@synthesize credentialBundleIdACL=_credentialBundleIdACL - In the implementation block
@property (nonatomic,retain) NSDictionary * domainRealmMapping;              //@synthesize domainRealmMapping=_domainRealmMapping - In the implementation block
@property (assign,nonatomic) BOOL isDefaultRealm;                            //@synthesize isDefaultRealm=_isDefaultRealm - In the implementation block
@property (assign,nonatomic) BOOL allowPasswordChange;                       //@synthesize allowPasswordChange=_allowPasswordChange - In the implementation block
@property (assign,nonatomic) BOOL allowAutomaticLogin;                       //@synthesize allowAutomaticLogin=_allowAutomaticLogin - In the implementation block
@property (assign,nonatomic) BOOL requireUserPresence;                       //@synthesize requireUserPresence=_requireUserPresence - In the implementation block
@property (nonatomic,retain) NSString * pwChangeURL;                         //@synthesize pwChangeURL=_pwChangeURL - In the implementation block
@property (nonatomic,retain) NSNumber * pwExpireOverride;                    //@synthesize pwExpireOverride=_pwExpireOverride - In the implementation block
@property (nonatomic,retain) NSNumber * pwNotificationDays;                  //@synthesize pwNotificationDays=_pwNotificationDays - In the implementation block
@property (assign) BOOL pwReqComplexity;                                     //@synthesize pwReqComplexity=_pwReqComplexity - In the implementation block
@property (nonatomic,retain) NSNumber * pwReqLength;                         //@synthesize pwReqLength=_pwReqLength - In the implementation block
@property (nonatomic,retain) NSNumber * pwReqMinAge;                         //@synthesize pwReqMinAge=_pwReqMinAge - In the implementation block
@property (nonatomic,retain) NSNumber * pwReqHistory;                        //@synthesize pwReqHistory=_pwReqHistory - In the implementation block
@property (nonatomic,retain) NSString * pwReqText;                           //@synthesize pwReqText=_pwReqText - In the implementation block
@property (nonatomic,retain) NSNumber * replicationTime;                     //@synthesize replicationTime=_replicationTime - In the implementation block
@property (assign) BOOL syncLocalPassword;                                   //@synthesize syncLocalPassword=_syncLocalPassword - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)certificateUUID;
-(void)setCertificateUUID:(NSString *)arg1 ;
-(NSString *)principalName;
-(void)setPrincipalName:(NSString *)arg1 ;
-(NSString *)cacheName;
-(void)setCacheName:(NSString *)arg1 ;
-(BOOL)isDefaultRealm;
-(void)setIsDefaultRealm:(BOOL)arg1 ;
-(NSDictionary *)domainRealmMapping;
-(void)setDomainRealmMapping:(NSDictionary *)arg1 ;
-(NSString *)siteCode;
-(void)setSiteCode:(NSString *)arg1 ;
-(BOOL)pwReqComplexity;
-(BOOL)syncLocalPassword;
-(NSNumber *)pwNotificationDays;
-(NSNumber *)pwExpireOverride;
-(NSString *)pwChangeURL;
-(NSNumber *)pwReqLength;
-(NSNumber *)pwReqMinAge;
-(NSNumber *)pwReqHistory;
-(NSString *)pwReqText;
-(BOOL)useSiteAutoDiscovery;
-(BOOL)allowAutomaticLogin;
-(BOOL)requireUserPresence;
-(NSNumber *)replicationTime;
-(NSArray *)credentialBundleIdACL;
-(BOOL)allowPasswordChange;
-(id)initAndPopulateExtensionData;
-(void)setUseSiteAutoDiscovery:(BOOL)arg1 ;
-(void)setCredentialBundleIdACL:(NSArray *)arg1 ;
-(void)setAllowPasswordChange:(BOOL)arg1 ;
-(void)setAllowAutomaticLogin:(BOOL)arg1 ;
-(void)setRequireUserPresence:(BOOL)arg1 ;
-(void)setPwChangeURL:(NSString *)arg1 ;
-(void)setPwExpireOverride:(NSNumber *)arg1 ;
-(void)setPwNotificationDays:(NSNumber *)arg1 ;
-(void)setPwReqComplexity:(BOOL)arg1 ;
-(void)setPwReqLength:(NSNumber *)arg1 ;
-(void)setPwReqMinAge:(NSNumber *)arg1 ;
-(void)setPwReqHistory:(NSNumber *)arg1 ;
-(void)setPwReqText:(NSString *)arg1 ;
-(void)setReplicationTime:(NSNumber *)arg1 ;
-(void)setSyncLocalPassword:(BOOL)arg1 ;
@end

