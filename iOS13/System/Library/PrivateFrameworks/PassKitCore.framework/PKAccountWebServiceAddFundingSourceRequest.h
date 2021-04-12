/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSString, NSURL, PKAccountPaymentFundingSource, PKAccountWebServiceCertificatesResponse;

@interface PKAccountWebServiceAddFundingSourceRequest : PKAccountWebServiceRequest {

	NSString* _accountIdentifier;
	NSURL* _baseURL;
	PKAccountPaymentFundingSource* _fundingSource;
	NSString* _fundingSourceTermsIdentifier;
	PKAccountWebServiceCertificatesResponse* _certificatesResponse;

}

@property (nonatomic,copy) NSString * accountIdentifier;                                                  //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                                                             //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,retain) PKAccountPaymentFundingSource * fundingSource;                               //@synthesize fundingSource=_fundingSource - In the implementation block
@property (nonatomic,retain) NSString * fundingSourceTermsIdentifier;                                     //@synthesize fundingSourceTermsIdentifier=_fundingSourceTermsIdentifier - In the implementation block
@property (nonatomic,retain) PKAccountWebServiceCertificatesResponse * certificatesResponse;              //@synthesize certificatesResponse=_certificatesResponse - In the implementation block
-(NSURL *)baseURL;
-(NSString *)accountIdentifier;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
-(void)setCertificatesResponse:(PKAccountWebServiceCertificatesResponse *)arg1 ;
-(PKAccountWebServiceCertificatesResponse *)certificatesResponse;
-(PKAccountPaymentFundingSource *)fundingSource;
-(void)setFundingSource:(PKAccountPaymentFundingSource *)arg1 ;
-(NSString *)fundingSourceTermsIdentifier;
-(void)setFundingSourceTermsIdentifier:(NSString *)arg1 ;
@end

