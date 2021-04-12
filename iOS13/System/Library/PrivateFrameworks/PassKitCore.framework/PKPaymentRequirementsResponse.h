/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)status;
-(NSString *)nonce;
-(NSString *)productIdentifier;
-(NSArray *)requiredPaymentSetupFields;
-(id)initWithProduct:(id)arg1 ;
-(id)initWithProvisioningMethodMetadata:(id)arg1 ;
-(id)initWithRemoteCredential:(id)arg1 ;
-(NSArray *)possibleProducts;
-(NSURL *)learnMoreURL;
@end

