/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
*/


@class SOKerberosRealmSettings, NSString, NSDictionary, SOSiteCode;

@interface SOKerberosSharedSettings : NSObject {

	BOOL _isDefaultRealm;
	SOKerberosRealmSettings* _currentSettings;
	NSString* _currentRealm;
	NSDictionary* _domainRealmMapping;
	SOSiteCode* _siteCode;

}

@property (nonatomic,retain) SOKerberosRealmSettings * currentSettings;              //@synthesize currentSettings=_currentSettings - In the implementation block
@property (nonatomic,retain) NSString * currentRealm;                                //@synthesize currentRealm=_currentRealm - In the implementation block
@property (assign,nonatomic) BOOL isDefaultRealm;                                    //@synthesize isDefaultRealm=_isDefaultRealm - In the implementation block
@property (nonatomic,retain) NSDictionary * domainRealmMapping;                      //@synthesize domainRealmMapping=_domainRealmMapping - In the implementation block
@property (nonatomic,retain) SOSiteCode * siteCode;                                  //@synthesize siteCode=_siteCode - In the implementation block
+(id)sharedInstance;
-(SOKerberosRealmSettings *)currentSettings;
-(void)setCurrentSettings:(SOKerberosRealmSettings *)arg1 ;
-(NSString *)currentRealm;
-(void)setCurrentRealm:(NSString *)arg1 ;
-(BOOL)isDefaultRealm;
-(void)setIsDefaultRealm:(BOOL)arg1 ;
-(NSDictionary *)domainRealmMapping;
-(void)setDomainRealmMapping:(NSDictionary *)arg1 ;
-(SOSiteCode *)siteCode;
-(void)setSiteCode:(SOSiteCode *)arg1 ;
@end

