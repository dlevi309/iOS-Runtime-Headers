/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSDate, NSNumber, NSString;

@interface AMSSubscriptionEntitlement : NSObject {

	BOOL _autoRenewEnabled;
	BOOL _familySubscription;
	BOOL _freeTrialEligible;
	BOOL _purchaser;
	unsigned _source;
	unsigned _status;
	unsigned _carrierStatus;
	NSDate* _expiration;
	NSNumber* _inAppAdamId;
	NSString* _inAppVersion;
	NSString* _offerId;
	unsigned long long _period;
	long long _carrierErrorCode;
	NSString* _carrierOperatorName;
	NSString* _carrierPhoneNumber;
	NSString* _carrierSessionId;

}

@property (assign,nonatomic) BOOL autoRenewEnabled;                       //@synthesize autoRenewEnabled=_autoRenewEnabled - In the implementation block
@property (nonatomic,retain) NSDate * expiration;                         //@synthesize expiration=_expiration - In the implementation block
@property (assign,nonatomic) BOOL familySubscription;                     //@synthesize familySubscription=_familySubscription - In the implementation block
@property (assign,nonatomic) BOOL freeTrialEligible;                      //@synthesize freeTrialEligible=_freeTrialEligible - In the implementation block
@property (nonatomic,retain) NSNumber * inAppAdamId;                      //@synthesize inAppAdamId=_inAppAdamId - In the implementation block
@property (nonatomic,retain) NSString * inAppVersion;                     //@synthesize inAppVersion=_inAppVersion - In the implementation block
@property (nonatomic,retain) NSString * offerId;                          //@synthesize offerId=_offerId - In the implementation block
@property (assign,nonatomic) unsigned long long period;                   //@synthesize period=_period - In the implementation block
@property (assign,nonatomic) BOOL purchaser;                              //@synthesize purchaser=_purchaser - In the implementation block
@property (assign,nonatomic) unsigned source;                             //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) unsigned status;                             //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) long long carrierErrorCode;                  //@synthesize carrierErrorCode=_carrierErrorCode - In the implementation block
@property (nonatomic,retain) NSString * carrierOperatorName;              //@synthesize carrierOperatorName=_carrierOperatorName - In the implementation block
@property (nonatomic,retain) NSString * carrierPhoneNumber;               //@synthesize carrierPhoneNumber=_carrierPhoneNumber - In the implementation block
@property (nonatomic,retain) NSString * carrierSessionId;                 //@synthesize carrierSessionId=_carrierSessionId - In the implementation block
@property (assign,nonatomic) unsigned carrierStatus;                      //@synthesize carrierStatus=_carrierStatus - In the implementation block
-(unsigned long long)period;
-(id)exportObject;
-(NSString *)offerId;
-(void)setSource:(unsigned)arg1 ;
-(BOOL)purchaser;
-(NSDate *)expiration;
-(BOOL)autoRenewEnabled;
-(BOOL)freeTrialEligible;
-(NSString *)inAppVersion;
-(BOOL)familySubscription;
-(long long)carrierErrorCode;
-(NSString *)carrierOperatorName;
-(NSString *)carrierPhoneNumber;
-(NSString *)carrierSessionId;
-(unsigned)carrierStatus;
-(void)setAutoRenewEnabled:(BOOL)arg1 ;
-(void)setExpiration:(NSDate *)arg1 ;
-(void)setFamilySubscription:(BOOL)arg1 ;
-(void)setFreeTrialEligible:(BOOL)arg1 ;
-(void)setInAppAdamId:(NSNumber *)arg1 ;
-(void)setInAppVersion:(NSString *)arg1 ;
-(void)setCarrierErrorCode:(long long)arg1 ;
-(void)setCarrierOperatorName:(NSString *)arg1 ;
-(void)setCarrierPhoneNumber:(NSString *)arg1 ;
-(void)setCarrierSessionId:(NSString *)arg1 ;
-(void)setCarrierStatus:(unsigned)arg1 ;
-(void)setStatus:(unsigned)arg1 ;
-(void)setPurchaser:(BOOL)arg1 ;
-(void)setPeriod:(unsigned long long)arg1 ;
-(unsigned)status;
-(NSNumber *)inAppAdamId;
-(void)setOfferId:(NSString *)arg1 ;
-(unsigned)source;
@end

