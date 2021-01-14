/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKApplyWebServiceRequest.h>

@class NSURL, PKPaymentInstallmentConfiguration;

@interface PKApplyWebServiceCreateRequest : PKApplyWebServiceRequest {

	NSURL* _applyServiceURL;
	unsigned long long _featureIdentifier;
	PKPaymentInstallmentConfiguration* _installmentConfiguration;

}

@property (nonatomic,retain) NSURL * applyServiceURL;                                                   //@synthesize applyServiceURL=_applyServiceURL - In the implementation block
@property (assign,nonatomic) unsigned long long featureIdentifier;                                      //@synthesize featureIdentifier=_featureIdentifier - In the implementation block
@property (nonatomic,retain) PKPaymentInstallmentConfiguration * installmentConfiguration;              //@synthesize installmentConfiguration=_installmentConfiguration - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)featureIdentifier;
-(NSURL *)applyServiceURL;
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 ;
-(void)setApplyServiceURL:(NSURL *)arg1 ;
-(void)setFeatureIdentifier:(unsigned long long)arg1 ;
-(PKPaymentInstallmentConfiguration *)installmentConfiguration;
-(void)setInstallmentConfiguration:(PKPaymentInstallmentConfiguration *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

