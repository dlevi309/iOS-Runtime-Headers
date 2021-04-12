/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSURL;

@interface PKPaymentWebServiceRegion : NSObject <NSSecureCoding> {

	BOOL _hasAccounts;
	BOOL _hasApplications;
	BOOL _hasPeerPaymentAccount;
	NSString* _lastUpdatedTag;
	NSArray* _certificates;
	NSURL* _brokerURL;
	NSString* _regionCode;
	NSURL* _paymentServicesURL;
	NSURL* _inAppPaymentServicesURL;
	NSURL* _paymentServicesMerchantURL;
	NSURL* _partnerServiceURL;
	NSURL* _trustedServiceManagerURL;
	NSString* _trustedServiceManagerPushTopic;
	long long _consistencyCheckBackoffLevel;
	NSString* _userNotificationPushTopic;
	long long _outstandingCheckInAction;
	NSString* _lastDeviceCheckInBuildVersion;
	NSString* _deviceCheckInPushTopic;
	NSURL* _accountServiceURL;
	NSString* _accountServicePushTopic;
	NSURL* _applyServiceURL;
	NSString* _applyServicePushTopic;
	NSString* _productsPushTopic;
	NSString* _transactionZonePushTopic;
	NSURL* _peerPaymentServiceURL;

}

@property (nonatomic,retain) NSURL * peerPaymentServiceURL;                          //@synthesize peerPaymentServiceURL=_peerPaymentServiceURL - In the implementation block
@property (assign,nonatomic) BOOL hasPeerPaymentAccount;                             //@synthesize hasPeerPaymentAccount=_hasPeerPaymentAccount - In the implementation block
@property (nonatomic,retain) NSString * lastUpdatedTag;                              //@synthesize lastUpdatedTag=_lastUpdatedTag - In the implementation block
@property (nonatomic,retain) NSArray * certificates;                                 //@synthesize certificates=_certificates - In the implementation block
@property (nonatomic,retain) NSURL * brokerURL;                                      //@synthesize brokerURL=_brokerURL - In the implementation block
@property (nonatomic,retain) NSString * regionCode;                                  //@synthesize regionCode=_regionCode - In the implementation block
@property (nonatomic,retain) NSURL * paymentServicesURL;                             //@synthesize paymentServicesURL=_paymentServicesURL - In the implementation block
@property (nonatomic,retain) NSURL * inAppPaymentServicesURL;                        //@synthesize inAppPaymentServicesURL=_inAppPaymentServicesURL - In the implementation block
@property (nonatomic,retain) NSURL * paymentServicesMerchantURL;                     //@synthesize paymentServicesMerchantURL=_paymentServicesMerchantURL - In the implementation block
@property (nonatomic,retain) NSURL * partnerServiceURL;                              //@synthesize partnerServiceURL=_partnerServiceURL - In the implementation block
@property (nonatomic,retain) NSURL * trustedServiceManagerURL;                       //@synthesize trustedServiceManagerURL=_trustedServiceManagerURL - In the implementation block
@property (nonatomic,retain) NSString * trustedServiceManagerPushTopic;              //@synthesize trustedServiceManagerPushTopic=_trustedServiceManagerPushTopic - In the implementation block
@property (assign,nonatomic) long long consistencyCheckBackoffLevel;                 //@synthesize consistencyCheckBackoffLevel=_consistencyCheckBackoffLevel - In the implementation block
@property (nonatomic,retain) NSString * userNotificationPushTopic;                   //@synthesize userNotificationPushTopic=_userNotificationPushTopic - In the implementation block
@property (assign,nonatomic) long long outstandingCheckInAction;                     //@synthesize outstandingCheckInAction=_outstandingCheckInAction - In the implementation block
@property (nonatomic,copy) NSString * lastDeviceCheckInBuildVersion;                 //@synthesize lastDeviceCheckInBuildVersion=_lastDeviceCheckInBuildVersion - In the implementation block
@property (nonatomic,copy) NSString * deviceCheckInPushTopic;                        //@synthesize deviceCheckInPushTopic=_deviceCheckInPushTopic - In the implementation block
@property (nonatomic,retain) NSURL * accountServiceURL;                              //@synthesize accountServiceURL=_accountServiceURL - In the implementation block
@property (nonatomic,retain) NSString * accountServicePushTopic;                     //@synthesize accountServicePushTopic=_accountServicePushTopic - In the implementation block
@property (assign,nonatomic) BOOL hasAccounts;                                       //@synthesize hasAccounts=_hasAccounts - In the implementation block
@property (nonatomic,retain) NSURL * applyServiceURL;                                //@synthesize applyServiceURL=_applyServiceURL - In the implementation block
@property (nonatomic,retain) NSString * applyServicePushTopic;                       //@synthesize applyServicePushTopic=_applyServicePushTopic - In the implementation block
@property (assign,nonatomic) BOOL hasApplications;                                   //@synthesize hasApplications=_hasApplications - In the implementation block
@property (nonatomic,copy) NSString * productsPushTopic;                             //@synthesize productsPushTopic=_productsPushTopic - In the implementation block
@property (nonatomic,copy) NSString * transactionZonePushTopic;                      //@synthesize transactionZonePushTopic=_transactionZonePushTopic - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)certificates;
-(void)setRegionCode:(NSString *)arg1 ;
-(NSString *)regionCode;
-(NSURL *)paymentServicesMerchantURL;
-(NSURL *)brokerURL;
-(NSURL *)paymentServicesURL;
-(BOOL)hasAccounts;
-(void)setCertificates:(NSArray *)arg1 ;
-(NSString *)trustedServiceManagerPushTopic;
-(NSURL *)peerPaymentServiceURL;
-(BOOL)hasPeerPaymentAccount;
-(NSURL *)applyServiceURL;
-(BOOL)hasApplications;
-(NSURL *)accountServiceURL;
-(NSString *)accountServicePushTopic;
-(void)setBrokerURL:(NSURL *)arg1 ;
-(void)setPaymentServicesURL:(NSURL *)arg1 ;
-(void)setLastUpdatedTag:(NSString *)arg1 ;
-(void)setConsistencyCheckBackoffLevel:(long long)arg1 ;
-(long long)consistencyCheckBackoffLevel;
-(NSString *)lastUpdatedTag;
-(NSURL *)trustedServiceManagerURL;
-(void)setTrustedServiceManagerURL:(NSURL *)arg1 ;
-(void)setTrustedServiceManagerPushTopic:(NSString *)arg1 ;
-(void)setInAppPaymentServicesURL:(NSURL *)arg1 ;
-(NSURL *)inAppPaymentServicesURL;
-(void)setPeerPaymentServiceURL:(NSURL *)arg1 ;
-(void)setHasPeerPaymentAccount:(BOOL)arg1 ;
-(void)setPaymentServicesMerchantURL:(NSURL *)arg1 ;
-(NSURL *)partnerServiceURL;
-(void)setPartnerServiceURL:(NSURL *)arg1 ;
-(NSString *)userNotificationPushTopic;
-(void)setUserNotificationPushTopic:(NSString *)arg1 ;
-(long long)outstandingCheckInAction;
-(void)setOutstandingCheckInAction:(long long)arg1 ;
-(NSString *)lastDeviceCheckInBuildVersion;
-(void)setLastDeviceCheckInBuildVersion:(NSString *)arg1 ;
-(NSString *)deviceCheckInPushTopic;
-(void)setDeviceCheckInPushTopic:(NSString *)arg1 ;
-(void)setAccountServiceURL:(NSURL *)arg1 ;
-(void)setAccountServicePushTopic:(NSString *)arg1 ;
-(void)setHasAccounts:(BOOL)arg1 ;
-(void)setApplyServiceURL:(NSURL *)arg1 ;
-(NSString *)applyServicePushTopic;
-(void)setApplyServicePushTopic:(NSString *)arg1 ;
-(void)setHasApplications:(BOOL)arg1 ;
-(NSString *)productsPushTopic;
-(void)setProductsPushTopic:(NSString *)arg1 ;
-(NSString *)transactionZonePushTopic;
-(void)setTransactionZonePushTopic:(NSString *)arg1 ;
@end

