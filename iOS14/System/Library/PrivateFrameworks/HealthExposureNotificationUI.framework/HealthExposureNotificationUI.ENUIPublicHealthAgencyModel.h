/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthExposureNotificationUI.framework/HealthExposureNotificationUI
*/


@class ENRegion, NSString, _TtC28HealthExposureNotificationUI22ENUIPublicHealthHeader, _TtC28HealthExposureNotificationUI29ENUIPublicHealthLegalDocument, _TtC28HealthExposureNotificationUI21ENUIUserConsentStatus, NSURL, UIImage;

@interface HealthExposureNotificationUI.ENUIPublicHealthAgencyModel : NSObject {

	 region;
	 name;
	 appBundleId;
	 introductoryText;
	 header;
	 legalese;
	 consentStatus;
	 consentVersion;
	 isAuthorized;
	 regionVersion;
	 wantsAnalytics;
	 analyticsConsentStatus;
	 analyticsConsentText;
	 verificationIntroductoryText;
	 verificationSymptomOnsetText;
	 verificationTravelStatusText;

}

@property (readonly,nonatomic) ENRegion * region; 
@property (readonly,nonatomic) NSString * name; 
@property (readonly,nonatomic) NSString * appBundleId; 
@property (readonly,nonatomic) NSString * introductoryText; 
@property (readonly,nonatomic) _TtC28HealthExposureNotificationUI22ENUIPublicHealthHeader * header; 
@property (readonly,nonatomic) _TtC28HealthExposureNotificationUI29ENUIPublicHealthLegalDocument * legalese; 
@property (readonly,nonatomic) _TtC28HealthExposureNotificationUI21ENUIUserConsentStatus * consentStatus; 
@property (readonly,nonatomic) NSString * consentVersion; 
@property (readonly,nonatomic) BOOL isAuthorized; 
@property (readonly,nonatomic) long long regionVersion; 
@property (readonly,nonatomic) NSURL * regionWebsiteURL; 
@property (readonly,nonatomic) BOOL wantsAnalytics; 
@property (assign,nonatomic) long long analyticsConsentStatus; 
@property (readonly,nonatomic) NSString * analyticsConsentText; 
@property (readonly,nonatomic) NSString * verificationIntroductoryText; 
@property (readonly,nonatomic) NSURL * verificationCodeHelpURL; 
@property (readonly,nonatomic) NSString * verificationSymptomOnsetText; 
@property (readonly,nonatomic) NSString * verificationTravelStatusText; 
@property (readonly,nonatomic) BOOL isSymptomOnsetNeeded; 
@property (readonly,nonatomic) BOOL isTravelStatusNeeded; 
@property (readonly,nonatomic) BOOL isAppInstalled; 
@property (readonly,nonatomic) BOOL isRegionUsingApp; 
@property (readonly,nonatomic) NSString * installedAppName; 
@property (readonly,nonatomic) UIImage * installedAppIcon; 
@property (readonly,nonatomic) BOOL regionIsPlaceholder; 
+(void)refreshRegionsWithCompletion:(/*^block*/id)arg1 ;
+(id)defaultModelWithBundleId:(id)arg1 isAuthorized:(BOOL)arg2 ;
+(id)availableRegions;
+(id)activeRegion;
+(void)setActiveRegion:(id)arg1 ;
+(id)authorizedRegions;
+(void)setAuthorizedRegions:(id)arg1 ;
+(void)setAvailableRegions:(id)arg1 ;
+(id)dummyRegionCountryCode;
+(id)allRegions;
+(id)regionForRegionCode:(id)arg1 ;
-(ENRegion *)region;
-(id)init;
-(NSString *)appBundleId;
-(_TtC28HealthExposureNotificationUI22ENUIPublicHealthHeader *)header;
-(NSString *)name;
-(NSString *)consentVersion;
-(BOOL)isAuthorized;
-(BOOL)isAppInstalled;
-(_TtC28HealthExposureNotificationUI21ENUIUserConsentStatus *)consentStatus;
-(NSString *)introductoryText;
-(_TtC28HealthExposureNotificationUI29ENUIPublicHealthLegalDocument *)legalese;
-(long long)regionVersion;
-(NSURL *)regionWebsiteURL;
-(BOOL)wantsAnalytics;
-(long long)analyticsConsentStatus;
-(void)setAnalyticsConsentStatus:(long long)arg1 ;
-(NSString *)analyticsConsentText;
-(NSString *)verificationIntroductoryText;
-(NSURL *)verificationCodeHelpURL;
-(NSString *)verificationSymptomOnsetText;
-(NSString *)verificationTravelStatusText;
-(BOOL)isSymptomOnsetNeeded;
-(BOOL)isTravelStatusNeeded;
-(id)initWithRegion:(id)arg1 name:(id)arg2 appBundleId:(id)arg3 introductoryText:(id)arg4 header:(id)arg5 legalese:(id)arg6 consentStatus:(id)arg7 consentVersion:(id)arg8 isAuthorized:(BOOL)arg9 regionVersion:(long long)arg10 regionWebsiteURL:(id)arg11 wantsAnalytics:(BOOL)arg12 analyticsConsentStatus:(long long)arg13 analyticsConsentText:(id)arg14 verificationIntroductoryText:(id)arg15 verificationCodeHelpURL:(id)arg16 verificationSymptomOnsetText:(id)arg17 verificationTravelStatusText:(id)arg18 ;
-(BOOL)isRegionUsingApp;
-(NSString *)installedAppName;
-(UIImage *)installedAppIcon;
-(BOOL)regionIsPlaceholder;
@end

