/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKApplyWebServiceRequest.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, PKPaymentDeviceMetadata, PKPaymentInstallmentConfiguration;

@interface PKApplyWebServiceTermsRequest : PKApplyWebServiceRequest <NSSecureCoding> {

	BOOL _termsAccepted;
	NSString* _applicationIdentifier;
	NSString* _applicationTermsIdentifier;
	NSString* _offerTermsIdentifier;
	NSString* _pathTermsIdentifier;
	NSString* _pathIdentifier;
	NSURL* _baseURL;
	PKPaymentDeviceMetadata* _deviceMetadata;
	PKPaymentInstallmentConfiguration* _installmentConfiguration;

}

@property (nonatomic,copy) NSString * applicationIdentifier;                                            //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * applicationTermsIdentifier;                                       //@synthesize applicationTermsIdentifier=_applicationTermsIdentifier - In the implementation block
@property (nonatomic,copy) NSString * offerTermsIdentifier;                                             //@synthesize offerTermsIdentifier=_offerTermsIdentifier - In the implementation block
@property (nonatomic,copy) NSString * pathTermsIdentifier;                                              //@synthesize pathTermsIdentifier=_pathTermsIdentifier - In the implementation block
@property (nonatomic,copy) NSString * pathIdentifier;                                                   //@synthesize pathIdentifier=_pathIdentifier - In the implementation block
@property (assign,nonatomic) BOOL termsAccepted;                                                        //@synthesize termsAccepted=_termsAccepted - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                                                           //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,retain) PKPaymentDeviceMetadata * deviceMetadata;                                  //@synthesize deviceMetadata=_deviceMetadata - In the implementation block
@property (nonatomic,retain) PKPaymentInstallmentConfiguration * installmentConfiguration;              //@synthesize installmentConfiguration=_installmentConfiguration - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(NSURL *)baseURL;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)applicationIdentifier;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
-(PKPaymentInstallmentConfiguration *)installmentConfiguration;
-(void)setInstallmentConfiguration:(PKPaymentInstallmentConfiguration *)arg1 ;
-(NSString *)applicationTermsIdentifier;
-(void)setApplicationTermsIdentifier:(NSString *)arg1 ;
-(NSString *)pathIdentifier;
-(NSString *)offerTermsIdentifier;
-(void)setOfferTermsIdentifier:(NSString *)arg1 ;
-(NSString *)pathTermsIdentifier;
-(void)setPathTermsIdentifier:(NSString *)arg1 ;
-(void)setPathIdentifier:(NSString *)arg1 ;
-(BOOL)termsAccepted;
-(void)setTermsAccepted:(BOOL)arg1 ;
-(PKPaymentDeviceMetadata *)deviceMetadata;
-(void)setDeviceMetadata:(PKPaymentDeviceMetadata *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
@end

