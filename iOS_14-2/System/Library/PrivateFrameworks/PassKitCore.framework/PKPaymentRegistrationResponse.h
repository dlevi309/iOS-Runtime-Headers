/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSString, NSNumber, NSDictionary, NSURL, NSArray;

@interface PKPaymentRegistrationResponse : PKPaymentWebServiceResponse {

	NSString* _deviceIdentifier;
	NSNumber* _cardsOnFile;
	NSNumber* _maxCards;
	NSString* _primaryRegion;
	NSDictionary* _regions;
	NSString* _environmentName;
	NSURL* _brokerURL;
	NSURL* _trustedServiceManagerURL;
	NSURL* _paymentServicesURL;
	NSArray* _certificates;

}

@property (nonatomic,copy) NSString * deviceIdentifier;                    //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * cardsOnFile;                         //@synthesize cardsOnFile=_cardsOnFile - In the implementation block
@property (nonatomic,copy) NSNumber * maxCards;                            //@synthesize maxCards=_maxCards - In the implementation block
@property (nonatomic,copy) NSDictionary * regions;                         //@synthesize regions=_regions - In the implementation block
@property (nonatomic,copy) NSString * environmentName;                     //@synthesize environmentName=_environmentName - In the implementation block
@property (nonatomic,copy) NSURL * brokerURL;                              //@synthesize brokerURL=_brokerURL - In the implementation block
@property (nonatomic,copy) NSURL * trustedServiceManagerURL;               //@synthesize trustedServiceManagerURL=_trustedServiceManagerURL - In the implementation block
@property (nonatomic,copy) NSURL * paymentServicesURL;                     //@synthesize paymentServicesURL=_paymentServicesURL - In the implementation block
@property (nonatomic,copy) NSArray * certificates;                         //@synthesize certificates=_certificates - In the implementation block
@property (nonatomic,copy,readonly) NSString * primaryRegion;              //@synthesize primaryRegion=_primaryRegion - In the implementation block
-(NSString *)deviceIdentifier;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(NSNumber *)cardsOnFile;
-(void)setBrokerURL:(NSURL *)arg1 ;
-(NSURL *)trustedServiceManagerURL;
-(void)setTrustedServiceManagerURL:(NSURL *)arg1 ;
-(NSDictionary *)regions;
-(NSArray *)certificates;
-(id)initWithData:(id)arg1 ;
-(NSURL *)brokerURL;
-(void)setPaymentServicesURL:(NSURL *)arg1 ;
-(NSNumber *)maxCards;
-(void)setEnvironmentName:(NSString *)arg1 ;
-(void)setCardsOnFile:(NSNumber *)arg1 ;
-(void)setMaxCards:(NSNumber *)arg1 ;
-(void)setCertificates:(NSArray *)arg1 ;
-(NSString *)environmentName;
-(NSURL *)paymentServicesURL;
-(void)setRegions:(NSDictionary *)arg1 ;
-(NSString *)primaryRegion;
@end

