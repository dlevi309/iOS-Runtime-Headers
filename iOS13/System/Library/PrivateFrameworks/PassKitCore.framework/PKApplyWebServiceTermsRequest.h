/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKApplyWebServiceRequest.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, PKPaymentDeviceMetadata, NSDecimalNumber;

@interface PKApplyWebServiceTermsRequest : PKApplyWebServiceRequest <NSSecureCoding> {

	BOOL _termsAccepted;
	BOOL _isInstallment;
	NSString* _applicationIdentifier;
	NSString* _applicationTermsIdentifier;
	NSString* _offerTermsIdentifier;
	NSString* _pathTermsIdentifier;
	NSString* _pathIdentifier;
	NSURL* _baseURL;
	PKPaymentDeviceMetadata* _deviceMetadata;
	NSDecimalNumber* _installmentAmount;
	NSString* _installmentCurrencyCode;

}

@property (nonatomic,copy) NSString * applicationIdentifier;                        //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * applicationTermsIdentifier;                   //@synthesize applicationTermsIdentifier=_applicationTermsIdentifier - In the implementation block
@property (nonatomic,copy) NSString * offerTermsIdentifier;                         //@synthesize offerTermsIdentifier=_offerTermsIdentifier - In the implementation block
@property (nonatomic,copy) NSString * pathTermsIdentifier;                          //@synthesize pathTermsIdentifier=_pathTermsIdentifier - In the implementation block
@property (nonatomic,copy) NSString * pathIdentifier;                               //@synthesize pathIdentifier=_pathIdentifier - In the implementation block
@property (assign,nonatomic) BOOL termsAccepted;                                    //@synthesize termsAccepted=_termsAccepted - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                                       //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,retain) PKPaymentDeviceMetadata * deviceMetadata;              //@synthesize deviceMetadata=_deviceMetadata - In the implementation block
@property (assign,nonatomic) BOOL isInstallment;                                    //@synthesize isInstallment=_isInstallment - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * installmentAmount;                   //@synthesize installmentAmount=_installmentAmount - In the implementation block
@property (nonatomic,copy) NSString * installmentCurrencyCode;                      //@synthesize installmentCurrencyCode=_installmentCurrencyCode - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)baseURL;
-(NSString *)applicationIdentifier;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
-(BOOL)isInstallment;
-(void)setIsInstallment:(BOOL)arg1 ;
-(NSDecimalNumber *)installmentAmount;
-(void)setInstallmentAmount:(NSDecimalNumber *)arg1 ;
-(NSString *)installmentCurrencyCode;
-(void)setInstallmentCurrencyCode:(NSString *)arg1 ;
-(NSString *)applicationTermsIdentifier;
-(void)setApplicationTermsIdentifier:(NSString *)arg1 ;
-(NSString *)offerTermsIdentifier;
-(void)setOfferTermsIdentifier:(NSString *)arg1 ;
-(NSString *)pathTermsIdentifier;
-(void)setPathTermsIdentifier:(NSString *)arg1 ;
-(NSString *)pathIdentifier;
-(void)setPathIdentifier:(NSString *)arg1 ;
-(BOOL)termsAccepted;
-(void)setTermsAccepted:(BOOL)arg1 ;
-(PKPaymentDeviceMetadata *)deviceMetadata;
-(void)setDeviceMetadata:(PKPaymentDeviceMetadata *)arg1 ;
@end

