/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@class NSError, NSString, NSURL;

@interface ICMusicSubscriptionCarrierBundlingEligibilityResponse : NSObject {

	BOOL _familySubscription;
	BOOL _wantsDelayedRetry;
	BOOL _needsHeaderEnrichment;
	BOOL _needsSilentSMS;
	long long _carrierBundlingStatusType;
	NSError* _error;
	NSString* _SMSSessionIdentifier;
	double _delayInterval;
	NSString* _headerEnrichmentMessage;
	NSString* _headerEnrichmentSessionIdentifier;
	NSURL* _headerEnrichmentURL;
	NSString* _silentSMSMessage;
	NSString* _silentSMSNumber;
	NSString* _cellularProviderName;
	NSString* _phoneNumber;

}

@property (nonatomic,readonly) long long carrierBundlingStatusType;                                     //@synthesize carrierBundlingStatusType=_carrierBundlingStatusType - In the implementation block
@property (getter=isFamilySubscription,nonatomic,readonly) BOOL familySubscription;                     //@synthesize familySubscription=_familySubscription - In the implementation block
@property (nonatomic,readonly) NSError * error;                                                         //@synthesize error=_error - In the implementation block
@property (setter=MSSessionIdentifier,nonatomic,readonly) NSString * SMSSessionIdentifier;              //@synthesize SMSSessionIdentifier=_SMSSessionIdentifier - In the implementation block
@property (nonatomic,readonly) double delayInterval;                                                    //@synthesize delayInterval=_delayInterval - In the implementation block
@property (nonatomic,readonly) BOOL wantsDelayedRetry;                                                  //@synthesize wantsDelayedRetry=_wantsDelayedRetry - In the implementation block
@property (nonatomic,readonly) NSString * headerEnrichmentMessage;                                      //@synthesize headerEnrichmentMessage=_headerEnrichmentMessage - In the implementation block
@property (nonatomic,readonly) NSString * headerEnrichmentSessionIdentifier;                            //@synthesize headerEnrichmentSessionIdentifier=_headerEnrichmentSessionIdentifier - In the implementation block
@property (nonatomic,readonly) NSURL * headerEnrichmentURL;                                             //@synthesize headerEnrichmentURL=_headerEnrichmentURL - In the implementation block
@property (nonatomic,readonly) BOOL needsHeaderEnrichment;                                              //@synthesize needsHeaderEnrichment=_needsHeaderEnrichment - In the implementation block
@property (nonatomic,readonly) BOOL needsSilentSMS;                                                     //@synthesize needsSilentSMS=_needsSilentSMS - In the implementation block
@property (nonatomic,readonly) NSString * silentSMSMessage;                                             //@synthesize silentSMSMessage=_silentSMSMessage - In the implementation block
@property (nonatomic,readonly) NSString * silentSMSNumber;                                              //@synthesize silentSMSNumber=_silentSMSNumber - In the implementation block
@property (nonatomic,readonly) NSString * cellularProviderName;                                         //@synthesize cellularProviderName=_cellularProviderName - In the implementation block
@property (nonatomic,readonly) NSString * phoneNumber;                                                  //@synthesize phoneNumber=_phoneNumber - In the implementation block
-(long long)carrierBundlingStatusType;
-(NSString *)SMSSessionIdentifier;
-(id)initWithEligibilityDictionary:(id)arg1 cellularProviderName:(id)arg2 phoneNumber:(id)arg3 ;
-(BOOL)wantsDelayedRetry;
-(NSString *)headerEnrichmentMessage;
-(NSString *)headerEnrichmentSessionIdentifier;
-(NSURL *)headerEnrichmentURL;
-(BOOL)needsHeaderEnrichment;
-(BOOL)needsSilentSMS;
-(NSString *)silentSMSMessage;
-(NSString *)silentSMSNumber;
-(NSString *)cellularProviderName;
-(NSString *)phoneNumber;
-(NSError *)error;
-(double)delayInterval;
-(BOOL)isFamilySubscription;
@end

