/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSArray, NSString, NSURL;

@interface PKPaymentRequirementsResponse : PKPaymentWebServiceResponse {

	long long _status;
	NSArray* _requiredPaymentSetupFields;
	NSString* _productIdentifier;
	NSArray* _possibleProducts;
	NSURL* _learnMoreURL;
	NSString* _nonce;

}

@property (nonatomic,readonly) long long status;                                       //@synthesize status=_status - In the implementation block
@property (nonatomic,copy,readonly) NSArray * requiredPaymentSetupFields;              //@synthesize requiredPaymentSetupFields=_requiredPaymentSetupFields - In the implementation block
@property (nonatomic,copy,readonly) NSString * productIdentifier;                      //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * possibleProducts;                        //@synthesize possibleProducts=_possibleProducts - In the implementation block
@property (nonatomic,copy,readonly) NSURL * learnMoreURL;                              //@synthesize learnMoreURL=_learnMoreURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * nonce;                                  //@synthesize nonce=_nonce - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithData:(id)arg1 ;
-(NSString *)productIdentifier;
-(NSArray *)possibleProducts;
-(NSArray *)requiredPaymentSetupFields;
-(NSURL *)learnMoreURL;
-(NSString *)nonce;
-(id)initWithProduct:(id)arg1 ;
-(id)initWithProvisioningMethodMetadata:(id)arg1 ;
-(id)initWithNoRequirements;
-(id)initWithRemoteCredential:(id)arg1 ;
-(long long)status;
@end

