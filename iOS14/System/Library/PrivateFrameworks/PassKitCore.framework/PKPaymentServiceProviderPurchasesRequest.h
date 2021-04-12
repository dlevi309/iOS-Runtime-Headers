/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentServiceProviderPurchasesRequest : PKPaymentWebServiceRequest {

	NSString* _purchaseState;
	NSString* _serviceProviderIdentifier;
	NSString* _productIdentifier;
	NSString* _actionIdentifier;
	NSString* _countryCode;

}

@property (nonatomic,copy) NSString * purchaseState;                          //@synthesize purchaseState=_purchaseState - In the implementation block
@property (nonatomic,copy) NSString * serviceProviderIdentifier;              //@synthesize serviceProviderIdentifier=_serviceProviderIdentifier - In the implementation block
@property (nonatomic,copy) NSString * productIdentifier;                      //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,copy) NSString * actionIdentifier;                       //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * countryCode;                            //@synthesize countryCode=_countryCode - In the implementation block
-(void)setCountryCode:(NSString *)arg1 ;
-(NSString *)countryCode;
-(void)setProductIdentifier:(NSString *)arg1 ;
-(NSString *)productIdentifier;
-(void)setActionIdentifier:(NSString *)arg1 ;
-(NSString *)actionIdentifier;
-(void)setServiceProviderIdentifier:(NSString *)arg1 ;
-(id)initWithPurchaseState:(id)arg1 serviceProviderIdentifier:(id)arg2 productIdentifier:(id)arg3 actionIdentifier:(id)arg4 serviceProviderCountryCode:(id)arg5 ;
-(NSString *)serviceProviderIdentifier;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(NSString *)purchaseState;
-(void)setPurchaseState:(NSString *)arg1 ;
@end

