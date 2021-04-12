/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/PKWebServiceContext.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSDictionary, NSObject, NSString, NSDate, PKPaymentWebServiceConfiguration, NSArray, PKPaymentWebServiceRegion, NSURL;

@interface PKPaymentWebServiceContext : PKWebServiceContext {

	os_unfair_lock_s _lock_context;
	NSMutableDictionary* _verificationRequestsByPassUniqueID;
	NSDictionary* _regions;
	NSObject*<OS_dispatch_queue> _queue;
	os_unfair_lock_s _cacheLock;
	NSMutableDictionary* _featureSupportedLanguageCache;
	BOOL _devSigned;
	BOOL _transactionServiceDisabled;
	BOOL _messageServiceDisabled;
	BOOL _ignoreProvisioningEnablementPercentage;
	long long _version;
	NSString* _deviceID;
	NSString* _secureElementID;
	NSString* _pushToken;
	NSString* _nextPushToken;
	NSString* _companionSerialNumber;
	NSDate* _registrationDate;
	NSDate* _configurationDate;
	PKPaymentWebServiceConfiguration* _configuration;
	NSString* _primaryRegionIdentifier;
	long long _consistencyCheckBackoffLevel;
	NSArray* _certificates;
	NSString* _lastUpdatedTag;

}

@property (assign) long long consistencyCheckBackoffLevel;                          //@synthesize consistencyCheckBackoffLevel=_consistencyCheckBackoffLevel - In the implementation block
@property (copy) NSArray * certificates;                                            //@synthesize certificates=_certificates - In the implementation block
@property (copy) NSString * lastUpdatedTag;                                         //@synthesize lastUpdatedTag=_lastUpdatedTag - In the implementation block
@property (assign) long long version;                                               //@synthesize version=_version - In the implementation block
@property (copy) NSString * deviceID;                                               //@synthesize deviceID=_deviceID - In the implementation block
@property (copy) NSString * secureElementID;                                        //@synthesize secureElementID=_secureElementID - In the implementation block
@property (copy) NSString * pushToken;                                              //@synthesize pushToken=_pushToken - In the implementation block
@property (copy) NSString * nextPushToken;                                          //@synthesize nextPushToken=_nextPushToken - In the implementation block
@property (copy) NSString * companionSerialNumber;                                  //@synthesize companionSerialNumber=_companionSerialNumber - In the implementation block
@property (assign) BOOL devSigned;                                                  //@synthesize devSigned=_devSigned - In the implementation block
@property (copy) NSDate * registrationDate;                                         //@synthesize registrationDate=_registrationDate - In the implementation block
@property (copy) NSDate * configurationDate;                                        //@synthesize configurationDate=_configurationDate - In the implementation block
@property (retain) PKPaymentWebServiceConfiguration * configuration;                //@synthesize configuration=_configuration - In the implementation block
@property (assign) BOOL transactionServiceDisabled;                                 //@synthesize transactionServiceDisabled=_transactionServiceDisabled - In the implementation block
@property (assign) BOOL messageServiceDisabled;                                     //@synthesize messageServiceDisabled=_messageServiceDisabled - In the implementation block
@property (assign) BOOL ignoreProvisioningEnablementPercentage;                     //@synthesize ignoreProvisioningEnablementPercentage=_ignoreProvisioningEnablementPercentage - In the implementation block
@property (retain) NSDictionary * regions; 
@property (copy) NSString * primaryRegionIdentifier;                                //@synthesize primaryRegionIdentifier=_primaryRegionIdentifier - In the implementation block
@property (__weak,readonly) PKPaymentWebServiceRegion * primaryRegion; 
@property (__weak,readonly) NSDictionary * TSMURLStringByPushTopic; 
@property (nonatomic,readonly) NSURL * peerPaymentServiceURL; 
@property (nonatomic,readonly) BOOL hasPeerPaymentAccount; 
+(BOOL)supportsSecureCoding;
+(id)contextWithArchive:(id)arg1 ;
+(void)_migrateContext:(id)arg1 ;
+(void)_migrateFrom0To1:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)version;
-(void)setVersion:(long long)arg1 ;
-(NSDate *)registrationDate;
-(NSArray *)certificates;
-(NSString *)deviceID;
-(void)setDeviceID:(NSString *)arg1 ;
-(void)setConfiguration:(PKPaymentWebServiceConfiguration *)arg1 ;
-(PKPaymentWebServiceConfiguration *)configuration;
-(NSString *)pushToken;
-(NSDictionary *)regions;
-(void)setPushToken:(NSString *)arg1 ;
-(void)setRegions:(NSDictionary *)arg1 ;
-(void)setCertificates:(NSArray *)arg1 ;
-(BOOL)devSigned;
-(void)setDevSigned:(BOOL)arg1 ;
-(NSString *)companionSerialNumber;
-(void)setCompanionSerialNumber:(NSString *)arg1 ;
-(NSDictionary *)TSMURLStringByPushTopic;
-(PKPaymentWebServiceRegion *)primaryRegion;
-(NSURL *)peerPaymentServiceURL;
-(BOOL)hasPeerPaymentAccount;
-(id)applyServiceFeaturesForRegionMeetingEnablementThreshold:(id)arg1 ;
-(NSDate *)configurationDate;
-(NSString *)secureElementID;
-(void)setSecureElementID:(NSString *)arg1 ;
-(void)_localizationUpdated;
-(void)setRegistrationDate:(NSDate *)arg1 ;
-(void)setConfigurationDate:(NSDate *)arg1 ;
-(void)setPrimaryRegionIdentifier:(NSString *)arg1 ;
-(void)setTransactionServiceDisabled:(BOOL)arg1 ;
-(void)setMessageServiceDisabled:(BOOL)arg1 ;
-(void)setIgnoreProvisioningEnablementPercentage:(BOOL)arg1 ;
-(void)setLastUpdatedTag:(NSString *)arg1 ;
-(void)setConsistencyCheckBackoffLevel:(long long)arg1 ;
-(NSString *)primaryRegionIdentifier;
-(BOOL)transactionServiceDisabled;
-(BOOL)messageServiceDisabled;
-(BOOL)ignoreProvisioningEnablementPercentage;
-(long long)consistencyCheckBackoffLevel;
-(NSString *)lastUpdatedTag;
-(id)_regionWithPeerPaymentServiceURL;
-(id)regionForIdentifier:(id)arg1 ;
-(double)_contextProvisioningEnablementValue;
-(id)betaPaymentNetworksForRegion:(id)arg1 ;
-(id)applyServicePreferredLanguageForFeatureIdentifier:(unsigned long long)arg1 ;
-(void)addVerificationRequestRecord:(id)arg1 forUniqueID:(id)arg2 ;
-(id)verificationRequestRecordForUniqueID:(id)arg1 ;
-(void)removeVerificationRequestRecordForUniqueID:(id)arg1 ;
-(id)TSMPushTopics;
-(BOOL)contextMeetsProvisioningEnablementPercentageThresholdForRegion:(id)arg1 ;
-(BOOL)contextMeetsMarketGeoNotificationThresholdForRegion:(id)arg1 paymentNetwork:(long long)arg2 ;
-(id)applyServiceLocalizationBundleForFeatureIdentifier:(unsigned long long)arg1 ;
-(NSString *)nextPushToken;
-(void)setNextPushToken:(NSString *)arg1 ;
@end

