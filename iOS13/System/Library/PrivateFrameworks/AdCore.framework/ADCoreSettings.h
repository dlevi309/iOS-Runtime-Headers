/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
*/

#import <AdCore/ADSingleton.h>

@class NSURL, NSString, NSUUID, ACAccount;

@interface ADCoreSettings : ADSingleton {

	BOOL _educationModeEnabled;
	BOOL _internationalRoaming;
	BOOL _hasDeterminedRoamingStatus;
	int _connectionType;
	float _timezone;
	int _runState;
	NSURL* _defaultServerURL;
	NSURL* _defaultConfigurationServerURL;
	double _jingleTimeoutInterval;
	double _adServerTimeoutInterval;
	double _NSURLConnectionTimeout;
	double _NSURLTransactionTimeout;
	NSString* _osVersionAndBuild;
	NSString* _deviceModel;
	NSString* _bundleIdentifier;
	NSString* _storefrontLocalizationLanguage;
	NSString* _homeCarrierMCC;
	NSString* _homeCarrierMNC;
	NSString* _currentCarrierMCC;
	NSString* _currentCarrierMNC;
	NSString* _iTunesStorefront;

}

@property (nonatomic,readonly) NSUUID * IDFA; 
@property (nonatomic,retain) NSURL * defaultServerURL;                                           //@synthesize defaultServerURL=_defaultServerURL - In the implementation block
@property (nonatomic,retain) NSURL * defaultConfigurationServerURL;                              //@synthesize defaultConfigurationServerURL=_defaultConfigurationServerURL - In the implementation block
@property (assign,nonatomic) int segmentRetrievalInterval; 
@property (assign,nonatomic) int maxSegmentSendInterval; 
@property (assign,nonatomic) double jingleTimeoutInterval;                                       //@synthesize jingleTimeoutInterval=_jingleTimeoutInterval - In the implementation block
@property (assign,nonatomic) double adServerTimeoutInterval;                                     //@synthesize adServerTimeoutInterval=_adServerTimeoutInterval - In the implementation block
@property (assign,nonatomic) double NSURLConnectionTimeout;                                      //@synthesize NSURLConnectionTimeout=_NSURLConnectionTimeout - In the implementation block
@property (assign,nonatomic) double NSURLTransactionTimeout;                                     //@synthesize NSURLTransactionTimeout=_NSURLTransactionTimeout - In the implementation block
@property (nonatomic,retain) NSString * osVersionAndBuild;                                       //@synthesize osVersionAndBuild=_osVersionAndBuild - In the implementation block
@property (nonatomic,retain) NSString * deviceModel;                                             //@synthesize deviceModel=_deviceModel - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                                        //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) int connectionType;                                                 //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) float timezone;                                                     //@synthesize timezone=_timezone - In the implementation block
@property (nonatomic,readonly) NSString * localeIdentifier; 
@property (nonatomic,retain) NSString * storefrontLocalizationLanguage;                          //@synthesize storefrontLocalizationLanguage=_storefrontLocalizationLanguage - In the implementation block
@property (nonatomic,readonly) BOOL isManagedAppleID; 
@property (nonatomic,readonly) BOOL isManagediTunesAccount; 
@property (nonatomic,readonly) BOOL isManagediCloudAccount; 
@property (nonatomic,readonly) BOOL deviceLimitsAdTracking; 
@property (nonatomic,readonly) BOOL limitAdTrackingRestrictionEnabledBySpringboard; 
@property (assign,nonatomic) BOOL isLATEnabled; 
@property (nonatomic,readonly) BOOL educationModeEnabled;                                        //@synthesize educationModeEnabled=_educationModeEnabled - In the implementation block
@property (nonatomic,copy) NSString * homeCarrierMCC;                                            //@synthesize homeCarrierMCC=_homeCarrierMCC - In the implementation block
@property (nonatomic,copy) NSString * homeCarrierMNC;                                            //@synthesize homeCarrierMNC=_homeCarrierMNC - In the implementation block
@property (nonatomic,copy) NSString * currentCarrierMCC;                                         //@synthesize currentCarrierMCC=_currentCarrierMCC - In the implementation block
@property (nonatomic,copy) NSString * currentCarrierMNC;                                         //@synthesize currentCarrierMNC=_currentCarrierMNC - In the implementation block
@property (assign,nonatomic) BOOL internationalRoaming;                                          //@synthesize internationalRoaming=_internationalRoaming - In the implementation block
@property (assign,nonatomic) BOOL hasDeterminedRoamingStatus;                                    //@synthesize hasDeterminedRoamingStatus=_hasDeterminedRoamingStatus - In the implementation block
@property (assign,nonatomic) int runState;                                                       //@synthesize runState=_runState - In the implementation block
@property (nonatomic,retain) NSString * iTunesStorefront;                                        //@synthesize iTunesStorefront=_iTunesStorefront - In the implementation block
@property (nonatomic,readonly) ACAccount * iTunesStoreAccount; 
@property (nonatomic,readonly) NSString * iTunesAccountDSID; 
@property (nonatomic,readonly) NSString * customJinglePayload; 
@property (nonatomic,readonly) ACAccount * iCloudAccount; 
@property (nonatomic,readonly) NSString * iCloudAccountIdentifier; 
@property (nonatomic,readonly) NSString * iCloudDSID; 
@property (readonly) BOOL unitTesting; 
+(id)sharedInstance;
+(BOOL)educationModeEnabled;
-(id)init;
-(NSString *)localeIdentifier;
-(NSString *)bundleIdentifier;
-(void)clearAdvertisingIdentifier;
-(int)connectionType;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(float)timezone;
-(void)setTimezone:(float)arg1 ;
-(void)setConnectionType:(int)arg1 ;
-(NSString *)deviceModel;
-(void)setDeviceModel:(NSString *)arg1 ;
-(BOOL)isManagedAppleID;
-(ACAccount *)iCloudAccount;
-(BOOL)unitTesting;
-(void)expire;
-(NSString *)iCloudDSID;
-(NSURL *)defaultServerURL;
-(NSString *)iTunesAccountDSID;
-(NSString *)iCloudAccountIdentifier;
-(ACAccount *)iTunesStoreAccount;
-(BOOL)educationModeEnabled;
-(id)deviceDescription;
-(int)runState;
-(void)setRunState:(int)arg1 ;
-(NSString *)iTunesStorefront;
-(BOOL)deviceLimitsAdTracking;
-(NSUUID *)IDFA;
-(BOOL)limitAdTrackingRestrictionEnabledBySpringboard;
-(void)setIsLATEnabled:(BOOL)arg1 ;
-(double)jingleTimeoutInterval;
-(int)segmentRetrievalInterval;
-(void)reloadStorefront:(/*^block*/id)arg1 ;
-(NSURL *)defaultConfigurationServerURL;
-(BOOL)isManagediCloudAccount;
-(int)maxSegmentSendInterval;
-(NSString *)customJinglePayload;
-(NSString *)osVersionAndBuild;
-(void)setOsVersionAndBuild:(NSString *)arg1 ;
-(void)setSegmentRetrievalInterval:(int)arg1 ;
-(void)setMaxSegmentSendInterval:(int)arg1 ;
-(double)NSURLConnectionTimeout;
-(double)NSURLTransactionTimeout;
-(double)adServerTimeoutInterval;
-(BOOL)isManagediTunesAccount;
-(int)deviceRunStateForBundleIdentifier:(id)arg1 ;
-(void)setITunesStorefront:(NSString *)arg1 ;
-(BOOL)isLATEnabled;
-(BOOL)isLATRestrictedByProfile;
-(void)gatherTelephonyData;
-(void)setHasDeterminedRoamingStatus:(BOOL)arg1 ;
-(void)setHomeCarrierMNC:(NSString *)arg1 ;
-(void)setHomeCarrierMCC:(NSString *)arg1 ;
-(void)setCurrentCarrierMNC:(NSString *)arg1 ;
-(void)setCurrentCarrierMCC:(NSString *)arg1 ;
-(NSString *)homeCarrierMNC;
-(NSString *)homeCarrierMCC;
-(NSString *)currentCarrierMNC;
-(NSString *)currentCarrierMCC;
-(void)setInternationalRoaming:(BOOL)arg1 ;
-(void)setStorefrontLocalizationLanguage:(NSString *)arg1 ;
-(BOOL)purpleBuddyWillRun;
-(void)setDefaultServerURL:(NSURL *)arg1 ;
-(void)setDefaultConfigurationServerURL:(NSURL *)arg1 ;
-(void)setJingleTimeoutInterval:(double)arg1 ;
-(void)setAdServerTimeoutInterval:(double)arg1 ;
-(void)setNSURLConnectionTimeout:(double)arg1 ;
-(void)setNSURLTransactionTimeout:(double)arg1 ;
-(NSString *)storefrontLocalizationLanguage;
-(BOOL)internationalRoaming;
-(BOOL)hasDeterminedRoamingStatus;
@end

